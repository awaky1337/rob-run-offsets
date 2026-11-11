$ErrorActionPreference = "Stop"
$root = Split-Path -Parent $MyInvocation.MyCommand.Path
$src = Join-Path (Split-Path -Parent $root) "cheat\offsets\offsets.h"
$ga = "C:\Program Files (x86)\Steam\steamapps\common\Rob Run\GameAssembly.dll"
$text = [IO.File]::ReadAllText($src)
$when = if (Test-Path $ga) { (Get-Item $ga).LastWriteTime.ToString("yyyy-MM-dd HH:mm") } else { (Get-Date).ToString("yyyy-MM-dd HH:mm") }
$banner = @"
#pragma once
/* rob run offsets
   dumped: $when
   dumper: Il2CppDumper 3.2.1
*/

"@
$body = $text -replace '(?s)^#pragma once\s*', ''
$hpp = $banner + $body
[IO.File]::WriteAllText((Join-Path $root "offsets.hpp"), $hpp)
[IO.File]::WriteAllText((Join-Path $root "Offsets.h"), $hpp)
$rx = [regex]'constexpr\s+std::uintptr_t\s+(\w+)\s*=\s*([^;]+);(?:\s*//\s*(.*))?'
$offs = [ordered]@{}
foreach ($m in $rx.Matches($text)) {
    $note = if ($m.Groups[3].Success) { $m.Groups[3].Value.Trim() } else { "" }
    $offs[$m.Groups[1].Value] = [ordered]@{
        value = $m.Groups[2].Value.Trim()
        note  = $note
    }
}
$doc = [ordered]@{
    Game = "Rob Run"
    "Dumped At" = $when
    "Dumped With" = "Il2CppDumper"
    "Dumper Version" = "3.2.1"
    "Total Offsets" = $offs.Count
    Offsets = $offs
}
$json = $doc | ConvertTo-Json -Depth 6
[IO.File]::WriteAllText((Join-Path $root "offsets.json"), $json)
Write-Host ("sdk {0} offsets, dumped {1}" -f $offs.Count, $when)
