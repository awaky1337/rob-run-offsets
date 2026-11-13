#pragma once
/* rob run offsets
   dumped: 2026-11-13 07:52
   dumper: Il2CppDumper 3.2.1
*/
#include <cstdint>

namespace off {
    constexpr std::uintptr_t battle_model_ti = 136151056;

    constexpr std::uintptr_t battle_entities = 0x90;
    constexpr std::uintptr_t battle_camera = 0x358;
    constexpr std::uintptr_t battle_input = 0x50;
    constexpr std::uintptr_t battle_party = 0x448;
    constexpr std::uintptr_t battle_loc = 0x508;
    constexpr std::uintptr_t loc_desc = 0x10;
    constexpr std::uintptr_t loc_sector = 0x18;
    constexpr std::uintptr_t party_list = 0x18;
    constexpr std::uintptr_t party_by_ent = 0x18;
    constexpr std::uintptr_t party_members = 0x18;
    constexpr std::uintptr_t global_party = 0xC8;
    constexpr std::uintptr_t ui_party_members = 0x38;
    constexpr std::uintptr_t battle_slots = 0x248;
    constexpr std::uintptr_t slot_by_ent = 0x18;
    constexpr std::uintptr_t char_private = 0x10; // BattleCharacterModel.PrivateModel
    constexpr std::uintptr_t priv_ctrl = 0x2D8;
    constexpr std::uintptr_t private_random = 0x218; // BattleCharacterPrivateModel.Random
    constexpr std::uintptr_t private_spread = 0x220; // BattleCharacterPrivateModel.WeaponSpreadArgsModel
    constexpr std::uintptr_t random_seed = 0x10; // RandomModel._seed
    constexpr std::uintptr_t spread_radius = 0x14; // WeaponSpreadArgsModel.Spread
    constexpr std::uintptr_t spread_off_x = 0x20; // WeaponSpreadArgsModel.ShotSpreadOffsetX
    constexpr std::uintptr_t spread_off_y = 0x24; // WeaponSpreadArgsModel.ShotSpreadOffsetY
    constexpr std::uintptr_t spread_state = 0x18; // WeaponSpreadArgsModel.StateSpread
    constexpr std::uintptr_t state_min = 0x10; // WeaponStateSpread.Min
    constexpr std::uintptr_t state_max = 0x14; // WeaponStateSpread.Max
    constexpr std::uintptr_t item_weapon_fn = 0x50; // InventoryItemDescription.WeaponFunc
    constexpr std::uintptr_t weapon_spread_fn = 0x70; // WeaponDescription.SpreadFunc
    constexpr std::uintptr_t spread_value = 0x20; // WeaponSpreadDescription.Value
    constexpr std::uintptr_t shot_inc = 0x40; // WeaponSpread.ShotInc
    constexpr std::uintptr_t tick_dec = 0x44; // WeaponSpread.TickDec
    constexpr std::uintptr_t char_shot_args = 0xF8; // BattleCharacterModel.ShotArgsModel
    constexpr std::uintptr_t shot_args_pos = 0x10; // ShotArgsModel._position
    constexpr std::uintptr_t shot_args_dir = 0x18; // ShotArgsModel._direction
    constexpr std::uintptr_t char_shot_interp = 0x108; // BattleCharacterModel.ShotInterpolationModel
    constexpr std::uintptr_t interp_pos = 0x10; // ShotInterpolationModel._transform
    constexpr std::uintptr_t interp_look = 0x1C; // ShotInterpolationModel._lookDirection
    constexpr std::uintptr_t weapon_descs_ti = 135961240; // WeaponDescriptions TypeInfo
    constexpr std::uintptr_t weapon_shot_cd = 0x20; // WeaponDescription.ShotCooldown
    constexpr std::uintptr_t battle_shot_auto = 0x1F8;
    constexpr std::uintptr_t battle_shot_single = 0x200;
    constexpr std::uintptr_t shot_look = 0x20;
    constexpr std::uintptr_t input_look = 0x18; // BattleInputModel._lookDirection, yaw and pitch in radians
    constexpr std::uintptr_t input_look_changed = 0x32;
    constexpr std::uintptr_t input_shot_look = 0x38;
    constexpr std::uintptr_t look_skip = 0xA81E46;
    constexpr std::uintptr_t shot_store_manual = 0xA81FAD;
    constexpr std::uintptr_t shot_store_auto = 0xA732C7;
    constexpr std::uintptr_t shot_cur_xy_manual = 0xA81F70;
    constexpr std::uintptr_t shot_cur_z_manual = 0xA81F79;
    constexpr std::uintptr_t shot_prev_xy_manual = 0xA81F82;
    constexpr std::uintptr_t shot_prev_z_manual = 0xA81F8B;
    constexpr std::uintptr_t shot_cur_xy_auto = 0xA73281;
    constexpr std::uintptr_t shot_cur_z_auto = 0xA7328A;
    constexpr std::uintptr_t shot_prev_xy_auto = 0xA73293;
    constexpr std::uintptr_t shot_prev_z_auto = 0xA7329C;
    constexpr std::uintptr_t spread_fn = 0x431D280; // ApplySpreadToShotDirection
    constexpr std::uintptr_t spread_mul_x = 0x431D414; // ApplySpreadToShotDirection, sx *= spread
    constexpr std::uintptr_t spread_mul_y = 0x431D442; // sy *= spread
    constexpr std::uintptr_t recoil_upd = 0xB10BB0; // SpriteRecoilModelUpdater.Update

