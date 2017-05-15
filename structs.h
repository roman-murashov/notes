// GossipData specifies the speech IDs for the gossip related to each quest.
//
// References:
//    * https://github.com/sanctuary/notes/blob/master/enums.h#speech_id
typedef struct {
	speech_id the_magic_rock;
	speech_id black_mushroom;
	speech_id gharbad_the_weak;
	speech_id zhar_the_mad;
	speech_id lachdanan;
	speech_id diablo;
	speech_id the_butcher;
	speech_id ogdens_sign;
	speech_id halls_of_the_blind;
	speech_id valor;
	speech_id anvil_of_fury;
	speech_id warlord_of_blood;
	speech_id the_curse_of_king_leoric;
	speech_id poisoned_water_supply;
	speech_id the_chamber_of_bone;
	speech_id archbishop_lazarus;
} GossipData;

// Item describes in-game state of any game item.
//
// References:
//    * https://github.com/sanctuary/notes/blob/master/enums.h#item_category
//    * https://github.com/sanctuary/notes/blob/master/enums.h#item_code
//    * https://github.com/sanctuary/notes/blob/master/enums.h#item_drop_state
//    * https://github.com/sanctuary/notes/blob/master/enums.h#item_effect_type
//    * https://github.com/sanctuary/notes/blob/master/enums.h#item_equip_type
//    * https://github.com/sanctuary/notes/blob/master/enums.h#item_id
//    * https://github.com/sanctuary/notes/blob/master/enums.h#item_inv_graphics_id
//    * https://github.com/sanctuary/notes/blob/master/enums.h#item_quality
//    * https://github.com/sanctuary/notes/blob/master/enums.h#item_special_effect
//    * https://github.com/sanctuary/notes/blob/master/enums.h#item_type
typedef struct { // size = 0x170
    // offset 0000 (4 bytes)
    uint32_t seed;
    // offset 0004 (2 bytes)
    uint16_t CF;
    // offset 0008 (4 bytes)
    item_type type;
    // offset 000C (4 bytes)
    int32_t col;
    // offset 0010 (4 bytes)
    int32_t row;
    // offset 0014 (4 bytes)
    int32_t drop_anim_update;
    // offset 0018 (4 bytes)
    void *drop_cel_data;
    // offset 001C (4 bytes)
    int32_t drop_frame_count;
    // offset 0020 (4 bytes)
    int32_t cur_drop_frame;
    // offset 0024 (4 bytes)
    int32_t drop_width;
    // offset 0028 (4 bytes)
    int32_t drop_x_offset;
    // offset 002C (4 bytes)
    bool32_t inactive; // unused in win 1.09b, used in win 1.00 debug.
    // offset 0030 (1 byte)
    item_drop_state drop_state;
    // offset 0034 (4 bytes)
    bool32_t draw_quest_item;
    // offset 0038 (1 byte)
    bool32_t is_identified;
    // offset 003C (1 byte)
    item_quality quality;
    // offset 003D (64 bytes)
    char unindentified_name[64];
    // offset 007D (64 bytes)
    char full_name[64];
    // offset 00BD (1 byte)
    item_equip_type equip_type;
    // offset 00BE (1 byte)
    item_category category;
    // offset 00C0 (4 bytes)
    item_inv_graphics_id inv_graphics_id;
    // offset 00C4 (4 bytes)
    int32_t unindentified_price; // also represents number of gold pieces for item `gold`
    // offset 00C8 (4 bytes)
    int32_t full_price;
    // offset 00CC (4 bytes)
    int32_t min_attack_damage;
    // offset 00D0 (4 bytes)
    int32_t max_attack_damage;
    // offset 00D4 (4 bytes)
    int32_t armor_class;
    // offset 00D8 (4 bytes)
    item_special_effect special_effect_flags; // bitmask
    // offset 00DC (4 bytes)
    item_code code;
    // offset 00E0 (4 bytes)
    spell_id item_spell_id;
    // offset 00E4 (4 bytes)
    int32_t cur_staff_charges;
    // offset 00E8 (4 bytes)
    int32_t max_staff_charges;
    // offset 00EC (4 bytes)
    int32_t cur_durability;
    // offset 00F0 (4 bytes)
    int32_t max_durability; // if it equals 255 then item is indestructible
    // offset 00F4 (4 bytes)
    int32_t attack_damage_percent_bonus;
    // offset 00F8 (4 bytes)
    int32_t to_hit_bonus;
    // offset 00FC (4 bytes)
    int32_t armor_class_percent_bonus;
    // offset 0100 (4 bytes)
    int32_t strength_bonus;
    // offset 0104 (4 bytes)
    int32_t magic_bonus;
    // offset 0108 (4 bytes)
    int32_t dexterity_bonus;
    // offset 010C (4 bytes)
    int32_t vitality_bonus;
    // offset 0110 (4 bytes)
    int32_t fire_resistance_bonus;
    // offset 0114 (4 bytes)
    int32_t lightning_resistance_bonus;
    // offset 0118 (4 bytes)
    int32_t magic_resistance_bonus;
    // offset 011C (4 bytes)
    int32_t mana_bonus; // in Q26.6 fixed-point format (each displayed mana point equals 64)
    // offset 0120 (4 bytes)
    int32_t life_bonus; // in Q26.6 fixed-point format (each displayed health point equals 64)
    // offset 0124 (4 bytes)
    int32_t attack_damage_bonus;
    // offset 0128 (4 bytes)
    int32_t damage_taken_bonus;
    // offset 012C (4 bytes)
    int32_t light_radius_bonus; // measured in 10% chunks
    // offset 0130 (1 byte)
    uint8_t spell_level_bonus;
    // offset 0131 (1 byte)
    bool8_t held_in_hand;
    // offset 0134 (4 byte)
    unique_item_id unique_id;
    // offset 0138 (4 byte)
    int32_t fire_damage_min;
    // offset 013C (4 byte)
    int32_t fire_damage_max;
    // offset 0140 (4 byte)
    int32_t lightning_damage_min;
    // offset 0144 (4 byte)
    int32_t lightning_damage_max;
    // offset 0148 (4 byte)
    int32_t armor_penetration;
    // offset 014C (4 byte)
    item_effect_type prefix_effect_type;
    // offset 014D (4 byte)
    item_effect_type suffix_effect_type;
    // offset 0150 (4 byte)
    int32_t prefix_price;
    // offset 0154 (4 byte)
    int32_t prefix_price_multiplier;
    // offset 0158 (4 byte)
    int32_t suffix_price;
    // offset 015C (4 byte)
    int32_t suffix_price_multiplier;
    // offset 0160 (1 byte)
    uint8_t required_strength;
    // offset 0161 (1 byte)
    uint8_t reguied_magic;
    // offset 0162 (1 byte)
    uint8_t required_dexterity;
    // offset 0163 (1 byte)
    uint8_t required_vitality;
    // offset 0164 (1 byte)
    bool32_t is_equippable;
    // offset 0168 (4 byte)
    item_id id;
} Item;

