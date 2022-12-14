#include "bitmap.h"

#include "types.h"
#include "vga.h"

// 0 = no-pixel, 1 = pixel

uint8 bitmaps_0_9[10][BITMAP_SIZE] = {
    // 0
    {0b00111100,
     0b01111110,
     0b01100110,
     0b01101110,
     0b01110110,
     0b01100110,
     0b01111110,
     0b00111100},

    // 1
    {0b00011000,
     0b01111000,
     0b01111000,
     0b00011000,
     0b00011000,
     0b00011000,
     0b00111100,
     0b00111100},

    // 2
    {0b00111100,
     0b01111110,
     0b01001110,
     0b00011100,
     0b00111000,
     0b01110000,
     0b01111110,
     0b01111110},

    // 3
    {0b01111100,
     0b01111100,
     0b00001110,
     0b00111110,
     0b00111110,
     0b00001110,
     0b01111100,
     0b01111100},

    // 4
    {0b00001100,
     0b00011100,
     0b00111100,
     0b01101100,
     0b01111100,
     0b01111100,
     0b00001100,
     0b00001100},

    // 5
    {0b01111110,
     0b01111110,
     0b01100000,
     0b01111100,
     0b01111110,
     0b00001110,
     0b01111110,
     0b01111100},

    // 6
    {0b00011100,
     0b00111100,
     0b00110000,
     0b01111000,
     0b01111100,
     0b01100110,
     0b01101110,
     0b01111100},

    // 7
    {0b01111110,
     0b01111110,
     0b00000110,
     0b00001100,
     0b00001100,
     0b00011000,
     0b00110000,
     0b00110000},

    // 8
    {0b00111100,
     0b01111110,
     0b01100110,
     0b00111100,
     0b00111100,
     0b01100110,
     0b01111110,
     0b00111100},

    // 9
    {0b00111100,
     0b01111110,
     0b01100110,
     0b01111110,
     0b00111110,
     0b00000110,
     0b01111110,
     0b01111100},
};

