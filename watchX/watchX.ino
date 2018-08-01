//
// watchX Firmware
//
extern "C"
{
  #include "millis.h"
  #undef millis

  void c_setup();
  void c_loop();

  millis_t millis_get()
  {
    return millis(); 
  }

  void usb_init()
  {
    USBDevice.attach();
  }
}

void setup()
{
  c_setup();
}

void loop()
{
  c_loop();
}