    constexpr std::uintptr_t cam_pos = 0x10;
    constexpr std::uintptr_t cam_fwd = 0x3C;
    constexpr std::uintptr_t cam_right = 0x48;
    constexpr std::uintptr_t cam_up = 0x54;

    constexpr std::uintptr_t world_entities = 0x60;
    constexpr std::uintptr_t player = 0xD0;
    constexpr std::uintptr_t battle_characters = 0x18;
    constexpr std::uintptr_t player_server = 0x20;

    constexpr std::uintptr_t dict_entries = 0x18;
    constexpr std::uintptr_t entry_key = 8;
    constexpr std::uintptr_t entry_value = 16;
    constexpr std::uintptr_t entry_size = 24;

    constexpr std::uintptr_t arr_data = 0x20;

    constexpr std::uintptr_t char_id = 0x38;
    constexpr std::uintptr_t char_data = 0x40;
    constexpr std::uintptr_t char_cfg = 0x48;
    constexpr std::uintptr_t data_common = 0x20; // BattleCharacterData.CommonData
    constexpr std::uintptr_t common_role = 0x20; // BattleCharacterCommonData.Role
    constexpr std::uintptr_t cfg_physics = 0x18;
    constexpr std::uintptr_t stand_len = 0x1C;
    constexpr std::uintptr_t replicated = 0x60;
    constexpr std::uintptr_t repl_pos = 0x10;
    constexpr std::uintptr_t prim_value = 0x18;

    constexpr std::uintptr_t updater_ti = 136137592;
    constexpr std::uintptr_t updater_battle = 0x70;
    constexpr std::uintptr_t updater_global = 0x78;
    constexpr std::uintptr_t view_updaters = 0x38;
    constexpr std::uintptr_t view_content = 0xA8;
    constexpr std::uintptr_t content_value = 0x18;
    constexpr std::uintptr_t head_pos = 0xE8;
    constexpr std::uintptr_t cached_ptr = 0x10;
    constexpr std::uintptr_t movement_view = 0x20;
    constexpr std::uintptr_t move_transform = 0x20;
    constexpr std::uintptr_t tr_hier = 0x28; // index dword follows at +0x30
    constexpr std::uintptr_t hier_list = 0x18; // parents ptr follows at +0x20
    constexpr std::uintptr_t trs_size = 0x30;
    constexpr std::uintptr_t hier_ptrs = 0x30; // transform pointer per index
    constexpr std::uintptr_t hier_cnt = 0x28; // pointer to the uint32 node count

