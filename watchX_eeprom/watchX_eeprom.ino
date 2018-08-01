#include <alloca.h>
#include <avr/eeprom.h>
#include <avr/pgmspace.h>

const byte menu_default[] PROGMEM ={
  0x00,0x00,0x00,0x00,0x00,0x80,0xE0,0xF0,0xF8,0xFC,0xFC,0xFC,0x3E,0x1E,0x1E,0x1E,0x1E,0x1E,0x3E,0x7C,0xFC,0xFC,0xF8,0xF0,0xE0,0x80,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x01,0x01,0x01,0x01,0x00,0x00,0x00,0x00,0x80,0xC0,0xE0,0xF0,0xF8,0xFF,0xFF,0xFF,0x7F,0x3F,0x0F,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x7C,0x7E,0x7F,0x7F,0x7F,0x7F,0x0F,0x03,0x01,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x7E,0x7E,0x7E,0x7E,0x7E,0x7E,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
};

const byte menu_alarm[] PROGMEM ={
  0x00,0x00,0x00,0x70,0x78,0x3C,0x9E,0xCE,0x6F,0x67,0x37,0x33,0x1A,0x18,0x18,0xF8,0xD8,0x18,0x18,0x1A,0x33,0x37,0x67,0x6F,0xCE,0x9E,0x3C,0x78,0x70,0x00,0x00,0x00,
  0x00,0x00,0xF0,0x7C,0x0E,0x03,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x03,0x0E,0x7C,0xF0,0x00,0x00,
  0x00,0x07,0x7F,0xF2,0x82,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x82,0xF2,0x7F,0x07,0x00,
  0x00,0x00,0x00,0x01,0x03,0x06,0x0C,0x18,0x30,0x30,0x60,0x60,0xC0,0xC0,0xC0,0xF0,0xC0,0xC0,0xC0,0xC0,0x60,0x60,0x30,0x30,0x18,0x0C,0x06,0x03,0x01,0x00,0x00,0x00,
};

const byte menu_stopwatch[] PROGMEM ={
  0x00,0x00,0x60,0xF0,0xF8,0xF8,0xF0,0xE0,0x60,0x60,0xB0,0x30,0x18,0x18,0x18,0xF8,0xD8,0x18,0x18,0x18,0x30,0xB0,0x60,0x60,0xE0,0xF0,0xF8,0xF8,0xF0,0x60,0x00,0x00,
  0x00,0x00,0xF0,0x7C,0x0F,0x13,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x13,0x0F,0x7C,0xF0,0x00,0x00,
  0x00,0x07,0x7F,0xF2,0x82,0x40,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x07,0x0E,0x1C,0x38,0x70,0xE0,0xC0,0x80,0x00,0x00,0x40,0x82,0xF2,0x7F,0x07,0x00,
  0x00,0x00,0x00,0x01,0x03,0x06,0x0C,0x18,0x30,0x30,0x68,0x60,0xC0,0xC0,0xC0,0xF0,0xC0,0xC0,0xC0,0xC0,0x60,0x68,0x31,0x31,0x18,0x0C,0x06,0x03,0x01,0x00,0x00,0x00,
};

const byte menu_torch[] PROGMEM ={
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0xC0,0xE0,0xF0,0xF0,0xF0,0xF0,0xF0,0xF0,0xF0,0xF0,0xF0,0xF0,0xF0,0xF0,0xF0,0xF0,0xF0,0xF0,0xF0,0xF8,0xF8,0xFC,0xFC,0xFC,0xFC,0xFC,0xFC,0x00,0xB0,0x90,0x98,0x88,
  0x03,0x07,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x1F,0x1F,0x3F,0x3F,0x3F,0x3F,0x3F,0x3F,0x00,0x0D,0x09,0x19,0x11,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
};