uint8 bitmaps_A_Z[26][BITMAP_SIZE] = {
    // A
    {0b00011000,
     0b00111100,
     0b01100110,
     0b01100110,
     0b01111110,
     0b01111110,
     0b01100110,
     0b01100110},

    // B
    {0b01111100,
     0b01100110,
     0b01100110,
     0b01111110,
     0b01111110,
     0b01100110,
     0b01100110,
     0b01111100},

    // C
    {0b00111110,
     0b01111110,
     0b01100000,
     0b01100000,
     0b01100000,
     0b01100000,
     0b01111110,
     0b00111110},

    // D
    {0b01111100,
     0b01111110,
     0b01100110,
     0b01100110,
     0b01100110,
     0b01100110,
     0b01111110,
     0b01111100},

    // E
    {0b01111110,
     0b01111110,
     0b01100000,
     0b01111000,
     0b01111000,
     0b01100000,
     0b01111110,
     0b01111110},

    // F
    {0b01111110,
     0b01111110,
     0b01100000,
     0b01111100,
     0b01111100,
     0b01100000,
     0b01100000,
     0b01100000},

    // G
    {0b01111110,
     0b01111110,
     0b01100000,
     0b01100000,
     0b01101110,
     0b01100110,
     0b01111110,
     0b01111110},

    // H
    {0b01100110,
     0b01100110,
     0b01100110,
     0b01111110,
     0b01111110,
     0b01100110,
     0b01100110,
     0b01100110},

    // I
    {0b01111110,
     0b01111110,
     0b00011000,
     0b00011000,
     0b00011000,
     0b00011000,
     0b01111110,
     0b01111110},

    // J
    {0b00111110,
     0b00111110,
     0b00001100,
     0b00001100,
     0b01101100,
     0b01101100,
     0b01111100,
     0b01111100},

    // K
    {0b01100010,
     0b01100110,
     0b01101100,
     0b01111000,
     0b01110000,
     0b01111000,
     0b01101100,
     0b01100110},

    // L
    {0b01100000,
     0b01100000,
     0b01100000,
     0b01100000,
     0b01100000,
     0b01100000,
     0b01111110,
     0b01111110},

    // M
    {0b00100100,
     0b01111110,
     0b01111110,
     0b01111110,
     0b01100110,
     0b01100110,
     0b01100110,
     0b01100110},

    // N
    {0b01100110,
     0b01100110,
     0b01110110,
     0b01111110,
     0b01111110,
     0b01101110,
     0b01100110,
     0b01100110},

    // O
    {0b00111100,
     0b01111110,
     0b01100110,
     0b01100110,
     0b01100110,
     0b01100110,
     0b01111110,
     0b00111100},

    // P
    {0b01111100,
     0b01111110,
     0b01100110,
     0b01111110,
     0b01111100,
     0b01100000,
     0b01100000,
     0b01100000},

    // Q
    {0b00111100,
     0b01111110,
     0b01100110,
     0b01100110,
     0b01100110,
     0b01111110,
     0b00111000,
     0b00011100},

    // R
    {0b01111100,
     0b01111110,
     0b01100110,
     0b01111110,
     0b01111100,
     0b01111000,
     0b01101100,
     0b01100110},

    // S
    {0b00111110,
     0b01111110,
     0b01110010,
     0b00111000,
     0b00011100,
     0b01001110,
     0b01111110,
     0b01111100},

    // T
    {0b01111110,
     0b01111110,
     0b00011000,
     0b00011000,
     0b00011000,
     0b00011000,
     0b00011000,
     0b00011000},

    // U
    {0b01100110,
     0b01100110,
     0b01100110,
     0b01100110,
     0b01100110,
     0b01100110,
     0b01111110,
     0b00111100},

    // V
    {0b01100110,
     0b01100110,
     0b01100110,
     0b01100110,
     0b01100110,
     0b01100110,
     0b00111100,
     0b00011000},

    // W
    {0b01100110,
     0b01100110,
     0b01100110,
     0b01100110,
     0b01111110,
     0b00111100,
     0b01111110,
     0b01100110},

    // X
    {0b01100110,
     0b01100110,
     0b01100110,
     0b00111100,
     0b00111100,
     0b01100110,
     0b01100110,
     0b01100110},

    // Y
    {0b01100110,
     0b01100110,
     0b01100110,
     0b01100110,
     0b00111100,
     0b00011000,
     0b00011000,
     0b00011000},

    // Z
    {0b01111110,
     0b01111110,
     0b00001110,
     0b00011100,
     0b00111000,
     0b01110000,
     0b01111110,
     0b01111110}

};

// putpixels of 0-9 bits from right-to-left
void draw_num_bitmaps(uint16 index, uint16 x, uint16 y, uint8 color) {
    uint16 temp = 0, pix = 0;

    for (uint8 i = 0; i < BITMAP_SIZE; i++) {
        temp = x;
        x += BITMAP_SIZE;
        pix = bitmaps_0_9[index][i];
        while (pix > 0) {
            if (pix & 1) {
                vga_graphics_putpixel(x, y, color);
            }
            pix >>= 1;
            x--;
        }
        x = temp;
        y++;
    }
}

// putpixels of A-Z bits from right-to-left
void draw_alpha_bitmaps(uint16 index, uint16 x, uint16 y, uint8 color) {
    uint16 temp = 0, pix = 0;

    for (uint8 i = 0; i < BITMAP_SIZE; i++) {
        temp = x;
        x += BITMAP_SIZE;
        pix = bitmaps_A_Z[index][i];
        while (pix > 0) {
            if (pix & 1) {
                vga_graphics_putpixel(x, y, color);
            }
            pix >>= 1;
            x--;
        }
        x = temp;
        y++;
    }
}

void draw_char(uint16 x, uint16 y, uint8 color, char ch) {
    if (ch >= '0' && ch <= '9') {
        draw_num_bitmaps(ch - '0', x, y, color);
    } else if (ch >= 'A' && ch <= 'Z') {
        draw_alpha_bitmaps((ch - '0') - 17, x, y, color);
    } else if (ch >= 'a' && ch <= 'z') {
        draw_alpha_bitmaps(((ch - 32) - '0') - 17, x, y, color);
    }
}

void draw_string(uint16 x, uint16 y, uint8 color, char *str) {
    uint32 index = 0;

    while (str[index]) {
        draw_char(x, y, color, str[index]);
        x += BITMAP_SIZE;
        index++;
    }
}