    constexpr std::uintptr_t slots = 0x248;
    constexpr std::uintptr_t slot_ents = 0x18;
    constexpr std::uintptr_t slot_data = 0x10;
    constexpr std::uintptr_t slot_nick = 0x30;
    constexpr std::uintptr_t str_len = 0x10;
    constexpr std::uintptr_t str_chars = 0x14;

    constexpr std::uintptr_t gc_nsects = 0x8638F78; // Boehm GC_n_heap_sects
    constexpr std::uintptr_t gc_sects = 0x86C1B40; // GC_heap_sects {start, bytes}
    constexpr std::uintptr_t gc_max_sects = 0x14000;

    constexpr std::uintptr_t peb_ldr = 0x18;
    constexpr std::uintptr_t ldr_list = 0x20;
    constexpr std::uintptr_t mod_base = 0x20;
    constexpr std::uintptr_t mod_size = 0x30;
    constexpr std::uintptr_t mod_name_len = 0x48;
    constexpr std::uintptr_t mod_name = 0x50;

    constexpr std::uintptr_t ents_models = 0x50; // BattleEntitiesModel._models
    constexpr std::uintptr_t entity_client = 0x20; // BattleCharacterEntityModel.ClientModel
    constexpr std::uintptr_t client_set_move = 0x30; // CharacterClientModel.SetMovement
    constexpr std::uintptr_t set_move_x = 0x10; // y +0x14, z +0x18, vx +0x1C, vz +0x20, ts +0x28
    constexpr std::uintptr_t cmcore_ti = 135669576; // CinemachineCore TypeInfo
    constexpr std::uintptr_t il2_statics = 0xB8; // Il2CppClass.static_fields
    constexpr std::uintptr_t cmcore_inst = 0x8; // CinemachineCore.sInstance
    constexpr std::uintptr_t cmcore_brains = 0x10; // CinemachineCore.mActiveBrains
    constexpr std::uintptr_t list_items = 0x10; // List<T>._items
    constexpr std::uintptr_t list_size = 0x18; // List<T>._size
    constexpr std::uintptr_t brain_cam = 0x50; // CinemachineBrain.m_OutputCamera
    constexpr std::uintptr_t cam_fov = 0x170; // native Camera m_VerticalFOV
    constexpr std::uintptr_t item_desc_ti = 136310824; // InventoryItemDescriptions TypeInfo
    constexpr std::uintptr_t slot_ti = 136326736; // InventorySlot TypeInfo
    constexpr std::uintptr_t desc_type = 0x20;
    constexpr std::uintptr_t desc_rarity = 0x30;
    constexpr std::uintptr_t desc_ammo_fn = 0x68;
    constexpr std::uintptr_t desc_price_fn = 0x78;
    constexpr std::uintptr_t desc_sell_fn = 0x80;
    constexpr std::uintptr_t delegate_target = 0x20;
    constexpr std::uintptr_t enum_list = 0x10;
    constexpr std::uintptr_t w_containers = 0x20;
    constexpr std::uintptr_t w_vehicles = 0x58;
    constexpr std::uintptr_t w_cars = 0x60;
    constexpr std::uintptr_t car_desc = 0x78;
    constexpr std::uintptr_t w_static_loot = 0x98;
    constexpr std::uintptr_t w_random_loot = 0xA0;
    constexpr std::uintptr_t w_cargos = 0xC8;
    constexpr std::uintptr_t w_safes = 0x110;
    constexpr std::uintptr_t w_container_inv = 0x168;
    constexpr std::uintptr_t w_grenades = 0x1A0;
    constexpr std::uintptr_t w_events = 0x260;
    constexpr std::uintptr_t w_cash = 0x268;
    constexpr std::uintptr_t c_desc = 0x18;
    constexpr std::uintptr_t c_pos = 0x28;
    constexpr std::uintptr_t c_unlock = 0x30;
    constexpr std::uintptr_t c_empty = 0x38;
    constexpr std::uintptr_t c_drill = 0x40;
    constexpr std::uintptr_t c_inv_id = 0x24;
    constexpr std::uintptr_t cinv_inventory = 0x18;
    constexpr std::uintptr_t veh_transform = 0x28;
    constexpr std::uintptr_t veh_owner = 0x40;
    constexpr std::uintptr_t veh_role = 0x50;
    constexpr std::uintptr_t veh_cargo = 0xE8;
    constexpr std::uintptr_t veh_trunk = 0x110;
    constexpr std::uintptr_t veh_type = 0x118;
    constexpr std::uintptr_t veh_unowned = 0x90;
    constexpr std::uintptr_t veh_rented = 0x120;
    constexpr std::uintptr_t owner_pub = 0x10;
    constexpr std::uintptr_t slot_pub = 0x28;
    constexpr std::uintptr_t item_in_hands = 0x170; // BattleCharacterModel.ItemInHandsModel
    constexpr std::uintptr_t bc_sprint = 0x148;
    constexpr std::uintptr_t bc_click = 0x1C0; // BattleCharacterModel.WeaponClickTickIndex
    constexpr std::uintptr_t bc_reload = 0x158;
    constexpr std::uintptr_t bc_crouch = 0x160;
    constexpr std::uintptr_t bc_armor = 0x1B8;
    constexpr std::uintptr_t bc_vehicle = 0x1C8;
    constexpr std::uintptr_t bc_arrest = 0x250;
    constexpr std::uintptr_t bc_melee = 0x288;
    constexpr std::uintptr_t bc_knock = 0x298;
    constexpr std::uintptr_t ko_phase = 0x18;
    constexpr std::uintptr_t ko_end = 0x10;
    constexpr std::uintptr_t ko_surrender = 0x70;
    constexpr std::uintptr_t cr_down = 0x10;
    constexpr std::uintptr_t wr_state = 0x10;
    constexpr std::uintptr_t mel_hit = 0x10;
    constexpr std::uintptr_t inv_ent = 0x10;
    constexpr std::uintptr_t arr_state = 0x10;
    constexpr std::uintptr_t item_wrap = 0x10; // ItemInHandsModel.Current
    constexpr std::uintptr_t item_data = 0x10; // EquipItemModel._data
    constexpr std::uintptr_t ident_id = 0x10; // Identified.Id

