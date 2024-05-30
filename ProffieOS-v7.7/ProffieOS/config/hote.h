#ifdef CONFIG_TOP
#include "proffieboard_v2_config.h"
#define NUM_BLADES 3
#define NUM_BUTTONS 2
#define VOLUME 1800
const unsigned int maxLedsPerStrip = 144;
#define CLASH_THRESHOLD_G 3.5
#define ENABLE_AUDIO
#define ENABLE_MOTION
#define ENABLE_WS2811
#define ENABLE_SD
#define COLOR_CHANGE_DIRECT
#define DISABLE_DIAGNOSTIC_COMMANDS
#define IDLE_OFF_TIME 60 * 5 * 1000
#define SAVE_STATE
#define FETT263_THRUST_ON
#define FETT263_TWIST_OFF
#define ORIENTATION_ROTATION 0,20,0
#endif

#ifndef CONTROLBOX_STYLE
#define ALIGNED_BLADES
#define CONTROLBOX_STYLE
#endif

#ifdef CONFIG_PROP
#include "../props/saber_fett263_buttons.h"
#endif

#ifdef CONFIG_PRESETS


#ifdef NOSUBBLADES
Preset presets[] = {
  { "SmoothGrey", "",
    StylePtr<Layers<
      Black,
      AlphaL<Gradient<Green,Red>,SmoothStep<Scale<NoisySoundLevel,Int<1000>,Int<34000>>,Int<-780>>>>>(),    
    ""},
  { "SmoothGrey", "",
    StylePtr<Layers<
      Black,
      AlphaL<Red,LinearSectionF<BladeAngle<>,Int<780>>>>>(),    
    ""},
  { "SmoothGrey", "",
    StylePtr<Layers<
      Black,
      AlphaL<Gradient<Green,Red>,SmoothStep<Scale<NoisySoundLevel,Int<1000>,Int<34000>>,Int<-780>>>>>(),    
    ""},
  { "SmoothGrey", "",
    StylePtr<Layers<
      Black,
      AlphaL<Gradient<Green,Red>,SmoothStep<Scale<NoisySoundLevel,Int<1000>,Int<34000>>,Int<-780>>>>>(),    
    ""},
  { "Battery", "",
    &style_charging,
    "Battery\nLevel"}
};

BladeConfig AlternatingBlades[] = {
 { 0, WS281XBladePtr<42, blade2Pin, Color8::GRB, PowerPINS<bladePowerPin4> >(),
  CONFIGARRAY(presets) },
};
#endif

#ifdef ALIGNED_BLADES
BladeConfig AlternatingBlades[] = {
 { 0, WS281XBladePtr<128, bladePin, Color8::GRB, PowerPINS<bladePowerPin2, bladePowerPin3> >(),
    SubBlade(0, 2, WS281XBladePtr<42, blade2Pin, Color8::GRB, PowerPINS<bladePowerPin4> >()),
    SubBladeReverse(3, 5, NULL),
    SubBlade(6, 8, NULL),
    SubBladeReverse(9, 11, NULL),
    SubBlade(12, 14, NULL),
    SubBladeReverse(15, 17, NULL),
    SubBlade(18, 20, NULL),
    SubBladeReverse(21, 23, NULL),
    SubBlade(24, 26, NULL),
    SubBladeReverse(27, 29, NULL),
    SubBlade(30, 32, NULL),
    SubBladeReverse(33, 35, NULL),
    SubBlade(36, 38, NULL),
    SubBladeReverse(39, 42, NULL),
  CONFIGARRAY(presets) },
};
#endif

#ifdef VERTICAL_BLADES
BladeConfig StrideBlades[] = {
 { 0, WS281XBladePtr<128, bladePin, Color8::GRB, PowerPINS<bladePowerPin2, bladePowerPin3> >(),
    SubBladeWithStride(0, 40, 3, WS281XBladePtr<42, blade2Pin, Color8::GRB, PowerPINS<bladePowerPin4> >()),
    SubBladeWithStride(1, 41, 3, NULL),
    SubBladeWithStride(2, 42, 3, NULL),
  CONFIGARRAY(presets) },
};
#endif

#ifdef FLIPPED_BLADES
BladeConfig Blades[] = {
 { 0, WS281XBladePtr<128, bladePin, Color8::GRB, PowerPINS<bladePowerPin2, bladePowerPin3> >(),
    SubBlade(0, 2, WS281XBladePtr<42, blade2Pin, Color8::GRB, PowerPINS<bladePowerPin4> >()),
    SubBlade(3, 5, NULL),
    SubBlade(6, 8, NULL),
    SubBlade(9, 11, NULL),
    SubBlade(12, 14, NULL),
    SubBlade(15, 17, NULL),
    SubBlade(18, 20, NULL),
    SubBlade(21, 23, NULL),
    SubBlade(24, 26, NULL),
    SubBlade(27, 29, NULL),
    SubBlade(30, 32, NULL),
    SubBlade(33, 35, NULL),
    SubBlade(36, 38, NULL),
    SubBlade(39, 42, NULL),
  CONFIGARRAY(presets) },
};
#endif
#endif

#ifdef CONFIG_BUTTONS
Button PowerButton(BUTTON_POWER, powerButtonPin, "pow");
Button AuxButton(BUTTON_AUX, auxPin, "aux");
#endif
