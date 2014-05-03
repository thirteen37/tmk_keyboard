static const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    // Emacs-, Lisp-, and programmer-friendly layout

    /* Keymap 0: Default Layer
     *
     * ,--------------------------------------------------.           ,--------------------------------------------------.
     * |   ~    |   1  |   2  |   3  |   4  |   5  |   \  |           |   '  |   6  |   7  |   8  |   9  |   0  |   =    |
     * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
     * | Tab    |   Q  |   W  |   E  |   R  |   T  | ~Fn1 |           | ~Fn3 |   Y  |   U  |   I  |   O  |   P  |   [    |
     * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
     * | LShift |   A  |   S  |   D  |   F  |   G  |------|           |------|   H  |   J  |   K  |   L  |   ;  | RShift |
     * |--------+------+------+------+------+------|  Fn0 |           | ~Fn4 |------+------+------+------+------+--------|
     * | LCtrl  |   Z  |   X  |   C  |   V  |   B  |      |           |      |   N  |   M  |   ,  |   .  |   /  | RCtrl  |
     * `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
     *   | ~Fn1 | ~Fn2 | Caps | LAlt | LGui |                                       |  Lft |  Up  |  Dn  | Rght | ~Fn4 |
     *   `----------------------------------'                                       `----------------------------------'
     *                                        ,-------------.       ,-------------.
     *                                        | +Fn2 | Home |       | PgUp | Del  |
     *                                 ,------|------|------|       |------+------+------.
     *                                 |      |      |  End |       | PgDn |      |      |
     *                                 | BkSp |  ESC |------|       |------| Enter| Space|
     *                                 |      |      |  Spc |       | Ins  |      |      |
     *                                 `--------------------'       `--------------------'
     */

    KEYMAP(  // layer 0 : default
        // left hand
        EQL, 1,   2,   3,   4,   5,   ESC,
        TAB, Q,   W,   E,   R,   T,   FN3,
        CLCK,A,   S,   D,   F,   G,
        LSFT,Z,   X,   C,   V,   B,   FN2,
        LGUI,GRV, BSLS,LEFT,RGHT,
                                      LCTL,LALT,
                                           HOME,
                                 BSPC,DEL, END,
        // right hand
             FN0, 6,   7,   8,   9,   0,   MINS,
             RBRC,Y,   U,   I,   O,   P,   LBRC,
                  H,   J,   K,   L,   SCLN,QUOT,
             FN1, N,   M,   COMM,DOT, SLSH,RSFT,
                       LEFT,DOWN,UP,  RGHT,RGUI,
        RALT,RCTL,
        PGUP,
        PGDN,ENT, SPC
    ),

    KEYMAP(  // layout: layer 1: F-keys and media
        // left hand
        TRNS,F1,  F2,  F3,  F4,  F5,  F6,
        TRNS,F7,  F8,  F9,  F10, F11, F12,
        TRNS,MPRV,MPLY,MNXT,VOLD,VOLU,
        LSFT,TRNS,MSTP,TRNS,MUTE,MUTE,TRNS,
        LGUI,PSCR,SLCK,PAUS,TRNS,
                                      LCTL,LALT,
                                           TRNS,
                                 TRNS,TRNS,TRNS,
        // right hand
             TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
             TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
                  TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
             TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,RSFT,
                       TRNS,TRNS,TRNS,TRNS,RGUI,
        RALT,RCTL,
        TRNS,
        TRNS,TRNS,TRNS
    ),

    KEYMAP(  // layout: layer 2: mouse + numpad
        // left hand
        TRNS,NO,  NO,  NO,  NO,  PAUS,PSCR,
        TRNS,WH_L,WH_U,WH_D,WH_R,BTN2,TRNS,
        TRNS,MS_L,MS_U,MS_D,MS_R,BTN1,
        TRNS,NO,  NO,  NO,  NO,  BTN3,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,
                                      TRNS,TRNS,
                                           TRNS,
                                 TRNS,TRNS,TRNS,
        // right hand
             TRNS,NLCK,PSLS,PAST,PAST,PMNS,BSPC,
             SLCK,NO,  P7,  P8,  P9,  PMNS,BSPC,
                  NO,  P4,  P5,  P6,  PPLS,PENT,
             TRNS,NO,  P1,  P2,  P3,  PPLS,PENT,
                       P0,  PDOT,SLSH,PENT,PENT,
        TRNS,TRNS,
        TRNS,
        TRNS,TRNS,TRNS
    ),

    KEYMAP(  // layout: layer 3: Colemak layout
        // left hand
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,Q,   D,   R,   W,   B,   TRNS,
        TRNS,A,   S,   H,   T,   G,
        TRNS,Z,   X,   M,   C,   V,   TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,
                                      TRNS,TRNS,
                                           TRNS,
                                 TRNS,TRNS,TRNS,
        // right hand
             TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
             TRNS,J,   F,   U,   P,   4,   TRNS,
                  Y,   N,   E,   O,   I,   TRNS,
             TRNS,K,   L,   TRNS,TRNS,TRNS,TRNS,
                       TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,
        TRNS,
        TRNS,TRNS,TRNS
    ),
};

/* id for user defined functions */
enum function_id {
    TEENSY_KEY,
};

/*
 * Fn action definition
 */
static const uint16_t PROGMEM fn_actions[] = {
    ACTION_DEFAULT_LAYER_SET(0),                    // FN0 - switch to Layer0
    ACTION_LAYER_MOMENTARY(1),                      // FN1 - push Layer1
    ACTION_DEFAULT_LAYER_SET(2),                    // FN2 - switch to Layer2
    ACTION_DEFAULT_LAYER_SET(3),                    // FN3 - switch to Layer3
};

void action_function(keyrecord_t *event, uint8_t id, uint8_t opt)
{
    print("action_function called\n");
    print("id  = "); phex(id); print("\n");
    print("opt = "); phex(opt); print("\n");
    if (id == TEENSY_KEY) {
        clear_keyboard();
        print("\n\nJump to bootloader... ");
        _delay_ms(250);
        bootloader_jump(); // should not return
        print("not supported.\n");
    }
}