    constexpr std::uintptr_t rdm_models = 0x10; // ReadOnlyDictionaryModel._models (generic, dump prints 0x0)
    constexpr std::uintptr_t dm_value = 0x10; // DescriptionModel.Value (generic)
    constexpr std::uintptr_t pm_data = 0x10; // PrimitiveModel._data (generic)
    constexpr std::uintptr_t w_loots = 0x38;
    constexpr std::uintptr_t w_vloots = 0x40;
    constexpr std::uintptr_t w_vtrunks = 0xC0;
    constexpr std::uintptr_t w_storage_by_inv = 0x3A8;
    constexpr std::uintptr_t w_storage_inv = 0x130;
    constexpr std::uintptr_t w_plot_by_inv = 0x3B0;
    constexpr std::uintptr_t w_plot_inv = 0x138;
    constexpr std::uintptr_t w_shelvings = 0x148;
    constexpr std::uintptr_t w_loot_inv = 0x160;
    constexpr std::uintptr_t w_vloot_inv = 0x170;
    constexpr std::uintptr_t w_furn = 0x220;
    constexpr std::uintptr_t w_furn_inv = 0x228;
    constexpr std::uintptr_t w_bloot = 0x238;
    constexpr std::uintptr_t w_bloot_inv = 0x240;

    constexpr std::uintptr_t im_slots = 0x18; // InventoryModel.Slots
    constexpr std::uintptr_t ism_item = 0x18; // InventorySlotModel.ItemModel
    constexpr std::uintptr_t isi_data = 0x10; // InventorySlotItemModel._data
    constexpr std::uintptr_t desc_stack = 0x34;
    constexpr std::uintptr_t desc_dur = 0x90;
    constexpr std::uintptr_t desc_has_dur = 0x94;
    constexpr std::uintptr_t ammo_base = 0x20;
    constexpr std::uintptr_t ammo_mod_fn = 0x28;
    constexpr std::uintptr_t isp_mod = 0x20;
    constexpr std::uintptr_t dc_mod = 0x10; // closure of InventoryItemDescriptions.New: sellPriceModifier
    constexpr std::uintptr_t dc_ammo = 0x38; // closure of InventoryItemDescriptions.New: ammo

