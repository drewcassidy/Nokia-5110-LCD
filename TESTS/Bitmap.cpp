#include "Nokia5110.h"

uint8_t dog1[51] = {
    0x5E, 0x80, 0x00,
    0x7F, 0x80, 0x00,
    0x7F, 0xC0, 0x00,
    0xDB, 0xE0, 0x00,
    0xFF, 0xF0, 0x00,
    0xE7, 0xFC, 0x00,
    0xAD, 0xFF, 0xF8,
    0xC3, 0xFF, 0xC0,
    0xFF, 0xFF, 0xC0,
    0xFF, 0xFF, 0xC0,
    0xFF, 0xFF, 0xC0,
    0xFF, 0xFF, 0xC0,
    0xFF, 0xFF, 0x80,
    0x7F, 0xFF, 0x80,
    0x66, 0x19, 0x80,
    0x64, 0x11, 0x80,
    0x40, 0x01, 0x00
};

int main() {
    Nokia5110 lcd(NC, D0, D1, D2, D3);
    lcd.init(0x40, 4);
    lcd.clear_buffer();
    lcd.draw_bitmap(dog1, 5, 5, 24, 17);

    lcd.display();
}