#ifdef CONFIG_TOP
#include "proffieboard_v2_config.h"
#define NUM_BLADES 1
#define NUM_BUTTONS 1
#define VOLUME 1800
const unsigned int maxLedsPerStrip = 144;
#define CLASH_THRESHOLD_G 3.5
#define ENABLE_AUDIO
#define ENABLE_MOTION
#define ENABLE_WS2811
#define ENABLE_SD
#define COLOR_CHANGE_DIRECT
#define DISABLE_DIAGNOSTIC_COMMANDS
#define MOTION_TIMEOUT 60 * 15 * 1000
#define IDLE_OFF_TIME 60 * 5 * 1000
#define NO_REPEAT_RANDOM
#define ORIENTATION_ROTATION 0,20,0
#define BC_THRUST_ON
#define BC_TWIST_OFF
#define BC_FORCE_PUSH
#endif

#ifdef CONFIG_PROP
#include "../props/saber_BC_buttons.h"
#endif

#ifdef CONFIG_PRESETS
Preset presets[] = {
  { "Spare Parts;common", "",
    StylePtr<Layers<
      ColorSelect<IntArg<STYLE_OPTION_ARG,0>,TrInstant,Mix<HoldPeakF<SwingSpeed<250>,Scale<SwingAcceleration<100>,Int<50>,Int<500>>,Scale<SwingAcceleration<>,Int<20000>,Int<10000>>>,RandomFlicker<StripesX<Int<14000>,Scale<HoldPeakF<SwingSpeed<200>,Scale<SwingAcceleration<100>,Int<50>,Int<300>>,Scale<SwingAcceleration<100>,Int<24000>,Int<16000>>>,Int<-4000>,Int<-400>>,RgbArg<BASE_COLOR_ARG,Blue>,RgbArg<BASE_COLOR_ARG,Blue>,Mix<Int<7710>,Black,RgbArg<BASE_COLOR_ARG,Blue>>,RgbArg<BASE_COLOR_ARG,Blue>,Mix<Int<19276>,Black,RgbArg<BASE_COLOR_ARG,Blue>>>,RgbArg<BASE_COLOR_ARG,Blue>>,RgbArg<BASE_COLOR_ARG,Blue>>,Mix<HoldPeakF<SwingSpeed<250>,Scale<SwingAcceleration<100>,Int<50>,Int<500>>,Scale<SwingAcceleration<>,Int<20000>,Int<10000>>>,RandomFlicker<StripesX<Int<24000>,Scale<HoldPeakF<SwingSpeed<200>,Scale<SwingAcceleration<100>,Int<50>,Int<300>>,Scale<SwingAcceleration<100>,Int<24000>,Int<16000>>>,Int<-1400>,Int<-100>>,RgbArg<BASE_COLOR_ARG,Blue>,RgbArg<BASE_COLOR_ARG,Blue>,Mix<Int<7710>,Black,RgbArg<BASE_COLOR_ARG,Blue>>,RgbArg<BASE_COLOR_ARG,Blue>,Mix<Int<19276>,Black,RgbArg<BASE_COLOR_ARG,Blue>>>,RgbArg<BASE_COLOR_ARG,Blue>>,RgbArg<BASE_COLOR_ARG,Blue>>>,
      MultiTransitionEffectL<TrWaveX<RgbArg<BLAST_COLOR_ARG,White>,Scale<EffectRandomF<EFFECT_BLAST>,Int<100>,Int<400>>,Int<100>,Scale<EffectRandomF<EFFECT_BLAST>,Int<100>,Int<400>>,Scale<EffectRandomF<EFFECT_BLAST>,Int<28000>,Int<8000>>>,EFFECT_BLAST>,
      Mix<IsLessThan<ClashImpactF<>,Int<26000>>,TransitionEffectL<TrConcat<TrInstant,AlphaL<RgbArg<CLASH_COLOR_ARG,White>,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-12000>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<10000>>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-10000>>>,Scale<ClashImpactF<>,Int<12000>,Int<60000>>>>,TrFadeX<Scale<ClashImpactF<>,Int<200>,Int<400>>>>,EFFECT_CLASH>,TransitionEffectL<TrWaveX<RgbArg<CLASH_COLOR_ARG,White>,Scale<ClashImpactF<>,Int<100>,Int<400>>,Int<100>,Scale<ClashImpactF<>,Int<100>,Int<400>>,Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-12000>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<10000>>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-10000>>>>,EFFECT_CLASH>>,
      LockupTrL<TransitionEffect<AlphaMixL<Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-12000>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<10000>>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-10000>>>,Scale<SwingSpeed<100>,Int<14000>,Int<18000>>>,BrownNoiseFlickerL<RgbArg<LOCKUP_COLOR_ARG,White>,Int<200>>,StripesX<Int<1800>,Scale<NoisySoundLevel,Int<-3500>,Int<-5000>>,Mix<Int<6425>,Black,RgbArg<LOCKUP_COLOR_ARG,White>>,RgbArg<LOCKUP_COLOR_ARG,White>,Mix<Int<12850>,Black,RgbArg<LOCKUP_COLOR_ARG,White>>>>,AlphaL<AudioFlicker<RgbArg<LOCKUP_COLOR_ARG,White>,Mix<Int<10280>,Black,RgbArg<LOCKUP_COLOR_ARG,White>>>,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-12000>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<10000>>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-10000>>>,Int<13000>>>,TrJoin<TrDelay<8000>,TrInstant>,TrFade<3000>,EFFECT_LOCKUP_BEGIN>,TrConcat<TrJoin<TrDelay<50>,TrInstant>,Mix<IsLessThan<ClashImpactF<>,Int<26000>>,RgbArg<LOCKUP_COLOR_ARG,White>,AlphaL<RgbArg<LOCKUP_COLOR_ARG,White>,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-12000>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<10000>>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-10000>>>,Scale<ClashImpactF<>,Int<20000>,Int<60000>>>>>,TrFade<300>>,TrConcat<TrInstant,RgbArg<LOCKUP_COLOR_ARG,White>,TrFade<400>>,SaberBase::LOCKUP_NORMAL>,
      ResponsiveLightningBlockL<Strobe<RgbArg<LB_COLOR_ARG,White>,AudioFlicker<RgbArg<LB_COLOR_ARG,White>,Blue>,50,1>,TrConcat<TrInstant,AlphaL<RgbArg<LB_COLOR_ARG,White>,Bump<Int<12000>,Int<18000>>>,TrFade<200>>,TrConcat<TrInstant,HumpFlickerL<AlphaL<RgbArg<LB_COLOR_ARG,White>,Int<16000>>,30>,TrSmoothFade<600>>>,
      LockupTrL<AlphaL<RandomPerLEDFlickerL<RgbArg<DRAG_COLOR_ARG,White>>,SmoothStep<IntArg<DRAG_SIZE_ARG,26000>,Int<3000>>>,TrConcat<TrJoin<TrDelay<4000>,TrWipeIn<200>>,AlphaL<BrownNoiseFlickerL<RgbArg<DRAG_COLOR_ARG,White>,Int<300>>,SmoothStep<IntArg<DRAG_SIZE_ARG,26000>,Int<3000>>>,TrFade<4000>>,TrFade<300>,SaberBase::LOCKUP_DRAG>,
      LockupTrL<AlphaL<Remap<Scale<RampF,Int<65536>,Int<0>>,StaticFire<Mix<TwistAngle<>,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>,RotateColorsX<Int<3000>,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>>>,Mix<TwistAngle<>,RotateColorsX<Int<3000>,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>>,RotateColorsX<Int<3000>,Mix<Int<12000>,Black,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>>>>,0,3,5,3000,10>>,SmoothStep<IntArg<MELT_SIZE_ARG,26000>,Int<4000>>>,TrConcat<TrWipeIn<100>,AlphaL<RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>,SmoothStep<IntArg<MELT_SIZE_ARG,26000>,Int<4000>>>,TrJoin<TrDelay<4000>,TrFade<300>>,AlphaL<Mix<TwistAngle<>,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>,RotateColorsX<Int<3000>,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>>>,SmoothStep<IntArg<MELT_SIZE_ARG,26000>,Int<4000>>>,TrFade<4000>>,TrWipe<200>,SaberBase::LOCKUP_MELT>,
      InOutTrL<TrWipeX<IgnitionTime<0>>,TrWipeInX<RetractionTime<>>>,
      TransitionEffectL<TrConcat<TrInstant,AlphaL<BrownNoiseFlickerL<RgbArg<BASE_COLOR_ARG,Rgb<100,100,150>>,Int<30>>,SmoothStep<Scale<SlowNoise<Int<2000>>,IntArg<PREON_SIZE_ARG,-2000>,Sum<IntArg<PREON_SIZE_ARG,-2000>,Int<4000>>>,Int<-2000>>>,TrDelayX<WavLen<EFFECT_PREON>>>,EFFECT_PREON>>>(),
    "Spare Parts"},
  { "TeensySF", "tracks/venus.wav",
    StyleNormalPtr<CYAN, WHITE, 300, 800>(), "cyan"},
  { "SmthJedi", "tracks/mars.wav",
    StylePtr<InOutSparkTip<EASYBLADE(BLUE, WHITE), 300, 800> >(), "blue"},
  { "SmthGrey", "tracks/mercury.wav",
    StyleFirePtr<RED, YELLOW>(), "fire"},
  { "SmthFuzz", "tracks/uranus.wav",
    StyleNormalPtr<RED, WHITE, 300, 800>(), "red"},
  { "RgueCmdr", "tracks/venus.wav",
    StyleFirePtr<BLUE, CYAN>(), "blue fire"},
  { "TthCrstl", "tracks/mars.wav",
    StylePtr<InOutHelper<EASYBLADE(OnSpark<GREEN>, WHITE), 300, 800> >(), "green"},
  { "TeensySF", "tracks/mercury.wav",
    StyleNormalPtr<WHITE, RED, 300, 800, RED>(), "white"},
  { "SmthJedi", "tracks/uranus.wav",
    StyleNormalPtr<AudioFlicker<YELLOW, WHITE>, BLUE, 300, 800>(), "yellow"},
  { "SmthGrey", "tracks/venus.wav",
    StylePtr<InOutSparkTip<EASYBLADE(MAGENTA, WHITE), 300, 800> >(), "magenta"},
  { "SmthFuzz", "tracks/mars.wav",
    StyleNormalPtr<Gradient<RED, BLUE>, Gradient<CYAN, YELLOW>, 300, 800>(), "gradient"},
  { "RgueCmdr", "tracks/mercury.wav",
    StyleRainbowPtr<300, 800>(), "rainbow"}
};
BladeConfig blades[] = {
 { 0, WS281XBladePtr<132, bladePin, Color8::GRB, PowerPINS<bladePowerPin2, bladePowerPin3> >(),
    CONFIGARRAY(presets) },
};
#endif

#ifdef CONFIG_BUTTONS
Button PowerButton(BUTTON_POWER, auxPin, "pow");
#endif
