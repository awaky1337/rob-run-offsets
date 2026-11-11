(function () {
  var css = document.createElement("style");
  css.textContent = ".lang{position:fixed;top:12px;right:16px;display:flex;gap:6px;z-index:5}.lang button{font:inherit;font-size:12px;color:#a6adc8;background:#313244;border:1px solid #45475a;padding:5px 8px;border-radius:8px;cursor:pointer}.lang button.on{color:#b4befe;border-color:#b4befe}";
  document.head.appendChild(css);
  window.rrLang = "en";
  window.rrApply = function (lang) {
    if (lang) window.rrLang = lang === "ru" ? "ru" : "en";
    var cur = window.rrLang;
    document.documentElement.lang = cur;
    var nodes = document.querySelectorAll("[data-en],[data-en-html]");
    for (var i = 0; i < nodes.length; i++) {
      var n = nodes[i];
      var html = n.getAttribute(cur === "ru" ? "data-ru-html" : "data-en-html");
      if (html != null) n.innerHTML = html;
      else n.textContent = n.getAttribute(cur === "ru" ? "data-ru" : "data-en") || "";
    }
    var buttons = document.querySelectorAll(".lang button");
    for (var j = 0; j < buttons.length; j++)
      buttons[j].className = buttons[j].getAttribute("data-set") === cur ? "on" : "";
    try { localStorage.setItem("rr-lang", cur); } catch (e) {}
    document.dispatchEvent(new Event("rr-lang"));
  };
  function boot() {
    var box = document.createElement("div");
    box.className = "lang";
    box.innerHTML = '<button type="button" data-set="en">EN</button><button type="button" data-set="ru">RU</button>';
    document.body.appendChild(box);
    box.addEventListener("click", function (ev) {
      var t = ev.target;
      if (t && t.getAttribute && t.getAttribute("data-set")) window.rrApply(t.getAttribute("data-set"));
    });
    var saved = "en";
    try { saved = localStorage.getItem("rr-lang") || "en"; } catch (e) {}
    window.rrApply(saved === "ru" ? "ru" : "en");
  }
  if (document.body) boot();
  else document.addEventListener("DOMContentLoaded", boot);
})();