const byte menu_settings[] PROGMEM ={
  0x00,0x00,0x00,0x00,0x40,0xE0,0xF0,0xE0,0xE0,0xC0,0x80,0xC0,0xC0,0xE0,0xFE,0xFE,0xFE,0xFE,0xE0,0xC0,0xC0,0x80,0xC0,0xE0,0xE0,0xF0,0xE0,0x40,0x00,0x00,0x00,0x00,
  0x00,0xC0,0xC0,0xC0,0xC0,0xE1,0xFB,0xFF,0x1F,0x07,0xE3,0xF1,0xF9,0x7C,0x3C,0x1C,0x1C,0x3C,0x7C,0xF9,0xF1,0xE3,0x07,0x1F,0xFF,0xFB,0xE1,0xC0,0xC0,0xC0,0xC0,0x00,
  0x00,0x03,0x03,0x03,0x03,0x87,0xDF,0xFF,0xF8,0xE0,0xC7,0x8F,0x9F,0x3E,0x3C,0x38,0x38,0x3C,0x3E,0x9F,0x8F,0xC7,0xE0,0xF8,0xFF,0xDF,0x87,0x03,0x03,0x03,0x03,0x00,
  0x00,0x00,0x00,0x00,0x02,0x07,0x0F,0x07,0x07,0x03,0x01,0x03,0x03,0x07,0x7F,0x7F,0x7F,0x7F,0x07,0x03,0x03,0x01,0x03,0x07,0x07,0x0F,0x07,0x02,0x00,0x00,0x00,0x00,
};

const byte menu_diagnostic[] PROGMEM ={
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xC0,0xF8,0xF0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0xC0,0xFC,0x3F,0x01,0x3F,0xFE,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x00,0x00,0x00,0x07,0xFF,0xE0,0x80,0xF8,0x3C,0x0C,0x0C,0x0C,0x0C,0x0C,0x0C,0x0C,0x0C,0x0C,0x0C,0x0C,0x0C,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x0F,0x0F,0x03,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
};

const byte menu_exit[] PROGMEM ={
  0x00,0x80,0xC0,0xC0,0xC0,0xC0,0xC0,0xC0,0xC0,0xC0,0xC0,0xC0,0xC0,0xC0,0xC0,0xC0,0xC0,0xC0,0xC0,0xC0,0xC0,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0xFF,0xFF,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x80,0x80,0x81,0x8F,0x8F,0x80,0x80,0x8C,0x9C,0xB8,0xF0,0xE0,0xC0,0x80,0x00,
  0x00,0xFF,0xFF,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x01,0x81,0xF1,0xF1,0x01,0x01,0x31,0x39,0x1D,0x0F,0x07,0x03,0x01,0x00,
  0x00,0x01,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
};

const byte selectbar_top[] PROGMEM ={
  0x1C,0x06,0x03,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x03,0x06,0x1C,
};

const byte selectbar_bottom[] PROGMEM ={
  0x38,0x60,0xC0,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0xC0,0x60,0x38,
};

typedef struct {
  char    *name;
  byte    *addr;
  uint16_t size;
} menu_t;

const menu_t menus[] = {
  { "selectbar_top"   , selectbar_top   , sizeof(selectbar_top)   },
  { "selectbar_bottom", selectbar_bottom, sizeof(selectbar_bottom)},
  { "menu_default"    , menu_default    , sizeof(menu_default)    },
  { "menu_alarm"      , menu_alarm      , sizeof(menu_alarm)      },
  { "menu_stopwatch"  , menu_stopwatch  , sizeof(menu_stopwatch)  },
  { "menu_torch"      , menu_torch      , sizeof(menu_torch)      },
  { "menu_settings"   , menu_settings   , sizeof(menu_settings)   },
  { "menu_diagnostic" , menu_diagnostic , sizeof(menu_diagnostic) },
  { "menu_exit"       , menu_exit       , sizeof(menu_exit)       },
};

void setup()
{
  Serial.begin(9600);
  while (!Serial) ;
  
  uint16_t addr = E2END + 1;
  uint16_t size = 0;
  for (uint8_t i = 0; i < sizeof(menus) / sizeof(menus[0]); ++i)
  {
    uint8_t len = menus[i].size;
    if (size < len)
      size = len;
    addr -= len;
  }
  uint8_t *temp = alloca(size);
  for (uint8_t i = 0; i < sizeof(menus) / sizeof(menus[0]); ++i)
  {
    size = menus[i].size;
    Serial.print("#define ");
    Serial.print(menus[i].name);
    Serial.print(" 0x");
    Serial.println(0x8000 | addr, HEX);
    Serial.print("#define ");
    Serial.print(menus[i].name);
    Serial.print("_size ");
    Serial.println(size, DEC);
    memcpy_P(temp, menus[i].addr, size);
    eeprom_busy_wait();
    eeprom_write_block(temp, addr, size);
    addr += size;
  }
}

void loop()
{
}
