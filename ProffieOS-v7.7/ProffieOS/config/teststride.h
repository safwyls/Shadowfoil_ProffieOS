// This is a sample configuration file.
// This saber has:
//   o Proffieboard V1 hardware.
//   o Two buttons
//   o An XP-E2 RGB LED star on LED 4-5-6
//   o A neopixel blade on LED 1-2-3 and neopixel data 1.
// If you have a saber similar to this one, make a copy and use the copy.
// This is also the default configuration file. Pre-programmed boards will
// use this configuration file.

#ifdef CONFIG_TOP
#include "proffieboard_v2_config.h"
#define NUM_BLADES 3
#define NUM_BUTTONS 2
#define VOLUME 1000
const unsigned int maxLedsPerStrip = 144;
#define CLASH_THRESHOLD_G 1.0
#define ENABLE_AUDIO
#define ENABLE_MOTION
#define ENABLE_WS2811
#define ENABLE_SD
#define SAVE_STATE
#define ENABLE_ALL_EDIT_OPTIONS
#endif

#ifdef CONFIG_PRESETS
Preset presets[] = {
  { "TeensySF", "tracks/venus.wav",
    StylePtr<StripesX<Int<293>, ChangeSlowly<Ifon<Int<5000>, Int<20>>, Int<5000>>, Black, Black, Mix<InOutFunc<1000,1000>, Rgb<0,0,30>, EasyBlade<DeepSkyBlue, White>>>>(),
    StylePtr<StripesX<Int<293>, ChangeSlowly<Ifon<Int<5000>, Int<20>>, Int<5000>>, Black, Black, Mix<InOutFunc<1000,1000>, Rgb<0,0,30>, EasyBlade<DeepSkyBlue, White>>>>(),
    StylePtr<StripesX<Int<293>, ChangeSlowly<Ifon<Int<5000>, Int<20>>, Int<5000>>, Black, Black, Mix<InOutFunc<1000,1000>, Rgb<0,0,30>, EasyBlade<DeepSkyBlue, White>>>>(),
     "test"}
};

BladeConfig blades[] = {
  { 0, SubBladeWithStride(0, 39, 3, WS281XBladePtr<42, bladePin, Color8::GRB, PowerPINS<bladePowerPin2, bladePowerPin3> >()),
    SubBladeWithStride(1, 40, 3, NULL),
    SubBladeWithStride(2, 41, 3, NULL),
    CONFIGARRAY(presets) },
};
#endif

#ifdef CONFIG_BUTTONS
Button PowerButton(BUTTON_POWER, powerButtonPin, "pow");
Button AuxButton(BUTTON_AUX, auxPin, "aux");
#endif
