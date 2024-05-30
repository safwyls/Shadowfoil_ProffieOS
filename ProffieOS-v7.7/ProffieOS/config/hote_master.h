#ifdef CONFIG_TOP
#include "proffieboard_v2_config.h"
#define NUM_BLADES 7
#define NUM_BUTTONS 2
#define VOLUME 1500
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
#define BC_THRUST_ON
#define BC_TWIST_OFF
#define BC_FORCE_PUSH
#define SHARED_POWER_PINS
#endif

#ifdef CONFIG_PROP
#include "../props/saber_BC_buttons.h"
#endif

#ifdef CONFIG_PRESETS
Preset presets[] = {
   { "Mara Emperors Hand;common", "tracks/mara.wav",
      //Plasma Gate
      StylePtr<Layers<
        Mix<HoldPeakF<SwingSpeed<250>,Scale<SwingAcceleration<100>,Int<50>,Int<500>>,Scale<SwingAcceleration<>,Int<20000>,Int<10000>>>,RandomFlicker<StripesX<Int<15000>,Scale<HoldPeakF<SwingSpeed<200>,Scale<SwingAcceleration<100>,Int<50>,Int<300>>,Scale<SwingAcceleration<100>,Int<24000>,Int<16000>>>,Int<-3200>,Int<-200>>,RgbArg<BASE_COLOR_ARG,Rgb<115,15,240>>,RgbArg<BASE_COLOR_ARG,Rgb<115,15,240>>,Mix<Int<7710>,Black,RgbArg<BASE_COLOR_ARG,Rgb<115,15,240>>>,RgbArg<BASE_COLOR_ARG,Rgb<115,15,240>>,Mix<Int<19276>,Black,RgbArg<BASE_COLOR_ARG,Rgb<115,15,240>>>>,RgbArg<BASE_COLOR_ARG,Rgb<115,15,240>>>,RgbArg<BASE_COLOR_ARG,Rgb<115,15,240>>>,
        MultiTransitionEffectL<TrWaveX<RgbArg<BLAST_COLOR_ARG,White>,Scale<WavLen<>,Int<100>,Int<400>>,Int<100>,Scale<WavLen<>,Int<100>,Int<400>>,Int<0>>,EFFECT_BLAST>,
        TransitionEffectL<TrConcat<TrJoin<TrDelay<30>,TrInstant>,RgbArg<CLASH_COLOR_ARG,White>,TrFade<300>>,EFFECT_CLASH>,
        LockupTrL<Strobe<RgbArg<LB_COLOR_ARG,White>,AudioFlicker<RgbArg<LB_COLOR_ARG,White>,Blue>,50,1>,TrInstant,TrFade<1000>,SaberBase::LOCKUP_LIGHTNING_BLOCK>,
        InOutTrL<TrInstant,TrInstant,Pulsing<Mix<Int<8192>,Black,RgbArg<OFF_COLOR_ARG,Rgb<115,15,240>>>,RgbArg<OFF_COLOR_ARG,Rgb<115,15,240>>,8000>>>>(),
      //Blue Blinky
      StylePtr<Layers<
         TransitionLoop<RotateColorsX<Variation,Blue>,TrConcat<TrBoing<1200,2>,RotateColorsX<Variation,Rgb<0,0,10>>,TrFade<1200>>>,
         InOutTrL<TrInstant,TrInstant,TransitionLoop<RotateColorsX<Variation,Blue>,TrConcat<TrBoing<3000,9>,Black,TrDelay<2000>>>>>>(),
      //Red Blinky
      StylePtr<Layers<
         RotateColorsX<Variation,Red>,
         TransitionEffectL<TrConcat<TrInstant,White,TrFade<400>>,EFFECT_BLAST>,
         LockupTrL<AudioFlickerL<White>,TrInstant,TrFade<500>,SaberBase::LOCKUP_NORMAL>,
         LockupTrL<AudioFlickerL<White>,TrInstant,TrFade<500>,SaberBase::LOCKUP_LIGHTNING_BLOCK>,
         TransitionEffectL<TrConcat<TrInstant,White,TrFade<400>>,EFFECT_CLASH>,
         InOutTrL<TrInstant,TrInstant,TransitionLoop<Black,TrConcat<TrDelay<3000>,RotateColorsX<Variation,Red>,TrBoing<2000,5>>>>>>(),
      //MainBlade
      StylePtr<Layers<
         Mix<HoldPeakF<SwingSpeed<250>,Scale<SwingAcceleration<100>,Int<50>,Int<500>>,Scale<SwingAcceleration<>,Int<20000>,Int<10000>>>,RandomFlicker<StripesX<Int<15000>,Scale<HoldPeakF<SwingSpeed<200>,Scale<SwingAcceleration<100>,Int<50>,Int<300>>,Scale<SwingAcceleration<100>,Int<24000>,Int<16000>>>,Int<-3200>,Int<-200>>,RgbArg<BASE_COLOR_ARG,Rgb<115,15,240>>,RgbArg<BASE_COLOR_ARG,Rgb<115,15,240>>,Mix<Int<7710>,Black,RgbArg<BASE_COLOR_ARG,Rgb<115,15,240>>>,RgbArg<BASE_COLOR_ARG,Rgb<115,15,240>>,Mix<Int<19276>,Black,RgbArg<BASE_COLOR_ARG,Rgb<115,15,240>>>>,RgbArg<BASE_COLOR_ARG,Rgb<115,15,240>>>,RgbArg<BASE_COLOR_ARG,Rgb<115,15,240>>>,
         MultiTransitionEffectL<TrWaveX<RgbArg<BLAST_COLOR_ARG,White>,Scale<EffectPosition<EFFECT_BLAST>,Int<100>,Int<400>>,Int<100>,Scale<EffectPosition<EFFECT_BLAST>,Int<100>,Int<400>>,Scale<EffectPosition<EFFECT_BLAST>,Int<28000>,Int<8000>>>,EFFECT_BLAST>,
         Mix<IsLessThan<ClashImpactF<>,Int<26000>>,TransitionEffectL<TrConcat<TrInstant,AlphaL<RgbArg<CLASH_COLOR_ARG,White>,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-12000>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<10000>>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-10000>>>,Scale<ClashImpactF<>,Int<12000>,Int<60000>>>>,TrFadeX<Scale<ClashImpactF<>,Int<200>,Int<400>>>>,EFFECT_CLASH>,TransitionEffectL<TrWaveX<RgbArg<CLASH_COLOR_ARG,White>,Scale<ClashImpactF<>,Int<100>,Int<400>>,Int<100>,Scale<ClashImpactF<>,Int<100>,Int<400>>,Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-12000>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<10000>>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-10000>>>>,EFFECT_CLASH>>,
         LockupTrL<TransitionEffect<AlphaMixL<Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-12000>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<10000>>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-10000>>>,Scale<SwingSpeed<100>,Int<14000>,Int<18000>>>,BrownNoiseFlickerL<RgbArg<LOCKUP_COLOR_ARG,White>,Int<200>>,StripesX<Int<1800>,Scale<NoisySoundLevel,Int<-3500>,Int<-5000>>,Mix<Int<6425>,Black,RgbArg<LOCKUP_COLOR_ARG,White>>,RgbArg<LOCKUP_COLOR_ARG,White>,Mix<Int<12850>,Black,RgbArg<LOCKUP_COLOR_ARG,White>>>>,AlphaL<AudioFlicker<RgbArg<LOCKUP_COLOR_ARG,White>,Mix<Int<10280>,Black,RgbArg<LOCKUP_COLOR_ARG,White>>>,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-12000>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<10000>>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-10000>>>,Int<13000>>>,TrJoin<TrDelay<8000>,TrInstant>,TrFade<3000>,EFFECT_LOCKUP_BEGIN>,TrConcat<TrJoin<TrDelay<50>,TrInstant>,Mix<IsLessThan<ClashImpactF<>,Int<26000>>,RgbArg<LOCKUP_COLOR_ARG,White>,AlphaL<RgbArg<LOCKUP_COLOR_ARG,White>,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-12000>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<10000>>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-10000>>>,Scale<ClashImpactF<>,Int<20000>,Int<60000>>>>>,TrFade<300>>,TrConcat<TrInstant,RgbArg<LOCKUP_COLOR_ARG,White>,TrFade<400>>,SaberBase::LOCKUP_NORMAL>,
         ResponsiveLightningBlockL<Strobe<RgbArg<LB_COLOR_ARG,White>,AudioFlicker<RgbArg<LB_COLOR_ARG,White>,Blue>,50,1>,TrConcat<TrInstant,AlphaL<RgbArg<LB_COLOR_ARG,White>,Bump<Int<12000>,Int<18000>>>,TrFade<200>>,TrConcat<TrInstant,HumpFlickerL<AlphaL<RgbArg<LB_COLOR_ARG,White>,Int<16000>>,30>,TrSmoothFade<600>>>,
         LockupTrL<AlphaL<RandomPerLEDFlickerL<RgbArg<DRAG_COLOR_ARG,White>>,SmoothStep<IntArg<DRAG_SIZE_ARG,28000>,Int<3000>>>,TrConcat<TrJoin<TrDelay<4000>,TrWipeIn<200>>,AlphaL<BrownNoiseFlickerL<RgbArg<DRAG_COLOR_ARG,White>,Int<300>>,SmoothStep<IntArg<DRAG_SIZE_ARG,28000>,Int<3000>>>,TrFade<4000>>,TrFade<300>,SaberBase::LOCKUP_DRAG>,
         LockupTrL<AlphaL<Remap<Scale<RampF,Int<65536>,Int<0>>,StaticFire<Mix<TwistAngle<>,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>,RotateColorsX<Int<3000>,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>>>,Mix<TwistAngle<>,RotateColorsX<Int<3000>,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>>,RotateColorsX<Int<3000>,Mix<Int<12000>,Black,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>>>>,0,3,5,3000,10>>,SmoothStep<IntArg<MELT_SIZE_ARG,28000>,Int<4000>>>,TrConcat<TrWipeIn<100>,AlphaL<RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>,SmoothStep<IntArg<MELT_SIZE_ARG,28000>,Int<4000>>>,TrJoin<TrDelay<4000>,TrFade<300>>,AlphaL<Mix<TwistAngle<>,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>,RotateColorsX<Int<3000>,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>>>,SmoothStep<IntArg<MELT_SIZE_ARG,28000>,Int<4000>>>,TrFade<4000>>,TrWipe<200>,SaberBase::LOCKUP_MELT>,
         InOutTrL<TrWipeX<IgnitionTime<>>,TrWipeInX<RetractionTime<>>>>>(),
      //CC1
      StylePtr<Layers<
        Mix<HoldPeakF<SwingSpeed<250>,Scale<SwingAcceleration<100>,Int<50>,Int<500>>,Scale<SwingAcceleration<>,Int<20000>,Int<10000>>>,RandomFlicker<StripesX<Int<15000>,Scale<HoldPeakF<SwingSpeed<200>,Scale<SwingAcceleration<100>,Int<50>,Int<300>>,Scale<SwingAcceleration<100>,Int<24000>,Int<16000>>>,Int<-3200>,Int<-200>>,RgbArg<BASE_COLOR_ARG,Rgb<115,15,240>>,RgbArg<BASE_COLOR_ARG,Rgb<115,15,240>>,Mix<Int<7710>,Black,RgbArg<BASE_COLOR_ARG,Rgb<115,15,240>>>,RgbArg<BASE_COLOR_ARG,Rgb<115,15,240>>,Mix<Int<19276>,Black,RgbArg<BASE_COLOR_ARG,Rgb<115,15,240>>>>,RgbArg<BASE_COLOR_ARG,Rgb<115,15,240>>>,RgbArg<BASE_COLOR_ARG,Rgb<115,15,240>>>,
        MultiTransitionEffectL<TrWaveX<RgbArg<BLAST_COLOR_ARG,White>,Scale<WavLen<>,Int<100>,Int<400>>,Int<100>,Scale<WavLen<>,Int<100>,Int<400>>,Int<0>>,EFFECT_BLAST>,
        TransitionEffectL<TrConcat<TrJoin<TrDelay<30>,TrInstant>,RgbArg<CLASH_COLOR_ARG,White>,TrFade<300>>,EFFECT_CLASH>,
        LockupTrL<Strobe<RgbArg<LB_COLOR_ARG,White>,AudioFlicker<RgbArg<LB_COLOR_ARG,White>,Blue>,50,1>,TrInstant,TrFade<1000>,SaberBase::LOCKUP_LIGHTNING_BLOCK>,
        InOutTrL<TrInstant,TrInstant,Pulsing<Mix<Int<8192>,Black,RgbArg<OFF_COLOR_ARG,Rgb<115,15,240>>>,RgbArg<OFF_COLOR_ARG,Rgb<115,15,240>>,8000>>>>(),
      //CC2
      StylePtr<Layers<
        Mix<HoldPeakF<SwingSpeed<250>,Scale<SwingAcceleration<100>,Int<50>,Int<500>>,Scale<SwingAcceleration<>,Int<20000>,Int<10000>>>,RandomFlicker<StripesX<Int<15000>,Scale<HoldPeakF<SwingSpeed<200>,Scale<SwingAcceleration<100>,Int<50>,Int<300>>,Scale<SwingAcceleration<100>,Int<24000>,Int<16000>>>,Int<-3200>,Int<-200>>,RgbArg<BASE_COLOR_ARG,Rgb<115,15,240>>,RgbArg<BASE_COLOR_ARG,Rgb<115,15,240>>,Mix<Int<7710>,Black,RgbArg<BASE_COLOR_ARG,Rgb<115,15,240>>>,RgbArg<BASE_COLOR_ARG,Rgb<115,15,240>>,Mix<Int<19276>,Black,RgbArg<BASE_COLOR_ARG,Rgb<115,15,240>>>>,RgbArg<BASE_COLOR_ARG,Rgb<115,15,240>>>,RgbArg<BASE_COLOR_ARG,Rgb<115,15,240>>>,
        MultiTransitionEffectL<TrWaveX<RgbArg<BLAST_COLOR_ARG,White>,Scale<WavLen<>,Int<100>,Int<400>>,Int<100>,Scale<WavLen<>,Int<100>,Int<400>>,Int<0>>,EFFECT_BLAST>,
        TransitionEffectL<TrConcat<TrJoin<TrDelay<30>,TrInstant>,RgbArg<CLASH_COLOR_ARG,White>,TrFade<300>>,EFFECT_CLASH>,
        LockupTrL<Strobe<RgbArg<LB_COLOR_ARG,White>,AudioFlicker<RgbArg<LB_COLOR_ARG,White>,Blue>,50,1>,TrInstant,TrFade<1000>,SaberBase::LOCKUP_LIGHTNING_BLOCK>,
        InOutTrL<TrInstant,TrInstant,Pulsing<Mix<Int<8192>,Black,RgbArg<OFF_COLOR_ARG,Rgb<115,15,240>>>,RgbArg<OFF_COLOR_ARG,Rgb<115,15,240>>,8000>>>>(),
      //Battery Strip
      StylePtr<Layers<
        TransitionLoop<Black,TrConcat<TrWipeIn<200>,RgbArg<BASE_COLOR_ARG,Red>,TrWipeIn<200>>>,
        InOutTrL<TrColorCycleX<IgnitionTime<0>>,TrColorCycleX<RetractionTime<>>,TransitionLoop<Black,TrConcat<TrCenterWipe<500>,Mix<BatteryLevel,Red,Green>,TrCenterWipe<500>>>>>>(),
      "Hand of the Emperor"
   },
   { "The Emperors hand;common", "tracks/mara.wav",
      //Plasma Gate
      StylePtr<Layers<
        Mix<HoldPeakF<SwingSpeed<250>,Scale<SwingAcceleration<100>,Int<50>,Int<500>>,Scale<SwingAcceleration<>,Int<20000>,Int<10000>>>,RandomFlicker<StripesX<Int<15000>,Scale<HoldPeakF<SwingSpeed<200>,Scale<SwingAcceleration<100>,Int<50>,Int<300>>,Scale<SwingAcceleration<100>,Int<24000>,Int<16000>>>,Int<-3200>,Int<-200>>,RgbArg<BASE_COLOR_ARG,Rgb<115,15,240>>,RgbArg<BASE_COLOR_ARG,Rgb<115,15,240>>,Mix<Int<7710>,Black,RgbArg<BASE_COLOR_ARG,Rgb<115,15,240>>>,RgbArg<BASE_COLOR_ARG,Rgb<115,15,240>>,Mix<Int<19276>,Black,RgbArg<BASE_COLOR_ARG,Rgb<115,15,240>>>>,RgbArg<BASE_COLOR_ARG,Rgb<115,15,240>>>,RgbArg<BASE_COLOR_ARG,Rgb<115,15,240>>>,
        MultiTransitionEffectL<TrWaveX<RgbArg<BLAST_COLOR_ARG,White>,Scale<WavLen<>,Int<100>,Int<400>>,Int<100>,Scale<WavLen<>,Int<100>,Int<400>>,Int<0>>,EFFECT_BLAST>,
        TransitionEffectL<TrConcat<TrJoin<TrDelay<30>,TrInstant>,RgbArg<CLASH_COLOR_ARG,White>,TrFade<300>>,EFFECT_CLASH>,
        LockupTrL<Strobe<RgbArg<LB_COLOR_ARG,White>,AudioFlicker<RgbArg<LB_COLOR_ARG,White>,Blue>,50,1>,TrInstant,TrFade<1000>,SaberBase::LOCKUP_LIGHTNING_BLOCK>,
        InOutTrL<TrInstant,TrInstant,Pulsing<Mix<Int<8192>,Black,RgbArg<OFF_COLOR_ARG,Rgb<115,15,240>>>,RgbArg<OFF_COLOR_ARG,Rgb<115,15,240>>,8000>>>>(),
      //Blue Blinky
      StylePtr<Layers<
         TransitionLoop<RotateColorsX<Variation,Blue>,TrConcat<TrBoing<1200,2>,RotateColorsX<Variation,Rgb<0,0,10>>,TrFade<1200>>>,
         InOutTrL<TrInstant,TrInstant,TransitionLoop<RotateColorsX<Variation,Blue>,TrConcat<TrBoing<3000,9>,Black,TrDelay<2000>>>>>>(),
      //Red Blinky
      StylePtr<Layers<
         RotateColorsX<Variation,Red>,
         TransitionEffectL<TrConcat<TrInstant,White,TrFade<400>>,EFFECT_BLAST>,
         LockupTrL<AudioFlickerL<White>,TrInstant,TrFade<500>,SaberBase::LOCKUP_NORMAL>,
         LockupTrL<AudioFlickerL<White>,TrInstant,TrFade<500>,SaberBase::LOCKUP_LIGHTNING_BLOCK>,
         TransitionEffectL<TrConcat<TrInstant,White,TrFade<400>>,EFFECT_CLASH>,
         InOutTrL<TrInstant,TrInstant,TransitionLoop<Black,TrConcat<TrDelay<3000>,RotateColorsX<Variation,Red>,TrBoing<2000,5>>>>>>(),
      //MainBlade
      StylePtr<Layers<
         Mix<HoldPeakF<SwingSpeed<250>,Scale<SwingAcceleration<100>,Int<50>,Int<500>>,Scale<SwingAcceleration<>,Int<20000>,Int<10000>>>,RandomFlicker<StripesX<Int<15000>,Scale<HoldPeakF<SwingSpeed<200>,Scale<SwingAcceleration<100>,Int<50>,Int<300>>,Scale<SwingAcceleration<100>,Int<24000>,Int<16000>>>,Int<-3200>,Int<-200>>,RgbArg<BASE_COLOR_ARG,Rgb<115,15,240>>,RgbArg<BASE_COLOR_ARG,Rgb<115,15,240>>,Mix<Int<7710>,Black,RgbArg<BASE_COLOR_ARG,Rgb<115,15,240>>>,RgbArg<BASE_COLOR_ARG,Rgb<115,15,240>>,Mix<Int<19276>,Black,RgbArg<BASE_COLOR_ARG,Rgb<115,15,240>>>>,RgbArg<BASE_COLOR_ARG,Rgb<115,15,240>>>,RgbArg<BASE_COLOR_ARG,Rgb<115,15,240>>>,
         MultiTransitionEffectL<TrWaveX<RgbArg<BLAST_COLOR_ARG,White>,Scale<EffectPosition<EFFECT_BLAST>,Int<100>,Int<400>>,Int<100>,Scale<EffectPosition<EFFECT_BLAST>,Int<100>,Int<400>>,Scale<EffectPosition<EFFECT_BLAST>,Int<28000>,Int<8000>>>,EFFECT_BLAST>,
         Mix<IsLessThan<ClashImpactF<>,Int<26000>>,TransitionEffectL<TrConcat<TrInstant,AlphaL<RgbArg<CLASH_COLOR_ARG,White>,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-12000>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<10000>>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-10000>>>,Scale<ClashImpactF<>,Int<12000>,Int<60000>>>>,TrFadeX<Scale<ClashImpactF<>,Int<200>,Int<400>>>>,EFFECT_CLASH>,TransitionEffectL<TrWaveX<RgbArg<CLASH_COLOR_ARG,White>,Scale<ClashImpactF<>,Int<100>,Int<400>>,Int<100>,Scale<ClashImpactF<>,Int<100>,Int<400>>,Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-12000>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<10000>>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-10000>>>>,EFFECT_CLASH>>,
         LockupTrL<TransitionEffect<AlphaMixL<Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-12000>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<10000>>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-10000>>>,Scale<SwingSpeed<100>,Int<14000>,Int<18000>>>,BrownNoiseFlickerL<RgbArg<LOCKUP_COLOR_ARG,White>,Int<200>>,StripesX<Int<1800>,Scale<NoisySoundLevel,Int<-3500>,Int<-5000>>,Mix<Int<6425>,Black,RgbArg<LOCKUP_COLOR_ARG,White>>,RgbArg<LOCKUP_COLOR_ARG,White>,Mix<Int<12850>,Black,RgbArg<LOCKUP_COLOR_ARG,White>>>>,AlphaL<AudioFlicker<RgbArg<LOCKUP_COLOR_ARG,White>,Mix<Int<10280>,Black,RgbArg<LOCKUP_COLOR_ARG,White>>>,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-12000>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<10000>>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-10000>>>,Int<13000>>>,TrJoin<TrDelay<8000>,TrInstant>,TrFade<3000>,EFFECT_LOCKUP_BEGIN>,TrConcat<TrJoin<TrDelay<50>,TrInstant>,Mix<IsLessThan<ClashImpactF<>,Int<26000>>,RgbArg<LOCKUP_COLOR_ARG,White>,AlphaL<RgbArg<LOCKUP_COLOR_ARG,White>,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-12000>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<10000>>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-10000>>>,Scale<ClashImpactF<>,Int<20000>,Int<60000>>>>>,TrFade<300>>,TrConcat<TrInstant,RgbArg<LOCKUP_COLOR_ARG,White>,TrFade<400>>,SaberBase::LOCKUP_NORMAL>,
         ResponsiveLightningBlockL<Strobe<RgbArg<LB_COLOR_ARG,White>,AudioFlicker<RgbArg<LB_COLOR_ARG,White>,Blue>,50,1>,TrConcat<TrInstant,AlphaL<RgbArg<LB_COLOR_ARG,White>,Bump<Int<12000>,Int<18000>>>,TrFade<200>>,TrConcat<TrInstant,HumpFlickerL<AlphaL<RgbArg<LB_COLOR_ARG,White>,Int<16000>>,30>,TrSmoothFade<600>>>,
         LockupTrL<AlphaL<RandomPerLEDFlickerL<RgbArg<DRAG_COLOR_ARG,White>>,SmoothStep<IntArg<DRAG_SIZE_ARG,28000>,Int<3000>>>,TrConcat<TrJoin<TrDelay<4000>,TrWipeIn<200>>,AlphaL<BrownNoiseFlickerL<RgbArg<DRAG_COLOR_ARG,White>,Int<300>>,SmoothStep<IntArg<DRAG_SIZE_ARG,28000>,Int<3000>>>,TrFade<4000>>,TrFade<300>,SaberBase::LOCKUP_DRAG>,
         LockupTrL<AlphaL<Remap<Scale<RampF,Int<65536>,Int<0>>,StaticFire<Mix<TwistAngle<>,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>,RotateColorsX<Int<3000>,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>>>,Mix<TwistAngle<>,RotateColorsX<Int<3000>,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>>,RotateColorsX<Int<3000>,Mix<Int<12000>,Black,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>>>>,0,3,5,3000,10>>,SmoothStep<IntArg<MELT_SIZE_ARG,28000>,Int<4000>>>,TrConcat<TrWipeIn<100>,AlphaL<RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>,SmoothStep<IntArg<MELT_SIZE_ARG,28000>,Int<4000>>>,TrJoin<TrDelay<4000>,TrFade<300>>,AlphaL<Mix<TwistAngle<>,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>,RotateColorsX<Int<3000>,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>>>,SmoothStep<IntArg<MELT_SIZE_ARG,28000>,Int<4000>>>,TrFade<4000>>,TrWipe<200>,SaberBase::LOCKUP_MELT>,
         InOutTrL<TrWipeX<IgnitionTime<>>,TrWipeInX<RetractionTime<>>>>>(),
      //CC1
      StylePtr<Layers<
        Mix<HoldPeakF<SwingSpeed<250>,Scale<SwingAcceleration<100>,Int<50>,Int<500>>,Scale<SwingAcceleration<>,Int<20000>,Int<10000>>>,RandomFlicker<StripesX<Int<15000>,Scale<HoldPeakF<SwingSpeed<200>,Scale<SwingAcceleration<100>,Int<50>,Int<300>>,Scale<SwingAcceleration<100>,Int<24000>,Int<16000>>>,Int<-3200>,Int<-200>>,RgbArg<BASE_COLOR_ARG,Rgb<115,15,240>>,RgbArg<BASE_COLOR_ARG,Rgb<115,15,240>>,Mix<Int<7710>,Black,RgbArg<BASE_COLOR_ARG,Rgb<115,15,240>>>,RgbArg<BASE_COLOR_ARG,Rgb<115,15,240>>,Mix<Int<19276>,Black,RgbArg<BASE_COLOR_ARG,Rgb<115,15,240>>>>,RgbArg<BASE_COLOR_ARG,Rgb<115,15,240>>>,RgbArg<BASE_COLOR_ARG,Rgb<115,15,240>>>,
        MultiTransitionEffectL<TrWaveX<RgbArg<BLAST_COLOR_ARG,White>,Scale<WavLen<>,Int<100>,Int<400>>,Int<100>,Scale<WavLen<>,Int<100>,Int<400>>,Int<0>>,EFFECT_BLAST>,
        TransitionEffectL<TrConcat<TrJoin<TrDelay<30>,TrInstant>,RgbArg<CLASH_COLOR_ARG,White>,TrFade<300>>,EFFECT_CLASH>,
        LockupTrL<Strobe<RgbArg<LB_COLOR_ARG,White>,AudioFlicker<RgbArg<LB_COLOR_ARG,White>,Blue>,50,1>,TrInstant,TrFade<1000>,SaberBase::LOCKUP_LIGHTNING_BLOCK>,
        InOutTrL<TrInstant,TrInstant,Pulsing<Mix<Int<8192>,Black,RgbArg<OFF_COLOR_ARG,Rgb<115,15,240>>>,RgbArg<OFF_COLOR_ARG,Rgb<115,15,240>>,8000>>>>(),
      //CC2
      StylePtr<Layers<
        Mix<HoldPeakF<SwingSpeed<250>,Scale<SwingAcceleration<100>,Int<50>,Int<500>>,Scale<SwingAcceleration<>,Int<20000>,Int<10000>>>,RandomFlicker<StripesX<Int<15000>,Scale<HoldPeakF<SwingSpeed<200>,Scale<SwingAcceleration<100>,Int<50>,Int<300>>,Scale<SwingAcceleration<100>,Int<24000>,Int<16000>>>,Int<-3200>,Int<-200>>,RgbArg<BASE_COLOR_ARG,Rgb<115,15,240>>,RgbArg<BASE_COLOR_ARG,Rgb<115,15,240>>,Mix<Int<7710>,Black,RgbArg<BASE_COLOR_ARG,Rgb<115,15,240>>>,RgbArg<BASE_COLOR_ARG,Rgb<115,15,240>>,Mix<Int<19276>,Black,RgbArg<BASE_COLOR_ARG,Rgb<115,15,240>>>>,RgbArg<BASE_COLOR_ARG,Rgb<115,15,240>>>,RgbArg<BASE_COLOR_ARG,Rgb<115,15,240>>>,
        MultiTransitionEffectL<TrWaveX<RgbArg<BLAST_COLOR_ARG,White>,Scale<WavLen<>,Int<100>,Int<400>>,Int<100>,Scale<WavLen<>,Int<100>,Int<400>>,Int<0>>,EFFECT_BLAST>,
        TransitionEffectL<TrConcat<TrJoin<TrDelay<30>,TrInstant>,RgbArg<CLASH_COLOR_ARG,White>,TrFade<300>>,EFFECT_CLASH>,
        LockupTrL<Strobe<RgbArg<LB_COLOR_ARG,White>,AudioFlicker<RgbArg<LB_COLOR_ARG,White>,Blue>,50,1>,TrInstant,TrFade<1000>,SaberBase::LOCKUP_LIGHTNING_BLOCK>,
        InOutTrL<TrInstant,TrInstant,Pulsing<Mix<Int<8192>,Black,RgbArg<OFF_COLOR_ARG,Rgb<115,15,240>>>,RgbArg<OFF_COLOR_ARG,Rgb<115,15,240>>,8000>>>>(),
      //Battery Strip
      StylePtr<Layers<
        TransitionLoop<Black,TrConcat<TrWipeIn<200>,RgbArg<BASE_COLOR_ARG,Red>,TrWipeIn<200>>>,
        InOutTrL<TrColorCycleX<IgnitionTime<0>>,TrColorCycleX<RetractionTime<>>,TransitionLoop<Black,TrConcat<TrCenterWipe<500>,Mix<BatteryLevel,Red,Green>,TrCenterWipe<500>>>>>>(),
      "The Emperors Hand"
   },
   { "Darkness;common", "tracks/rey.wav",
      //Plasma Gate
      StylePtr<Layers<
         Mix<HoldPeakF<SwingSpeed<250>,Scale<SwingAcceleration<100>,Int<50>,Int<500>>,Scale<SwingAcceleration<>,Int<20000>,Int<10000>>>,RandomFlicker<StripesX<Int<15000>,Scale<HoldPeakF<SwingSpeed<200>,Scale<SwingAcceleration<100>,Int<50>,Int<300>>,Scale<SwingAcceleration<100>,Int<24000>,Int<16000>>>,Int<-3200>,Int<-200>>,RgbArg<BASE_COLOR_ARG,Red>,RgbArg<BASE_COLOR_ARG,Red>,Mix<Int<7710>,Black,RgbArg<BASE_COLOR_ARG,Red>>,RgbArg<BASE_COLOR_ARG,Red>,Mix<Int<19276>,Black,RgbArg<BASE_COLOR_ARG,Red>>>,RgbArg<BASE_COLOR_ARG,Red>>,RgbArg<BASE_COLOR_ARG,Red>>,
         MultiTransitionEffectL<TrWaveX<RgbArg<BLAST_COLOR_ARG,White>,Scale<WavLen<>,Int<100>,Int<400>>,Int<100>,Scale<WavLen<>,Int<100>,Int<400>>,Int<0>>,EFFECT_BLAST>,
         TransitionEffectL<TrConcat<TrJoin<TrDelay<30>,TrInstant>,RgbArg<CLASH_COLOR_ARG,White>,TrFade<300>>,EFFECT_CLASH>,
         LockupTrL<Strobe<RgbArg<LB_COLOR_ARG,White>,AudioFlicker<RgbArg<LB_COLOR_ARG,White>,Blue>,50,1>,TrInstant,TrFade<1000>,SaberBase::LOCKUP_LIGHTNING_BLOCK>,
         InOutTrL<TrInstant,TrInstant,Pulsing<Mix<Int<8192>,Black,RgbArg<OFF_COLOR_ARG,Red>>,RgbArg<OFF_COLOR_ARG,Red>,8000>>>>(),
      //Blue Blinky
      StylePtr<Layers<
         TransitionLoop<RotateColorsX<Variation,White>,TrConcat<TrBoing<1200,2>,RotateColorsX<Variation,Rgb<10,10,10>>,TrFade<1200>>>,
         InOutTrL<TrInstant,TrInstant,TransitionLoop<RotateColorsX<Variation,White>,TrConcat<TrBoing<3000,9>,Black,TrDelay<2000>>>>>>(),
      //Red Blinky
      StylePtr<Layers<
         RotateColorsX<Variation,Red>,
         TransitionEffectL<TrConcat<TrInstant,White,TrFade<400>>,EFFECT_BLAST>,
         LockupTrL<AudioFlickerL<White>,TrInstant,TrFade<500>,SaberBase::LOCKUP_NORMAL>,
         LockupTrL<AudioFlickerL<White>,TrInstant,TrFade<500>,SaberBase::LOCKUP_LIGHTNING_BLOCK>,
         TransitionEffectL<TrConcat<TrInstant,White,TrFade<400>>,EFFECT_CLASH>,
         InOutTrL<TrInstant,TrInstant,TransitionLoop<Black,TrConcat<TrDelay<3000>,RotateColorsX<Variation,Red>,TrBoing<2000,5>>>>>>(),
      //MainBlade
      StylePtr<Layers<
         Mix<HoldPeakF<SwingSpeed<250>,Scale<SwingAcceleration<100>,Int<50>,Int<500>>,Scale<SwingAcceleration<>,Int<20000>,Int<10000>>>,RandomFlicker<StripesX<Int<15000>,Scale<HoldPeakF<SwingSpeed<200>,Scale<SwingAcceleration<100>,Int<50>,Int<300>>,Scale<SwingAcceleration<100>,Int<24000>,Int<16000>>>,Int<-3200>,Int<-200>>,RgbArg<BASE_COLOR_ARG,Red>,RgbArg<BASE_COLOR_ARG,Red>,Mix<Int<7710>,Black,RgbArg<BASE_COLOR_ARG,Red>>,RgbArg<BASE_COLOR_ARG,Red>,Mix<Int<19276>,Black,RgbArg<BASE_COLOR_ARG,Red>>>,RgbArg<BASE_COLOR_ARG,Red>>,RgbArg<BASE_COLOR_ARG,Red>>,
         MultiTransitionEffectL<TrWaveX<RgbArg<BLAST_COLOR_ARG,White>,Scale<EffectPosition<EFFECT_BLAST>,Int<100>,Int<400>>,Int<100>,Scale<EffectPosition<EFFECT_BLAST>,Int<100>,Int<400>>,Scale<EffectPosition<EFFECT_BLAST>,Int<28000>,Int<8000>>>,EFFECT_BLAST>,
         Mix<IsLessThan<ClashImpactF<>,Int<26000>>,TransitionEffectL<TrConcat<TrInstant,AlphaL<RgbArg<CLASH_COLOR_ARG,White>,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-12000>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<10000>>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-10000>>>,Scale<ClashImpactF<>,Int<12000>,Int<60000>>>>,TrFadeX<Scale<ClashImpactF<>,Int<200>,Int<400>>>>,EFFECT_CLASH>,TransitionEffectL<TrWaveX<RgbArg<CLASH_COLOR_ARG,White>,Scale<ClashImpactF<>,Int<100>,Int<400>>,Int<100>,Scale<ClashImpactF<>,Int<100>,Int<400>>,Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-12000>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<10000>>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-10000>>>>,EFFECT_CLASH>>,
         LockupTrL<TransitionEffect<AlphaMixL<Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-12000>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<10000>>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-10000>>>,Scale<SwingSpeed<100>,Int<14000>,Int<18000>>>,BrownNoiseFlickerL<RgbArg<LOCKUP_COLOR_ARG,White>,Int<200>>,StripesX<Int<1800>,Scale<NoisySoundLevel,Int<-3500>,Int<-5000>>,Mix<Int<6425>,Black,RgbArg<LOCKUP_COLOR_ARG,White>>,RgbArg<LOCKUP_COLOR_ARG,White>,Mix<Int<12850>,Black,RgbArg<LOCKUP_COLOR_ARG,White>>>>,AlphaL<AudioFlicker<RgbArg<LOCKUP_COLOR_ARG,White>,Mix<Int<10280>,Black,RgbArg<LOCKUP_COLOR_ARG,White>>>,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-12000>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<10000>>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-10000>>>,Int<13000>>>,TrJoin<TrDelay<8000>,TrInstant>,TrFade<3000>,EFFECT_LOCKUP_BEGIN>,TrConcat<TrJoin<TrDelay<50>,TrInstant>,Mix<IsLessThan<ClashImpactF<>,Int<26000>>,RgbArg<LOCKUP_COLOR_ARG,White>,AlphaL<RgbArg<LOCKUP_COLOR_ARG,White>,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-12000>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<10000>>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-10000>>>,Scale<ClashImpactF<>,Int<20000>,Int<60000>>>>>,TrFade<300>>,TrConcat<TrInstant,RgbArg<LOCKUP_COLOR_ARG,White>,TrFade<400>>,SaberBase::LOCKUP_NORMAL>,
         ResponsiveLightningBlockL<Strobe<RgbArg<LB_COLOR_ARG,White>,AudioFlicker<RgbArg<LB_COLOR_ARG,White>,Blue>,50,1>,TrConcat<TrInstant,AlphaL<RgbArg<LB_COLOR_ARG,White>,Bump<Int<12000>,Int<18000>>>,TrFade<200>>,TrConcat<TrInstant,HumpFlickerL<AlphaL<RgbArg<LB_COLOR_ARG,White>,Int<16000>>,30>,TrSmoothFade<600>>>,
         LockupTrL<AlphaL<RandomPerLEDFlickerL<RgbArg<DRAG_COLOR_ARG,White>>,SmoothStep<IntArg<DRAG_SIZE_ARG,28000>,Int<3000>>>,TrConcat<TrJoin<TrDelay<4000>,TrWipeIn<200>>,AlphaL<BrownNoiseFlickerL<RgbArg<DRAG_COLOR_ARG,White>,Int<300>>,SmoothStep<IntArg<DRAG_SIZE_ARG,28000>,Int<3000>>>,TrFade<4000>>,TrFade<300>,SaberBase::LOCKUP_DRAG>,
         LockupTrL<AlphaL<Remap<Scale<RampF,Int<65536>,Int<0>>,StaticFire<Mix<TwistAngle<>,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>,RotateColorsX<Int<3000>,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>>>,Mix<TwistAngle<>,RotateColorsX<Int<3000>,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>>,RotateColorsX<Int<3000>,Mix<Int<12000>,Black,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>>>>,0,3,5,3000,10>>,SmoothStep<IntArg<MELT_SIZE_ARG,28000>,Int<4000>>>,TrConcat<TrWipeIn<100>,AlphaL<RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>,SmoothStep<IntArg<MELT_SIZE_ARG,28000>,Int<4000>>>,TrJoin<TrDelay<4000>,TrFade<300>>,AlphaL<Mix<TwistAngle<>,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>,RotateColorsX<Int<3000>,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>>>,SmoothStep<IntArg<MELT_SIZE_ARG,28000>,Int<4000>>>,TrFade<4000>>,TrWipe<200>,SaberBase::LOCKUP_MELT>,
         InOutTrL<TrWipeX<IgnitionTime<>>,TrWipeInX<RetractionTime<>>>>>(),
      //CC1
      StylePtr<Layers<
         Mix<HoldPeakF<SwingSpeed<250>,Scale<SwingAcceleration<100>,Int<50>,Int<500>>,Scale<SwingAcceleration<>,Int<20000>,Int<10000>>>,RandomFlicker<StripesX<Int<15000>,Scale<HoldPeakF<SwingSpeed<200>,Scale<SwingAcceleration<100>,Int<50>,Int<300>>,Scale<SwingAcceleration<100>,Int<24000>,Int<16000>>>,Int<-3200>,Int<-200>>,RgbArg<BASE_COLOR_ARG,Red>,RgbArg<BASE_COLOR_ARG,Red>,Mix<Int<7710>,Black,RgbArg<BASE_COLOR_ARG,Red>>,RgbArg<BASE_COLOR_ARG,Red>,Mix<Int<19276>,Black,RgbArg<BASE_COLOR_ARG,Rgb<115,15,240>>>>,RgbArg<BASE_COLOR_ARG,Red>>,RgbArg<BASE_COLOR_ARG,Red>>,
         MultiTransitionEffectL<TrWaveX<RgbArg<BLAST_COLOR_ARG,White>,Scale<WavLen<>,Int<100>,Int<400>>,Int<100>,Scale<WavLen<>,Int<100>,Int<400>>,Int<0>>,EFFECT_BLAST>,
         TransitionEffectL<TrConcat<TrJoin<TrDelay<30>,TrInstant>,RgbArg<CLASH_COLOR_ARG,White>,TrFade<300>>,EFFECT_CLASH>,
         LockupTrL<Strobe<RgbArg<LB_COLOR_ARG,White>,AudioFlicker<RgbArg<LB_COLOR_ARG,White>,Blue>,50,1>,TrInstant,TrFade<1000>,SaberBase::LOCKUP_LIGHTNING_BLOCK>,
         InOutTrL<TrInstant,TrInstant,Pulsing<Mix<Int<8192>,Black,RgbArg<OFF_COLOR_ARG,Red>>,RgbArg<OFF_COLOR_ARG,Red>,8000>>>>(),
      //CC2
      StylePtr<Layers<
         Mix<HoldPeakF<SwingSpeed<250>,Scale<SwingAcceleration<100>,Int<50>,Int<500>>,Scale<SwingAcceleration<>,Int<20000>,Int<10000>>>,RandomFlicker<StripesX<Int<15000>,Scale<HoldPeakF<SwingSpeed<200>,Scale<SwingAcceleration<100>,Int<50>,Int<300>>,Scale<SwingAcceleration<100>,Int<24000>,Int<16000>>>,Int<-3200>,Int<-200>>,RgbArg<BASE_COLOR_ARG,Red>,RgbArg<BASE_COLOR_ARG,Red>,Mix<Int<7710>,Black,RgbArg<BASE_COLOR_ARG,Red>>,RgbArg<BASE_COLOR_ARG,Red>,Mix<Int<19276>,Black,RgbArg<BASE_COLOR_ARG,Rgb<115,15,240>>>>,RgbArg<BASE_COLOR_ARG,Red>>,RgbArg<BASE_COLOR_ARG,Red>>,
         MultiTransitionEffectL<TrWaveX<RgbArg<BLAST_COLOR_ARG,White>,Scale<WavLen<>,Int<100>,Int<400>>,Int<100>,Scale<WavLen<>,Int<100>,Int<400>>,Int<0>>,EFFECT_BLAST>,
         TransitionEffectL<TrConcat<TrJoin<TrDelay<30>,TrInstant>,RgbArg<CLASH_COLOR_ARG,White>,TrFade<300>>,EFFECT_CLASH>,
         LockupTrL<Strobe<RgbArg<LB_COLOR_ARG,White>,AudioFlicker<RgbArg<LB_COLOR_ARG,White>,Blue>,50,1>,TrInstant,TrFade<1000>,SaberBase::LOCKUP_LIGHTNING_BLOCK>,
         InOutTrL<TrInstant,TrInstant,Pulsing<Mix<Int<8192>,Black,RgbArg<OFF_COLOR_ARG,Red>>,RgbArg<OFF_COLOR_ARG,Red>,8000>>>>(),
      //Battery Strip
      StylePtr<Layers<
        TransitionLoop<Black,TrConcat<TrWipeIn<200>,RgbArg<BASE_COLOR_ARG,Red>,TrWipeIn<200>>>,
        InOutTrL<TrColorCycleX<IgnitionTime<0>>,TrColorCycleX<RetractionTime<>>,TransitionLoop<Black,TrConcat<TrCenterWipe<500>,Mix<BatteryLevel,Red,Green>,TrCenterWipe<500>>>>>>(),
      "Darkness"
   },
   { "The Sentinel Shan;common", "tracks/shan.wav",
      //Plasma Gate
      StylePtr<Layers<
         Mix<HoldPeakF<SwingSpeed<250>,Scale<SwingAcceleration<100>,Int<50>,Int<500>>,Scale<SwingAcceleration<>,Int<20000>,Int<10000>>>,RandomFlicker<StripesX<Int<15000>,Scale<HoldPeakF<SwingSpeed<200>,Scale<SwingAcceleration<100>,Int<50>,Int<300>>,Scale<SwingAcceleration<100>,Int<24000>,Int<16000>>>,Int<-3200>,Int<-200>>,RgbArg<BASE_COLOR_ARG,Red>,RgbArg<BASE_COLOR_ARG,Rgb<255,200,0>>,Mix<Int<7710>,Black,RgbArg<BASE_COLOR_ARG,Rgb<255,200,0>>>,RgbArg<BASE_COLOR_ARG,Red>,Mix<Int<19276>,Black,RgbArg<BASE_COLOR_ARG,Rgb<255,200,0>>>>,RgbArg<BASE_COLOR_ARG,Rgb<255,200,0>>>,RgbArg<BASE_COLOR_ARG,Rgb<255,200,0>>>,
         MultiTransitionEffectL<TrWaveX<RgbArg<BLAST_COLOR_ARG,White>,Scale<WavLen<>,Int<100>,Int<400>>,Int<100>,Scale<WavLen<>,Int<100>,Int<400>>,Int<0>>,EFFECT_BLAST>,
         TransitionEffectL<TrConcat<TrJoin<TrDelay<30>,TrInstant>,RgbArg<CLASH_COLOR_ARG,White>,TrFade<300>>,EFFECT_CLASH>,
         LockupTrL<Strobe<RgbArg<LB_COLOR_ARG,White>,AudioFlicker<RgbArg<LB_COLOR_ARG,White>,Blue>,50,1>,TrInstant,TrFade<1000>,SaberBase::LOCKUP_LIGHTNING_BLOCK>,
         InOutTrL<TrInstant,TrInstant,Pulsing<Mix<Int<8192>,Black,RgbArg<OFF_COLOR_ARG,Rgb<255,200,0>>>,RgbArg<OFF_COLOR_ARG,Rgb<255,200,0>>,8000>>>>(),
      //Blue Blinky
      StylePtr<Layers<
         TransitionLoop<RotateColorsX<Variation,Blue>,TrConcat<TrBoing<1200,2>,RotateColorsX<Variation,Rgb<0,0,10>>,TrFade<1200>>>,
         InOutTrL<TrInstant,TrInstant,TransitionLoop<RotateColorsX<Variation,Blue>,TrConcat<TrBoing<3000,9>,Black,TrDelay<2000>>>>>>(),
      //Red Blinky
      StylePtr<Layers<
         RotateColorsX<Variation,Rgb<255,200,0>>,
         TransitionEffectL<TrConcat<TrInstant,White,TrFade<400>>,EFFECT_BLAST>,
         LockupTrL<AudioFlickerL<White>,TrInstant,TrFade<500>,SaberBase::LOCKUP_NORMAL>,
         LockupTrL<AudioFlickerL<White>,TrInstant,TrFade<500>,SaberBase::LOCKUP_LIGHTNING_BLOCK>,
         TransitionEffectL<TrConcat<TrInstant,White,TrFade<400>>,EFFECT_CLASH>,
         InOutTrL<TrInstant,TrInstant,TransitionLoop<Black,TrConcat<TrDelay<3000>,RotateColorsX<Variation,Rgb<255,200,0>>,TrBoing<2000,5>>>>>>(),
      //MainBlade
      StylePtr<Layers<
         Mix<HoldPeakF<SwingSpeed<250>,Scale<SwingAcceleration<100>,Int<50>,Int<500>>,Scale<SwingAcceleration<>,Int<20000>,Int<10000>>>,RandomFlicker<StripesX<Int<15000>,Scale<HoldPeakF<SwingSpeed<200>,Scale<SwingAcceleration<100>,Int<50>,Int<300>>,Scale<SwingAcceleration<100>,Int<24000>,Int<16000>>>,Int<-3200>,Int<-200>>,RgbArg<BASE_COLOR_ARG,Rgb<255,200,0>>,RgbArg<BASE_COLOR_ARG,Rgb<255,200,0>>,Mix<Int<7710>,Black,RgbArg<BASE_COLOR_ARG,Rgb<255,200,0>>>,RgbArg<BASE_COLOR_ARG,Rgb<255,200,0>>,Mix<Int<19276>,Black,RgbArg<BASE_COLOR_ARG,Rgb<255,200,0>>>>,RgbArg<BASE_COLOR_ARG,Rgb<255,200,0>>>,RgbArg<BASE_COLOR_ARG,Rgb<255,200,0>>>,
         MultiTransitionEffectL<TrWaveX<RgbArg<BLAST_COLOR_ARG,White>,Scale<EffectPosition<EFFECT_BLAST>,Int<100>,Int<400>>,Int<100>,Scale<EffectPosition<EFFECT_BLAST>,Int<100>,Int<400>>,Scale<EffectPosition<EFFECT_BLAST>,Int<28000>,Int<8000>>>,EFFECT_BLAST>,
         Mix<IsLessThan<ClashImpactF<>,Int<26000>>,TransitionEffectL<TrConcat<TrInstant,AlphaL<RgbArg<CLASH_COLOR_ARG,White>,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-12000>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<10000>>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-10000>>>,Scale<ClashImpactF<>,Int<12000>,Int<60000>>>>,TrFadeX<Scale<ClashImpactF<>,Int<200>,Int<400>>>>,EFFECT_CLASH>,TransitionEffectL<TrWaveX<RgbArg<CLASH_COLOR_ARG,White>,Scale<ClashImpactF<>,Int<100>,Int<400>>,Int<100>,Scale<ClashImpactF<>,Int<100>,Int<400>>,Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-12000>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<10000>>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-10000>>>>,EFFECT_CLASH>>,
         LockupTrL<TransitionEffect<AlphaMixL<Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-12000>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<10000>>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-10000>>>,Scale<SwingSpeed<100>,Int<14000>,Int<18000>>>,BrownNoiseFlickerL<RgbArg<LOCKUP_COLOR_ARG,White>,Int<200>>,StripesX<Int<1800>,Scale<NoisySoundLevel,Int<-3500>,Int<-5000>>,Mix<Int<6425>,Black,RgbArg<LOCKUP_COLOR_ARG,White>>,RgbArg<LOCKUP_COLOR_ARG,White>,Mix<Int<12850>,Black,RgbArg<LOCKUP_COLOR_ARG,White>>>>,AlphaL<AudioFlicker<RgbArg<LOCKUP_COLOR_ARG,White>,Mix<Int<10280>,Black,RgbArg<LOCKUP_COLOR_ARG,White>>>,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-12000>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<10000>>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-10000>>>,Int<13000>>>,TrJoin<TrDelay<8000>,TrInstant>,TrFade<3000>,EFFECT_LOCKUP_BEGIN>,TrConcat<TrJoin<TrDelay<50>,TrInstant>,Mix<IsLessThan<ClashImpactF<>,Int<26000>>,RgbArg<LOCKUP_COLOR_ARG,White>,AlphaL<RgbArg<LOCKUP_COLOR_ARG,White>,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-12000>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<10000>>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-10000>>>,Scale<ClashImpactF<>,Int<20000>,Int<60000>>>>>,TrFade<300>>,TrConcat<TrInstant,RgbArg<LOCKUP_COLOR_ARG,White>,TrFade<400>>,SaberBase::LOCKUP_NORMAL>,
         ResponsiveLightningBlockL<Strobe<RgbArg<LB_COLOR_ARG,White>,AudioFlicker<RgbArg<LB_COLOR_ARG,White>,Blue>,50,1>,TrConcat<TrInstant,AlphaL<RgbArg<LB_COLOR_ARG,White>,Bump<Int<12000>,Int<18000>>>,TrFade<200>>,TrConcat<TrInstant,HumpFlickerL<AlphaL<RgbArg<LB_COLOR_ARG,White>,Int<16000>>,30>,TrSmoothFade<600>>>,
         LockupTrL<AlphaL<RandomPerLEDFlickerL<RgbArg<DRAG_COLOR_ARG,White>>,SmoothStep<IntArg<DRAG_SIZE_ARG,28000>,Int<3000>>>,TrConcat<TrJoin<TrDelay<4000>,TrWipeIn<200>>,AlphaL<BrownNoiseFlickerL<RgbArg<DRAG_COLOR_ARG,White>,Int<300>>,SmoothStep<IntArg<DRAG_SIZE_ARG,28000>,Int<3000>>>,TrFade<4000>>,TrFade<300>,SaberBase::LOCKUP_DRAG>,
         LockupTrL<AlphaL<Remap<Scale<RampF,Int<65536>,Int<0>>,StaticFire<Mix<TwistAngle<>,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>,RotateColorsX<Int<3000>,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>>>,Mix<TwistAngle<>,RotateColorsX<Int<3000>,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>>,RotateColorsX<Int<3000>,Mix<Int<12000>,Black,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>>>>,0,3,5,3000,10>>,SmoothStep<IntArg<MELT_SIZE_ARG,28000>,Int<4000>>>,TrConcat<TrWipeIn<100>,AlphaL<RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>,SmoothStep<IntArg<MELT_SIZE_ARG,28000>,Int<4000>>>,TrJoin<TrDelay<4000>,TrFade<300>>,AlphaL<Mix<TwistAngle<>,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>,RotateColorsX<Int<3000>,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>>>,SmoothStep<IntArg<MELT_SIZE_ARG,28000>,Int<4000>>>,TrFade<4000>>,TrWipe<200>,SaberBase::LOCKUP_MELT>,
         InOutTrL<TrWipeX<IgnitionTime<>>,TrWipeInX<RetractionTime<>>>>>(),
      //CC1
      StylePtr<Layers<
        Mix<HoldPeakF<SwingSpeed<250>,Scale<SwingAcceleration<100>,Int<50>,Int<500>>,Scale<SwingAcceleration<>,Int<20000>,Int<10000>>>,RandomFlicker<StripesX<Int<15000>,Scale<HoldPeakF<SwingSpeed<200>,Scale<SwingAcceleration<100>,Int<50>,Int<300>>,Scale<SwingAcceleration<100>,Int<24000>,Int<16000>>>,Int<-3200>,Int<-200>>,RgbArg<BASE_COLOR_ARG,Rgb<255,200,0>>,RgbArg<BASE_COLOR_ARG,Rgb<255,200,0>>,Mix<Int<7710>,Black,RgbArg<BASE_COLOR_ARG,Rgb<255,200,0>>>,RgbArg<BASE_COLOR_ARG,Rgb<255,200,0>>,Mix<Int<19276>,Black,RgbArg<BASE_COLOR_ARG,Rgb<255,200,0>>>>,RgbArg<BASE_COLOR_ARG,Rgb<255,200,0>>>,RgbArg<BASE_COLOR_ARG,Rgb<255,200,0>>>,
        MultiTransitionEffectL<TrWaveX<RgbArg<BLAST_COLOR_ARG,White>,Scale<WavLen<>,Int<100>,Int<400>>,Int<100>,Scale<WavLen<>,Int<100>,Int<400>>,Int<0>>,EFFECT_BLAST>,
        TransitionEffectL<TrConcat<TrJoin<TrDelay<30>,TrInstant>,RgbArg<CLASH_COLOR_ARG,White>,TrFade<300>>,EFFECT_CLASH>,
        LockupTrL<Strobe<RgbArg<LB_COLOR_ARG,White>,AudioFlicker<RgbArg<LB_COLOR_ARG,White>,Blue>,50,1>,TrInstant,TrFade<1000>,SaberBase::LOCKUP_LIGHTNING_BLOCK>,
        InOutTrL<TrInstant,TrInstant,Pulsing<Mix<Int<8192>,Black,RgbArg<OFF_COLOR_ARG,Rgb<255,200,0>>>,RgbArg<OFF_COLOR_ARG,Rgb<255,200,0>>,8000>>>>(),
      //CC2
      StylePtr<Layers<
        Mix<HoldPeakF<SwingSpeed<250>,Scale<SwingAcceleration<100>,Int<50>,Int<500>>,Scale<SwingAcceleration<>,Int<20000>,Int<10000>>>,RandomFlicker<StripesX<Int<15000>,Scale<HoldPeakF<SwingSpeed<200>,Scale<SwingAcceleration<100>,Int<50>,Int<300>>,Scale<SwingAcceleration<100>,Int<24000>,Int<16000>>>,Int<-3200>,Int<-200>>,RgbArg<BASE_COLOR_ARG,Rgb<255,200,0>>,RgbArg<BASE_COLOR_ARG,Rgb<255,200,0>>,Mix<Int<7710>,Black,RgbArg<BASE_COLOR_ARG,Rgb<255,200,0>>>,RgbArg<BASE_COLOR_ARG,Rgb<255,200,0>>,Mix<Int<19276>,Black,RgbArg<BASE_COLOR_ARG,Rgb<255,200,0>>>>,RgbArg<BASE_COLOR_ARG,Rgb<255,200,0>>>,RgbArg<BASE_COLOR_ARG,Rgb<255,200,0>>>,
        MultiTransitionEffectL<TrWaveX<RgbArg<BLAST_COLOR_ARG,White>,Scale<WavLen<>,Int<100>,Int<400>>,Int<100>,Scale<WavLen<>,Int<100>,Int<400>>,Int<0>>,EFFECT_BLAST>,
        TransitionEffectL<TrConcat<TrJoin<TrDelay<30>,TrInstant>,RgbArg<CLASH_COLOR_ARG,White>,TrFade<300>>,EFFECT_CLASH>,
        LockupTrL<Strobe<RgbArg<LB_COLOR_ARG,White>,AudioFlicker<RgbArg<LB_COLOR_ARG,White>,Blue>,50,1>,TrInstant,TrFade<1000>,SaberBase::LOCKUP_LIGHTNING_BLOCK>,
        InOutTrL<TrInstant,TrInstant,Pulsing<Mix<Int<8192>,Black,RgbArg<OFF_COLOR_ARG,Rgb<255,200,0>>>,RgbArg<OFF_COLOR_ARG,Rgb<255,200,0>>,8000>>>>(),
      //Battery Strip
      StylePtr<Layers<
        TransitionLoop<Black,TrConcat<TrWipeIn<200>,RgbArg<BASE_COLOR_ARG,Red>,TrWipeIn<200>>>,
        InOutTrL<TrColorCycleX<IgnitionTime<0>>,TrColorCycleX<RetractionTime<>>,TransitionLoop<Black,TrConcat<TrCenterWipe<500>,Mix<BatteryLevel,Red,Green>,TrCenterWipe<500>>>>>>(),
      "The Sentinel Shan"
   },
   { "Royalty;common", "tracks/leia.wav",
      //Plasma Gate
      StylePtr<Layers<
        Mix<HoldPeakF<SwingSpeed<250>,Scale<SwingAcceleration<100>,Int<50>,Int<500>>,Scale<SwingAcceleration<>,Int<20000>,Int<10000>>>,RandomFlicker<StripesX<Int<15000>,Scale<HoldPeakF<SwingSpeed<200>,Scale<SwingAcceleration<100>,Int<50>,Int<300>>,Scale<SwingAcceleration<100>,Int<24000>,Int<16000>>>,Int<-3200>,Int<-200>>,RgbArg<BASE_COLOR_ARG,Magenta>,RgbArg<BASE_COLOR_ARG,Magenta>,Mix<Int<7710>,Black,RgbArg<BASE_COLOR_ARG,Magenta>>,RgbArg<BASE_COLOR_ARG,Magenta>,Mix<Int<19276>,Black,RgbArg<BASE_COLOR_ARG,Magenta>>>,RgbArg<BASE_COLOR_ARG,Magenta>>,RgbArg<BASE_COLOR_ARG,Magenta>>,
        MultiTransitionEffectL<TrWaveX<RgbArg<BLAST_COLOR_ARG,White>,Scale<WavLen<>,Int<100>,Int<400>>,Int<100>,Scale<WavLen<>,Int<100>,Int<400>>,Int<0>>,EFFECT_BLAST>,
        TransitionEffectL<TrConcat<TrJoin<TrDelay<30>,TrInstant>,RgbArg<CLASH_COLOR_ARG,White>,TrFade<300>>,EFFECT_CLASH>,
        LockupTrL<Strobe<RgbArg<LB_COLOR_ARG,White>,AudioFlicker<RgbArg<LB_COLOR_ARG,White>,Blue>,50,1>,TrInstant,TrFade<1000>,SaberBase::LOCKUP_LIGHTNING_BLOCK>,
        InOutTrL<TrInstant,TrInstant,Pulsing<Mix<Int<8192>,Black,RgbArg<OFF_COLOR_ARG,Magenta>>,RgbArg<OFF_COLOR_ARG,Magenta>,8000>>>>(),
      //Green Blinky
      StylePtr<Layers<
         TransitionLoop<RotateColorsX<Variation,Green>,TrConcat<TrBoing<1200,2>,RotateColorsX<Variation,Rgb<0,10,0>>,TrFade<1200>>>,
         InOutTrL<TrInstant,TrInstant,TransitionLoop<RotateColorsX<Variation,Green>,TrConcat<TrBoing<3000,9>,Black,TrDelay<2000>>>>>>(),
      //Red Blinky
      StylePtr<Layers<
         RotateColorsX<Variation,Red>,
         TransitionEffectL<TrConcat<TrInstant,White,TrFade<400>>,EFFECT_BLAST>,
         LockupTrL<AudioFlickerL<White>,TrInstant,TrFade<500>,SaberBase::LOCKUP_NORMAL>,
         LockupTrL<AudioFlickerL<White>,TrInstant,TrFade<500>,SaberBase::LOCKUP_LIGHTNING_BLOCK>,
         TransitionEffectL<TrConcat<TrInstant,White,TrFade<400>>,EFFECT_CLASH>,
         InOutTrL<TrInstant,TrInstant,TransitionLoop<Black,TrConcat<TrDelay<3000>,RotateColorsX<Variation,Red>,TrBoing<2000,5>>>>>>(),
      //MainBlade
      StylePtr<Layers<
         Mix<HoldPeakF<SwingSpeed<250>,Scale<SwingAcceleration<100>,Int<50>,Int<500>>,Scale<SwingAcceleration<>,Int<20000>,Int<10000>>>,RandomFlicker<StripesX<Int<15000>,Scale<HoldPeakF<SwingSpeed<200>,Scale<SwingAcceleration<100>,Int<50>,Int<300>>,Scale<SwingAcceleration<100>,Int<24000>,Int<16000>>>,Int<-3200>,Int<-200>>,RgbArg<BASE_COLOR_ARG,Magenta>,RgbArg<BASE_COLOR_ARG,Magenta>,Mix<Int<7710>,Black,RgbArg<BASE_COLOR_ARG,Magenta>>,RgbArg<BASE_COLOR_ARG,Magenta>,Mix<Int<19276>,Black,RgbArg<BASE_COLOR_ARG,Magenta>>>,RgbArg<BASE_COLOR_ARG,Magenta>>,RgbArg<BASE_COLOR_ARG,Magenta>>,
         MultiTransitionEffectL<TrWaveX<RgbArg<BLAST_COLOR_ARG,White>,Scale<EffectPosition<EFFECT_BLAST>,Int<100>,Int<400>>,Int<100>,Scale<EffectPosition<EFFECT_BLAST>,Int<100>,Int<400>>,Scale<EffectPosition<EFFECT_BLAST>,Int<28000>,Int<8000>>>,EFFECT_BLAST>,
         Mix<IsLessThan<ClashImpactF<>,Int<26000>>,TransitionEffectL<TrConcat<TrInstant,AlphaL<RgbArg<CLASH_COLOR_ARG,White>,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-12000>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<10000>>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-10000>>>,Scale<ClashImpactF<>,Int<12000>,Int<60000>>>>,TrFadeX<Scale<ClashImpactF<>,Int<200>,Int<400>>>>,EFFECT_CLASH>,TransitionEffectL<TrWaveX<RgbArg<CLASH_COLOR_ARG,White>,Scale<ClashImpactF<>,Int<100>,Int<400>>,Int<100>,Scale<ClashImpactF<>,Int<100>,Int<400>>,Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-12000>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<10000>>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-10000>>>>,EFFECT_CLASH>>,
         LockupTrL<TransitionEffect<AlphaMixL<Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-12000>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<10000>>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-10000>>>,Scale<SwingSpeed<100>,Int<14000>,Int<18000>>>,BrownNoiseFlickerL<RgbArg<LOCKUP_COLOR_ARG,White>,Int<200>>,StripesX<Int<1800>,Scale<NoisySoundLevel,Int<-3500>,Int<-5000>>,Mix<Int<6425>,Black,RgbArg<LOCKUP_COLOR_ARG,White>>,RgbArg<LOCKUP_COLOR_ARG,White>,Mix<Int<12850>,Black,RgbArg<LOCKUP_COLOR_ARG,White>>>>,AlphaL<AudioFlicker<RgbArg<LOCKUP_COLOR_ARG,White>,Mix<Int<10280>,Black,RgbArg<LOCKUP_COLOR_ARG,White>>>,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-12000>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<10000>>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-10000>>>,Int<13000>>>,TrJoin<TrDelay<8000>,TrInstant>,TrFade<3000>,EFFECT_LOCKUP_BEGIN>,TrConcat<TrJoin<TrDelay<50>,TrInstant>,Mix<IsLessThan<ClashImpactF<>,Int<26000>>,RgbArg<LOCKUP_COLOR_ARG,White>,AlphaL<RgbArg<LOCKUP_COLOR_ARG,White>,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-12000>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<10000>>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-10000>>>,Scale<ClashImpactF<>,Int<20000>,Int<60000>>>>>,TrFade<300>>,TrConcat<TrInstant,RgbArg<LOCKUP_COLOR_ARG,White>,TrFade<400>>,SaberBase::LOCKUP_NORMAL>,
         ResponsiveLightningBlockL<Strobe<RgbArg<LB_COLOR_ARG,White>,AudioFlicker<RgbArg<LB_COLOR_ARG,White>,Blue>,50,1>,TrConcat<TrInstant,AlphaL<RgbArg<LB_COLOR_ARG,White>,Bump<Int<12000>,Int<18000>>>,TrFade<200>>,TrConcat<TrInstant,HumpFlickerL<AlphaL<RgbArg<LB_COLOR_ARG,White>,Int<16000>>,30>,TrSmoothFade<600>>>,
         LockupTrL<AlphaL<RandomPerLEDFlickerL<RgbArg<DRAG_COLOR_ARG,White>>,SmoothStep<IntArg<DRAG_SIZE_ARG,28000>,Int<3000>>>,TrConcat<TrJoin<TrDelay<4000>,TrWipeIn<200>>,AlphaL<BrownNoiseFlickerL<RgbArg<DRAG_COLOR_ARG,White>,Int<300>>,SmoothStep<IntArg<DRAG_SIZE_ARG,28000>,Int<3000>>>,TrFade<4000>>,TrFade<300>,SaberBase::LOCKUP_DRAG>,
         LockupTrL<AlphaL<Remap<Scale<RampF,Int<65536>,Int<0>>,StaticFire<Mix<TwistAngle<>,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>,RotateColorsX<Int<3000>,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>>>,Mix<TwistAngle<>,RotateColorsX<Int<3000>,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>>,RotateColorsX<Int<3000>,Mix<Int<12000>,Black,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>>>>,0,3,5,3000,10>>,SmoothStep<IntArg<MELT_SIZE_ARG,28000>,Int<4000>>>,TrConcat<TrWipeIn<100>,AlphaL<RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>,SmoothStep<IntArg<MELT_SIZE_ARG,28000>,Int<4000>>>,TrJoin<TrDelay<4000>,TrFade<300>>,AlphaL<Mix<TwistAngle<>,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>,RotateColorsX<Int<3000>,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>>>,SmoothStep<IntArg<MELT_SIZE_ARG,28000>,Int<4000>>>,TrFade<4000>>,TrWipe<200>,SaberBase::LOCKUP_MELT>,
         InOutTrL<TrWipeX<IgnitionTime<>>,TrWipeInX<RetractionTime<>>>>>(),
      //CC1
      StylePtr<Layers<
        Mix<HoldPeakF<SwingSpeed<250>,Scale<SwingAcceleration<100>,Int<50>,Int<500>>,Scale<SwingAcceleration<>,Int<20000>,Int<10000>>>,RandomFlicker<StripesX<Int<15000>,Scale<HoldPeakF<SwingSpeed<200>,Scale<SwingAcceleration<100>,Int<50>,Int<300>>,Scale<SwingAcceleration<100>,Int<24000>,Int<16000>>>,Int<-3200>,Int<-200>>,RgbArg<BASE_COLOR_ARG,Magenta>,RgbArg<BASE_COLOR_ARG,Magenta>,Mix<Int<7710>,Black,RgbArg<BASE_COLOR_ARG,Magenta>>,RgbArg<BASE_COLOR_ARG,Magenta>,Mix<Int<19276>,Black,RgbArg<BASE_COLOR_ARG,Magenta>>>,RgbArg<BASE_COLOR_ARG,Magenta>>,RgbArg<BASE_COLOR_ARG,Magenta>>,
        MultiTransitionEffectL<TrWaveX<RgbArg<BLAST_COLOR_ARG,White>,Scale<WavLen<>,Int<100>,Int<400>>,Int<100>,Scale<WavLen<>,Int<100>,Int<400>>,Int<0>>,EFFECT_BLAST>,
        TransitionEffectL<TrConcat<TrJoin<TrDelay<30>,TrInstant>,RgbArg<CLASH_COLOR_ARG,White>,TrFade<300>>,EFFECT_CLASH>,
        LockupTrL<Strobe<RgbArg<LB_COLOR_ARG,White>,AudioFlicker<RgbArg<LB_COLOR_ARG,White>,Blue>,50,1>,TrInstant,TrFade<1000>,SaberBase::LOCKUP_LIGHTNING_BLOCK>,
        InOutTrL<TrInstant,TrInstant,Pulsing<Mix<Int<8192>,Black,RgbArg<OFF_COLOR_ARG,Magenta>>,RgbArg<OFF_COLOR_ARG,Magenta>,8000>>>>(),
      //CC2
      StylePtr<Layers<
        Mix<HoldPeakF<SwingSpeed<250>,Scale<SwingAcceleration<100>,Int<50>,Int<500>>,Scale<SwingAcceleration<>,Int<20000>,Int<10000>>>,RandomFlicker<StripesX<Int<15000>,Scale<HoldPeakF<SwingSpeed<200>,Scale<SwingAcceleration<100>,Int<50>,Int<300>>,Scale<SwingAcceleration<100>,Int<24000>,Int<16000>>>,Int<-3200>,Int<-200>>,RgbArg<BASE_COLOR_ARG,Magenta>,RgbArg<BASE_COLOR_ARG,Magenta>,Mix<Int<7710>,Black,RgbArg<BASE_COLOR_ARG,Magenta>>,RgbArg<BASE_COLOR_ARG,Magenta>,Mix<Int<19276>,Black,RgbArg<BASE_COLOR_ARG,Magenta>>>,RgbArg<BASE_COLOR_ARG,Magenta>>,RgbArg<BASE_COLOR_ARG,Magenta>>,
        MultiTransitionEffectL<TrWaveX<RgbArg<BLAST_COLOR_ARG,White>,Scale<WavLen<>,Int<100>,Int<400>>,Int<100>,Scale<WavLen<>,Int<100>,Int<400>>,Int<0>>,EFFECT_BLAST>,
        TransitionEffectL<TrConcat<TrJoin<TrDelay<30>,TrInstant>,RgbArg<CLASH_COLOR_ARG,White>,TrFade<300>>,EFFECT_CLASH>,
        LockupTrL<Strobe<RgbArg<LB_COLOR_ARG,White>,AudioFlicker<RgbArg<LB_COLOR_ARG,White>,Blue>,50,1>,TrInstant,TrFade<1000>,SaberBase::LOCKUP_LIGHTNING_BLOCK>,
        InOutTrL<TrInstant,TrInstant,Pulsing<Mix<Int<8192>,Black,RgbArg<OFF_COLOR_ARG,Magenta>>,RgbArg<OFF_COLOR_ARG,Magenta>,8000>>>>(),
      //Battery Strip
      StylePtr<Layers<
        TransitionLoop<Black,TrConcat<TrWipeIn<200>,RgbArg<BASE_COLOR_ARG,Red>,TrWipeIn<200>>>,
        InOutTrL<TrColorCycleX<IgnitionTime<0>>,TrColorCycleX<RetractionTime<>>,TransitionLoop<Black,TrConcat<TrCenterWipe<500>,Mix<BatteryLevel,Red,Green>,TrCenterWipe<500>>>>>>(),
      "Royalty"
   },
   { "Code Fulcrum;common", "tracks/tano.wav",
      //Plasma Gate
      StylePtr<Layers<
        Mix<HoldPeakF<SwingSpeed<250>,Scale<SwingAcceleration<100>,Int<50>,Int<500>>,Scale<SwingAcceleration<>,Int<20000>,Int<10000>>>,RandomFlicker<StripesX<Int<15000>,Scale<HoldPeakF<SwingSpeed<200>,Scale<SwingAcceleration<100>,Int<50>,Int<300>>,Scale<SwingAcceleration<100>,Int<24000>,Int<16000>>>,Int<-3200>,Int<-200>>,RgbArg<BASE_COLOR_ARG,Rgb<200,210,230>>,RgbArg<BASE_COLOR_ARG,Rgb<200,210,230>>,Mix<Int<7710>,Black,RgbArg<BASE_COLOR_ARG,Rgb<200,210,230>>>,RgbArg<BASE_COLOR_ARG,Rgb<200,210,230>>,Mix<Int<19276>,Black,RgbArg<BASE_COLOR_ARG,Rgb<200,210,230>>>>,RgbArg<BASE_COLOR_ARG,Rgb<200,210,230>>>,RgbArg<BASE_COLOR_ARG,Rgb<200,210,230>>>,
        MultiTransitionEffectL<TrWaveX<RgbArg<BLAST_COLOR_ARG,White>,Scale<WavLen<>,Int<100>,Int<400>>,Int<100>,Scale<WavLen<>,Int<100>,Int<400>>,Int<0>>,EFFECT_BLAST>,
        TransitionEffectL<TrConcat<TrJoin<TrDelay<30>,TrInstant>,RgbArg<CLASH_COLOR_ARG,White>,TrFade<300>>,EFFECT_CLASH>,
        LockupTrL<Strobe<RgbArg<LB_COLOR_ARG,White>,AudioFlicker<RgbArg<LB_COLOR_ARG,White>,Blue>,50,1>,TrInstant,TrFade<1000>,SaberBase::LOCKUP_LIGHTNING_BLOCK>,
        InOutTrL<TrInstant,TrInstant,Pulsing<Mix<Int<8192>,Black,RgbArg<OFF_COLOR_ARG,Rgb<200,210,230>>>,RgbArg<OFF_COLOR_ARG,Rgb<200,210,230>>,8000>>>>(),
      //Blue Blinky
      StylePtr<Layers<
         TransitionLoop<RotateColorsX<Variation,Blue>,TrConcat<TrBoing<1200,2>,RotateColorsX<Variation,Rgb<0,0,10>>,TrFade<1200>>>,
         InOutTrL<TrInstant,TrInstant,TransitionLoop<RotateColorsX<Variation,Blue>,TrConcat<TrBoing<3000,9>,Black,TrDelay<2000>>>>>>(),
      //Red Blinky
      StylePtr<Layers<
         RotateColorsX<Variation,Red>,
         TransitionEffectL<TrConcat<TrInstant,White,TrFade<400>>,EFFECT_BLAST>,
         LockupTrL<AudioFlickerL<White>,TrInstant,TrFade<500>,SaberBase::LOCKUP_NORMAL>,
         LockupTrL<AudioFlickerL<White>,TrInstant,TrFade<500>,SaberBase::LOCKUP_LIGHTNING_BLOCK>,
         TransitionEffectL<TrConcat<TrInstant,White,TrFade<400>>,EFFECT_CLASH>,
         InOutTrL<TrInstant,TrInstant,TransitionLoop<Black,TrConcat<TrDelay<3000>,RotateColorsX<Variation,Red>,TrBoing<2000,5>>>>>>(),
      //MainBlade
      StylePtr<Layers<
         Mix<HoldPeakF<SwingSpeed<250>,Scale<SwingAcceleration<100>,Int<50>,Int<500>>,Scale<SwingAcceleration<>,Int<20000>,Int<10000>>>,RandomFlicker<StripesX<Int<15000>,Scale<HoldPeakF<SwingSpeed<200>,Scale<SwingAcceleration<100>,Int<50>,Int<300>>,Scale<SwingAcceleration<100>,Int<24000>,Int<16000>>>,Int<-3200>,Int<-200>>,RgbArg<BASE_COLOR_ARG,Rgb<200,210,230>>,RgbArg<BASE_COLOR_ARG,Rgb<200,210,230>>,Mix<Int<7710>,Black,RgbArg<BASE_COLOR_ARG,Rgb<200,210,230>>>,RgbArg<BASE_COLOR_ARG,Rgb<200,210,230>>,Mix<Int<19276>,Black,RgbArg<BASE_COLOR_ARG,Rgb<200,210,230>>>>,RgbArg<BASE_COLOR_ARG,Rgb<200,210,230>>>,RgbArg<BASE_COLOR_ARG,Rgb<200,210,230>>>,
         MultiTransitionEffectL<TrWaveX<RgbArg<BLAST_COLOR_ARG,White>,Scale<EffectPosition<EFFECT_BLAST>,Int<100>,Int<400>>,Int<100>,Scale<EffectPosition<EFFECT_BLAST>,Int<100>,Int<400>>,Scale<EffectPosition<EFFECT_BLAST>,Int<28000>,Int<8000>>>,EFFECT_BLAST>,
         Mix<IsLessThan<ClashImpactF<>,Int<26000>>,TransitionEffectL<TrConcat<TrInstant,AlphaL<RgbArg<CLASH_COLOR_ARG,White>,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-12000>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<10000>>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-10000>>>,Scale<ClashImpactF<>,Int<12000>,Int<60000>>>>,TrFadeX<Scale<ClashImpactF<>,Int<200>,Int<400>>>>,EFFECT_CLASH>,TransitionEffectL<TrWaveX<RgbArg<CLASH_COLOR_ARG,White>,Scale<ClashImpactF<>,Int<100>,Int<400>>,Int<100>,Scale<ClashImpactF<>,Int<100>,Int<400>>,Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-12000>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<10000>>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-10000>>>>,EFFECT_CLASH>>,
         LockupTrL<TransitionEffect<AlphaMixL<Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-12000>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<10000>>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-10000>>>,Scale<SwingSpeed<100>,Int<14000>,Int<18000>>>,BrownNoiseFlickerL<RgbArg<LOCKUP_COLOR_ARG,White>,Int<200>>,StripesX<Int<1800>,Scale<NoisySoundLevel,Int<-3500>,Int<-5000>>,Mix<Int<6425>,Black,RgbArg<LOCKUP_COLOR_ARG,White>>,RgbArg<LOCKUP_COLOR_ARG,White>,Mix<Int<12850>,Black,RgbArg<LOCKUP_COLOR_ARG,White>>>>,AlphaL<AudioFlicker<RgbArg<LOCKUP_COLOR_ARG,White>,Mix<Int<10280>,Black,RgbArg<LOCKUP_COLOR_ARG,White>>>,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-12000>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<10000>>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-10000>>>,Int<13000>>>,TrJoin<TrDelay<8000>,TrInstant>,TrFade<3000>,EFFECT_LOCKUP_BEGIN>,TrConcat<TrJoin<TrDelay<50>,TrInstant>,Mix<IsLessThan<ClashImpactF<>,Int<26000>>,RgbArg<LOCKUP_COLOR_ARG,White>,AlphaL<RgbArg<LOCKUP_COLOR_ARG,White>,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-12000>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<10000>>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-10000>>>,Scale<ClashImpactF<>,Int<20000>,Int<60000>>>>>,TrFade<300>>,TrConcat<TrInstant,RgbArg<LOCKUP_COLOR_ARG,White>,TrFade<400>>,SaberBase::LOCKUP_NORMAL>,
         ResponsiveLightningBlockL<Strobe<RgbArg<LB_COLOR_ARG,White>,AudioFlicker<RgbArg<LB_COLOR_ARG,White>,Blue>,50,1>,TrConcat<TrInstant,AlphaL<RgbArg<LB_COLOR_ARG,White>,Bump<Int<12000>,Int<18000>>>,TrFade<200>>,TrConcat<TrInstant,HumpFlickerL<AlphaL<RgbArg<LB_COLOR_ARG,White>,Int<16000>>,30>,TrSmoothFade<600>>>,
         LockupTrL<AlphaL<RandomPerLEDFlickerL<RgbArg<DRAG_COLOR_ARG,White>>,SmoothStep<IntArg<DRAG_SIZE_ARG,28000>,Int<3000>>>,TrConcat<TrJoin<TrDelay<4000>,TrWipeIn<200>>,AlphaL<BrownNoiseFlickerL<RgbArg<DRAG_COLOR_ARG,White>,Int<300>>,SmoothStep<IntArg<DRAG_SIZE_ARG,28000>,Int<3000>>>,TrFade<4000>>,TrFade<300>,SaberBase::LOCKUP_DRAG>,
         LockupTrL<AlphaL<Remap<Scale<RampF,Int<65536>,Int<0>>,StaticFire<Mix<TwistAngle<>,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>,RotateColorsX<Int<3000>,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>>>,Mix<TwistAngle<>,RotateColorsX<Int<3000>,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>>,RotateColorsX<Int<3000>,Mix<Int<12000>,Black,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>>>>,0,3,5,3000,10>>,SmoothStep<IntArg<MELT_SIZE_ARG,28000>,Int<4000>>>,TrConcat<TrWipeIn<100>,AlphaL<RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>,SmoothStep<IntArg<MELT_SIZE_ARG,28000>,Int<4000>>>,TrJoin<TrDelay<4000>,TrFade<300>>,AlphaL<Mix<TwistAngle<>,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>,RotateColorsX<Int<3000>,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>>>,SmoothStep<IntArg<MELT_SIZE_ARG,28000>,Int<4000>>>,TrFade<4000>>,TrWipe<200>,SaberBase::LOCKUP_MELT>,
         InOutTrL<TrWipeX<IgnitionTime<>>,TrWipeInX<RetractionTime<>>>>>(),
      //CC1
      StylePtr<Layers<
        Mix<HoldPeakF<SwingSpeed<250>,Scale<SwingAcceleration<100>,Int<50>,Int<500>>,Scale<SwingAcceleration<>,Int<20000>,Int<10000>>>,RandomFlicker<StripesX<Int<15000>,Scale<HoldPeakF<SwingSpeed<200>,Scale<SwingAcceleration<100>,Int<50>,Int<300>>,Scale<SwingAcceleration<100>,Int<24000>,Int<16000>>>,Int<-3200>,Int<-200>>,RgbArg<BASE_COLOR_ARG,Rgb<200,210,230>>,RgbArg<BASE_COLOR_ARG,Rgb<200,210,230>>,Mix<Int<7710>,Black,RgbArg<BASE_COLOR_ARG,Rgb<200,210,230>>>,RgbArg<BASE_COLOR_ARG,Rgb<200,210,230>>,Mix<Int<19276>,Black,RgbArg<BASE_COLOR_ARG,Rgb<200,210,230>>>>,RgbArg<BASE_COLOR_ARG,Rgb<200,210,230>>>,RgbArg<BASE_COLOR_ARG,Rgb<200,210,230>>>,
        MultiTransitionEffectL<TrWaveX<RgbArg<BLAST_COLOR_ARG,White>,Scale<WavLen<>,Int<100>,Int<400>>,Int<100>,Scale<WavLen<>,Int<100>,Int<400>>,Int<0>>,EFFECT_BLAST>,
        TransitionEffectL<TrConcat<TrJoin<TrDelay<30>,TrInstant>,RgbArg<CLASH_COLOR_ARG,White>,TrFade<300>>,EFFECT_CLASH>,
        LockupTrL<Strobe<RgbArg<LB_COLOR_ARG,White>,AudioFlicker<RgbArg<LB_COLOR_ARG,White>,Blue>,50,1>,TrInstant,TrFade<1000>,SaberBase::LOCKUP_LIGHTNING_BLOCK>,
        InOutTrL<TrInstant,TrInstant,Pulsing<Mix<Int<8192>,Black,RgbArg<OFF_COLOR_ARG,Rgb<200,210,230>>>,RgbArg<OFF_COLOR_ARG,Rgb<200,210,230>>,8000>>>>(),
      //CC2
      StylePtr<Layers<
        Mix<HoldPeakF<SwingSpeed<250>,Scale<SwingAcceleration<100>,Int<50>,Int<500>>,Scale<SwingAcceleration<>,Int<20000>,Int<10000>>>,RandomFlicker<StripesX<Int<15000>,Scale<HoldPeakF<SwingSpeed<200>,Scale<SwingAcceleration<100>,Int<50>,Int<300>>,Scale<SwingAcceleration<100>,Int<24000>,Int<16000>>>,Int<-3200>,Int<-200>>,RgbArg<BASE_COLOR_ARG,Rgb<200,210,230>>,RgbArg<BASE_COLOR_ARG,Rgb<200,210,230>>,Mix<Int<7710>,Black,RgbArg<BASE_COLOR_ARG,Rgb<200,210,230>>>,RgbArg<BASE_COLOR_ARG,Rgb<200,210,230>>,Mix<Int<19276>,Black,RgbArg<BASE_COLOR_ARG,Rgb<200,210,230>>>>,RgbArg<BASE_COLOR_ARG,Rgb<200,210,230>>>,RgbArg<BASE_COLOR_ARG,Rgb<200,210,230>>>,
        MultiTransitionEffectL<TrWaveX<RgbArg<BLAST_COLOR_ARG,White>,Scale<WavLen<>,Int<100>,Int<400>>,Int<100>,Scale<WavLen<>,Int<100>,Int<400>>,Int<0>>,EFFECT_BLAST>,
        TransitionEffectL<TrConcat<TrJoin<TrDelay<30>,TrInstant>,RgbArg<CLASH_COLOR_ARG,White>,TrFade<300>>,EFFECT_CLASH>,
        LockupTrL<Strobe<RgbArg<LB_COLOR_ARG,White>,AudioFlicker<RgbArg<LB_COLOR_ARG,White>,Blue>,50,1>,TrInstant,TrFade<1000>,SaberBase::LOCKUP_LIGHTNING_BLOCK>,
        InOutTrL<TrInstant,TrInstant,Pulsing<Mix<Int<8192>,Black,RgbArg<OFF_COLOR_ARG,Rgb<200,210,230>>>,RgbArg<OFF_COLOR_ARG,Rgb<200,210,230>>,8000>>>>(),
      //Battery Strip
      StylePtr<Layers<
        TransitionLoop<Black,TrConcat<TrWipeIn<200>,RgbArg<BASE_COLOR_ARG,Red>,TrWipeIn<200>>>,
        InOutTrL<TrColorCycleX<IgnitionTime<0>>,TrColorCycleX<RetractionTime<>>,TransitionLoop<Black,TrConcat<TrCenterWipe<500>,Mix<BatteryLevel,Red,Green>,TrCenterWipe<500>>>>>>(),
      "Hand of the Emperor"
   },
};

BladeConfig blades[] = {
 { 0, 
    SubBlade(0, 0, WS281XBladePtr<143, bladePin, Color8::GRB, PowerPINS<bladePowerPin2, bladePowerPin3, bladePowerPin5> >()),
    SubBlade(1, 1, NULL),
    SubBlade(2, 2, NULL),
    SubBlade(3, 142, NULL),
    WS281XBladePtr<4, blade4Pin, Color8::GRB, PowerPINS<bladePowerPin6>>(),
    WS281XBladePtr<4, blade3Pin, Color8::GRB, PowerPINS<bladePowerPin4> >(),
    WS281XBladePtr<11, blade2Pin, Color8::GRB, PowerPINS<bladePowerPin1> >(),
  CONFIGARRAY(presets) },
};
#endif

#ifdef CONFIG_BUTTONS
Button PowerButton(BUTTON_POWER, powerButtonPin, "pow");
Button AuxButton(BUTTON_AUX, auxPin, "aux");
#endif