// A Point is an X, Y coordinate pair. The axes increase right and down.
typedef struct {
	int32_t x;
	int32_t y;
} Point;

// A Portal represents a portal between two levels.
//
// PSX def:
//    typedef struct DPortal {
//       unsigned char x;
//       unsigned char y;
//       unsigned char level;
//       unsigned char ltype;
//       unsigned char setlvl;
//    } DPortal;
typedef struct {
	int8_t col;
	int8_t row;
	int8_t dlvl;
	dungeon_type dtype;
	quest_level quest_lvl;
} Portal;

// A Shadow contains the shadows for a 2x2 block of base tile IDs.
//
// PSX def:
//    typedef struct ShadowStruct {
//       unsigned char strig;
//       unsigned char s1;
//       unsigned char s2;
//       unsigned char s3;
//       unsigned char nv1;
//       unsigned char nv2;
//       unsigned char nv3;
//    } ShadowStruct;
//
// TODO: Figure out how to fix broken links. Requires graphics files, which may
// not be put online. Perhaps, add a script to view locally.
//
// References:
//    * https://github.com/sanctuary/graphics/blob/master/l1/tiles/base.md
//    * https://github.com/sanctuary/graphics/blob/master/l2/tiles/base.md
typedef struct {
	// 2x2 block of base tile IDs.
	l1_tile_id base_bottom;
	l1_tile_id base_top;
	l1_tile_id base_right;
	l1_tile_id base_left;
	// replacement shadow tile IDs.
	l1_tile_id shadow_top;
	l1_tile_id shadow_right;
	l1_tile_id shadow_left;
} Shadow;