    constexpr std::uintptr_t lo_taken = 0x10;
    constexpr std::uintptr_t slo_desc = 0x18;
    constexpr std::uintptr_t rlo_item = 0x18;
    constexpr std::uintptr_t rlo_desc = 0x20;
    constexpr std::uintptr_t slod_fn = 0x28;
    constexpr std::uintptr_t slod_pos = 0x30;
    constexpr std::uintptr_t rlod_pos = 0x24;
    constexpr std::uintptr_t loid_item_fn = 0x20;
    constexpr std::uintptr_t loid_count = 0x28;
    constexpr std::uintptr_t loid_dur = 0x2C;

    constexpr std::uintptr_t loot_tr = 0x20;
    constexpr std::uintptr_t loot_role = 0x38;
    constexpr std::uintptr_t tr_x = 0x10;
    constexpr std::uintptr_t tr_y = 0x18;
    constexpr std::uintptr_t tr_z = 0x20;
    constexpr std::uintptr_t li_name = 0x18;
    constexpr std::uintptr_t li_inv = 0x30;
    constexpr std::uintptr_t vl_tr = 0x20;
    constexpr std::uintptr_t vli_inv = 0x18;
    constexpr std::uintptr_t vli_nick = 0x30;
    constexpr std::uintptr_t vt_inv = 0x20;
    constexpr std::uintptr_t vt_nick = 0x40;

    constexpr std::uintptr_t lcd_cd_fn = 0x28;
    constexpr std::uintptr_t lcd_pos = 0x30;
    constexpr std::uintptr_t sb_desc = 0x20;
    constexpr std::uintptr_t sb_empty = 0x38;
    constexpr std::uintptr_t sbi_inv = 0x18;
    constexpr std::uintptr_t lsd_pos = 0x34;
    constexpr std::uintptr_t lsd_desc = 0x18;
    constexpr std::uintptr_t pc_pos = 0x38;
    constexpr std::uintptr_t pc_empty = 0x40;
    constexpr std::uintptr_t pci_inv = 0x18;

    constexpr std::uintptr_t sh_desc = 0x18;
    constexpr std::uintptr_t sh_cargo = 0x20;
    constexpr std::uintptr_t lshd_pos = 0x20;
    constexpr std::uintptr_t lshd_desc = 0x18;
    constexpr std::uintptr_t cim_slots = 0x10;
    constexpr std::uintptr_t cis_cargo = 0x10;
    constexpr std::uintptr_t cd_desc = 0x20;
    constexpr std::uintptr_t cdsc_rare = 0x20;

    constexpr std::uintptr_t fl_pos = 0x18;
    constexpr std::uintptr_t fl_fid = 0x50;
    constexpr std::uintptr_t sp_x = 0x10;
    constexpr std::uintptr_t sp_y = 0x18;
    constexpr std::uintptr_t sp_z = 0x20;
    constexpr std::uintptr_t fli_name = 0x18;
    constexpr std::uintptr_t fli_pages = 0x28;
    constexpr std::uintptr_t ipm_inv = 0x20;
    constexpr std::uintptr_t bl_desc = 0x10;
    constexpr std::uintptr_t blod_ids = 0x10;
    constexpr std::uintptr_t blod_pos = 0x18;
    constexpr std::uintptr_t blei_inv = 0x14;
    constexpr std::uintptr_t bli_pages = 0x20;
    constexpr std::uintptr_t bli_nick = 0x38;
    constexpr std::uintptr_t bli_desc = 0x18;
}
