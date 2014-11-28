static const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    // Emacs-, Lisp-, and programmer-friendly layout

    /* Keymap 0: Default Layer
     *
     * ,--------------------------------------------------.           ,--------------------------------------------------.
     * |   `    |   1  |   2  |   3  |   4  |   5  |  Esc |           |   =  |   6  |   7  |   8  |   9  |   0  |   -    |
     * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
     * | Tab    |   Q  |   W  |   E  |   R  |   T  |   \  |           |   [  |   Y  |   U  |   I  |   O  |   P  |   ]    |
     * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
     * | Caps   |   A  |   S  |   D  |   F  |   G  |------|           |------|   H  |   J  |   K  |   L  |   ;  |   '    |
     * |--------+------+------+------+------+------| LGui |           | RGui |------+------+------+------+------+--------|
     * | LShift |   Z  |   X  |   C  |   V  |   B  |      |           |      |   N  |   M  |   ,  |   .  |   /  | RShift |
     * `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
     *   |  Fn1 | Fn2  |  Ins |  Lft | Rght |                                       |  Lft |  Up  |  Dn  | Rght |  Fn0 |
     *   `----------------------------------'                                       `----------------------------------'
     *                                        ,-------------.       ,-------------.
     *                                        | LCtl | LAlt |       | RAlt | RCtl |
     *                                 ,------+------+------|       |------+------+------.
     *                                 |      |      | Home |       | PgUp |      |      |
     *                                 | BkSp |  Del |------|       |------| Enter| Space|
     *                                 |      |      |  End |       | PgDn |      |      |
     *                                 `--------------------'       `--------------------'
     */

    KEYMAP(  // layer 0 : default
        // left hand
        GRV, 1,   2,   3,   4,   5,   ESC,
        TAB, Q,   W,   E,   R,   T,   BSLS,
        CLCK,A,   S,   D,   F,   G,
        LSFT,Z,   X,   C,   V,   B,   LGUI,
        FN1, FN2, INS, LEFT,RGHT,
                                      LCTL,LALT,
                                           HOME,
                                 BSPC,DEL, END,
        // right hand
             EQL, 6,   7,   8,   9,   0,   MINS,
             LBRC,Y,   U,   I,   O,   P,   RBRC,
                  H,   J,   K,   L,   SCLN,QUOT,
             RGUI,N,   M,   COMM,DOT, SLSH,RSFT,
                       LEFT,DOWN,UP,  RGHT,FN0,
        RALT,RCTL,
        PGUP,
        PGDN,ENT, SPC
    ),

    KEYMAP(  // layout: layer 1: F-keys and media
        // left hand
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        LSFT,TRNS,TRNS,TRNS,TRNS,TRNS,LGUI,
        TRNS,TRNS,TRNS,TRNS,TRNS,
                                      LCTL,LALT,
                                           TRNS,
                                 TRNS,TRNS,TRNS,
        // right hand
             TRNS,F1,  F2,  F3,  F4,  F5,  F6,
             FN3, F7,  F8,  F9,  F10, F11, F12,
                  MPRV,MPLY,MNXT,VOLD,VOLU,TRNS,
             RGUI,MSTP,MSTP,NO,  MUTE,MUTE,RSFT,
                       PSCR,SLCK,PAUS,NO,TRNS,
        RALT,RCTL,
        TRNS,
        TRNS,TRNS,TRNS
    ),

    KEYMAP(  // layout: layer 2: mouse + numpad
        // left hand
		TRNS,NO,  BTN3,NO,  NO,  NO,  NO,
        TRNS,BTN1,MS_U,BTN2,WH_U,WH_L,NO,
        TRNS,MS_L,MS_D,MS_R,WH_D,WH_R,
        TRNS,NO,  NO,  NO,  NO,  NO,  TRNS,
        FN0, TRNS,TRNS,TRNS,TRNS,
                                      TRNS,TRNS,
                                           TRNS,
                                 TRNS,TRNS,TRNS,
        // right hand
             TRNS,NLCK,PSLS,PAST,PAST,PMNS,BSPC,
             TRNS,NO,  P7,  P8,  P9,  PMNS,BSPC,
                  NO,  P4,  P5,  P6,  PPLS,PENT,
             TRNS,NO,  P1,  P2,  P3,  PPLS,PENT,
                       P0,  PDOT,SLSH,PENT,TRNS,
        TRNS,TRNS,
        BTN1,
        BTN1,TRNS,TRNS
    ),

    KEYMAP(  // layout: layer 3: Colemak layout
        // left hand
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,Q,   W,   F,   P,   G,   TRNS,
        TRNS,A,   R,   S,   T,   D,
        TRNS,Z,   X,   C,   V,   B,   TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,
                                      TRNS,TRNS,
                                           TRNS,
                                 TRNS,TRNS,TRNS,
        // right hand
             TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
             TRNS,J,   L,   U,   Y,   SCLN,TRNS,
                  H,   N,   E,   I,   O,   TRNS,
             TRNS,K,   M,   TRNS,TRNS,TRNS,TRNS,
                       TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,
        TRNS,
        TRNS,TRNS,TRNS
    ),
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
