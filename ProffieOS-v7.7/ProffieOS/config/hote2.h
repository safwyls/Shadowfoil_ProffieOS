#ifdef CONFIG_TOP
#include "proffieboard_v2_config.h"
#define NUM_BLADES 6
#define NUM_BUTTONS 2
#define VOLUME 1400
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
   { "Mara Emperors Hand;common", "Mara Emperors Hand/tracks/The_Force.wav",
       StylePtr<Layers<
         StripesX<Int<6000>,Scale<SlowNoise<Int<2000>>,Int<-1600>,Int<-3200>>,RotateColorsX<Variation,Rgb<120,0,255>>,RandomPerLEDFlicker<RotateColorsX<Variation,Rgb<60,0,128>>,RotateColorsX<Variation,Rgb<4,0,10>>>,BrownNoiseFlicker<RotateColorsX<Variation,Rgb<10,0,0>>,RotateColorsX<Variation,Rgb<60,0,128>>,300>,RotateColorsX<Variation,Rgb<120,0,255>>,RandomPerLEDFlicker<Black,RotateColorsX<Variation,Rgb<128,0,100>>>,RotateColorsX<Variation,Magenta>>,
         LockupTrL<Layers<
           AlphaL<AudioFlickerL<White>,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Int<4000>,Int<26000>>,Int<6000>>,Scale<SwingSpeed<100>,Int<14000>,Int<18000>>>>,
           AlphaL<White,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Int<4000>,Int<26000>>,Int<6000>>,Int<10000>>>>,TrConcat<TrInstant,White,TrFade<400>>,TrConcat<TrInstant,White,TrFade<400>>,SaberBase::LOCKUP_NORMAL>,
         ResponsiveLightningBlockL<Strobe<White,AudioFlicker<White,Blue>,50,1>,TrConcat<TrInstant,AlphaL<White,Bump<Int<12000>,Int<18000>>>,TrFade<200>>,TrConcat<TrInstant,HumpFlickerL<AlphaL<White,Int<16000>>,30>,TrSmoothFade<600>>>,
         ResponsiveStabL<Orange>,
         ResponsiveBlastL<White,Int<400>,Scale<SwingSpeed<200>,Int<100>,Int<400>>>,
         ResponsiveClashL<White,TrInstant,TrFade<400>,Scale<BladeAngle<0,16000>,Int<4000>,Int<26000>>,Int<6000>,Int<20000>>,
         LockupTrL<AlphaL<BrownNoiseFlickerL<White,Int<300>>,SmoothStep<Int<30000>,Int<5000>>>,TrWipeIn<400>,TrFade<300>,SaberBase::LOCKUP_DRAG>,
         LockupTrL<AlphaL<Mix<TwistAngle<>,Rgb<255,200,0>,DarkOrange>,SmoothStep<Int<28000>,Int<5000>>>,TrWipeIn<600>,TrFade<300>,SaberBase::LOCKUP_MELT>,
         InOutTrL<TrWipe<300>,TrWipeIn<500>>>>(),
       StylePtr<Layers<
         TransitionLoop<RotateColorsX<Variation,Blue>,TrConcat<TrBoing<1200,2>,RotateColorsX<Variation,Rgb<0,0,10>>,TrFade<1200>>>,
         InOutTrL<TrInstant,TrInstant,TransitionLoop<RotateColorsX<Variation,Blue>,TrConcat<TrBoing<3000,9>,Black,TrDelay<2000>>>>>>(),
       StylePtr<Layers<
         RotateColorsX<Variation,Red>,
         TransitionEffectL<TrConcat<TrInstant,White,TrFade<400>>,EFFECT_BLAST>,
         LockupTrL<AudioFlickerL<White>,TrInstant,TrFade<500>,SaberBase::LOCKUP_NORMAL>,
         LockupTrL<AudioFlickerL<White>,TrInstant,TrFade<500>,SaberBase::LOCKUP_LIGHTNING_BLOCK>,
         TransitionEffectL<TrConcat<TrInstant,White,TrFade<400>>,EFFECT_CLASH>,
         InOutTrL<TrInstant,TrInstant,TransitionLoop<Black,TrConcat<TrDelay<3000>,RotateColorsX<Variation,Red>,TrBoing<2000,5>>>>>>(),
       "Hand of the Emperor"},
   { "Mara Jade Skywalker;common", "Mara Jade Skywalker/tracks/The_Force.wav",
      StylePtr<Layers<
         Mix<SmoothStep<Int<16000>,Int<10000>>,StyleFire<RotateColorsX<Variation,Rgb16<17,65535,15138>>,RotateColorsX<Variation,Rgb<21,0,52>>,0,3,FireConfig<0,2000,5>,FireConfig<0,0,0>,FireConfig<0,2000,5>,FireConfig<0,2000,5>>,StyleFire<RotateColorsX<Variation,Rgb16<52,38826,48313>>,RotateColorsX<Variation,Rgb16<13655,57880,5997>>,0,3,FireConfig<0,2000,5>,FireConfig<0,0,0>,FireConfig<0,2000,5>,FireConfig<0,2000,5>>>,
         AlphaL<Stripes<2500,-3000,RotateColorsX<Variation,Rgb16<5695,0,26168>>,RotateColorsX<Variation,Rgb<0,60,0>>,Pulsing<RotateColorsX<Variation,Rgb16<0,0,59477>>,Black,800>>,SwingSpeed<400>>,
         TransitionEffectL<TrConcat<TrInstant,BrownNoiseFlickerL<AlphaL<White,Int<16000>>,Int<50>>,TrSmoothFade<600>>,EFFECT_LOCKUP_END>,
         TransitionEffectL<TrConcat<TrInstant,BrownNoiseFlickerL<AlphaL<White,Int<16000>>,Int<50>>,TrSmoothFade<600>>,EFFECT_LOCKUP_END>,
         ResponsiveLockupL<Strobe<Rgb16<65535,14386,0>,BrownNoiseFlicker<Rgb16<65535,14386,0>,Rgb16<0,0,59477>,500>,50,1>,TrConcat<TrInstant,Rgb16<0,0,59477>,TrFade<200>>,TrFade<400>,Scale<BladeAngle<0,16000>,Int<4000>,Int<26000>>,Int<6000>,Scale<SwingSpeed<100>,Int<10000>,Int<14000>>>,
         ResponsiveLightningBlockL<Strobe<Rgb16<52,38826,48313>,AudioFlicker<Rgb16<52,38826,48313>,Rgb16<5695,0,26168>>,50,1>,TrConcat<TrInstant,AlphaL<Rgb16<5695,0,26168>,Bump<Int<12000>,Int<18000>>>,TrFade<200>>,TrConcat<TrInstant,HumpFlickerL<AlphaL<Rgb16<5695,0,26168>,Int<16000>>,30>,TrSmoothFade<600>>>,
         ResponsiveBlastWaveL<Yellow,Int<400>,Scale<SwingSpeed<200>,Int<100>,Int<400>>>,
         ResponsiveBlastWaveL<Rgb16<0,0,59477>,Int<300>,Int<100>,Int<300>,Scale<BladeAngle<0,16000>,Int<10000>,Int<30000>>,Int<10000>,EFFECT_CLASH>,
         AlphaL<Black,SmoothStep<Scale<SlowNoise<Int<1800>>,Int<22000>,Int<40000>>,Int<24000>>>,
         ResponsiveStabL<Rgb16<56306,19800,93>>,
         ResponsiveDragL<BrownNoiseFlickerL<Rgb16<13655,57880,5997>,Int<300>>,TrWipeIn<400>,TrFade<400>>,
         ResponsiveMeltL<Mix<TwistAngle<>,Rgb16<52,38826,48313>,Rgb16<65535,14386,0>>,TrWipeIn<600>,TrSmoothFade<600>>,
         InOutTrL<TrWipe<750>,TrWipeIn<800>>>>(),
      StylePtr<Layers<
         Stripes<16000,-1000,RotateColorsX<Variation,Blue>,Pulsing<RotateColorsX<Variation,Rgb<0,0,90>>,RotateColorsX<Variation,Blue>,800>,RotateColorsX<Variation,Blue>>,
         TransitionEffectL<TrConcat<TrFade<600>,RandomFlicker<RotateColorsX<Variation,Blue>,RotateColorsX<Variation,Rgb<0,0,160>>>,TrDelay<30000>,RotateColorsX<Variation,Blue>,TrFade<800>>,EFFECT_FORCE>,
         LockupTrL<Layers<
           AlphaL<AudioFlickerL<White>,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Int<4000>,Int<26000>>,Int<6000>>,Scale<SwingSpeed<100>,Int<14000>,Int<18000>>>>,
           AlphaL<White,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Int<4000>,Int<26000>>,Int<6000>>,Int<10000>>>>,TrConcat<TrInstant,White,TrFade<400>>,TrConcat<TrInstant,White,TrFade<400>>,SaberBase::LOCKUP_NORMAL>,
         ResponsiveLightningBlockL<Strobe<White,AudioFlicker<White,Blue>,50,1>,TrConcat<TrInstant,AlphaL<White,Bump<Int<12000>,Int<18000>>>,TrFade<200>>,TrConcat<TrInstant,HumpFlickerL<AlphaL<White,Int<16000>>,30>,TrSmoothFade<600>>>,
         ResponsiveStabL<Red>,
         ResponsiveBlastL<White,Int<400>,Scale<SwingSpeed<200>,Int<100>,Int<400>>>,
         ResponsiveClashL<White,TrInstant,TrFade<400>,Scale<BladeAngle<0,16000>,Int<4000>,Int<26000>>,Int<6000>,Int<20000>>,
         LockupTrL<AlphaL<BrownNoiseFlickerL<White,Int<300>>,SmoothStep<Int<30000>,Int<5000>>>,TrWipeIn<400>,TrFade<300>,SaberBase::LOCKUP_DRAG>,
         LockupTrL<AlphaL<Mix<TwistAngle<>,Red,Orange>,SmoothStep<Int<28000>,Int<5000>>>,TrWipeIn<600>,TrFade<300>,SaberBase::LOCKUP_MELT>,
         InOutTrL<TrWipe<600>,TrWipeIn<600>,Sparkle<Pulsing<Rgb<0,0,128>,Blue,8000>,LightCyan,15>>>>(),
      StylePtr<Layers<
         Stripes<16000,-1000,RotateColorsX<Variation,Green>,Pulsing<RotateColorsX<Variation,Rgb<0,90,0>>,RotateColorsX<Variation,Blue>,800>,RotateColorsX<Variation,Blue>>,
         TransitionEffectL<TrConcat<TrFade<600>,RandomFlicker<RotateColorsX<Variation,Blue>,RotateColorsX<Variation,Rgb<0,0,160>>>,TrDelay<30000>,RotateColorsX<Variation,Blue>,TrFade<800>>,EFFECT_FORCE>,
         LockupTrL<Layers<
           AlphaL<AudioFlickerL<White>,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Int<4000>,Int<26000>>,Int<6000>>,Scale<SwingSpeed<100>,Int<14000>,Int<18000>>>>,
           AlphaL<White,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Int<4000>,Int<26000>>,Int<6000>>,Int<10000>>>>,TrConcat<TrInstant,White,TrFade<400>>,TrConcat<TrInstant,White,TrFade<400>>,SaberBase::LOCKUP_NORMAL>,
         ResponsiveLightningBlockL<Strobe<White,AudioFlicker<White,Blue>,50,1>,TrConcat<TrInstant,AlphaL<White,Bump<Int<12000>,Int<18000>>>,TrFade<200>>,TrConcat<TrInstant,HumpFlickerL<AlphaL<White,Int<16000>>,30>,TrSmoothFade<600>>>,
         ResponsiveStabL<Red>,
         ResponsiveBlastL<White,Int<400>,Scale<SwingSpeed<200>,Int<100>,Int<400>>>,
         ResponsiveClashL<White,TrInstant,TrFade<400>,Scale<BladeAngle<0,16000>,Int<4000>,Int<26000>>,Int<6000>,Int<20000>>,
         LockupTrL<AlphaL<BrownNoiseFlickerL<White,Int<300>>,SmoothStep<Int<30000>,Int<5000>>>,TrWipeIn<400>,TrFade<300>,SaberBase::LOCKUP_DRAG>,
         LockupTrL<AlphaL<Mix<TwistAngle<>,Red,Orange>,SmoothStep<Int<28000>,Int<5000>>>,TrWipeIn<600>,TrFade<300>,SaberBase::LOCKUP_MELT>,
         InOutTrL<TrWipe<600>,TrWipeIn<600>,Sparkle<Pulsing<Rgb<0,0,128>,Green,8000>,Rgb<0,90,0>,15>>>>(),
       "Mara Jade Skywalker"},
   { "Valkyrie;common", "Valkyrie/tracks/battle_cry.wav",
      StylePtr<Layers<
         StripesX<Int<6000>,Scale<SlowNoise<Int<2000>>,Int<-1600>,Int<-3200>>,RotateColorsX<Variation,Rgb<120,0,255>>,RandomPerLEDFlicker<RotateColorsX<Variation,Rgb<60,0,128>>,RotateColorsX<Variation,Rgb<4,0,10>>>,BrownNoiseFlicker<RotateColorsX<Variation,Rgb<10,0,0>>,RotateColorsX<Variation,Rgb<60,0,128>>,300>,RotateColorsX<Variation,Rgb<120,0,255>>,RandomPerLEDFlicker<Black,RotateColorsX<Variation,Rgb<128,0,100>>>,RotateColorsX<Variation,Magenta>>,
         LockupTrL<Layers<
           AlphaL<AudioFlickerL<White>,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Int<4000>,Int<26000>>,Int<6000>>,Scale<SwingSpeed<100>,Int<14000>,Int<18000>>>>,
           AlphaL<White,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Int<4000>,Int<26000>>,Int<6000>>,Int<10000>>>>,TrConcat<TrInstant,White,TrFade<400>>,TrConcat<TrInstant,White,TrFade<400>>,SaberBase::LOCKUP_NORMAL>,
         ResponsiveLightningBlockL<Strobe<White,AudioFlicker<White,Blue>,50,1>,TrConcat<TrInstant,AlphaL<White,Bump<Int<12000>,Int<18000>>>,TrFade<200>>,TrConcat<TrInstant,HumpFlickerL<AlphaL<White,Int<16000>>,30>,TrSmoothFade<600>>>,
         ResponsiveStabL<Orange>,
         ResponsiveBlastL<White,Int<400>,Scale<SwingSpeed<200>,Int<100>,Int<400>>>,
         ResponsiveClashL<White,TrInstant,TrFade<400>,Scale<BladeAngle<0,16000>,Int<4000>,Int<26000>>,Int<6000>,Int<20000>>,
         LockupTrL<AlphaL<BrownNoiseFlickerL<White,Int<300>>,SmoothStep<Int<30000>,Int<5000>>>,TrWipeIn<400>,TrFade<300>,SaberBase::LOCKUP_DRAG>,
         LockupTrL<AlphaL<Mix<TwistAngle<>,Rgb<255,200,0>,DarkOrange>,SmoothStep<Int<28000>,Int<5000>>>,TrWipeIn<600>,TrFade<300>,SaberBase::LOCKUP_MELT>,
         InOutTrL<TrWipe<300>,TrWipeIn<500>>>>(),
      StylePtr<Layers<
         TransitionLoop<RotateColorsX<Variation,Blue>,TrConcat<TrBoing<1200,2>,RotateColorsX<Variation,Rgb<0,0,10>>,TrFade<1200>>>,
         InOutTrL<TrInstant,TrInstant,TransitionLoop<RotateColorsX<Variation,Blue>,TrConcat<TrBoing<3000,9>,Black,TrDelay<2000>>>>>>(),
       StylePtr<Layers<
         RotateColorsX<Variation,Red>,
         TransitionEffectL<TrConcat<TrInstant,White,TrFade<400>>,EFFECT_BLAST>,
         LockupTrL<AudioFlickerL<White>,TrInstant,TrFade<500>,SaberBase::LOCKUP_NORMAL>,
         LockupTrL<AudioFlickerL<White>,TrInstant,TrFade<500>,SaberBase::LOCKUP_LIGHTNING_BLOCK>,
         TransitionEffectL<TrConcat<TrInstant,White,TrFade<400>>,EFFECT_CLASH>,
         InOutTrL<TrInstant,TrInstant,TransitionLoop<Black,TrConcat<TrDelay<3000>,RotateColorsX<Variation,Red>,TrBoing<2000,5>>>>>>(), 
      "Valkyrie"},
   { "GeneralPrincess;common", "tracks/General.wav",
      StylePtr<Layers<AudioFlicker<RotateColorsX<Variation,DeepSkyBlue>,RotateColorsX<Variation,Rgb<0,0,128>>>,TransitionEffectL<TrConcat<TrFade<400>,RotateColorsX<Variation,Rgb<90,180,255>>,TrDelay<30000>,RotateColorsX<Variation,Rgb<90,180,255>>,TrFade<800>>,EFFECT_FORCE>,TransitionEffectL<TrConcat<TrInstant,BrownNoiseFlickerL<AlphaL<White,Int<16000>>,Int<50>>,TrSmoothFade<600>>,EFFECT_LOCKUP_END>,ResponsiveLockupL<Strobe<White,BrownNoiseFlicker<White,Red,300>,50,1>,TrConcat<TrInstant,White,TrFade<200>>,TrFade<400>,Scale<BladeAngle<0,16000>,Int<4000>,Int<26000>>,Int<6000>,Scale<SwingSpeed<100>,Int<10000>,Int<14000>>>,ResponsiveLightningBlockL<Strobe<White,AudioFlicker<White,Blue>,50,1>,TrConcat<TrInstant,AlphaL<White,Bump<Int<12000>,Int<18000>>>,TrFade<200>>,TrConcat<TrInstant,HumpFlickerL<AlphaL<White,Int<16000>>,30>,TrSmoothFade<600>>>,ResponsiveStabL<Red,TrWipeIn<600>,TrWipe<600>>,ResponsiveBlastL<White,Int<400>,Scale<SwingSpeed<200>,Int<100>,Int<400>>,Int<400>>,ResponsiveClashL<White,TrInstant,TrFade<400>,Scale<BladeAngle<0,16000>,Int<4000>,Int<26000>>,Int<6000>>,ResponsiveDragL<BrownNoiseFlickerL<White,Int<300>>,TrWipeIn<400>,TrFade<400>>,ResponsiveMeltL<Mix<TwistAngle<>,Red,Orange>,TrWipeIn<600>,TrSmoothFade<600>>,InOutTrL<TrWipe<300>,TrWipeIn<500>,Black>>>(),
      StylePtr<Layers<
         TransitionLoop<RotateColorsX<Variation,Blue>,TrConcat<TrBoing<1200,2>,RotateColorsX<Variation,Rgb<0,0,10>>,TrFade<1200>>>,
         InOutTrL<TrInstant,TrInstant,TransitionLoop<RotateColorsX<Variation,Blue>,TrConcat<TrBoing<3000,9>,Black,TrDelay<2000>>>>>>(),
      StylePtr<Layers<
         RotateColorsX<Variation,Magenta>,
         TransitionEffectL<TrConcat<TrInstant,White,TrFade<400>>,EFFECT_BLAST>,
         LockupTrL<AudioFlickerL<White>,TrInstant,TrFade<500>,SaberBase::LOCKUP_NORMAL>,
         LockupTrL<AudioFlickerL<White>,TrInstant,TrFade<500>,SaberBase::LOCKUP_LIGHTNING_BLOCK>,
         TransitionEffectL<TrConcat<TrInstant,White,TrFade<400>>,EFFECT_CLASH>,
         InOutTrL<TrInstant,TrInstant,TransitionLoop<Black,TrConcat<TrDelay<3000>,RotateColorsX<Variation,Magenta>,TrBoing<2000,5>>>>>>()},
   { "FinalSteps;common", "tracks/FinalSteps.wav",
       StylePtr<Layers<AudioFlicker<RotateColorsX<Variation,Rgb<180,130,0>>,RotateColorsX<Variation,Rgb<90,65,0>>>,TransitionEffectL<TrConcat<TrFade<400>,RotateColorsX<Variation,Rgb<230,180,80>>,TrDelay<30000>,RotateColorsX<Variation,Rgb<230,180,80>>,TrFade<800>>,EFFECT_FORCE>,TransitionEffectL<TrConcat<TrInstant,BrownNoiseFlickerL<AlphaL<White,Int<16000>>,Int<50>>,TrSmoothFade<600>>,EFFECT_LOCKUP_END>,ResponsiveLockupL<Strobe<White,BrownNoiseFlicker<White,Red,300>,50,1>,TrConcat<TrInstant,White,TrFade<200>>,TrFade<400>,Scale<BladeAngle<0,16000>,Int<4000>,Int<26000>>,Int<6000>,Scale<SwingSpeed<100>,Int<10000>,Int<14000>>>,ResponsiveLightningBlockL<Strobe<White,AudioFlicker<White,Blue>,50,1>,TrConcat<TrInstant,AlphaL<White,Bump<Int<12000>,Int<18000>>>,TrFade<200>>,TrConcat<TrInstant,HumpFlickerL<AlphaL<White,Int<16000>>,30>,TrSmoothFade<600>>>,ResponsiveStabL<Red,TrWipeIn<600>,TrWipe<600>>,ResponsiveBlastL<White,Int<400>,Scale<SwingSpeed<200>,Int<100>,Int<400>>,Int<400>>,ResponsiveClashL<White,TrInstant,TrFade<400>,Scale<BladeAngle<0,16000>,Int<4000>,Int<26000>>,Int<6000>>,ResponsiveDragL<BrownNoiseFlickerL<White,Int<300>>,TrWipeIn<400>,TrFade<400>>,ResponsiveMeltL<Mix<TwistAngle<>,Red,Orange>,TrWipeIn<600>,TrSmoothFade<600>>,InOutTrL<TrWipe<300>,TrWipeIn<500>,Black>>>(),
       StylePtr<Layers<
            TransitionLoop<RotateColorsX<Variation,Blue>,TrConcat<TrBoing<1200,2>,RotateColorsX<Variation,Rgb<0,0,10>>,TrFade<1200>>>,
            InOutTrL<TrInstant,TrInstant,TransitionLoop<RotateColorsX<Variation,Blue>,TrConcat<TrBoing<3000,9>,Black,TrDelay<2000>>>>>>(),
       StylePtr<Layers<
         RotateColorsX<Variation,Red>,
         TransitionEffectL<TrConcat<TrInstant,White,TrFade<400>>,EFFECT_BLAST>,
         LockupTrL<AudioFlickerL<White>,TrInstant,TrFade<500>,SaberBase::LOCKUP_NORMAL>,
         LockupTrL<AudioFlickerL<White>,TrInstant,TrFade<500>,SaberBase::LOCKUP_LIGHTNING_BLOCK>,
         TransitionEffectL<TrConcat<TrInstant,White,TrFade<400>>,EFFECT_CLASH>,
         InOutTrL<TrInstant,TrInstant,TransitionLoop<Black,TrConcat<TrDelay<3000>,RotateColorsX<Variation,Red>,TrBoing<2000,5>>>>>>()},
   { "Ascension;common", "tracks/Ascension.wav",
      StylePtr<Layers<AudioFlicker<RotateColorsX<Variation,Green>,RotateColorsX<Variation,Rgb<0,128,0>>>,TransitionEffectL<TrConcat<TrFade<400>,RotateColorsX<Variation,Rgb<150,255,150>>,TrDelay<30000>,RotateColorsX<Variation,Rgb<150,255,150>>,TrFade<800>>,EFFECT_FORCE>,TransitionEffectL<TrConcat<TrInstant,BrownNoiseFlickerL<AlphaL<White,Int<16000>>,Int<50>>,TrSmoothFade<600>>,EFFECT_LOCKUP_END>,ResponsiveLockupL<Strobe<White,BrownNoiseFlicker<White,Red,300>,50,1>,TrConcat<TrInstant,White,TrFade<200>>,TrFade<400>,Scale<BladeAngle<0,16000>,Int<4000>,Int<26000>>,Int<6000>,Scale<SwingSpeed<100>,Int<10000>,Int<14000>>>,ResponsiveLightningBlockL<Strobe<White,AudioFlicker<White,Blue>,50,1>,TrConcat<TrInstant,AlphaL<White,Bump<Int<12000>,Int<18000>>>,TrFade<200>>,TrConcat<TrInstant,HumpFlickerL<AlphaL<White,Int<16000>>,30>,TrSmoothFade<600>>>,ResponsiveStabL<Red,TrWipeIn<600>,TrWipe<600>>,ResponsiveBlastL<White,Int<400>,Scale<SwingSpeed<200>,Int<100>,Int<400>>,Int<400>>,ResponsiveClashL<White,TrInstant,TrFade<400>,Scale<BladeAngle<0,16000>,Int<4000>,Int<26000>>,Int<6000>>,ResponsiveDragL<BrownNoiseFlickerL<White,Int<300>>,TrWipeIn<400>,TrFade<400>>,ResponsiveMeltL<Mix<TwistAngle<>,Red,Orange>,TrWipeIn<600>,TrSmoothFade<600>>,InOutTrL<TrWipe<300>,TrWipeIn<500>,Black>>>(),
      StylePtr<Layers<
         TransitionLoop<RotateColorsX<Variation,Blue>,TrConcat<TrBoing<1200,2>,RotateColorsX<Variation,Rgb<0,0,10>>,TrFade<1200>>>,
         InOutTrL<TrInstant,TrInstant,TransitionLoop<RotateColorsX<Variation,Blue>,TrConcat<TrBoing<3000,9>,Black,TrDelay<2000>>>>>>(),
       StylePtr<Layers<
         RotateColorsX<Variation,Red>,
         TransitionEffectL<TrConcat<TrInstant,White,TrFade<400>>,EFFECT_BLAST>,
         LockupTrL<AudioFlickerL<White>,TrInstant,TrFade<500>,SaberBase::LOCKUP_NORMAL>,
         LockupTrL<AudioFlickerL<White>,TrInstant,TrFade<500>,SaberBase::LOCKUP_LIGHTNING_BLOCK>,
         TransitionEffectL<TrConcat<TrInstant,White,TrFade<400>>,EFFECT_CLASH>,
         InOutTrL<TrInstant,TrInstant,TransitionLoop<Black,TrConcat<TrDelay<3000>,RotateColorsX<Variation,Red>,TrBoing<2000,5>>>>>>()},
   { "Traveler;common", "tracks/Traveler.wav",
      StylePtr<Layers<AudioFlicker<RotateColorsX<Variation,DeepSkyBlue>,RotateColorsX<Variation,Rgb<0,0,128>>>,TransitionEffectL<TrConcat<TrFade<400>,RotateColorsX<Variation,Rgb<90,180,255>>,TrDelay<30000>,RotateColorsX<Variation,Rgb<90,180,255>>,TrFade<800>>,EFFECT_FORCE>,TransitionEffectL<TrConcat<TrInstant,BrownNoiseFlickerL<AlphaL<White,Int<16000>>,Int<50>>,TrSmoothFade<600>>,EFFECT_LOCKUP_END>,ResponsiveLockupL<Strobe<White,BrownNoiseFlicker<White,Red,300>,50,1>,TrConcat<TrInstant,White,TrFade<200>>,TrFade<400>,Scale<BladeAngle<0,16000>,Int<4000>,Int<26000>>,Int<6000>,Scale<SwingSpeed<100>,Int<10000>,Int<14000>>>,ResponsiveLightningBlockL<Strobe<White,AudioFlicker<White,Blue>,50,1>,TrConcat<TrInstant,AlphaL<White,Bump<Int<12000>,Int<18000>>>,TrFade<200>>,TrConcat<TrInstant,HumpFlickerL<AlphaL<White,Int<16000>>,30>,TrSmoothFade<600>>>,ResponsiveStabL<Red,TrWipeIn<600>,TrWipe<600>>,ResponsiveBlastL<White,Int<400>,Scale<SwingSpeed<200>,Int<100>,Int<400>>,Int<400>>,ResponsiveClashL<White,TrInstant,TrFade<400>,Scale<BladeAngle<0,16000>,Int<4000>,Int<26000>>,Int<6000>>,ResponsiveDragL<BrownNoiseFlickerL<White,Int<300>>,TrWipeIn<400>,TrFade<400>>,ResponsiveMeltL<Mix<TwistAngle<>,Red,Orange>,TrWipeIn<600>,TrSmoothFade<600>>,InOutTrL<TrWipe<300>,TrWipeIn<500>,Black>>>(),
      StylePtr<Layers<
         TransitionLoop<RotateColorsX<Variation,Blue>,TrConcat<TrBoing<1200,2>,RotateColorsX<Variation,Rgb<0,0,10>>,TrFade<1200>>>,
         InOutTrL<TrInstant,TrInstant,TransitionLoop<RotateColorsX<Variation,Blue>,TrConcat<TrBoing<3000,9>,Black,TrDelay<2000>>>>>>(),
       StylePtr<Layers<
         RotateColorsX<Variation,Red>,
         TransitionEffectL<TrConcat<TrInstant,White,TrFade<400>>,EFFECT_BLAST>,
         LockupTrL<AudioFlickerL<White>,TrInstant,TrFade<500>,SaberBase::LOCKUP_NORMAL>,
         LockupTrL<AudioFlickerL<White>,TrInstant,TrFade<500>,SaberBase::LOCKUP_LIGHTNING_BLOCK>,
         TransitionEffectL<TrConcat<TrInstant,White,TrFade<400>>,EFFECT_CLASH>,
         InOutTrL<TrInstant,TrInstant,TransitionLoop<Black,TrConcat<TrDelay<3000>,RotateColorsX<Variation,Red>,TrBoing<2000,5>>>>>>()},
   { "YoungSolo;common", "tracks/JFO5.wav",
      StylePtr<InOutHelper<Blast<LocalizedClash<Lockup<TransitionEffect<TransitionEffect<TransitionEffect<TransitionEffect<TransitionEffect<TransitionEffect<TransitionEffect<Mix<SwingSpeed<400>,StyleFire<Blue,Rgb<0,0,128>,0,3,FireConfig<10,1000,2>,FireConfig<4000,0,0>,FireConfig<2,1000,5>,FireConfig<100,0,5>>,StyleFire<DodgerBlue,SteelBlue,0,5,FireConfig<10,1000,2>,FireConfig<4000,0,0>,FireConfig<2,1000,5>,FireConfig<100,0,5>>>,StyleFire<White,Blue,0,6>,TrInstant,TrSmoothFade<1600>,EFFECT_IGNITION>,Mix<Bump<Int<32768>,Int<16000>>,StyleFire<Blue,Rgb<0,0,128>,0,3,FireConfig<10,1000,2>,FireConfig<4000,0,0>,FireConfig<2,1000,5>,FireConfig<100,0,5>>,RandomPerLEDFlicker<OrangeRed,White>>,TrConcat<TrWipeIn<600>,Mix<Bump<Int<32768>,Int<16000>>,StyleFire<Blue,Rgb<0,0,128>,0,3,FireConfig<10,1000,2>,FireConfig<4000,0,0>,FireConfig<2,1000,5>,FireConfig<100,0,5>>,RandomPerLEDFlicker<Orange,White>>,TrWipe<600>>,TrInstant,EFFECT_STAB>,White,TrInstant,TrSmoothFade<200>,EFFECT_LOCKUP_BEGIN>,StyleFire<Blue,White,0,6>,TrInstant,TrSmoothFade<500>,EFFECT_LOCKUP_END>,Mix<Bump<Int<32768>,Int<10000>>,StyleFire<Blue,Rgb<0,0,128>,0,3,FireConfig<10,1000,2>,FireConfig<4000,0,0>,FireConfig<2,1000,5>,FireConfig<100,0,5>>,White>,TrInstant,TrFade<200>,EFFECT_DRAG_BEGIN>,Mix<Bump<Int<32768>,Int<10000>>,StyleFire<Blue,Rgb<0,0,128>,0,3,FireConfig<10,1000,2>,FireConfig<4000,0,0>,FireConfig<2,1000,5>,FireConfig<100,0,5>>,White>,TrInstant,TrFade<300>,EFFECT_DRAG_END>,Black,TrConcat<TrInstant,HumpFlicker<White,Blue,40>,TrColorCycle<600>>,TrInstant,EFFECT_RETRACTION>,Pulsing<Gradient<Blue,BrownNoiseFlicker<White,Strobe<Blue,White,50,1>,100>>,Gradient<BrownNoiseFlicker<White,Strobe<Blue,White,50,1>,100>,Blue>,3500>,RandomPerLEDFlicker<Blue,White>,Bump<Int<16000>,Int<20000>>,Bump<Int<32768>,Int<10000>>>,White>,White>,300,500,Black>>(),
      StylePtr<Layers<
         TransitionLoop<RotateColorsX<Variation,Blue>,TrConcat<TrBoing<1200,2>,RotateColorsX<Variation,Rgb<0,0,10>>,TrFade<1200>>>,
         InOutTrL<TrInstant,TrInstant,TransitionLoop<RotateColorsX<Variation,Blue>,TrConcat<TrBoing<3000,9>,Black,TrDelay<2000>>>>>>(),
       StylePtr<Layers<
         RotateColorsX<Variation,Red>,
         TransitionEffectL<TrConcat<TrInstant,White,TrFade<400>>,EFFECT_BLAST>,
         LockupTrL<AudioFlickerL<White>,TrInstant,TrFade<500>,SaberBase::LOCKUP_NORMAL>,
         LockupTrL<AudioFlickerL<White>,TrInstant,TrFade<500>,SaberBase::LOCKUP_LIGHTNING_BLOCK>,
         TransitionEffectL<TrConcat<TrInstant,White,TrFade<400>>,EFFECT_CLASH>,
         InOutTrL<TrInstant,TrInstant,TransitionLoop<Black,TrConcat<TrDelay<3000>,RotateColorsX<Variation,Red>,TrBoing<2000,5>>>>>>()},
   { "Empress;common", "tracks/Empress.wav",
      StylePtr<Layers<AudioFlicker<RotateColorsX<Variation,Red>,RotateColorsX<Variation,Rgb<128,0,0>>>,TransitionEffectL<TrConcat<TrFade<400>,RotateColorsX<Variation,Rgb<255,150,150>>,TrDelay<30000>,RotateColorsX<Variation,Rgb<255,150,150>>,TrFade<800>>,EFFECT_FORCE>,TransitionEffectL<TrConcat<TrInstant,BrownNoiseFlickerL<AlphaL<White,Int<16000>>,Int<50>>,TrSmoothFade<600>>,EFFECT_LOCKUP_END>,ResponsiveLockupL<Strobe<White,BrownNoiseFlicker<White,Blue,300>,50,1>,TrConcat<TrInstant,White,TrFade<200>>,TrFade<400>,Scale<BladeAngle<0,16000>,Int<4000>,Int<26000>>,Int<6000>,Scale<SwingSpeed<100>,Int<10000>,Int<14000>>>,ResponsiveLightningBlockL<Strobe<White,AudioFlicker<White,Blue>,50,1>,TrConcat<TrInstant,AlphaL<White,Bump<Int<12000>,Int<18000>>>,TrFade<200>>,TrConcat<TrInstant,HumpFlickerL<AlphaL<White,Int<16000>>,30>,TrSmoothFade<600>>>,ResponsiveStabL<Orange,TrWipeIn<600>,TrWipe<600>>,ResponsiveBlastL<White,Int<400>,Scale<SwingSpeed<200>,Int<100>,Int<400>>,Int<400>>,ResponsiveClashL<White,TrInstant,TrFade<400>,Scale<BladeAngle<0,16000>,Int<4000>,Int<26000>>,Int<6000>>,ResponsiveDragL<BrownNoiseFlickerL<White,Int<300>>,TrWipeIn<400>,TrFade<400>>,ResponsiveMeltL<Mix<TwistAngle<>,OrangeRed,Orange>,TrWipeIn<600>,TrSmoothFade<600>>,InOutTrL<TrWipe<300>,TrWipeIn<500>,Black>>>(),
      StylePtr<Layers<
         TransitionLoop<RotateColorsX<Variation,White>,TrConcat<TrBoing<1200,2>,RotateColorsX<Variation,Rgb<0,0,10>>,TrFade<1200>>>,
         InOutTrL<TrInstant,TrInstant,TransitionLoop<RotateColorsX<Variation,White>,TrConcat<TrBoing<3000,9>,Black,TrDelay<2000>>>>>>(),
       StylePtr<Layers<
         RotateColorsX<Variation,Red>,
         TransitionEffectL<TrConcat<TrInstant,White,TrFade<400>>,EFFECT_BLAST>,
         LockupTrL<AudioFlickerL<White>,TrInstant,TrFade<500>,SaberBase::LOCKUP_NORMAL>,
         LockupTrL<AudioFlickerL<White>,TrInstant,TrFade<500>,SaberBase::LOCKUP_LIGHTNING_BLOCK>,
         TransitionEffectL<TrConcat<TrInstant,White,TrFade<400>>,EFFECT_CLASH>,
         InOutTrL<TrInstant,TrInstant,TransitionLoop<Black,TrConcat<TrDelay<3000>,RotateColorsX<Variation,Red>,TrBoing<2000,5>>>>>>()},
   { "Duke;common", "tracks/Duke.wav",
      StylePtr<Layers<AudioFlicker<RotateColorsX<Variation,Red>,RotateColorsX<Variation,Rgb<128,0,0>>>,TransitionEffectL<TrConcat<TrFade<400>,RotateColorsX<Variation,Rgb<255,150,150>>,TrDelay<30000>,RotateColorsX<Variation,Rgb<255,150,150>>,TrFade<800>>,EFFECT_FORCE>,TransitionEffectL<TrConcat<TrInstant,BrownNoiseFlickerL<AlphaL<White,Int<16000>>,Int<50>>,TrSmoothFade<600>>,EFFECT_LOCKUP_END>,ResponsiveLockupL<Strobe<White,BrownNoiseFlicker<White,Blue,300>,50,1>,TrConcat<TrInstant,White,TrFade<200>>,TrFade<400>,Scale<BladeAngle<0,16000>,Int<4000>,Int<26000>>,Int<6000>,Scale<SwingSpeed<100>,Int<10000>,Int<14000>>>,ResponsiveLightningBlockL<Strobe<White,AudioFlicker<White,Blue>,50,1>,TrConcat<TrInstant,AlphaL<White,Bump<Int<12000>,Int<18000>>>,TrFade<200>>,TrConcat<TrInstant,HumpFlickerL<AlphaL<White,Int<16000>>,30>,TrSmoothFade<600>>>,ResponsiveStabL<Orange,TrWipeIn<600>,TrWipe<600>>,ResponsiveBlastL<White,Int<400>,Scale<SwingSpeed<200>,Int<100>,Int<400>>,Int<400>>,ResponsiveClashL<White,TrInstant,TrFade<400>,Scale<BladeAngle<0,16000>,Int<4000>,Int<26000>>,Int<6000>>,ResponsiveDragL<BrownNoiseFlickerL<White,Int<300>>,TrWipeIn<400>,TrFade<400>>,ResponsiveMeltL<Mix<TwistAngle<>,OrangeRed,Orange>,TrWipeIn<600>,TrSmoothFade<600>>,InOutTrL<TrWipe<300>,TrWipeIn<500>,Black>>>(),
      StylePtr<Layers<
         TransitionLoop<RotateColorsX<Variation,White>,TrConcat<TrBoing<1200,2>,RotateColorsX<Variation,Rgb<0,0,10>>,TrFade<1200>>>,
         InOutTrL<TrInstant,TrInstant,TransitionLoop<RotateColorsX<Variation,White>,TrConcat<TrBoing<3000,9>,Black,TrDelay<2000>>>>>>(),
       StylePtr<Layers<
         RotateColorsX<Variation,Red>,
         TransitionEffectL<TrConcat<TrInstant,White,TrFade<400>>,EFFECT_BLAST>,
         LockupTrL<AudioFlickerL<White>,TrInstant,TrFade<500>,SaberBase::LOCKUP_NORMAL>,
         LockupTrL<AudioFlickerL<White>,TrInstant,TrFade<500>,SaberBase::LOCKUP_LIGHTNING_BLOCK>,
         TransitionEffectL<TrConcat<TrInstant,White,TrFade<400>>,EFFECT_CLASH>,
         InOutTrL<TrInstant,TrInstant,TransitionLoop<Black,TrConcat<TrDelay<3000>,RotateColorsX<Variation,Red>,TrBoing<2000,5>>>>>>()},
   { "TheBoldOne;common", "tracks/TheBoldOne.wav",
      StylePtr<Layers<AudioFlicker<RotateColorsX<Variation,DeepSkyBlue>,RotateColorsX<Variation,Rgb<0,0,128>>>,TransitionEffectL<TrConcat<TrFade<400>,RotateColorsX<Variation,Rgb<90,180,255>>,TrDelay<30000>,RotateColorsX<Variation,Rgb<90,180,255>>,TrFade<800>>,EFFECT_FORCE>,TransitionEffectL<TrConcat<TrInstant,BrownNoiseFlickerL<AlphaL<White,Int<16000>>,Int<50>>,TrSmoothFade<600>>,EFFECT_LOCKUP_END>,ResponsiveLockupL<Strobe<White,BrownNoiseFlicker<White,Red,300>,50,1>,TrConcat<TrInstant,White,TrFade<200>>,TrFade<400>,Scale<BladeAngle<0,16000>,Int<4000>,Int<26000>>,Int<6000>,Scale<SwingSpeed<100>,Int<10000>,Int<14000>>>,ResponsiveLightningBlockL<Strobe<White,AudioFlicker<White,Blue>,50,1>,TrConcat<TrInstant,AlphaL<White,Bump<Int<12000>,Int<18000>>>,TrFade<200>>,TrConcat<TrInstant,HumpFlickerL<AlphaL<White,Int<16000>>,30>,TrSmoothFade<600>>>,ResponsiveStabL<Red,TrWipeIn<600>,TrWipe<600>>,ResponsiveBlastL<White,Int<400>,Scale<SwingSpeed<200>,Int<100>,Int<400>>,Int<400>>,ResponsiveClashL<White,TrInstant,TrFade<400>,Scale<BladeAngle<0,16000>,Int<4000>,Int<26000>>,Int<6000>>,ResponsiveDragL<BrownNoiseFlickerL<White,Int<300>>,TrWipeIn<400>,TrFade<400>>,ResponsiveMeltL<Mix<TwistAngle<>,Red,Orange>,TrWipeIn<600>,TrSmoothFade<600>>,InOutTrL<TrWipe<300>,TrWipeIn<500>,Black>>>(),
      StylePtr<Layers<
         TransitionLoop<RotateColorsX<Variation,Blue>,TrConcat<TrBoing<1200,2>,RotateColorsX<Variation,Rgb<0,0,10>>,TrFade<1200>>>,
         InOutTrL<TrInstant,TrInstant,TransitionLoop<RotateColorsX<Variation,Blue>,TrConcat<TrBoing<3000,9>,Black,TrDelay<2000>>>>>>(),
      StylePtr<Layers<
         RotateColorsX<Variation,Red>,
         TransitionEffectL<TrConcat<TrInstant,White,TrFade<400>>,EFFECT_BLAST>,
         LockupTrL<AudioFlickerL<White>,TrInstant,TrFade<500>,SaberBase::LOCKUP_NORMAL>,
         LockupTrL<AudioFlickerL<White>,TrInstant,TrFade<500>,SaberBase::LOCKUP_LIGHTNING_BLOCK>,
         TransitionEffectL<TrConcat<TrInstant,White,TrFade<400>>,EFFECT_CLASH>,
         InOutTrL<TrInstant,TrInstant,TransitionLoop<Black,TrConcat<TrDelay<3000>,RotateColorsX<Variation,Red>,TrBoing<2000,5>>>>>>()},
   { "KRossguardv3;common", "tracks/TFA_Battle.wav",
      StylePtr<Layers<Stripes<3000,-3500,RotateColorsX<Variation,Red>,RandomPerLEDFlicker<RotateColorsX<Variation,Rgb<60,0,0>>,Black>,BrownNoiseFlicker<RotateColorsX<Variation,Red>,RotateColorsX<Variation,Rgb<30,0,0>>,200>,RandomPerLEDFlicker<RotateColorsX<Variation,Rgb<80,0,0>>,RotateColorsX<Variation,Rgb<30,0,0>>>>,TransitionLoopL<TrConcat<TrWaveX<AudioFlicker<RotateColorsX<Variation,Red>,BrownNoiseFlicker<RotateColorsX<Variation,Rgb<80,0,0>>,Black,200>>,Int<400>,Int<100>,Int<200>,Int<0>>,AlphaL<Red,Int<0>>,TrDelayX<Scale<SlowNoise<Int<1000>>,Int<100>,Int<1000>>>>>,TransitionLoopL<TrConcat<TrWaveX<AudioFlicker<RotateColorsX<Variation,Red>,BrownNoiseFlicker<Black,RotateColorsX<Variation,Rgb<60,0,0>>,300>>,Int<400>,Int<100>,Int<200>,Int<0>>,AlphaL<Red,Int<0>>,TrDelayX<Scale<SlowNoise<Int<1000>>,Int<200>,Int<1500>>>>>,TransitionEffectL<TrConcat<TrInstant,BrownNoiseFlickerL<AlphaL<White,Int<16000>>,Int<50>>,TrSmoothFade<600>>,EFFECT_LOCKUP_END>,ResponsiveLockupL<Strobe<White,BrownNoiseFlicker<White,Blue,300>,50,1>,TrConcat<TrInstant,White,TrFade<200>>,TrFade<400>,Scale<BladeAngle<0,16000>,Int<4000>,Int<26000>>,Int<6000>,Scale<SwingSpeed<100>,Int<10000>,Int<14000>>>,ResponsiveLightningBlockL<Strobe<White,AudioFlicker<White,Blue>,50,1>,TrConcat<TrInstant,AlphaL<White,Bump<Int<12000>,Int<18000>>>,TrFade<200>>,TrConcat<TrInstant,HumpFlickerL<AlphaL<White,Int<16000>>,30>,TrSmoothFade<600>>>,ResponsiveStabL<Orange,TrWipeIn<600>,TrWipe<600>>,ResponsiveBlastL<White,Int<400>,Scale<SwingSpeed<200>,Int<100>,Int<400>>,Int<400>>,ResponsiveClashL<White,TrInstant,TrFade<400>,Scale<BladeAngle<0,16000>,Int<4000>,Int<26000>>,Int<6000>>,ResponsiveDragL<BrownNoiseFlickerL<White,Int<300>>,TrWipeIn<400>,TrFade<400>>,ResponsiveMeltL<Mix<TwistAngle<>,OrangeRed,Orange>,TrWipeIn<600>,TrSmoothFade<600>>,InOutTrL<TrWipe<300>,TrWipeIn<500>,Black>>>(),
      StylePtr<Layers<
         TransitionLoop<RotateColorsX<Variation,White>,TrConcat<TrBoing<1200,2>,RotateColorsX<Variation,Rgb<0,0,10>>,TrFade<1200>>>,
         InOutTrL<TrInstant,TrInstant,TransitionLoop<RotateColorsX<Variation,White>,TrConcat<TrBoing<3000,9>,Black,TrDelay<2000>>>>>>(),
       StylePtr<Layers<
         RotateColorsX<Variation,Red>,
         TransitionEffectL<TrConcat<TrInstant,White,TrFade<400>>,EFFECT_BLAST>,
         LockupTrL<AudioFlickerL<White>,TrInstant,TrFade<500>,SaberBase::LOCKUP_NORMAL>,
         LockupTrL<AudioFlickerL<White>,TrInstant,TrFade<500>,SaberBase::LOCKUP_LIGHTNING_BLOCK>,
         TransitionEffectL<TrConcat<TrInstant,White,TrFade<400>>,EFFECT_CLASH>,
         InOutTrL<TrInstant,TrInstant,TransitionLoop<Black,TrConcat<TrDelay<3000>,RotateColorsX<Variation,Red>,TrBoing<2000,5>>>>>>()},
   { "CrimsonMenace;common", "tracks/CrimsonMenace.wav",
      StylePtr<Layers<AudioFlicker<RotateColorsX<Variation,Red>,RotateColorsX<Variation,Rgb<128,0,0>>>,TransitionEffectL<TrConcat<TrFade<400>,RotateColorsX<Variation,Rgb<255,150,150>>,TrDelay<30000>,RotateColorsX<Variation,Rgb<255,150,150>>,TrFade<800>>,EFFECT_FORCE>,TransitionEffectL<TrConcat<TrInstant,BrownNoiseFlickerL<AlphaL<White,Int<16000>>,Int<50>>,TrSmoothFade<600>>,EFFECT_LOCKUP_END>,ResponsiveLockupL<Strobe<White,BrownNoiseFlicker<White,Blue,300>,50,1>,TrConcat<TrInstant,White,TrFade<200>>,TrFade<400>,Scale<BladeAngle<0,16000>,Int<4000>,Int<26000>>,Int<6000>,Scale<SwingSpeed<100>,Int<10000>,Int<14000>>>,ResponsiveLightningBlockL<Strobe<White,AudioFlicker<White,Blue>,50,1>,TrConcat<TrInstant,AlphaL<White,Bump<Int<12000>,Int<18000>>>,TrFade<200>>,TrConcat<TrInstant,HumpFlickerL<AlphaL<White,Int<16000>>,30>,TrSmoothFade<600>>>,ResponsiveStabL<Orange,TrWipeIn<600>,TrWipe<600>>,ResponsiveBlastL<White,Int<400>,Scale<SwingSpeed<200>,Int<100>,Int<400>>,Int<400>>,ResponsiveClashL<White,TrInstant,TrFade<400>,Scale<BladeAngle<0,16000>,Int<4000>,Int<26000>>,Int<6000>>,ResponsiveDragL<BrownNoiseFlickerL<White,Int<300>>,TrWipeIn<400>,TrFade<400>>,ResponsiveMeltL<Mix<TwistAngle<>,OrangeRed,Orange>,TrWipeIn<600>,TrSmoothFade<600>>,InOutTrL<TrWipe<300>,TrWipeIn<500>,Black>>>(),
      StylePtr<Layers<
         TransitionLoop<RotateColorsX<Variation,Yellow>,TrConcat<TrBoing<1200,2>,RotateColorsX<Variation,Rgb<0,0,10>>,TrFade<1200>>>,
         InOutTrL<TrInstant,TrInstant,TransitionLoop<RotateColorsX<Variation,Yellow>,TrConcat<TrBoing<3000,9>,Black,TrDelay<2000>>>>>>(),
       StylePtr<Layers<
         RotateColorsX<Variation,Red>,
         TransitionEffectL<TrConcat<TrInstant,White,TrFade<400>>,EFFECT_BLAST>,
         LockupTrL<AudioFlickerL<White>,TrInstant,TrFade<500>,SaberBase::LOCKUP_NORMAL>,
         LockupTrL<AudioFlickerL<White>,TrInstant,TrFade<500>,SaberBase::LOCKUP_LIGHTNING_BLOCK>,
         TransitionEffectL<TrConcat<TrInstant,White,TrFade<400>>,EFFECT_CLASH>,
         InOutTrL<TrInstant,TrInstant,TransitionLoop<Black,TrConcat<TrDelay<3000>,RotateColorsX<Variation,Red>,TrBoing<2000,5>>>>>>()},
   { "TeensySF;common", "tracks/venus.wav",
      StylePtr<Layers<AudioFlicker<RotateColorsX<Variation,Green>,RotateColorsX<Variation,Rgb<0,128,0>>>,TransitionEffectL<TrConcat<TrFade<400>,RotateColorsX<Variation,Rgb<150,255,150>>,TrDelay<30000>,RotateColorsX<Variation,Rgb<150,255,150>>,TrFade<800>>,EFFECT_FORCE>,TransitionEffectL<TrConcat<TrInstant,BrownNoiseFlickerL<AlphaL<White,Int<16000>>,Int<50>>,TrSmoothFade<600>>,EFFECT_LOCKUP_END>,ResponsiveLockupL<Strobe<White,BrownNoiseFlicker<White,Red,300>,50,1>,TrConcat<TrInstant,White,TrFade<200>>,TrFade<400>,Scale<BladeAngle<0,16000>,Int<4000>,Int<26000>>,Int<6000>,Scale<SwingSpeed<100>,Int<10000>,Int<14000>>>,ResponsiveLightningBlockL<Strobe<White,AudioFlicker<White,Blue>,50,1>,TrConcat<TrInstant,AlphaL<White,Bump<Int<12000>,Int<18000>>>,TrFade<200>>,TrConcat<TrInstant,HumpFlickerL<AlphaL<White,Int<16000>>,30>,TrSmoothFade<600>>>,ResponsiveStabL<Red,TrWipeIn<600>,TrWipe<600>>,ResponsiveBlastL<White,Int<400>,Scale<SwingSpeed<200>,Int<100>,Int<400>>,Int<400>>,ResponsiveClashL<White,TrInstant,TrFade<400>,Scale<BladeAngle<0,16000>,Int<4000>,Int<26000>>,Int<6000>>,ResponsiveDragL<BrownNoiseFlickerL<White,Int<300>>,TrWipeIn<400>,TrFade<400>>,ResponsiveMeltL<Mix<TwistAngle<>,Red,Orange>,TrWipeIn<600>,TrSmoothFade<600>>,InOutTrL<TrWipe<300>,TrWipeIn<500>,Black>>>(),
      StylePtr<Layers<
         TransitionLoop<RotateColorsX<Variation,Blue>,TrConcat<TrBoing<1200,2>,RotateColorsX<Variation,Rgb<0,0,10>>,TrFade<1200>>>,
         InOutTrL<TrInstant,TrInstant,TransitionLoop<RotateColorsX<Variation,Blue>,TrConcat<TrBoing<3000,9>,Black,TrDelay<2000>>>>>>(),
       StylePtr<Layers<
         RotateColorsX<Variation,Red>,
         TransitionEffectL<TrConcat<TrInstant,White,TrFade<400>>,EFFECT_BLAST>,
         LockupTrL<AudioFlickerL<White>,TrInstant,TrFade<500>,SaberBase::LOCKUP_NORMAL>,
         LockupTrL<AudioFlickerL<White>,TrInstant,TrFade<500>,SaberBase::LOCKUP_LIGHTNING_BLOCK>,
         TransitionEffectL<TrConcat<TrInstant,White,TrFade<400>>,EFFECT_CLASH>,
         InOutTrL<TrInstant,TrInstant,TransitionLoop<Black,TrConcat<TrDelay<3000>,RotateColorsX<Variation,Red>,TrBoing<2000,5>>>>>>()},
   { "SmthJedi;common", "tracks/mars.wav",
      StylePtr<Layers<AudioFlicker<RotateColorsX<Variation,DeepSkyBlue>,RotateColorsX<Variation,Rgb<0,0,128>>>,TransitionEffectL<TrConcat<TrFade<400>,RotateColorsX<Variation,Rgb<90,180,255>>,TrDelay<30000>,RotateColorsX<Variation,Rgb<90,180,255>>,TrFade<800>>,EFFECT_FORCE>,TransitionEffectL<TrConcat<TrInstant,BrownNoiseFlickerL<AlphaL<White,Int<16000>>,Int<50>>,TrSmoothFade<600>>,EFFECT_LOCKUP_END>,ResponsiveLockupL<Strobe<White,BrownNoiseFlicker<White,Red,300>,50,1>,TrConcat<TrInstant,White,TrFade<200>>,TrFade<400>,Scale<BladeAngle<0,16000>,Int<4000>,Int<26000>>,Int<6000>,Scale<SwingSpeed<100>,Int<10000>,Int<14000>>>,ResponsiveLightningBlockL<Strobe<White,AudioFlicker<White,Blue>,50,1>,TrConcat<TrInstant,AlphaL<White,Bump<Int<12000>,Int<18000>>>,TrFade<200>>,TrConcat<TrInstant,HumpFlickerL<AlphaL<White,Int<16000>>,30>,TrSmoothFade<600>>>,ResponsiveStabL<Red,TrWipeIn<600>,TrWipe<600>>,ResponsiveBlastL<White,Int<400>,Scale<SwingSpeed<200>,Int<100>,Int<400>>,Int<400>>,ResponsiveClashL<White,TrInstant,TrFade<400>,Scale<BladeAngle<0,16000>,Int<4000>,Int<26000>>,Int<6000>>,ResponsiveDragL<BrownNoiseFlickerL<White,Int<300>>,TrWipeIn<400>,TrFade<400>>,ResponsiveMeltL<Mix<TwistAngle<>,Red,Orange>,TrWipeIn<600>,TrSmoothFade<600>>,InOutTrL<TrWipe<300>,TrWipeIn<500>,Black>>>(),
      StylePtr<Layers<
         TransitionLoop<RotateColorsX<Variation,Blue>,TrConcat<TrBoing<1200,2>,RotateColorsX<Variation,Rgb<0,0,10>>,TrFade<1200>>>,
         InOutTrL<TrInstant,TrInstant,TransitionLoop<RotateColorsX<Variation,Blue>,TrConcat<TrBoing<3000,9>,Black,TrDelay<2000>>>>>>(),
       StylePtr<Layers<
         RotateColorsX<Variation,Red>,
         TransitionEffectL<TrConcat<TrInstant,White,TrFade<400>>,EFFECT_BLAST>,
         LockupTrL<AudioFlickerL<White>,TrInstant,TrFade<500>,SaberBase::LOCKUP_NORMAL>,
         LockupTrL<AudioFlickerL<White>,TrInstant,TrFade<500>,SaberBase::LOCKUP_LIGHTNING_BLOCK>,
         TransitionEffectL<TrConcat<TrInstant,White,TrFade<400>>,EFFECT_CLASH>,
         InOutTrL<TrInstant,TrInstant,TransitionLoop<Black,TrConcat<TrDelay<3000>,RotateColorsX<Variation,Red>,TrBoing<2000,5>>>>>>()},
   { "SmthGrey;common", "tracks/mercury.wav",
      StylePtr<Layers<AudioFlicker<RotateColorsX<Variation,Green>,RotateColorsX<Variation,Rgb<0,128,0>>>,TransitionEffectL<TrConcat<TrFade<400>,RotateColorsX<Variation,Rgb<150,255,150>>,TrDelay<30000>,RotateColorsX<Variation,Rgb<150,255,150>>,TrFade<800>>,EFFECT_FORCE>,TransitionEffectL<TrConcat<TrInstant,BrownNoiseFlickerL<AlphaL<White,Int<16000>>,Int<50>>,TrSmoothFade<600>>,EFFECT_LOCKUP_END>,ResponsiveLockupL<Strobe<White,BrownNoiseFlicker<White,Red,300>,50,1>,TrConcat<TrInstant,White,TrFade<200>>,TrFade<400>,Scale<BladeAngle<0,16000>,Int<4000>,Int<26000>>,Int<6000>,Scale<SwingSpeed<100>,Int<10000>,Int<14000>>>,ResponsiveLightningBlockL<Strobe<White,AudioFlicker<White,Blue>,50,1>,TrConcat<TrInstant,AlphaL<White,Bump<Int<12000>,Int<18000>>>,TrFade<200>>,TrConcat<TrInstant,HumpFlickerL<AlphaL<White,Int<16000>>,30>,TrSmoothFade<600>>>,ResponsiveStabL<Red,TrWipeIn<600>,TrWipe<600>>,ResponsiveBlastL<White,Int<400>,Scale<SwingSpeed<200>,Int<100>,Int<400>>,Int<400>>,ResponsiveClashL<White,TrInstant,TrFade<400>,Scale<BladeAngle<0,16000>,Int<4000>,Int<26000>>,Int<6000>>,ResponsiveDragL<BrownNoiseFlickerL<White,Int<300>>,TrWipeIn<400>,TrFade<400>>,ResponsiveMeltL<Mix<TwistAngle<>,Red,Orange>,TrWipeIn<600>,TrSmoothFade<600>>,InOutTrL<TrWipe<300>,TrWipeIn<500>,Black>>>(),
      StylePtr<Layers<
         TransitionLoop<RotateColorsX<Variation,Blue>,TrConcat<TrBoing<1200,2>,RotateColorsX<Variation,Rgb<0,0,10>>,TrFade<1200>>>,
         InOutTrL<TrInstant,TrInstant,TransitionLoop<RotateColorsX<Variation,Blue>,TrConcat<TrBoing<3000,9>,Black,TrDelay<2000>>>>>>(),
       StylePtr<Layers<
         RotateColorsX<Variation,Red>,
         TransitionEffectL<TrConcat<TrInstant,White,TrFade<400>>,EFFECT_BLAST>,
         LockupTrL<AudioFlickerL<White>,TrInstant,TrFade<500>,SaberBase::LOCKUP_NORMAL>,
         LockupTrL<AudioFlickerL<White>,TrInstant,TrFade<500>,SaberBase::LOCKUP_LIGHTNING_BLOCK>,
         TransitionEffectL<TrConcat<TrInstant,White,TrFade<400>>,EFFECT_CLASH>,
         InOutTrL<TrInstant,TrInstant,TransitionLoop<Black,TrConcat<TrDelay<3000>,RotateColorsX<Variation,Red>,TrBoing<2000,5>>>>>>()},
   { "SmthFuzz;common", "tracks/uranus.wav",
      StylePtr<Layers<AudioFlicker<RotateColorsX<Variation,DeepSkyBlue>,RotateColorsX<Variation,Rgb<0,0,128>>>,TransitionEffectL<TrConcat<TrFade<400>,RotateColorsX<Variation,Rgb<90,180,255>>,TrDelay<30000>,RotateColorsX<Variation,Rgb<90,180,255>>,TrFade<800>>,EFFECT_FORCE>,TransitionEffectL<TrConcat<TrInstant,BrownNoiseFlickerL<AlphaL<White,Int<16000>>,Int<50>>,TrSmoothFade<600>>,EFFECT_LOCKUP_END>,ResponsiveLockupL<Strobe<White,BrownNoiseFlicker<White,Red,300>,50,1>,TrConcat<TrInstant,White,TrFade<200>>,TrFade<400>,Scale<BladeAngle<0,16000>,Int<4000>,Int<26000>>,Int<6000>,Scale<SwingSpeed<100>,Int<10000>,Int<14000>>>,ResponsiveLightningBlockL<Strobe<White,AudioFlicker<White,Blue>,50,1>,TrConcat<TrInstant,AlphaL<White,Bump<Int<12000>,Int<18000>>>,TrFade<200>>,TrConcat<TrInstant,HumpFlickerL<AlphaL<White,Int<16000>>,30>,TrSmoothFade<600>>>,ResponsiveStabL<Red,TrWipeIn<600>,TrWipe<600>>,ResponsiveBlastL<White,Int<400>,Scale<SwingSpeed<200>,Int<100>,Int<400>>,Int<400>>,ResponsiveClashL<White,TrInstant,TrFade<400>,Scale<BladeAngle<0,16000>,Int<4000>,Int<26000>>,Int<6000>>,ResponsiveDragL<BrownNoiseFlickerL<White,Int<300>>,TrWipeIn<400>,TrFade<400>>,ResponsiveMeltL<Mix<TwistAngle<>,Red,Orange>,TrWipeIn<600>,TrSmoothFade<600>>,InOutTrL<TrWipe<300>,TrWipeIn<500>,Black>>>(),
      StylePtr<Layers<
         TransitionLoop<RotateColorsX<Variation,Blue>,TrConcat<TrBoing<1200,2>,RotateColorsX<Variation,Rgb<0,0,10>>,TrFade<1200>>>,
         InOutTrL<TrInstant,TrInstant,TransitionLoop<RotateColorsX<Variation,Blue>,TrConcat<TrBoing<3000,9>,Black,TrDelay<2000>>>>>>(),
       StylePtr<Layers<
         RotateColorsX<Variation,Red>,
         TransitionEffectL<TrConcat<TrInstant,White,TrFade<400>>,EFFECT_BLAST>,
         LockupTrL<AudioFlickerL<White>,TrInstant,TrFade<500>,SaberBase::LOCKUP_NORMAL>,
         LockupTrL<AudioFlickerL<White>,TrInstant,TrFade<500>,SaberBase::LOCKUP_LIGHTNING_BLOCK>,
         TransitionEffectL<TrConcat<TrInstant,White,TrFade<400>>,EFFECT_CLASH>,
         InOutTrL<TrInstant,TrInstant,TransitionLoop<Black,TrConcat<TrDelay<3000>,RotateColorsX<Variation,Red>,TrBoing<2000,5>>>>>>()},
   { "TthCrstl;common", "tracks/mars.wav",
      StylePtr<Layers<AudioFlicker<RotateColorsX<Variation,DarkOrange>,RotateColorsX<Variation,Rgb<128,34,0>>>,TransitionEffectL<TrConcat<TrFade<400>,RotateColorsX<Variation,Rgb<255,178,110>>,TrDelay<30000>,RotateColorsX<Variation,Rgb<255,178,110>>,TrFade<800>>,EFFECT_FORCE>,TransitionEffectL<TrConcat<TrInstant,BrownNoiseFlickerL<AlphaL<White,Int<16000>>,Int<50>>,TrSmoothFade<600>>,EFFECT_LOCKUP_END>,ResponsiveLockupL<Strobe<White,BrownNoiseFlicker<White,Blue,300>,50,1>,TrConcat<TrInstant,White,TrFade<200>>,TrFade<400>,Scale<BladeAngle<0,16000>,Int<4000>,Int<26000>>,Int<6000>,Scale<SwingSpeed<100>,Int<10000>,Int<14000>>>,ResponsiveLightningBlockL<Strobe<White,AudioFlicker<White,Blue>,50,1>,TrConcat<TrInstant,AlphaL<White,Bump<Int<12000>,Int<18000>>>,TrFade<200>>,TrConcat<TrInstant,HumpFlickerL<AlphaL<White,Int<16000>>,30>,TrSmoothFade<600>>>,ResponsiveStabL<Red,TrWipeIn<600>,TrWipe<600>>,ResponsiveBlastL<White,Int<400>,Scale<SwingSpeed<200>,Int<100>,Int<400>>,Int<400>>,ResponsiveClashL<White,TrInstant,TrFade<400>,Scale<BladeAngle<0,16000>,Int<4000>,Int<26000>>,Int<6000>>,ResponsiveDragL<BrownNoiseFlickerL<White,Int<300>>,TrWipeIn<400>,TrFade<400>>,ResponsiveMeltL<Mix<TwistAngle<>,Red,Orange>,TrWipeIn<600>,TrSmoothFade<600>>,InOutTrL<TrWipe<300>,TrWipeIn<500>,Black>>>(),
      StylePtr<Layers<
         TransitionLoop<RotateColorsX<Variation,Blue>,TrConcat<TrBoing<1200,2>,RotateColorsX<Variation,Rgb<0,0,10>>,TrFade<1200>>>,
         InOutTrL<TrInstant,TrInstant,TransitionLoop<RotateColorsX<Variation,Blue>,TrConcat<TrBoing<3000,9>,Black,TrDelay<2000>>>>>>(),
       StylePtr<Layers<
         RotateColorsX<Variation,Red>,
         TransitionEffectL<TrConcat<TrInstant,White,TrFade<400>>,EFFECT_BLAST>,
         LockupTrL<AudioFlickerL<White>,TrInstant,TrFade<500>,SaberBase::LOCKUP_NORMAL>,
         LockupTrL<AudioFlickerL<White>,TrInstant,TrFade<500>,SaberBase::LOCKUP_LIGHTNING_BLOCK>,
         TransitionEffectL<TrConcat<TrInstant,White,TrFade<400>>,EFFECT_CLASH>,
         InOutTrL<TrInstant,TrInstant,TransitionLoop<Black,TrConcat<TrDelay<3000>,RotateColorsX<Variation,Red>,TrBoing<2000,5>>>>>>()},
   { "Battery;common", "tracks/mars.wav",
       &style_charging,
       &style_charging,
       &style_charging, "Battery\nLevel"}
};

BladeConfig blades[] = {
 { 0, WS281XBladePtr<140, bladePin, Color8::GRB, PowerPINS<bladePowerPin2, bladePowerPin3> >(),
    SubBlade(0, 0, WS281XBladePtr<3, blade2Pin, Color8::GRB, PowerPINS<bladePowerPin4, bladePowerPin5> >()),
    SubBlade(1, 1, NULL),
    SubBlade(1, 1, NULL),
    WS281XBladePtr<1, blade3Pin, Color8::GRB, PowerPINS<bladePowerPin6> >(),
    WS281XBladePtr<11, blade4Pin, Color8::GRB, PowerPINS<bladePowerPin1> >(),
  CONFIGARRAY(presets) },
};
#endif

#ifdef CONFIG_BUTTONS
Button PowerButton(BUTTON_POWER, auxPin, "pow");
Button AuxButton(BUTTON_AUX, powerButtonPin, "aux");
#endif
