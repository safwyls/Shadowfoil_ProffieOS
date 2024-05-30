#ifdef CONFIG_TOP
#include "proffieboard_v2_config.h"
#define NUM_BLADES 3
#define NUM_BUTTONS 2
#define VOLUME 1400
const unsigned int maxLedsPerStrip = 144; 
#define CLASH_THRESHOLD_G 3.5
#define SHARED_POWER_PINS
#define ENABLE_AUDIO
#define ENABLE_MOTION
#define ENABLE_WS2811
#define ENABLE_SD
//#define BLADE_DETECT_PIN aux2Pin
#define DISABLE_DIAGNOSTIC_COMMANDS
#define IDLE_OFF_TIME 60 * 5 * 1000
#define MOTION_TIMEOUT 60 * 1 * 1000
#define NO_REPEAT_RANDOM
#define BC_THRUST_ON
#define BC_TWIST_ON
#define BC_TWIST_OFF

#endif

#ifdef CONFIG_PROP
#include "../props/saber_BC_buttons.h"
#endif


#ifdef CONFIG_PRESETS

// Blades as follows
// 1: Crystal Chamber
// 2: Blade
// 3: Blaster LED

Preset saber [] = {
  { "StapleSword;common", "StapleSword/track/EzraTheme.wav",
      
      StylePtr<Layers<
        Stripes<5000,-2500,RgbArg<BASE_COLOR_ARG,Blue>,Mix<Int<16384>,Black,RgbArg<BASE_COLOR_ARG,Blue>>,RgbArg<BASE_COLOR_ARG,Blue>>,
        MultiTransitionEffectL<TrWaveX<RgbArg<BLAST_COLOR_ARG,White>,Scale<WavLen<>,Int<100>,Int<400>>,Int<100>,Scale<WavLen<>,Int<100>,Int<400>>,Int<0>>,EFFECT_BLAST>,
        TransitionEffectL<TrConcat<TrJoin<TrDelay<30>,TrInstant>,RgbArg<CLASH_COLOR_ARG,White>,TrFade<300>>,EFFECT_CLASH>,
        LockupTrL<Strobe<RgbArg<LB_COLOR_ARG,White>,AudioFlicker<RgbArg<LB_COLOR_ARG,White>,Blue>,50,1>,TrInstant,TrFade<1000>,SaberBase::LOCKUP_LIGHTNING_BLOCK>,
        InOutTrL<TrInstant,TrInstant,Pulsing<Black,RgbArg<BASE_COLOR_ARG,Blue>,8000>>>>(),StylePtr<Layers<
        Stripes<5000,-2500,RgbArg<BASE_COLOR_ARG,Blue>,Mix<Int<16384>,Black,RgbArg<BASE_COLOR_ARG,Blue>>,RgbArg<BASE_COLOR_ARG,Blue>>,
        MultiTransitionEffectL<TrWaveX<RgbArg<BLAST_COLOR_ARG,White>,Scale<WavLen<>,Int<100>,Int<400>>,Int<100>,Scale<WavLen<>,Int<100>,Int<400>>,Int<0>>,EFFECT_BLAST>,
        TransitionEffectL<TrConcat<TrJoin<TrDelay<30>,TrInstant>,RgbArg<CLASH_COLOR_ARG,White>,TrFade<300>>,EFFECT_CLASH>,
        LockupTrL<Strobe<RgbArg<LB_COLOR_ARG,White>,AudioFlicker<RgbArg<LB_COLOR_ARG,White>,Blue>,50,1>,TrInstant,TrFade<1000>,SaberBase::LOCKUP_LIGHTNING_BLOCK>,
        InOutTrL<TrInstant,TrInstant,Pulsing<Black,RgbArg<BASE_COLOR_ARG,Blue>,8000>>>>(),
      StylePtr<Black>(),
      "StapleSword"
  },
  { "SpareParts;common", "",
    StylePtr<Layers<
      Stripes<5000,-2500,RgbArg<BASE_COLOR_ARG,Blue>,Mix<Int<16384>,Black,RgbArg<BASE_COLOR_ARG,Blue>>,RgbArg<BASE_COLOR_ARG,Blue>>,
      MultiTransitionEffectL<TrWaveX<RgbArg<BLAST_COLOR_ARG,White>,Scale<WavLen<>,Int<100>,Int<400>>,Int<100>,Scale<WavLen<>,Int<100>,Int<400>>,Int<0>>,EFFECT_BLAST>,
      TransitionEffectL<TrConcat<TrJoin<TrDelay<30>,TrInstant>,RgbArg<CLASH_COLOR_ARG,White>,TrFade<300>>,EFFECT_CLASH>,
      LockupTrL<Strobe<RgbArg<LB_COLOR_ARG,White>,AudioFlicker<RgbArg<LB_COLOR_ARG,White>,Blue>,50,1>,TrInstant,TrFade<1000>,SaberBase::LOCKUP_LIGHTNING_BLOCK>,
      InOutTrL<TrInstant,TrInstant,Pulsing<Black,RgbArg<BASE_COLOR_ARG,Blue>,8000>>>>(),    
    StylePtr<Layers<
        Stripes<5000,-2500,RgbArg<BASE_COLOR_ARG,Blue>,Mix<Int<16384>,Black,RgbArg<BASE_COLOR_ARG,Blue>>,RgbArg<BASE_COLOR_ARG,Blue>>,
        MultiTransitionEffectL<TrWaveX<RgbArg<BLAST_COLOR_ARG,White>,Scale<WavLen<>,Int<100>,Int<400>>,Int<100>,Scale<WavLen<>,Int<100>,Int<400>>,Int<0>>,EFFECT_BLAST>,
        TransitionEffectL<TrConcat<TrJoin<TrDelay<30>,TrInstant>,RgbArg<CLASH_COLOR_ARG,White>,TrFade<300>>,EFFECT_CLASH>,
        LockupTrL<Strobe<RgbArg<LB_COLOR_ARG,White>,AudioFlicker<RgbArg<LB_COLOR_ARG,White>,Blue>,50,1>,TrInstant,TrFade<1000>,SaberBase::LOCKUP_LIGHTNING_BLOCK>,
        InOutTrL<TrInstant,TrInstant,Pulsing<Black,RgbArg<BASE_COLOR_ARG,Blue>,8000>>>>(),
    StylePtr<Black>(),
    "SpareParts"
  }
};

BladeConfig blades[] = {
  { 0,
    SubBlade(0, 1, WS281XBladePtr<144, bladePin, Color8::GRB, PowerPINS<bladePowerPin2, bladePowerPin3, bladePowerPin5> >()),
    SubBlade(2, 143, NULL),
    WS281XBladePtr<1, blade2Pin, Color8::GRB, PowerPINS<bladePowerPin2, bladePowerPin3> >(),
  CONFIGARRAY(saber),
  "SaberSave"}
};
#endif

#ifdef CONFIG_BUTTONS
Button PowerButton(BUTTON_POWER, powerButtonPin, "pow");
Button AuxButton(BUTTON_AUX, auxPin, "aux");
#endif
