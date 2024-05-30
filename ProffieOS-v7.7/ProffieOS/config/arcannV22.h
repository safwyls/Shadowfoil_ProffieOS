#ifdef CONFIG_TOP
#include "proffieboard_v2_config.h"
#define NUM_BLADES 2
#define NUM_BUTTONS 2
#define VOLUME 1800
const unsigned int maxLedsPerStrip = 144;
#define CLASH_THRESHOLD_G 3.0
#define ENABLE_AUDIO
#define ENABLE_MOTION
#define ENABLE_WS2811
#define ENABLE_SD
#define IDLE_OFF_TIME 30000 
#define BC_TWIST_OFF
#define FEMALE_TALKIE_VOICE
#endif

#ifdef CONFIG_PROP
#include "../props/saber_KBC_buttons.h"
#endif

#ifdef CONFIG_PRESETS
Preset presets[] = {
	
			{ "Arcann;common", "tracks/Arcann.wav",
	/* copyright Fett263 Visions (Primary Blade) OS6 Style
https://fett263.com/fett263-proffieOS6-style-library.html#Visions
OS6.7 v4.021
Single Style
Base Style: The Village Bride: F

Base Color: Rgb<255,255,0> (0)

--Effects Included--
Ignition Effect: Standard Ignition
Retraction Effect: Standard Retraction
Lockup Effect: Intensity Lockup V1, Begin Effect: Real Clash, End Effect: Full Blade Absorb
LightningBlock Effect: Responsive Lightning Block
Drag Effect: Intensity Sparking Drag
Melt Effect: Intensity Melt
Blast Effect: Blast Wave (Random)
Clash Effect: Real Clash V1
*/
StylePtr<Layers<RandomPerLEDFlicker<RgbArg<BASE_COLOR_ARG,Rgb<255,255,0>>,AudioFlicker<Mix<Int<6553>,Black,RgbArg<BASE_COLOR_ARG,Rgb<255,255,0>>>,Mix<Int<10992>,Black,RgbArg<BASE_COLOR_ARG,Rgb<255,255,0>>>>>,TransitionEffectL<TrWaveX<RgbArg<BLAST_COLOR_ARG,Rgb<255,255,255>>,Scale<EffectRandomF<EFFECT_BLAST>,Int<100>,Int<400>>,Int<100>,Scale<EffectPosition<EFFECT_BLAST>,Int<100>,Int<400>>,Scale<EffectPosition<EFFECT_BLAST>,Int<28000>,Int<8000>>>,EFFECT_BLAST>,Mix<IsLessThan<ClashImpactF<>,Int<26000>>,TransitionEffectL<TrConcat<TrInstant,AlphaL<RgbArg<CLASH_COLOR_ARG,Rgb<255,255,255>>,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-12000>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<10000>>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-10000>>>,Scale<ClashImpactF<>,Int<12000>,Int<60000>>>>,TrFadeX<Scale<ClashImpactF<>,Int<200>,Int<400>>>>,EFFECT_CLASH>,TransitionEffectL<TrWaveX<RgbArg<CLASH_COLOR_ARG,Rgb<255,255,255>>,Scale<ClashImpactF<>,Int<100>,Int<400>>,Int<100>,Scale<ClashImpactF<>,Int<100>,Int<400>>,Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-12000>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<10000>>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-10000>>>>,EFFECT_CLASH>>,LockupTrL<TransitionEffect<AlphaMixL<Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-12000>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<10000>>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-10000>>>,Scale<SwingSpeed<100>,Int<14000>,Int<18000>>>,BrownNoiseFlickerL<RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,Int<200>>,StripesX<Int<1800>,Scale<NoisySoundLevel,Int<-3500>,Int<-5000>>,Mix<Int<6425>,Black,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>>,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,Mix<Int<12850>,Black,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>>>>,AlphaL<AudioFlicker<RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,Mix<Int<10280>,Black,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>>>,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-12000>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<10000>>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-10000>>>,Int<13000>>>,TrJoin<TrDelay<8000>,TrInstant>,TrFade<3000>,EFFECT_LOCKUP_BEGIN>,TrConcat<TrJoin<TrDelay<50>,TrInstant>,Mix<IsLessThan<ClashImpactF<>,Int<26000>>,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,AlphaL<RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-12000>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<10000>>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-10000>>>,Scale<ClashImpactF<>,Int<20000>,Int<60000>>>>>,TrFade<300>>,TrConcat<TrInstant,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,TrFade<400>>,SaberBase::LOCKUP_NORMAL>,ResponsiveLightningBlockL<Strobe<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,AudioFlicker<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,Blue>,50,1>,TrConcat<TrInstant,AlphaL<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,Bump<Int<12000>,Int<18000>>>,TrFade<200>>,TrConcat<TrInstant,HumpFlickerL<AlphaL<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,Int<16000>>,30>,TrSmoothFade<600>>>,LockupTrL<AlphaL<RandomPerLEDFlickerL<RgbArg<DRAG_COLOR_ARG,Rgb<255,255,255>>>,SmoothStep<IntArg<DRAG_SIZE_ARG,28000>,Int<3000>>>,TrConcat<TrJoin<TrDelay<4000>,TrWipeIn<200>>,AlphaL<BrownNoiseFlickerL<RgbArg<DRAG_COLOR_ARG,Rgb<255,255,255>>,Int<300>>,SmoothStep<IntArg<DRAG_SIZE_ARG,28000>,Int<3000>>>,TrFade<4000>>,TrFade<300>,SaberBase::LOCKUP_DRAG>,LockupTrL<AlphaL<Remap<Scale<RampF,Int<65536>,Int<0>>,StaticFire<Mix<TwistAngle<>,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>,RotateColorsX<Int<3000>,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>>>,Mix<TwistAngle<>,RotateColorsX<Int<3000>,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>>,RotateColorsX<Int<3000>,Mix<Int<12000>,Black,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>>>>,0,3,5,3000,10>>,SmoothStep<IntArg<MELT_SIZE_ARG,28000>,Int<4000>>>,TrConcat<TrWipeIn<100>,AlphaL<RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>,SmoothStep<IntArg<MELT_SIZE_ARG,28000>,Int<4000>>>,TrJoin<TrDelay<4000>,TrFade<300>>,AlphaL<Mix<TwistAngle<>,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>,RotateColorsX<Int<3000>,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>>>,SmoothStep<IntArg<MELT_SIZE_ARG,28000>,Int<4000>>>,TrFade<4000>>,TrWipe<200>,SaberBase::LOCKUP_MELT>,InOutTrL<TrWipeX<IgnitionTime<300>>,TrWipeInX<RetractionTime<0>>,Black>>>(),


	//TOP CC

	/* copyright Fett263 Visions (Accent LED / PCB) OS6 Style
https://fett263.com/fett263-proffieOS6-style-library.html#Visions
OS6.7 v4.021
Single Style
Base Style: The Village Bride: F

Off Behavior: Pulsing Flicker (Two Color)

Base Color: Rgb<255,255,0> (0)

--Effects Included--
Ignition Effect: Cycle Up
PowerUp Effect: Unstable Power Up Forward
Retraction Effect: Cycle Down
CoolDown Effect: Unstable Cool Down Reverse
Lockup Effect: Lockup Flash
LightningBlock Effect: Lightning After Effect
Blast Effect: Blast Wave Up (Sound Based)
Clash Effect: Real Clash V1 Down
*/
StylePtr<Layers<RandomPerLEDFlicker<RgbArg<BASE_COLOR_ARG,Rgb<255,255,0>>,AudioFlicker<Mix<Int<6553>,Black,RgbArg<BASE_COLOR_ARG,Rgb<255,255,0>>>,Mix<Int<10992>,Black,RgbArg<BASE_COLOR_ARG,Rgb<255,255,0>>>>>,TransitionEffectL<TrConcat<TrJoin<TrDelayX<IgnitionTime<0>>,TrInstant>,Stripes<3000,-3500,RgbArg<IGNITION_COLOR_ARG,Rgb<255,255,255>>,RandomPerLEDFlicker<Mix<Int<7710>,Black,RgbArg<IGNITION_COLOR_ARG,Rgb<255,255,255>>>,Black>,BrownNoiseFlicker<RgbArg<IGNITION_COLOR_ARG,Rgb<255,255,255>>,Mix<Int<3855>,Black,RgbArg<IGNITION_COLOR_ARG,Rgb<255,255,255>>>,200>,RandomPerLEDFlicker<Mix<Int<3137>,Black,RgbArg<IGNITION_COLOR_ARG,Rgb<255,255,255>>>,Mix<Int<3855>,Black,RgbArg<IGNITION_COLOR_ARG,Rgb<255,255,255>>>>>,TrFade<800>>,EFFECT_IGNITION>,TransitionEffectL<TrConcat<TrJoin<TrDelayX<RetractionTime<0>>,TrInstant>,Stripes<3000,3500,RgbArg<RETRACTION_COLOR_ARG,Rgb<255,255,255>>,RandomPerLEDFlicker<Mix<Int<7710>,Black,RgbArg<RETRACTION_COLOR_ARG,Rgb<255,255,255>>>,Black>,BrownNoiseFlicker<RgbArg<RETRACTION_COLOR_ARG,Rgb<255,255,255>>,Mix<Int<3855>,Black,RgbArg<RETRACTION_COLOR_ARG,Rgb<255,255,255>>>,200>,RandomPerLEDFlicker<Mix<Int<3137>,Black,RgbArg<RETRACTION_COLOR_ARG,Rgb<255,255,255>>>,Mix<Int<3855>,Black,RgbArg<RETRACTION_COLOR_ARG,Rgb<255,255,255>>>>>,TrFade<800>>,EFFECT_RETRACTION>,TransitionEffectL<TrWaveX<RgbArg<BLAST_COLOR_ARG,Rgb<255,255,255>>,Scale<WavLen<>,Int<100>,Int<400>>,Int<100>,Scale<WavLen<>,Int<100>,Int<400>>,Int<0>>,EFFECT_BLAST>,Mix<IsLessThan<ClashImpactF<>,Int<26000>>,TransitionEffectL<TrWaveX<RgbArg<CLASH_COLOR_ARG,Rgb<255,255,255>>,Scale<ClashImpactF<>,Int<100>,Int<400>>,Int<100>,Scale<ClashImpactF<>,Int<100>,Int<400>>,Int<32768>>,EFFECT_CLASH>,AlphaL<White,Int<0>>>,TransitionEffectL<TrConcat<TrInstant,AlphaL<RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,SmoothStep<ClashImpactF<>,Int<-4000>>>,TrFadeX<Scale<ClashImpactF<>,Int<100>,Int<300>>>>,EFFECT_LOCKUP_BEGIN>,TransitionEffectL<TrConcat<TrInstant,AlphaL<RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,SmoothStep<ClashImpactF<>,Int<-4000>>>,TrFadeX<Scale<ClashImpactF<>,Int<100>,Int<300>>>>,EFFECT_LOCKUP_END>,LockupTrL<AlphaL<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,Int<0>>,TrInstant,TrConcat<TrInstant,Strobe<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,AudioFlicker<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,Blue>,50,1>,TrFade<1000>>,SaberBase::LOCKUP_LIGHTNING_BLOCK>,InOutTrL<TrColorCycleX<IgnitionTime<0>>,TrColorCycleX<RetractionTime<0>>,AudioFlicker<Pulsing<RgbArg<OFF_COLOR_ARG,Rgb<255,255,0>>,Mix<Int<16384>,Black,RgbArg<OFF_COLOR_ARG,Rgb<255,255,0>>>,3000>,RgbArg<ALT_COLOR_ARG,Rgb<128,128,0>>>>>>(),},





{ "The_Return;common", "tracks/The_Return.wav",
	/* copyright Fett263 Rotoscope (Primary Blade) OS6 Style
	https://fett263.com/fett263-proffieOS6-style-library.html#Rotoscope
	OS6.7 v4.01
	Single Style
	Base Style: Rotoscope - Single Color (Prequels)

	Base Color: Rgb<0,255,0> (0)

	--Effects Included--
	Ignition Effect: Standard Ignition
	Retraction Effect: Standard Retraction
	Lockup Effect: Intensity Lockup V1, Begin Effect: Real Clash, End Effect: Full Blade Absorb
	LightningBlock Effect: Responsive Lightning Block
	Drag Effect: Intensity Sparking Drag
	Melt Effect: Intensity Melt
	Blast Effect: Blast Ripple
	Clash Effect: Real Clash V1
	*/
	StylePtr<Layers<RandomFlicker<Stripes<24000,-1400,RgbArg<BASE_COLOR_ARG,Rgb<0,255,0>>,RgbArg<BASE_COLOR_ARG,Rgb<0,255,0>>,Mix<Int<11565>,Black,RgbArg<BASE_COLOR_ARG,Rgb<0,255,0>>>,RgbArg<BASE_COLOR_ARG,Rgb<0,255,0>>,Mix<Int<16448>,Black,RgbArg<BASE_COLOR_ARG,Rgb<0,255,0>>>>,RgbArg<BASE_COLOR_ARG,Rgb<0,255,0>>>,MultiTransitionEffectL<TrConcat<TrInstant,AlphaL<RgbArg<BLAST_COLOR_ARG,Rgb<255,255,255>>,Bump<Scale<EffectRandomF<EFFECT_BLAST>,Int<3000>,Int<29000>>,Int<6000>>>,TrCenterWipeX<Int<100>,Scale<EffectRandomF<EFFECT_BLAST>,Int<3000>,Int<29000>>>,Remap<CenterDistF<Scale<EffectRandomF<EFFECT_BLAST>,Int<3000>,Int<29000>>>,Stripes<1600,-2000,RgbArg<BLAST_COLOR_ARG,Rgb<255,255,255>>,Mix<Int<2096>,Black,RgbArg<BLAST_COLOR_ARG,Rgb<255,255,255>>>>>,TrCenterWipeX<Int<100>,Scale<EffectRandomF<EFFECT_BLAST>,Int<3000>,Int<29000>>>>,EFFECT_BLAST>,Mix<IsLessThan<ClashImpactF<>,Int<26000>>,TransitionEffectL<TrConcat<TrInstant,AlphaL<RgbArg<CLASH_COLOR_ARG,Rgb<100,100,150>>,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-12000>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<10000>>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-10000>>>,Scale<ClashImpactF<>,Int<12000>,Int<60000>>>>,TrFadeX<Scale<ClashImpactF<>,Int<200>,Int<400>>>>,EFFECT_CLASH>,TransitionEffectL<TrWaveX<RgbArg<CLASH_COLOR_ARG,Rgb<100,100,150>>,Scale<ClashImpactF<>,Int<100>,Int<400>>,Int<100>,Scale<ClashImpactF<>,Int<100>,Int<400>>,Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-12000>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<10000>>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-10000>>>>,EFFECT_CLASH>>,LockupTrL<TransitionEffect<AlphaMixL<Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-12000>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<10000>>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-10000>>>,Scale<SwingSpeed<100>,Int<14000>,Int<18000>>>,BrownNoiseFlickerL<RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,Int<200>>,StripesX<Int<1800>,Scale<NoisySoundLevel,Int<-3500>,Int<-5000>>,Mix<Int<6425>,Black,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>>,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,Mix<Int<12850>,Black,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>>>>,AlphaL<AudioFlicker<RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,Mix<Int<10280>,Black,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>>>,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-12000>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<10000>>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-10000>>>,Int<13000>>>,TrJoin<TrDelay<8000>,TrInstant>,TrFade<3000>,EFFECT_LOCKUP_BEGIN>,TrConcat<TrJoin<TrDelay<50>,TrInstant>,Mix<IsLessThan<ClashImpactF<>,Int<26000>>,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,AlphaL<RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-12000>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<10000>>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-10000>>>,Scale<ClashImpactF<>,Int<20000>,Int<60000>>>>>,TrFade<300>>,TrConcat<TrInstant,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,TrFade<400>>,SaberBase::LOCKUP_NORMAL>,ResponsiveLightningBlockL<Strobe<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,AudioFlicker<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,Blue>,50,1>,TrConcat<TrInstant,AlphaL<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,Bump<Int<12000>,Int<18000>>>,TrFade<200>>,TrConcat<TrInstant,HumpFlickerL<AlphaL<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,Int<16000>>,30>,TrSmoothFade<600>>>,LockupTrL<AlphaL<RandomPerLEDFlickerL<RgbArg<DRAG_COLOR_ARG,Rgb<255,255,255>>>,SmoothStep<IntArg<DRAG_SIZE_ARG,28000>,Int<3000>>>,TrConcat<TrJoin<TrDelay<4000>,TrWipeIn<200>>,AlphaL<BrownNoiseFlickerL<RgbArg<DRAG_COLOR_ARG,Rgb<255,255,255>>,Int<300>>,SmoothStep<IntArg<DRAG_SIZE_ARG,28000>,Int<3000>>>,TrFade<4000>>,TrFade<300>,SaberBase::LOCKUP_DRAG>,LockupTrL<AlphaL<Remap<Scale<RampF,Int<65536>,Int<0>>,StaticFire<Mix<TwistAngle<>,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>,RotateColorsX<Int<3000>,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>>>,Mix<TwistAngle<>,RotateColorsX<Int<3000>,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>>,RotateColorsX<Int<3000>,Mix<Int<12000>,Black,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>>>>,0,3,5,3000,10>>,SmoothStep<IntArg<MELT_SIZE_ARG,28000>,Int<4000>>>,TrConcat<TrWipeIn<100>,AlphaL<RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>,SmoothStep<IntArg<MELT_SIZE_ARG,28000>,Int<4000>>>,TrJoin<TrDelay<4000>,TrFade<300>>,AlphaL<Mix<TwistAngle<>,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>,RotateColorsX<Int<3000>,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>>>,SmoothStep<IntArg<MELT_SIZE_ARG,28000>,Int<4000>>>,TrFade<4000>>,TrWipe<200>,SaberBase::LOCKUP_MELT>,InOutTrL<TrWipeX<IgnitionTime<300>>,TrWipeInX<RetractionTime<0>>,Black>>>(),

	//TOP CC

	/* copyright Fett263 KyloRen (Accent LED / PCB) OS6 Style
https://fett263.com/fett263-proffieOS6-style-library.html#KyloRen
OS6.7 v4.021
Single Style
Base Style: Kylo Ren Unstable (Film Based)

Off Behavior: Slow Pulse Off-On

Base Color: Rgb<0,255,0> (0)

--Effects Included--
Ignition Effect: Glitch On
Retraction Effect: Cycle Down
CoolDown Effect: Unstable Cool Down Reverse
Lockup Effect: Lockup Flash
LightningBlock Effect: Lightning After Effect
Blast Effect: Blast Wave Up (Sound Based)
Clash Effect: Real Clash V1 Up
*/
StylePtr<Layers<StaticFire<BrownNoiseFlicker<RgbArg<BASE_COLOR_ARG,Rgb<0,255,0>>,RandomPerLEDFlicker<Mix<Int<3213>,Black,RgbArg<BASE_COLOR_ARG,Rgb<0,255,0>>>,Mix<Int<7710>,Black,RgbArg<BASE_COLOR_ARG,Rgb<0,255,0>>>>,300>,Mix<Int<10280>,Black,RgbArg<BASE_COLOR_ARG,Rgb<0,255,0>>>,0,6,10,1000,2>,TransitionEffectL<TrConcat<TrJoin<TrDelayX<RetractionTime<5000>>,TrInstant>,Stripes<3000,3500,RgbArg<RETRACTION_COLOR_ARG,Rgb<255,255,255>>,RandomPerLEDFlicker<Mix<Int<7710>,Black,RgbArg<RETRACTION_COLOR_ARG,Rgb<255,255,255>>>,Black>,BrownNoiseFlicker<RgbArg<RETRACTION_COLOR_ARG,Rgb<255,255,255>>,Mix<Int<3855>,Black,RgbArg<RETRACTION_COLOR_ARG,Rgb<255,255,255>>>,200>,RandomPerLEDFlicker<Mix<Int<3137>,Black,RgbArg<RETRACTION_COLOR_ARG,Rgb<255,255,255>>>,Mix<Int<3855>,Black,RgbArg<RETRACTION_COLOR_ARG,Rgb<255,255,255>>>>>,TrFade<800>>,EFFECT_RETRACTION>,TransitionEffectL<TrWaveX<RgbArg<BLAST_COLOR_ARG,Rgb<255,255,255>>,Scale<WavLen<>,Int<100>,Int<400>>,Int<100>,Scale<WavLen<>,Int<100>,Int<400>>,Int<0>>,EFFECT_BLAST>,Mix<IsLessThan<ClashImpactF<>,Int<26000>>,TransitionEffectL<TrWaveX<RgbArg<CLASH_COLOR_ARG,Rgb<255,255,255>>,Scale<ClashImpactF<>,Int<100>,Int<400>>,Int<100>,Scale<ClashImpactF<>,Int<100>,Int<400>>,Int<0>>,EFFECT_CLASH>,AlphaL<White,Int<0>>>,TransitionEffectL<TrConcat<TrInstant,AlphaL<RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,SmoothStep<ClashImpactF<>,Int<-4000>>>,TrFadeX<Scale<ClashImpactF<>,Int<100>,Int<300>>>>,EFFECT_LOCKUP_BEGIN>,TransitionEffectL<TrConcat<TrInstant,AlphaL<RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,SmoothStep<ClashImpactF<>,Int<-4000>>>,TrFadeX<Scale<ClashImpactF<>,Int<100>,Int<300>>>>,EFFECT_LOCKUP_END>,LockupTrL<AlphaL<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,Int<0>>,TrInstant,TrConcat<TrInstant,Strobe<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,AudioFlicker<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,Blue>,50,1>,TrFade<1000>>,SaberBase::LOCKUP_LIGHTNING_BLOCK>,InOutTrL<TrConcat<TrJoin<TrDelayX<Mult<IgnitionTime<3000>,Int<16384>>>,TrWipeX<Mult<IgnitionTime<3000>,Int<16384>>>>,Mix<SmoothStep<NoisySoundLevel,Int<-1>>,Black,RgbArg<IGNITION_COLOR_ARG,Rgb<255,255,255>>>,TrWipeX<Mult<IgnitionTime<3000>,Int<16384>>>>,TrColorCycleX<RetractionTime<5000>>,Pulsing<Black,Rgb<135,232,146>,8000>>>>(),},






{ "ANI3;common", "tracks/ANI3.wav",
	/* copyright Fett263 Rotoscope (Primary Blade) OS6 Style
	https://fett263.com/fett263-proffieOS6-style-library.html#Rotoscope
	OS6.7 v4.016
	Single Style
	Base Style: Hyper Responsive Rotoscope (Prequels)

	Base Color: Rgb<0,135,255> (0)

	--Effects Included--
	Ignition Effect: Standard Ignition
	Retraction Effect: Standard Retraction
	Lockup Effect: Intensity Lockup V1, Begin Effect: Real Clash, End Effect: Full Blade Absorb
	LightningBlock Effect: Responsive Lightning Block
	Drag Effect: Intensity Sparking Drag
	Melt Effect: Intensity Melt
	Blast Effect: Blast Wave (Random)
	Clash Effect: Real Clash V1
	*/
		StylePtr<Layers<Mix<HoldPeakF<SwingSpeed<250>,Scale<SwingAcceleration<100>,Int<50>,Int<500>>,Scale<SwingAcceleration<>,Int<20000>,Int<10000>>>,RandomFlicker<StripesX<Int<24000>,Scale<HoldPeakF<SwingSpeed<200>,Scale<SwingAcceleration<100>,Int<50>,Int<300>>,Scale<SwingAcceleration<100>,Int<24000>,Int<16000>>>,Int<-1400>,Int<-100>>,RgbArg<BASE_COLOR_ARG,Rgb<0,135,255>>,RgbArg<BASE_COLOR_ARG,Rgb<0,135,255>>,Mix<Int<7710>,Black,RgbArg<BASE_COLOR_ARG,Rgb<0,135,255>>>,RgbArg<BASE_COLOR_ARG,Rgb<0,135,255>>,Mix<Int<19276>,Black,RgbArg<BASE_COLOR_ARG,Rgb<0,135,255>>>>,RgbArg<BASE_COLOR_ARG,Rgb<0,135,255>>>,RgbArg<BASE_COLOR_ARG,Rgb<0,135,255>>>,TransitionEffectL<TrWaveX<RgbArg<BLAST_COLOR_ARG,Rgb<255,255,255>>,Scale<EffectRandomF<EFFECT_BLAST>,Int<100>,Int<400>>,Int<100>,Scale<EffectPosition<EFFECT_BLAST>,Int<100>,Int<400>>,Scale<EffectPosition<EFFECT_BLAST>,Int<28000>,Int<8000>>>,EFFECT_BLAST>,Mix<IsLessThan<ClashImpactF<>,Int<26000>>,TransitionEffectL<TrConcat<TrInstant,AlphaL<RgbArg<CLASH_COLOR_ARG,Rgb<255,255,255>>,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Sum<IntArg<LOCKUP_POSITION_ARG,15632>,Int<-12000>>,Sum<IntArg<LOCKUP_POSITION_ARG,15632>,Int<10000>>>,Sum<IntArg<LOCKUP_POSITION_ARG,15632>,Int<-10000>>>,Scale<ClashImpactF<>,Int<12000>,Int<60000>>>>,TrFadeX<Scale<ClashImpactF<>,Int<200>,Int<400>>>>,EFFECT_CLASH>,TransitionEffectL<TrWaveX<RgbArg<CLASH_COLOR_ARG,Rgb<255,255,255>>,Scale<ClashImpactF<>,Int<100>,Int<400>>,Int<100>,Scale<ClashImpactF<>,Int<100>,Int<400>>,Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Sum<IntArg<LOCKUP_POSITION_ARG,15632>,Int<-12000>>,Sum<IntArg<LOCKUP_POSITION_ARG,15632>,Int<10000>>>,Sum<IntArg<LOCKUP_POSITION_ARG,15632>,Int<-10000>>>>,EFFECT_CLASH>>,LockupTrL<TransitionEffect<AlphaMixL<Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Sum<IntArg<LOCKUP_POSITION_ARG,15632>,Int<-12000>>,Sum<IntArg<LOCKUP_POSITION_ARG,15632>,Int<10000>>>,Sum<IntArg<LOCKUP_POSITION_ARG,15632>,Int<-10000>>>,Scale<SwingSpeed<100>,Int<14000>,Int<18000>>>,BrownNoiseFlickerL<RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,Int<200>>,StripesX<Int<1800>,Scale<NoisySoundLevel,Int<-3500>,Int<-5000>>,Mix<Int<6425>,Black,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>>,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,Mix<Int<12850>,Black,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>>>>,AlphaL<AudioFlicker<RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,Mix<Int<10280>,Black,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>>>,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Sum<IntArg<LOCKUP_POSITION_ARG,15632>,Int<-12000>>,Sum<IntArg<LOCKUP_POSITION_ARG,15632>,Int<10000>>>,Sum<IntArg<LOCKUP_POSITION_ARG,15632>,Int<-10000>>>,Int<13000>>>,TrJoin<TrDelay<8000>,TrInstant>,TrFade<3000>,EFFECT_LOCKUP_BEGIN>,TrConcat<TrJoin<TrDelay<50>,TrInstant>,Mix<IsLessThan<ClashImpactF<>,Int<26000>>,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,AlphaL<RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Sum<IntArg<LOCKUP_POSITION_ARG,15632>,Int<-12000>>,Sum<IntArg<LOCKUP_POSITION_ARG,15632>,Int<10000>>>,Sum<IntArg<LOCKUP_POSITION_ARG,15632>,Int<-10000>>>,Scale<ClashImpactF<>,Int<20000>,Int<60000>>>>>,TrFade<300>>,TrConcat<TrInstant,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,TrFade<400>>,SaberBase::LOCKUP_NORMAL>,ResponsiveLightningBlockL<Strobe<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,AudioFlicker<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,Blue>,50,1>,TrConcat<TrInstant,AlphaL<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,Bump<Int<12000>,Int<18000>>>,TrFade<200>>,TrConcat<TrInstant,HumpFlickerL<AlphaL<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,Int<16000>>,30>,TrSmoothFade<600>>>,LockupTrL<AlphaL<RandomPerLEDFlickerL<RgbArg<DRAG_COLOR_ARG,Rgb<255,255,255>>>,SmoothStep<IntArg<DRAG_SIZE_ARG,28000>,Int<3000>>>,TrConcat<TrJoin<TrDelay<4000>,TrWipeIn<200>>,AlphaL<BrownNoiseFlickerL<RgbArg<DRAG_COLOR_ARG,Rgb<255,255,255>>,Int<300>>,SmoothStep<IntArg<DRAG_SIZE_ARG,28000>,Int<3000>>>,TrFade<4000>>,TrFade<300>,SaberBase::LOCKUP_DRAG>,LockupTrL<AlphaL<Remap<Scale<RampF,Int<65536>,Int<0>>,StaticFire<Mix<TwistAngle<>,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>,RotateColorsX<Int<3000>,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>>>,Mix<TwistAngle<>,RotateColorsX<Int<3000>,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>>,RotateColorsX<Int<3000>,Mix<Int<12000>,Black,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>>>>,0,3,5,3000,10>>,SmoothStep<IntArg<MELT_SIZE_ARG,28000>,Int<4000>>>,TrConcat<TrWipeIn<100>,AlphaL<RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>,SmoothStep<IntArg<MELT_SIZE_ARG,28000>,Int<4000>>>,TrJoin<TrDelay<4000>,TrFade<300>>,AlphaL<Mix<TwistAngle<>,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>,RotateColorsX<Int<3000>,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>>>,SmoothStep<IntArg<MELT_SIZE_ARG,28000>,Int<4000>>>,TrFade<4000>>,TrWipe<200>,SaberBase::LOCKUP_MELT>,InOutTrL<TrWipeX<IgnitionTime<300>>,TrWipeInX<RetractionTime<0>>,Black>>>(),

		//TOP CC

	/* copyright Fett263 KyloRen (Accent LED / PCB) OS6 Style
https://fett263.com/fett263-proffieOS6-style-library.html#KyloRen
OS6.7 v4.021
Single Style
Base Style: Kylo Ren Unstable (Film Based)

Off Behavior: Slow Pulse Off-On

Base Color: Rgb<0,0,255> (0)

--Effects Included--
Ignition Effect: Glitch On
Retraction Effect: Cycle Down
CoolDown Effect: Unstable Cool Down Reverse
Lockup Effect: Lockup Flash
LightningBlock Effect: Lightning After Effect
Blast Effect: Blast Wave Up (Sound Based)
Clash Effect: Real Clash V1 Up
*/
StylePtr<Layers<StaticFire<BrownNoiseFlicker<RgbArg<BASE_COLOR_ARG,Rgb<0,0,255>>,RandomPerLEDFlicker<Mix<Int<3213>,Black,RgbArg<BASE_COLOR_ARG,Rgb<0,0,255>>>,Mix<Int<7710>,Black,RgbArg<BASE_COLOR_ARG,Rgb<0,0,255>>>>,300>,Mix<Int<10280>,Black,RgbArg<BASE_COLOR_ARG,Rgb<0,0,255>>>,0,6,10,1000,2>,TransitionEffectL<TrConcat<TrJoin<TrDelayX<RetractionTime<5000>>,TrInstant>,Stripes<3000,3500,RgbArg<RETRACTION_COLOR_ARG,Rgb<255,255,255>>,RandomPerLEDFlicker<Mix<Int<7710>,Black,RgbArg<RETRACTION_COLOR_ARG,Rgb<255,255,255>>>,Black>,BrownNoiseFlicker<RgbArg<RETRACTION_COLOR_ARG,Rgb<255,255,255>>,Mix<Int<3855>,Black,RgbArg<RETRACTION_COLOR_ARG,Rgb<255,255,255>>>,200>,RandomPerLEDFlicker<Mix<Int<3137>,Black,RgbArg<RETRACTION_COLOR_ARG,Rgb<255,255,255>>>,Mix<Int<3855>,Black,RgbArg<RETRACTION_COLOR_ARG,Rgb<255,255,255>>>>>,TrFade<800>>,EFFECT_RETRACTION>,TransitionEffectL<TrWaveX<RgbArg<BLAST_COLOR_ARG,Rgb<255,255,255>>,Scale<WavLen<>,Int<100>,Int<400>>,Int<100>,Scale<WavLen<>,Int<100>,Int<400>>,Int<0>>,EFFECT_BLAST>,Mix<IsLessThan<ClashImpactF<>,Int<26000>>,TransitionEffectL<TrWaveX<RgbArg<CLASH_COLOR_ARG,Rgb<255,255,255>>,Scale<ClashImpactF<>,Int<100>,Int<400>>,Int<100>,Scale<ClashImpactF<>,Int<100>,Int<400>>,Int<0>>,EFFECT_CLASH>,AlphaL<White,Int<0>>>,TransitionEffectL<TrConcat<TrInstant,AlphaL<RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,SmoothStep<ClashImpactF<>,Int<-4000>>>,TrFadeX<Scale<ClashImpactF<>,Int<100>,Int<300>>>>,EFFECT_LOCKUP_BEGIN>,TransitionEffectL<TrConcat<TrInstant,AlphaL<RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,SmoothStep<ClashImpactF<>,Int<-4000>>>,TrFadeX<Scale<ClashImpactF<>,Int<100>,Int<300>>>>,EFFECT_LOCKUP_END>,LockupTrL<AlphaL<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,Int<0>>,TrInstant,TrConcat<TrInstant,Strobe<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,AudioFlicker<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,Blue>,50,1>,TrFade<1000>>,SaberBase::LOCKUP_LIGHTNING_BLOCK>,InOutTrL<TrConcat<TrJoin<TrDelayX<Mult<IgnitionTime<3000>,Int<16384>>>,TrWipeX<Mult<IgnitionTime<3000>,Int<16384>>>>,Mix<SmoothStep<NoisySoundLevel,Int<-1>>,Black,RgbArg<IGNITION_COLOR_ARG,Rgb<255,255,255>>>,TrWipeX<Mult<IgnitionTime<3000>,Int<16384>>>>,TrColorCycleX<RetractionTime<5000>>,Pulsing<Black,RgbArg<OFF_COLOR_ARG,Rgb<2,72,255>>,8000>>>>(),},





	{ "Ben;common", "tracks/Ben.wav",
	/* copyright Fett263 Rotoscope (Primary Blade) OS6 Style
	https://fett263.com/fett263-proffieOS6-style-library.html#Rotoscope
	OS6.7 v4.016
	Single Style
	Base Style: Hyper Responsive Rotoscope (Prequels)

	Base Color: Rgb<0,135,255> (0)

	--Effects Included--
	Ignition Effect: Standard Ignition
	Retraction Effect: Standard Retraction
	Lockup Effect: Intensity Lockup V1, Begin Effect: Real Clash, End Effect: Full Blade Absorb
	LightningBlock Effect: Responsive Lightning Block
	Drag Effect: Intensity Sparking Drag
	Melt Effect: Intensity Melt
	Blast Effect: Blast Wave (Random)
	Clash Effect: Real Clash V1
	*/
		StylePtr<Layers<Mix<HoldPeakF<SwingSpeed<250>,Scale<SwingAcceleration<100>,Int<50>,Int<500>>,Scale<SwingAcceleration<>,Int<20000>,Int<10000>>>,RandomFlicker<StripesX<Int<24000>,Scale<HoldPeakF<SwingSpeed<200>,Scale<SwingAcceleration<100>,Int<50>,Int<300>>,Scale<SwingAcceleration<100>,Int<24000>,Int<16000>>>,Int<-1400>,Int<-100>>,RgbArg<BASE_COLOR_ARG,Rgb<0,135,255>>,RgbArg<BASE_COLOR_ARG,Rgb<0,135,255>>,Mix<Int<7710>,Black,RgbArg<BASE_COLOR_ARG,Rgb<0,135,255>>>,RgbArg<BASE_COLOR_ARG,Rgb<0,135,255>>,Mix<Int<19276>,Black,RgbArg<BASE_COLOR_ARG,Rgb<0,135,255>>>>,RgbArg<BASE_COLOR_ARG,Rgb<0,135,255>>>,RgbArg<BASE_COLOR_ARG,Rgb<0,135,255>>>,TransitionEffectL<TrWaveX<RgbArg<BLAST_COLOR_ARG,Rgb<255,255,255>>,Scale<EffectRandomF<EFFECT_BLAST>,Int<100>,Int<400>>,Int<100>,Scale<EffectPosition<EFFECT_BLAST>,Int<100>,Int<400>>,Scale<EffectPosition<EFFECT_BLAST>,Int<28000>,Int<8000>>>,EFFECT_BLAST>,Mix<IsLessThan<ClashImpactF<>,Int<26000>>,TransitionEffectL<TrConcat<TrInstant,AlphaL<RgbArg<CLASH_COLOR_ARG,Rgb<255,255,255>>,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Sum<IntArg<LOCKUP_POSITION_ARG,15632>,Int<-12000>>,Sum<IntArg<LOCKUP_POSITION_ARG,15632>,Int<10000>>>,Sum<IntArg<LOCKUP_POSITION_ARG,15632>,Int<-10000>>>,Scale<ClashImpactF<>,Int<12000>,Int<60000>>>>,TrFadeX<Scale<ClashImpactF<>,Int<200>,Int<400>>>>,EFFECT_CLASH>,TransitionEffectL<TrWaveX<RgbArg<CLASH_COLOR_ARG,Rgb<255,255,255>>,Scale<ClashImpactF<>,Int<100>,Int<400>>,Int<100>,Scale<ClashImpactF<>,Int<100>,Int<400>>,Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Sum<IntArg<LOCKUP_POSITION_ARG,15632>,Int<-12000>>,Sum<IntArg<LOCKUP_POSITION_ARG,15632>,Int<10000>>>,Sum<IntArg<LOCKUP_POSITION_ARG,15632>,Int<-10000>>>>,EFFECT_CLASH>>,LockupTrL<TransitionEffect<AlphaMixL<Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Sum<IntArg<LOCKUP_POSITION_ARG,15632>,Int<-12000>>,Sum<IntArg<LOCKUP_POSITION_ARG,15632>,Int<10000>>>,Sum<IntArg<LOCKUP_POSITION_ARG,15632>,Int<-10000>>>,Scale<SwingSpeed<100>,Int<14000>,Int<18000>>>,BrownNoiseFlickerL<RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,Int<200>>,StripesX<Int<1800>,Scale<NoisySoundLevel,Int<-3500>,Int<-5000>>,Mix<Int<6425>,Black,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>>,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,Mix<Int<12850>,Black,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>>>>,AlphaL<AudioFlicker<RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,Mix<Int<10280>,Black,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>>>,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Sum<IntArg<LOCKUP_POSITION_ARG,15632>,Int<-12000>>,Sum<IntArg<LOCKUP_POSITION_ARG,15632>,Int<10000>>>,Sum<IntArg<LOCKUP_POSITION_ARG,15632>,Int<-10000>>>,Int<13000>>>,TrJoin<TrDelay<8000>,TrInstant>,TrFade<3000>,EFFECT_LOCKUP_BEGIN>,TrConcat<TrJoin<TrDelay<50>,TrInstant>,Mix<IsLessThan<ClashImpactF<>,Int<26000>>,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,AlphaL<RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Sum<IntArg<LOCKUP_POSITION_ARG,15632>,Int<-12000>>,Sum<IntArg<LOCKUP_POSITION_ARG,15632>,Int<10000>>>,Sum<IntArg<LOCKUP_POSITION_ARG,15632>,Int<-10000>>>,Scale<ClashImpactF<>,Int<20000>,Int<60000>>>>>,TrFade<300>>,TrConcat<TrInstant,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,TrFade<400>>,SaberBase::LOCKUP_NORMAL>,ResponsiveLightningBlockL<Strobe<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,AudioFlicker<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,Blue>,50,1>,TrConcat<TrInstant,AlphaL<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,Bump<Int<12000>,Int<18000>>>,TrFade<200>>,TrConcat<TrInstant,HumpFlickerL<AlphaL<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,Int<16000>>,30>,TrSmoothFade<600>>>,LockupTrL<AlphaL<RandomPerLEDFlickerL<RgbArg<DRAG_COLOR_ARG,Rgb<255,255,255>>>,SmoothStep<IntArg<DRAG_SIZE_ARG,28000>,Int<3000>>>,TrConcat<TrJoin<TrDelay<4000>,TrWipeIn<200>>,AlphaL<BrownNoiseFlickerL<RgbArg<DRAG_COLOR_ARG,Rgb<255,255,255>>,Int<300>>,SmoothStep<IntArg<DRAG_SIZE_ARG,28000>,Int<3000>>>,TrFade<4000>>,TrFade<300>,SaberBase::LOCKUP_DRAG>,LockupTrL<AlphaL<Remap<Scale<RampF,Int<65536>,Int<0>>,StaticFire<Mix<TwistAngle<>,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>,RotateColorsX<Int<3000>,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>>>,Mix<TwistAngle<>,RotateColorsX<Int<3000>,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>>,RotateColorsX<Int<3000>,Mix<Int<12000>,Black,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>>>>,0,3,5,3000,10>>,SmoothStep<IntArg<MELT_SIZE_ARG,28000>,Int<4000>>>,TrConcat<TrWipeIn<100>,AlphaL<RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>,SmoothStep<IntArg<MELT_SIZE_ARG,28000>,Int<4000>>>,TrJoin<TrDelay<4000>,TrFade<300>>,AlphaL<Mix<TwistAngle<>,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>,RotateColorsX<Int<3000>,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>>>,SmoothStep<IntArg<MELT_SIZE_ARG,28000>,Int<4000>>>,TrFade<4000>>,TrWipe<200>,SaberBase::LOCKUP_MELT>,InOutTrL<TrWipeX<IgnitionTime<300>>,TrWipeInX<RetractionTime<0>>,Black>>>(),

		//TOP CC

	/* copyright Fett263 KyloRen (Accent LED / PCB) OS6 Style
https://fett263.com/fett263-proffieOS6-style-library.html#KyloRen
OS6.7 v4.021
Single Style
Base Style: Kylo Ren Unstable (Film Based)

Off Behavior: Slow Pulse Off-On

Base Color: Rgb<0,0,255> (0)

--Effects Included--
Ignition Effect: Glitch On
Retraction Effect: Cycle Down
CoolDown Effect: Unstable Cool Down Reverse
Lockup Effect: Lockup Flash
LightningBlock Effect: Lightning After Effect
Blast Effect: Blast Wave Up (Sound Based)
Clash Effect: Real Clash V1 Up
*/
StylePtr<Layers<StaticFire<BrownNoiseFlicker<RgbArg<BASE_COLOR_ARG,Rgb<0,0,255>>,RandomPerLEDFlicker<Mix<Int<3213>,Black,RgbArg<BASE_COLOR_ARG,Rgb<0,0,255>>>,Mix<Int<7710>,Black,RgbArg<BASE_COLOR_ARG,Rgb<0,0,255>>>>,300>,Mix<Int<10280>,Black,RgbArg<BASE_COLOR_ARG,Rgb<0,0,255>>>,0,6,10,1000,2>,TransitionEffectL<TrConcat<TrJoin<TrDelayX<RetractionTime<5000>>,TrInstant>,Stripes<3000,3500,RgbArg<RETRACTION_COLOR_ARG,Rgb<255,255,255>>,RandomPerLEDFlicker<Mix<Int<7710>,Black,RgbArg<RETRACTION_COLOR_ARG,Rgb<255,255,255>>>,Black>,BrownNoiseFlicker<RgbArg<RETRACTION_COLOR_ARG,Rgb<255,255,255>>,Mix<Int<3855>,Black,RgbArg<RETRACTION_COLOR_ARG,Rgb<255,255,255>>>,200>,RandomPerLEDFlicker<Mix<Int<3137>,Black,RgbArg<RETRACTION_COLOR_ARG,Rgb<255,255,255>>>,Mix<Int<3855>,Black,RgbArg<RETRACTION_COLOR_ARG,Rgb<255,255,255>>>>>,TrFade<800>>,EFFECT_RETRACTION>,TransitionEffectL<TrWaveX<RgbArg<BLAST_COLOR_ARG,Rgb<255,255,255>>,Scale<WavLen<>,Int<100>,Int<400>>,Int<100>,Scale<WavLen<>,Int<100>,Int<400>>,Int<0>>,EFFECT_BLAST>,Mix<IsLessThan<ClashImpactF<>,Int<26000>>,TransitionEffectL<TrWaveX<RgbArg<CLASH_COLOR_ARG,Rgb<255,255,255>>,Scale<ClashImpactF<>,Int<100>,Int<400>>,Int<100>,Scale<ClashImpactF<>,Int<100>,Int<400>>,Int<0>>,EFFECT_CLASH>,AlphaL<White,Int<0>>>,TransitionEffectL<TrConcat<TrInstant,AlphaL<RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,SmoothStep<ClashImpactF<>,Int<-4000>>>,TrFadeX<Scale<ClashImpactF<>,Int<100>,Int<300>>>>,EFFECT_LOCKUP_BEGIN>,TransitionEffectL<TrConcat<TrInstant,AlphaL<RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,SmoothStep<ClashImpactF<>,Int<-4000>>>,TrFadeX<Scale<ClashImpactF<>,Int<100>,Int<300>>>>,EFFECT_LOCKUP_END>,LockupTrL<AlphaL<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,Int<0>>,TrInstant,TrConcat<TrInstant,Strobe<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,AudioFlicker<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,Blue>,50,1>,TrFade<1000>>,SaberBase::LOCKUP_LIGHTNING_BLOCK>,InOutTrL<TrConcat<TrJoin<TrDelayX<Mult<IgnitionTime<3000>,Int<16384>>>,TrWipeX<Mult<IgnitionTime<3000>,Int<16384>>>>,Mix<SmoothStep<NoisySoundLevel,Int<-1>>,Black,RgbArg<IGNITION_COLOR_ARG,Rgb<255,255,255>>>,TrWipeX<Mult<IgnitionTime<3000>,Int<16384>>>>,TrColorCycleX<RetractionTime<5000>>,Pulsing<Black,RgbArg<OFF_COLOR_ARG,Rgb<2,72,255>>,8000>>>>(),},





	{ "Blind_Cowboy;common", "tracks/Blind_Cowboy.wav",
	/* copyright Fett263 Rotoscope (Primary Blade) OS6 Style
	https://fett263.com/fett263-proffieOS6-style-library.html#Rotoscope
	OS6.7 v4.016
	Single Style
	Base Style: Hyper Responsive Rotoscope (Prequels)

	Base Color: Rgb<0,135,255> (0)

	--Effects Included--
	Ignition Effect: Standard Ignition
	Retraction Effect: Standard Retraction
	Lockup Effect: Intensity Lockup V1, Begin Effect: Real Clash, End Effect: Full Blade Absorb
	LightningBlock Effect: Responsive Lightning Block
	Drag Effect: Intensity Sparking Drag
	Melt Effect: Intensity Melt
	Blast Effect: Blast Wave (Random)
	Clash Effect: Real Clash V1
	*/
		StylePtr<Layers<Mix<HoldPeakF<SwingSpeed<250>,Scale<SwingAcceleration<100>,Int<50>,Int<500>>,Scale<SwingAcceleration<>,Int<20000>,Int<10000>>>,RandomFlicker<StripesX<Int<24000>,Scale<HoldPeakF<SwingSpeed<200>,Scale<SwingAcceleration<100>,Int<50>,Int<300>>,Scale<SwingAcceleration<100>,Int<24000>,Int<16000>>>,Int<-1400>,Int<-100>>,RgbArg<BASE_COLOR_ARG,Rgb<0,135,255>>,RgbArg<BASE_COLOR_ARG,Rgb<0,135,255>>,Mix<Int<7710>,Black,RgbArg<BASE_COLOR_ARG,Rgb<0,135,255>>>,RgbArg<BASE_COLOR_ARG,Rgb<0,135,255>>,Mix<Int<19276>,Black,RgbArg<BASE_COLOR_ARG,Rgb<0,135,255>>>>,RgbArg<BASE_COLOR_ARG,Rgb<0,135,255>>>,RgbArg<BASE_COLOR_ARG,Rgb<0,135,255>>>,TransitionEffectL<TrWaveX<RgbArg<BLAST_COLOR_ARG,Rgb<255,255,255>>,Scale<EffectRandomF<EFFECT_BLAST>,Int<100>,Int<400>>,Int<100>,Scale<EffectPosition<EFFECT_BLAST>,Int<100>,Int<400>>,Scale<EffectPosition<EFFECT_BLAST>,Int<28000>,Int<8000>>>,EFFECT_BLAST>,Mix<IsLessThan<ClashImpactF<>,Int<26000>>,TransitionEffectL<TrConcat<TrInstant,AlphaL<RgbArg<CLASH_COLOR_ARG,Rgb<255,255,255>>,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Sum<IntArg<LOCKUP_POSITION_ARG,15632>,Int<-12000>>,Sum<IntArg<LOCKUP_POSITION_ARG,15632>,Int<10000>>>,Sum<IntArg<LOCKUP_POSITION_ARG,15632>,Int<-10000>>>,Scale<ClashImpactF<>,Int<12000>,Int<60000>>>>,TrFadeX<Scale<ClashImpactF<>,Int<200>,Int<400>>>>,EFFECT_CLASH>,TransitionEffectL<TrWaveX<RgbArg<CLASH_COLOR_ARG,Rgb<255,255,255>>,Scale<ClashImpactF<>,Int<100>,Int<400>>,Int<100>,Scale<ClashImpactF<>,Int<100>,Int<400>>,Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Sum<IntArg<LOCKUP_POSITION_ARG,15632>,Int<-12000>>,Sum<IntArg<LOCKUP_POSITION_ARG,15632>,Int<10000>>>,Sum<IntArg<LOCKUP_POSITION_ARG,15632>,Int<-10000>>>>,EFFECT_CLASH>>,LockupTrL<TransitionEffect<AlphaMixL<Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Sum<IntArg<LOCKUP_POSITION_ARG,15632>,Int<-12000>>,Sum<IntArg<LOCKUP_POSITION_ARG,15632>,Int<10000>>>,Sum<IntArg<LOCKUP_POSITION_ARG,15632>,Int<-10000>>>,Scale<SwingSpeed<100>,Int<14000>,Int<18000>>>,BrownNoiseFlickerL<RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,Int<200>>,StripesX<Int<1800>,Scale<NoisySoundLevel,Int<-3500>,Int<-5000>>,Mix<Int<6425>,Black,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>>,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,Mix<Int<12850>,Black,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>>>>,AlphaL<AudioFlicker<RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,Mix<Int<10280>,Black,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>>>,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Sum<IntArg<LOCKUP_POSITION_ARG,15632>,Int<-12000>>,Sum<IntArg<LOCKUP_POSITION_ARG,15632>,Int<10000>>>,Sum<IntArg<LOCKUP_POSITION_ARG,15632>,Int<-10000>>>,Int<13000>>>,TrJoin<TrDelay<8000>,TrInstant>,TrFade<3000>,EFFECT_LOCKUP_BEGIN>,TrConcat<TrJoin<TrDelay<50>,TrInstant>,Mix<IsLessThan<ClashImpactF<>,Int<26000>>,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,AlphaL<RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Sum<IntArg<LOCKUP_POSITION_ARG,15632>,Int<-12000>>,Sum<IntArg<LOCKUP_POSITION_ARG,15632>,Int<10000>>>,Sum<IntArg<LOCKUP_POSITION_ARG,15632>,Int<-10000>>>,Scale<ClashImpactF<>,Int<20000>,Int<60000>>>>>,TrFade<300>>,TrConcat<TrInstant,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,TrFade<400>>,SaberBase::LOCKUP_NORMAL>,ResponsiveLightningBlockL<Strobe<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,AudioFlicker<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,Blue>,50,1>,TrConcat<TrInstant,AlphaL<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,Bump<Int<12000>,Int<18000>>>,TrFade<200>>,TrConcat<TrInstant,HumpFlickerL<AlphaL<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,Int<16000>>,30>,TrSmoothFade<600>>>,LockupTrL<AlphaL<RandomPerLEDFlickerL<RgbArg<DRAG_COLOR_ARG,Rgb<255,255,255>>>,SmoothStep<IntArg<DRAG_SIZE_ARG,28000>,Int<3000>>>,TrConcat<TrJoin<TrDelay<4000>,TrWipeIn<200>>,AlphaL<BrownNoiseFlickerL<RgbArg<DRAG_COLOR_ARG,Rgb<255,255,255>>,Int<300>>,SmoothStep<IntArg<DRAG_SIZE_ARG,28000>,Int<3000>>>,TrFade<4000>>,TrFade<300>,SaberBase::LOCKUP_DRAG>,LockupTrL<AlphaL<Remap<Scale<RampF,Int<65536>,Int<0>>,StaticFire<Mix<TwistAngle<>,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>,RotateColorsX<Int<3000>,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>>>,Mix<TwistAngle<>,RotateColorsX<Int<3000>,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>>,RotateColorsX<Int<3000>,Mix<Int<12000>,Black,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>>>>,0,3,5,3000,10>>,SmoothStep<IntArg<MELT_SIZE_ARG,28000>,Int<4000>>>,TrConcat<TrWipeIn<100>,AlphaL<RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>,SmoothStep<IntArg<MELT_SIZE_ARG,28000>,Int<4000>>>,TrJoin<TrDelay<4000>,TrFade<300>>,AlphaL<Mix<TwistAngle<>,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>,RotateColorsX<Int<3000>,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>>>,SmoothStep<IntArg<MELT_SIZE_ARG,28000>,Int<4000>>>,TrFade<4000>>,TrWipe<200>,SaberBase::LOCKUP_MELT>,InOutTrL<TrWipeX<IgnitionTime<300>>,TrWipeInX<RetractionTime<0>>,Black>>>(),

		//TOP CC

	/* copyright Fett263 KyloRen (Accent LED / PCB) OS6 Style
https://fett263.com/fett263-proffieOS6-style-library.html#KyloRen
OS6.7 v4.021
Single Style
Base Style: Kylo Ren Unstable (Film Based)

Off Behavior: Slow Pulse Off-On

Base Color: Rgb<0,0,255> (0)

--Effects Included--
Ignition Effect: Glitch On
Retraction Effect: Cycle Down
CoolDown Effect: Unstable Cool Down Reverse
Lockup Effect: Lockup Flash
LightningBlock Effect: Lightning After Effect
Blast Effect: Blast Wave Up (Sound Based)
Clash Effect: Real Clash V1 Up
*/
StylePtr<Layers<StaticFire<BrownNoiseFlicker<RgbArg<BASE_COLOR_ARG,Rgb<0,0,255>>,RandomPerLEDFlicker<Mix<Int<3213>,Black,RgbArg<BASE_COLOR_ARG,Rgb<0,0,255>>>,Mix<Int<7710>,Black,RgbArg<BASE_COLOR_ARG,Rgb<0,0,255>>>>,300>,Mix<Int<10280>,Black,RgbArg<BASE_COLOR_ARG,Rgb<0,0,255>>>,0,6,10,1000,2>,TransitionEffectL<TrConcat<TrJoin<TrDelayX<RetractionTime<5000>>,TrInstant>,Stripes<3000,3500,RgbArg<RETRACTION_COLOR_ARG,Rgb<255,255,255>>,RandomPerLEDFlicker<Mix<Int<7710>,Black,RgbArg<RETRACTION_COLOR_ARG,Rgb<255,255,255>>>,Black>,BrownNoiseFlicker<RgbArg<RETRACTION_COLOR_ARG,Rgb<255,255,255>>,Mix<Int<3855>,Black,RgbArg<RETRACTION_COLOR_ARG,Rgb<255,255,255>>>,200>,RandomPerLEDFlicker<Mix<Int<3137>,Black,RgbArg<RETRACTION_COLOR_ARG,Rgb<255,255,255>>>,Mix<Int<3855>,Black,RgbArg<RETRACTION_COLOR_ARG,Rgb<255,255,255>>>>>,TrFade<800>>,EFFECT_RETRACTION>,TransitionEffectL<TrWaveX<RgbArg<BLAST_COLOR_ARG,Rgb<255,255,255>>,Scale<WavLen<>,Int<100>,Int<400>>,Int<100>,Scale<WavLen<>,Int<100>,Int<400>>,Int<0>>,EFFECT_BLAST>,Mix<IsLessThan<ClashImpactF<>,Int<26000>>,TransitionEffectL<TrWaveX<RgbArg<CLASH_COLOR_ARG,Rgb<255,255,255>>,Scale<ClashImpactF<>,Int<100>,Int<400>>,Int<100>,Scale<ClashImpactF<>,Int<100>,Int<400>>,Int<0>>,EFFECT_CLASH>,AlphaL<White,Int<0>>>,TransitionEffectL<TrConcat<TrInstant,AlphaL<RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,SmoothStep<ClashImpactF<>,Int<-4000>>>,TrFadeX<Scale<ClashImpactF<>,Int<100>,Int<300>>>>,EFFECT_LOCKUP_BEGIN>,TransitionEffectL<TrConcat<TrInstant,AlphaL<RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,SmoothStep<ClashImpactF<>,Int<-4000>>>,TrFadeX<Scale<ClashImpactF<>,Int<100>,Int<300>>>>,EFFECT_LOCKUP_END>,LockupTrL<AlphaL<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,Int<0>>,TrInstant,TrConcat<TrInstant,Strobe<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,AudioFlicker<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,Blue>,50,1>,TrFade<1000>>,SaberBase::LOCKUP_LIGHTNING_BLOCK>,InOutTrL<TrConcat<TrJoin<TrDelayX<Mult<IgnitionTime<3000>,Int<16384>>>,TrWipeX<Mult<IgnitionTime<3000>,Int<16384>>>>,Mix<SmoothStep<NoisySoundLevel,Int<-1>>,Black,RgbArg<IGNITION_COLOR_ARG,Rgb<255,255,255>>>,TrWipeX<Mult<IgnitionTime<3000>,Int<16384>>>>,TrColorCycleX<RetractionTime<5000>>,Pulsing<Black,RgbArg<OFF_COLOR_ARG,Rgb<2,72,255>>,8000>>>>(),},




	{ "BMF;common", "tracks/BMF.wav",
	/* copyright Fett263 Rotoscope (Primary Blade) OS6 Style
	https://fett263.com/fett263-proffieOS6-style-library.html#Rotoscope
	OS6.7 v4.01
	Single Style
	Base Style: Rotoscope - Single Color (Prequels)

	Base Color: Rgb<115,15,240> (0)

	--Effects Included--
	Ignition Effect: Standard Ignition
	Retraction Effect: Standard Retraction
	Lockup Effect: Intensity Lockup V1, Begin Effect: Real Clash, End Effect: Full Blade Absorb
	LightningBlock Effect: Responsive Lightning Block
	Drag Effect: Intensity Sparking Drag
	Melt Effect: Intensity Melt
	Blast Effect: Blast Ripple
	Clash Effect: Real Clash V1
	*/
	StylePtr<Layers<RandomFlicker<Stripes<24000,-1400,RgbArg<BASE_COLOR_ARG,Rgb<115,15,240>>,RgbArg<BASE_COLOR_ARG,Rgb<115,15,240>>,Mix<Int<11565>,Black,RgbArg<BASE_COLOR_ARG,Rgb<115,15,240>>>,RgbArg<BASE_COLOR_ARG,Rgb<115,15,240>>,Mix<Int<16448>,Black,RgbArg<BASE_COLOR_ARG,Rgb<115,15,240>>>>,RgbArg<BASE_COLOR_ARG,Rgb<115,15,240>>>,MultiTransitionEffectL<TrConcat<TrInstant,AlphaL<RgbArg<BLAST_COLOR_ARG,Rgb<255,255,255>>,Bump<Scale<EffectRandomF<EFFECT_BLAST>,Int<3000>,Int<29000>>,Int<6000>>>,TrCenterWipeX<Int<100>,Scale<EffectRandomF<EFFECT_BLAST>,Int<3000>,Int<29000>>>,Remap<CenterDistF<Scale<EffectRandomF<EFFECT_BLAST>,Int<3000>,Int<29000>>>,Stripes<1600,-2000,RgbArg<BLAST_COLOR_ARG,Rgb<255,255,255>>,Mix<Int<2096>,Black,RgbArg<BLAST_COLOR_ARG,Rgb<255,255,255>>>>>,TrCenterWipeX<Int<100>,Scale<EffectRandomF<EFFECT_BLAST>,Int<3000>,Int<29000>>>>,EFFECT_BLAST>,Mix<IsLessThan<ClashImpactF<>,Int<26000>>,TransitionEffectL<TrConcat<TrInstant,AlphaL<RgbArg<CLASH_COLOR_ARG,Rgb<100,100,150>>,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-12000>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<10000>>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-10000>>>,Scale<ClashImpactF<>,Int<12000>,Int<60000>>>>,TrFadeX<Scale<ClashImpactF<>,Int<200>,Int<400>>>>,EFFECT_CLASH>,TransitionEffectL<TrWaveX<RgbArg<CLASH_COLOR_ARG,Rgb<100,100,150>>,Scale<ClashImpactF<>,Int<100>,Int<400>>,Int<100>,Scale<ClashImpactF<>,Int<100>,Int<400>>,Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-12000>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<10000>>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-10000>>>>,EFFECT_CLASH>>,LockupTrL<TransitionEffect<AlphaMixL<Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-12000>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<10000>>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-10000>>>,Scale<SwingSpeed<100>,Int<14000>,Int<18000>>>,BrownNoiseFlickerL<RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,Int<200>>,StripesX<Int<1800>,Scale<NoisySoundLevel,Int<-3500>,Int<-5000>>,Mix<Int<6425>,Black,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>>,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,Mix<Int<12850>,Black,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>>>>,AlphaL<AudioFlicker<RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,Mix<Int<10280>,Black,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>>>,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-12000>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<10000>>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-10000>>>,Int<13000>>>,TrJoin<TrDelay<8000>,TrInstant>,TrFade<3000>,EFFECT_LOCKUP_BEGIN>,TrConcat<TrJoin<TrDelay<50>,TrInstant>,Mix<IsLessThan<ClashImpactF<>,Int<26000>>,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,AlphaL<RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-12000>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<10000>>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-10000>>>,Scale<ClashImpactF<>,Int<20000>,Int<60000>>>>>,TrFade<300>>,TrConcat<TrInstant,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,TrFade<400>>,SaberBase::LOCKUP_NORMAL>,ResponsiveLightningBlockL<Strobe<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,AudioFlicker<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,Blue>,50,1>,TrConcat<TrInstant,AlphaL<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,Bump<Int<12000>,Int<18000>>>,TrFade<200>>,TrConcat<TrInstant,HumpFlickerL<AlphaL<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,Int<16000>>,30>,TrSmoothFade<600>>>,LockupTrL<AlphaL<RandomPerLEDFlickerL<RgbArg<DRAG_COLOR_ARG,Rgb<255,255,255>>>,SmoothStep<IntArg<DRAG_SIZE_ARG,28000>,Int<3000>>>,TrConcat<TrJoin<TrDelay<4000>,TrWipeIn<200>>,AlphaL<BrownNoiseFlickerL<RgbArg<DRAG_COLOR_ARG,Rgb<255,255,255>>,Int<300>>,SmoothStep<IntArg<DRAG_SIZE_ARG,28000>,Int<3000>>>,TrFade<4000>>,TrFade<300>,SaberBase::LOCKUP_DRAG>,LockupTrL<AlphaL<Remap<Scale<RampF,Int<65536>,Int<0>>,StaticFire<Mix<TwistAngle<>,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>,RotateColorsX<Int<3000>,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>>>,Mix<TwistAngle<>,RotateColorsX<Int<3000>,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>>,RotateColorsX<Int<3000>,Mix<Int<12000>,Black,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>>>>,0,3,5,3000,10>>,SmoothStep<IntArg<MELT_SIZE_ARG,28000>,Int<4000>>>,TrConcat<TrWipeIn<100>,AlphaL<RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>,SmoothStep<IntArg<MELT_SIZE_ARG,28000>,Int<4000>>>,TrJoin<TrDelay<4000>,TrFade<300>>,AlphaL<Mix<TwistAngle<>,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>,RotateColorsX<Int<3000>,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>>>,SmoothStep<IntArg<MELT_SIZE_ARG,28000>,Int<4000>>>,TrFade<4000>>,TrWipe<200>,SaberBase::LOCKUP_MELT>,InOutTrL<TrWipeX<IgnitionTime<300>>,TrWipeInX<RetractionTime<0>>,Black>>>(),

		//TOP CC

	/* copyright Fett263 KyloRen (Accent LED / PCB) OS6 Style
https://fett263.com/fett263-proffieOS6-style-library.html#KyloRen
OS6.7 v4.021
Single Style
Base Style: Kylo Ren Unstable (Film Based)

Off Behavior: Slow Pulse Off-On

Base Color: Rgb<115,15,240> (0)

--Effects Included--
Ignition Effect: Glitch On
Retraction Effect: Cycle Down
CoolDown Effect: Unstable Cool Down Reverse
Lockup Effect: Lockup Flash
LightningBlock Effect: Lightning After Effect
Blast Effect: Blast Wave Up (Sound Based)
Clash Effect: Real Clash V1 Up
*/
StylePtr<Layers<StaticFire<BrownNoiseFlicker<RgbArg<BASE_COLOR_ARG,Rgb<115,15,240>>,RandomPerLEDFlicker<Mix<Int<3213>,Black,RgbArg<BASE_COLOR_ARG,Rgb<115,15,240>>>,Mix<Int<7710>,Black,RgbArg<BASE_COLOR_ARG,Rgb<115,15,240>>>>,300>,Mix<Int<10280>,Black,RgbArg<BASE_COLOR_ARG,Rgb<115,15,240>>>,0,6,10,1000,2>,TransitionEffectL<TrConcat<TrJoin<TrDelayX<RetractionTime<5000>>,TrInstant>,Stripes<3000,3500,RgbArg<RETRACTION_COLOR_ARG,Rgb<255,255,255>>,RandomPerLEDFlicker<Mix<Int<7710>,Black,RgbArg<RETRACTION_COLOR_ARG,Rgb<255,255,255>>>,Black>,BrownNoiseFlicker<RgbArg<RETRACTION_COLOR_ARG,Rgb<255,255,255>>,Mix<Int<3855>,Black,RgbArg<RETRACTION_COLOR_ARG,Rgb<255,255,255>>>,200>,RandomPerLEDFlicker<Mix<Int<3137>,Black,RgbArg<RETRACTION_COLOR_ARG,Rgb<255,255,255>>>,Mix<Int<3855>,Black,RgbArg<RETRACTION_COLOR_ARG,Rgb<255,255,255>>>>>,TrFade<800>>,EFFECT_RETRACTION>,TransitionEffectL<TrWaveX<RgbArg<BLAST_COLOR_ARG,Rgb<255,255,255>>,Scale<WavLen<>,Int<100>,Int<400>>,Int<100>,Scale<WavLen<>,Int<100>,Int<400>>,Int<0>>,EFFECT_BLAST>,Mix<IsLessThan<ClashImpactF<>,Int<26000>>,TransitionEffectL<TrWaveX<RgbArg<CLASH_COLOR_ARG,Rgb<255,255,255>>,Scale<ClashImpactF<>,Int<100>,Int<400>>,Int<100>,Scale<ClashImpactF<>,Int<100>,Int<400>>,Int<0>>,EFFECT_CLASH>,AlphaL<White,Int<0>>>,TransitionEffectL<TrConcat<TrInstant,AlphaL<RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,SmoothStep<ClashImpactF<>,Int<-4000>>>,TrFadeX<Scale<ClashImpactF<>,Int<100>,Int<300>>>>,EFFECT_LOCKUP_BEGIN>,TransitionEffectL<TrConcat<TrInstant,AlphaL<RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,SmoothStep<ClashImpactF<>,Int<-4000>>>,TrFadeX<Scale<ClashImpactF<>,Int<100>,Int<300>>>>,EFFECT_LOCKUP_END>,LockupTrL<AlphaL<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,Int<0>>,TrInstant,TrConcat<TrInstant,Strobe<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,AudioFlicker<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,Blue>,50,1>,TrFade<1000>>,SaberBase::LOCKUP_LIGHTNING_BLOCK>,InOutTrL<TrConcat<TrJoin<TrDelayX<Mult<IgnitionTime<3000>,Int<16384>>>,TrWipeX<Mult<IgnitionTime<3000>,Int<16384>>>>,Mix<SmoothStep<NoisySoundLevel,Int<-1>>,Black,RgbArg<IGNITION_COLOR_ARG,Rgb<255,255,255>>>,TrWipeX<Mult<IgnitionTime<3000>,Int<16384>>>>,TrColorCycleX<RetractionTime<5000>>,Pulsing<Black,RgbArg<OFF_COLOR_ARG,Rgb<80,50,210>>,8000>>>>(),},





	{ "Dark;common", "tracks/Dark.wav",
	/* copyright Fett263 DarkSaber (Primary Blade) OS6 Style
	https://fett263.com/fett263-proffieOS6-style-library.html#DarkSaber
	OS6.7 v4.01
	Single Style
	Base Style: Live Action Darksaber (Hyper-Responsive)

	Base Color: Rgb<100,100,150> (0)

	--Effects Included--
	Ignition Effect: Standard Ignition
	Retraction Effect: Standard Retraction
	Lockup Effect: Intensity Lockup V1, Begin Effect: Real Clash, End Effect: Full Blade Absorb
	LightningBlock Effect: Responsive Lightning Block
	Drag Effect: Intensity Sparking Drag
	Melt Effect: Intensity Melt
	Blast Effect: Blast Ripple
	Clash Effect: Real Clash V1
	*/
	StylePtr<Layers<Mix<HoldPeakF<SwingSpeed<400>,Scale<SwingAcceleration<>,Int<2000>,Int<4000>>,Int<8000>>,HumpFlicker<RgbArg<BASE_COLOR_ARG,Rgb<100,100,150>>,Stripes<35000,-200,Mix<Int<14000>,Black,RgbArg<BASE_COLOR_ARG,Rgb<100,100,150>>>,Mix<Int<24000>,Black,RgbArg<BASE_COLOR_ARG,Rgb<100,100,150>>>,Mix<Int<28000>,Black,RgbArg<BASE_COLOR_ARG,Rgb<100,100,150>>>>,100>,RgbArg<BASE_COLOR_ARG,Rgb<100,100,150>>>,MultiTransitionEffectL<TrConcat<TrInstant,AlphaL<RgbArg<BLAST_COLOR_ARG,Rgb<255,255,255>>,Bump<Scale<EffectRandomF<EFFECT_BLAST>,Int<3000>,Int<29000>>,Int<6000>>>,TrCenterWipeX<Int<100>,Scale<EffectRandomF<EFFECT_BLAST>,Int<3000>,Int<29000>>>,Remap<CenterDistF<Scale<EffectRandomF<EFFECT_BLAST>,Int<3000>,Int<29000>>>,Stripes<1600,-2000,RgbArg<BLAST_COLOR_ARG,Rgb<255,255,255>>,Mix<Int<2096>,Black,RgbArg<BLAST_COLOR_ARG,Rgb<255,255,255>>>>>,TrCenterWipeX<Int<100>,Scale<EffectRandomF<EFFECT_BLAST>,Int<3000>,Int<29000>>>>,EFFECT_BLAST>,Mix<IsLessThan<ClashImpactF<>,Int<26000>>,TransitionEffectL<TrConcat<TrInstant,AlphaL<RgbArg<CLASH_COLOR_ARG,Rgb<100,100,150>>,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-12000>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<10000>>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-10000>>>,Scale<ClashImpactF<>,Int<12000>,Int<60000>>>>,TrFadeX<Scale<ClashImpactF<>,Int<200>,Int<400>>>>,EFFECT_CLASH>,TransitionEffectL<TrWaveX<RgbArg<CLASH_COLOR_ARG,Rgb<100,100,150>>,Scale<ClashImpactF<>,Int<100>,Int<400>>,Int<100>,Scale<ClashImpactF<>,Int<100>,Int<400>>,Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-12000>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<10000>>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-10000>>>>,EFFECT_CLASH>>,LockupTrL<TransitionEffect<AlphaMixL<Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-12000>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<10000>>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-10000>>>,Scale<SwingSpeed<100>,Int<14000>,Int<18000>>>,BrownNoiseFlickerL<RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,Int<200>>,StripesX<Int<1800>,Scale<NoisySoundLevel,Int<-3500>,Int<-5000>>,Mix<Int<6425>,Black,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>>,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,Mix<Int<12850>,Black,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>>>>,AlphaL<AudioFlicker<RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,Mix<Int<10280>,Black,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>>>,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-12000>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<10000>>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-10000>>>,Int<13000>>>,TrJoin<TrDelay<8000>,TrInstant>,TrFade<3000>,EFFECT_LOCKUP_BEGIN>,TrConcat<TrJoin<TrDelay<50>,TrInstant>,Mix<IsLessThan<ClashImpactF<>,Int<26000>>,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,AlphaL<RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-12000>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<10000>>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-10000>>>,Scale<ClashImpactF<>,Int<20000>,Int<60000>>>>>,TrFade<300>>,TrConcat<TrInstant,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,TrFade<400>>,SaberBase::LOCKUP_NORMAL>,ResponsiveLightningBlockL<Strobe<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,AudioFlicker<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,Blue>,50,1>,TrConcat<TrInstant,AlphaL<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,Bump<Int<12000>,Int<18000>>>,TrFade<200>>,TrConcat<TrInstant,HumpFlickerL<AlphaL<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,Int<16000>>,30>,TrSmoothFade<600>>>,LockupTrL<AlphaL<RandomPerLEDFlickerL<RgbArg<DRAG_COLOR_ARG,Rgb<255,255,255>>>,SmoothStep<IntArg<DRAG_SIZE_ARG,28000>,Int<3000>>>,TrConcat<TrJoin<TrDelay<4000>,TrWipeIn<200>>,AlphaL<BrownNoiseFlickerL<RgbArg<DRAG_COLOR_ARG,Rgb<255,255,255>>,Int<300>>,SmoothStep<IntArg<DRAG_SIZE_ARG,28000>,Int<3000>>>,TrFade<4000>>,TrFade<300>,SaberBase::LOCKUP_DRAG>,LockupTrL<AlphaL<Remap<Scale<RampF,Int<65536>,Int<0>>,StaticFire<Mix<TwistAngle<>,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>,RotateColorsX<Int<3000>,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>>>,Mix<TwistAngle<>,RotateColorsX<Int<3000>,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>>,RotateColorsX<Int<3000>,Mix<Int<12000>,Black,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>>>>,0,3,5,3000,10>>,SmoothStep<IntArg<MELT_SIZE_ARG,28000>,Int<4000>>>,TrConcat<TrWipeIn<100>,AlphaL<RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>,SmoothStep<IntArg<MELT_SIZE_ARG,28000>,Int<4000>>>,TrJoin<TrDelay<4000>,TrFade<300>>,AlphaL<Mix<TwistAngle<>,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>,RotateColorsX<Int<3000>,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>>>,SmoothStep<IntArg<MELT_SIZE_ARG,28000>,Int<4000>>>,TrFade<4000>>,TrWipe<200>,SaberBase::LOCKUP_MELT>,InOutTrL<TrWipeX<IgnitionTime<300>>,TrWipeInX<RetractionTime<0>>,Black>>>(),

		//TOP CC

	/* copyright Fett263 KyloRen (Accent LED / PCB) OS6 Style
https://fett263.com/fett263-proffieOS6-style-library.html#KyloRen
OS6.7 v4.021
Single Style
Base Style: Kylo Ren Unstable (Film Based)

Off Behavior: Cylon (Large)

Base Color: Rgb<100,100,150> (0)

--Effects Included--
Ignition Effect: Glitch On
PowerUp Effect: Power Burst Forward
Retraction Effect: Glitch Off
Lockup Effect: Lockup Flash
LightningBlock Effect: Full Blade Lightning
Blast Effect: Blast Wave Up (Sound Based)
Clash Effect: Real Clash V1 Down
*/
StylePtr<Layers<StaticFire<BrownNoiseFlicker<RgbArg<BASE_COLOR_ARG,Rgb<100,100,150>>,RandomPerLEDFlicker<Mix<Int<3213>,Black,RgbArg<BASE_COLOR_ARG,Rgb<100,100,150>>>,Mix<Int<7710>,Black,RgbArg<BASE_COLOR_ARG,Rgb<100,100,150>>>>,300>,Mix<Int<10280>,Black,RgbArg<BASE_COLOR_ARG,Rgb<100,100,150>>>,0,6,10,1000,2>,TransitionEffectL<TrConcat<TrJoin<TrDelayX<IgnitionTime<3000>>,TrInstant>,Stripes<5000,-2500,RgbArg<IGNITION_COLOR_ARG,Rgb<255,255,255>>,Mix<Int<7710>,Black,RgbArg<IGNITION_COLOR_ARG,Rgb<255,255,255>>>,Mix<Int<3855>,Black,RgbArg<IGNITION_COLOR_ARG,Rgb<255,255,255>>>>,TrFade<800>>,EFFECT_IGNITION>,TransitionEffectL<TrWaveX<RgbArg<BLAST_COLOR_ARG,Rgb<255,255,255>>,Scale<WavLen<>,Int<100>,Int<400>>,Int<100>,Scale<WavLen<>,Int<100>,Int<400>>,Int<0>>,EFFECT_BLAST>,Mix<IsLessThan<ClashImpactF<>,Int<26000>>,TransitionEffectL<TrWaveX<RgbArg<CLASH_COLOR_ARG,Rgb<255,255,255>>,Scale<ClashImpactF<>,Int<100>,Int<400>>,Int<100>,Scale<ClashImpactF<>,Int<100>,Int<400>>,Int<32768>>,EFFECT_CLASH>,AlphaL<White,Int<0>>>,TransitionEffectL<TrConcat<TrInstant,AlphaL<RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,SmoothStep<ClashImpactF<>,Int<-4000>>>,TrFadeX<Scale<ClashImpactF<>,Int<100>,Int<300>>>>,EFFECT_LOCKUP_BEGIN>,TransitionEffectL<TrConcat<TrInstant,AlphaL<RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,SmoothStep<ClashImpactF<>,Int<-4000>>>,TrFadeX<Scale<ClashImpactF<>,Int<100>,Int<300>>>>,EFFECT_LOCKUP_END>,LockupTrL<Strobe<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,AudioFlicker<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,Blue>,50,1>,TrInstant,TrFade<1000>,SaberBase::LOCKUP_LIGHTNING_BLOCK>,InOutTrL<TrConcat<TrJoin<TrDelayX<Mult<IgnitionTime<3000>,Int<16384>>>,TrWipeX<Mult<IgnitionTime<3000>,Int<16384>>>>,Mix<SmoothStep<NoisySoundLevel,Int<-1>>,Black,RgbArg<IGNITION_COLOR_ARG,Rgb<255,255,255>>>,TrWipeX<Mult<IgnitionTime<3000>,Int<16384>>>>,TrConcat<TrJoin<TrDelayX<Mult<RetractionTime<3000>,Int<16384>>>,TrWipeInX<Mult<RetractionTime<3000>,Int<16384>>>>,Mix<SmoothStep<NoisySoundLevel,Int<-1>>,Black,RgbArg<RETRACTION_COLOR_ARG,Rgb<255,255,255>>>,TrWipeInX<Mult<RetractionTime<3000>,Int<16384>>>>,Mix<LinearSectionF<Sin<Int<20>>,Int<8000>>,Black,RgbArg<OFF_COLOR_ARG,Rgb<255,255,255>>>>>>(),},






{ "Darth;common", "tracks/Darth.wav",
	/* copyright Fett263 Rotoscope (Primary Blade) OS6 Style
	https://fett263.com/fett263-proffieOS6-style-library.html#Rotoscope
	OS6.7 v4.012
	Single Style
	Base Style: Rotoscope - Single Color (Original Trilogy)

	Base Color: Rgb<255,0,0> (0)

	--Effects Included--
	Ignition Effect: Standard Ignition
	Retraction Effect: Standard Retraction
	Lockup Effect: Intensity Lockup V1, Begin Effect: Real Clash, End Effect: Full Blade Absorb
	LightningBlock Effect: Responsive Lightning Block
	Drag Effect: Intensity Sparking Drag
	Melt Effect: Intensity Melt
	Blast Effect: Blast Wave (Random)
	Clash Effect: Real Clash V1
	*/
	StylePtr<Layers<RandomFlicker<Stripes<10000,-2600,RgbArg<BASE_COLOR_ARG,Rgb<255,0,0>>,RgbArg<BASE_COLOR_ARG,Rgb<255,0,0>>,Mix<Int<7710>,Black,RgbArg<BASE_COLOR_ARG,Rgb<255,0,0>>>,RgbArg<BASE_COLOR_ARG,Rgb<255,0,0>>,Mix<Int<16448>,Black,RgbArg<BASE_COLOR_ARG,Rgb<255,0,0>>>>,RgbArg<BASE_COLOR_ARG,Rgb<255,0,0>>>,MultiTransitionEffectL<TrWaveX<RgbArg<BLAST_COLOR_ARG,Rgb<255,255,255>>,Scale<EffectRandomF<EFFECT_BLAST>,Int<100>,Int<400>>,Int<100>,Scale<EffectRandomF<EFFECT_BLAST>,Int<100>,Int<400>>,Scale<EffectRandomF<EFFECT_BLAST>,Int<28000>,Int<8000>>>,EFFECT_BLAST>,Mix<IsLessThan<ClashImpactF<>,Int<26000>>,TransitionEffectL<TrConcat<TrInstant,AlphaL<RgbArg<CLASH_COLOR_ARG,Rgb<255,255,255>>,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-12000>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<10000>>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-10000>>>,Scale<ClashImpactF<>,Int<12000>,Int<60000>>>>,TrFadeX<Scale<ClashImpactF<>,Int<200>,Int<400>>>>,EFFECT_CLASH>,TransitionEffectL<TrWaveX<RgbArg<CLASH_COLOR_ARG,Rgb<255,255,255>>,Scale<ClashImpactF<>,Int<100>,Int<400>>,Int<100>,Scale<ClashImpactF<>,Int<100>,Int<400>>,Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-12000>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<10000>>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-10000>>>>,EFFECT_CLASH>>,LockupTrL<TransitionEffect<AlphaMixL<Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-12000>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<10000>>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-10000>>>,Scale<SwingSpeed<100>,Int<14000>,Int<18000>>>,BrownNoiseFlickerL<RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,Int<200>>,StripesX<Int<1800>,Scale<NoisySoundLevel,Int<-3500>,Int<-5000>>,Mix<Int<6425>,Black,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>>,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,Mix<Int<12850>,Black,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>>>>,AlphaL<AudioFlicker<RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,Mix<Int<10280>,Black,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>>>,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-12000>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<10000>>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-10000>>>,Int<13000>>>,TrJoin<TrDelay<8000>,TrInstant>,TrFade<3000>,EFFECT_LOCKUP_BEGIN>,TrConcat<TrJoin<TrDelay<50>,TrInstant>,Mix<IsLessThan<ClashImpactF<>,Int<26000>>,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,AlphaL<RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-12000>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<10000>>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-10000>>>,Scale<ClashImpactF<>,Int<20000>,Int<60000>>>>>,TrFade<300>>,TrConcat<TrInstant,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,TrFade<400>>,SaberBase::LOCKUP_NORMAL>,ResponsiveLightningBlockL<Strobe<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,AudioFlicker<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,Blue>,50,1>,TrConcat<TrInstant,AlphaL<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,Bump<Int<12000>,Int<18000>>>,TrFade<200>>,TrConcat<TrInstant,HumpFlickerL<AlphaL<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,Int<16000>>,30>,TrSmoothFade<600>>>,LockupTrL<AlphaL<RandomPerLEDFlickerL<RgbArg<DRAG_COLOR_ARG,Rgb<255,255,255>>>,SmoothStep<IntArg<DRAG_SIZE_ARG,28000>,Int<3000>>>,TrConcat<TrJoin<TrDelay<4000>,TrWipeIn<200>>,AlphaL<BrownNoiseFlickerL<RgbArg<DRAG_COLOR_ARG,Rgb<255,255,255>>,Int<300>>,SmoothStep<IntArg<DRAG_SIZE_ARG,28000>,Int<3000>>>,TrFade<4000>>,TrFade<300>,SaberBase::LOCKUP_DRAG>,LockupTrL<AlphaL<Remap<Scale<RampF,Int<65536>,Int<0>>,StaticFire<Mix<TwistAngle<>,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>,RotateColorsX<Int<3000>,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>>>,Mix<TwistAngle<>,RotateColorsX<Int<3000>,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>>,RotateColorsX<Int<3000>,Mix<Int<12000>,Black,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>>>>,0,3,5,3000,10>>,SmoothStep<IntArg<MELT_SIZE_ARG,28000>,Int<4000>>>,TrConcat<TrWipeIn<100>,AlphaL<RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>,SmoothStep<IntArg<MELT_SIZE_ARG,28000>,Int<4000>>>,TrJoin<TrDelay<4000>,TrFade<300>>,AlphaL<Mix<TwistAngle<>,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>,RotateColorsX<Int<3000>,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>>>,SmoothStep<IntArg<MELT_SIZE_ARG,28000>,Int<4000>>>,TrFade<4000>>,TrWipe<200>,SaberBase::LOCKUP_MELT>,InOutTrL<TrWipeX<IgnitionTime<500>>,TrWipeInX<RetractionTime<0>>,Black>>>(),

		//TOP CC

	/* copyright Fett263 KyloRen (Accent LED / PCB) OS6 Style
https://fett263.com/fett263-proffieOS6-style-library.html#KyloRen
OS6.7 v4.021
Single Style
Base Style: Kylo Ren Unstable (Film Based)

Off Behavior: Slow Pulse Off-On

Base Color: Rgb<255,0,0> (0)

--Effects Included--
Ignition Effect: Glitch On
Retraction Effect: Cycle Down
CoolDown Effect: Unstable Cool Down Reverse
Lockup Effect: Lockup Flash
LightningBlock Effect: Lightning After Effect
Blast Effect: Blast Wave Up (Sound Based)
Clash Effect: Real Clash V1 Up
*/
StylePtr<Layers<StaticFire<BrownNoiseFlicker<RgbArg<BASE_COLOR_ARG,Rgb<255,0,0>>,RandomPerLEDFlicker<Mix<Int<3213>,Black,RgbArg<BASE_COLOR_ARG,Rgb<255,0,0>>>,Mix<Int<7710>,Black,RgbArg<BASE_COLOR_ARG,Rgb<255,0,0>>>>,300>,Mix<Int<10280>,Black,RgbArg<BASE_COLOR_ARG,Rgb<255,0,0>>>,0,6,10,1000,2>,TransitionEffectL<TrConcat<TrJoin<TrDelayX<RetractionTime<5000>>,TrInstant>,Stripes<3000,3500,RgbArg<RETRACTION_COLOR_ARG,Rgb<255,255,255>>,RandomPerLEDFlicker<Mix<Int<7710>,Black,RgbArg<RETRACTION_COLOR_ARG,Rgb<255,255,255>>>,Black>,BrownNoiseFlicker<RgbArg<RETRACTION_COLOR_ARG,Rgb<255,255,255>>,Mix<Int<3855>,Black,RgbArg<RETRACTION_COLOR_ARG,Rgb<255,255,255>>>,200>,RandomPerLEDFlicker<Mix<Int<3137>,Black,RgbArg<RETRACTION_COLOR_ARG,Rgb<255,255,255>>>,Mix<Int<3855>,Black,RgbArg<RETRACTION_COLOR_ARG,Rgb<255,255,255>>>>>,TrFade<800>>,EFFECT_RETRACTION>,TransitionEffectL<TrWaveX<RgbArg<BLAST_COLOR_ARG,Rgb<255,255,255>>,Scale<WavLen<>,Int<100>,Int<400>>,Int<100>,Scale<WavLen<>,Int<100>,Int<400>>,Int<0>>,EFFECT_BLAST>,Mix<IsLessThan<ClashImpactF<>,Int<26000>>,TransitionEffectL<TrWaveX<RgbArg<CLASH_COLOR_ARG,Rgb<255,255,255>>,Scale<ClashImpactF<>,Int<100>,Int<400>>,Int<100>,Scale<ClashImpactF<>,Int<100>,Int<400>>,Int<0>>,EFFECT_CLASH>,AlphaL<White,Int<0>>>,TransitionEffectL<TrConcat<TrInstant,AlphaL<RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,SmoothStep<ClashImpactF<>,Int<-4000>>>,TrFadeX<Scale<ClashImpactF<>,Int<100>,Int<300>>>>,EFFECT_LOCKUP_BEGIN>,TransitionEffectL<TrConcat<TrInstant,AlphaL<RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,SmoothStep<ClashImpactF<>,Int<-4000>>>,TrFadeX<Scale<ClashImpactF<>,Int<100>,Int<300>>>>,EFFECT_LOCKUP_END>,LockupTrL<AlphaL<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,Int<0>>,TrInstant,TrConcat<TrInstant,Strobe<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,AudioFlicker<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,Blue>,50,1>,TrFade<1000>>,SaberBase::LOCKUP_LIGHTNING_BLOCK>,InOutTrL<TrConcat<TrJoin<TrDelayX<Mult<IgnitionTime<3000>,Int<16384>>>,TrWipeX<Mult<IgnitionTime<3000>,Int<16384>>>>,Mix<SmoothStep<NoisySoundLevel,Int<-1>>,Black,RgbArg<IGNITION_COLOR_ARG,Rgb<255,255,255>>>,TrWipeX<Mult<IgnitionTime<3000>,Int<16384>>>>,TrColorCycleX<RetractionTime<5000>>,Pulsing<Black,Rgb<236,126,126>,8000>>>>(),},





{ "Depa;common", "tracks/Depa.wav",
	/* copyright Fett263 Rotoscope (Primary Blade) OS6 Style
	https://fett263.com/fett263-proffieOS6-style-library.html#Rotoscope
	OS6.7 v4.016
	Single Style
	Base Style: Hyper Responsive Rotoscope (Prequels)

	Base Color: Rgb<0,135,255> (0)

	--Effects Included--
	Ignition Effect: Standard Ignition
	Retraction Effect: Standard Retraction
	Lockup Effect: Intensity Lockup V1, Begin Effect: Real Clash, End Effect: Full Blade Absorb
	LightningBlock Effect: Responsive Lightning Block
	Drag Effect: Intensity Sparking Drag
	Melt Effect: Intensity Melt
	Blast Effect: Blast Wave (Random)
	Clash Effect: Real Clash V1
	*/
		StylePtr<Layers<Mix<HoldPeakF<SwingSpeed<250>,Scale<SwingAcceleration<100>,Int<50>,Int<500>>,Scale<SwingAcceleration<>,Int<20000>,Int<10000>>>,RandomFlicker<StripesX<Int<24000>,Scale<HoldPeakF<SwingSpeed<200>,Scale<SwingAcceleration<100>,Int<50>,Int<300>>,Scale<SwingAcceleration<100>,Int<24000>,Int<16000>>>,Int<-1400>,Int<-100>>,RgbArg<BASE_COLOR_ARG,Rgb<0,135,255>>,RgbArg<BASE_COLOR_ARG,Rgb<0,135,255>>,Mix<Int<7710>,Black,RgbArg<BASE_COLOR_ARG,Rgb<0,135,255>>>,RgbArg<BASE_COLOR_ARG,Rgb<0,135,255>>,Mix<Int<19276>,Black,RgbArg<BASE_COLOR_ARG,Rgb<0,135,255>>>>,RgbArg<BASE_COLOR_ARG,Rgb<0,135,255>>>,RgbArg<BASE_COLOR_ARG,Rgb<0,135,255>>>,TransitionEffectL<TrWaveX<RgbArg<BLAST_COLOR_ARG,Rgb<255,255,255>>,Scale<EffectRandomF<EFFECT_BLAST>,Int<100>,Int<400>>,Int<100>,Scale<EffectPosition<EFFECT_BLAST>,Int<100>,Int<400>>,Scale<EffectPosition<EFFECT_BLAST>,Int<28000>,Int<8000>>>,EFFECT_BLAST>,Mix<IsLessThan<ClashImpactF<>,Int<26000>>,TransitionEffectL<TrConcat<TrInstant,AlphaL<RgbArg<CLASH_COLOR_ARG,Rgb<255,255,255>>,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Sum<IntArg<LOCKUP_POSITION_ARG,15632>,Int<-12000>>,Sum<IntArg<LOCKUP_POSITION_ARG,15632>,Int<10000>>>,Sum<IntArg<LOCKUP_POSITION_ARG,15632>,Int<-10000>>>,Scale<ClashImpactF<>,Int<12000>,Int<60000>>>>,TrFadeX<Scale<ClashImpactF<>,Int<200>,Int<400>>>>,EFFECT_CLASH>,TransitionEffectL<TrWaveX<RgbArg<CLASH_COLOR_ARG,Rgb<255,255,255>>,Scale<ClashImpactF<>,Int<100>,Int<400>>,Int<100>,Scale<ClashImpactF<>,Int<100>,Int<400>>,Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Sum<IntArg<LOCKUP_POSITION_ARG,15632>,Int<-12000>>,Sum<IntArg<LOCKUP_POSITION_ARG,15632>,Int<10000>>>,Sum<IntArg<LOCKUP_POSITION_ARG,15632>,Int<-10000>>>>,EFFECT_CLASH>>,LockupTrL<TransitionEffect<AlphaMixL<Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Sum<IntArg<LOCKUP_POSITION_ARG,15632>,Int<-12000>>,Sum<IntArg<LOCKUP_POSITION_ARG,15632>,Int<10000>>>,Sum<IntArg<LOCKUP_POSITION_ARG,15632>,Int<-10000>>>,Scale<SwingSpeed<100>,Int<14000>,Int<18000>>>,BrownNoiseFlickerL<RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,Int<200>>,StripesX<Int<1800>,Scale<NoisySoundLevel,Int<-3500>,Int<-5000>>,Mix<Int<6425>,Black,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>>,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,Mix<Int<12850>,Black,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>>>>,AlphaL<AudioFlicker<RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,Mix<Int<10280>,Black,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>>>,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Sum<IntArg<LOCKUP_POSITION_ARG,15632>,Int<-12000>>,Sum<IntArg<LOCKUP_POSITION_ARG,15632>,Int<10000>>>,Sum<IntArg<LOCKUP_POSITION_ARG,15632>,Int<-10000>>>,Int<13000>>>,TrJoin<TrDelay<8000>,TrInstant>,TrFade<3000>,EFFECT_LOCKUP_BEGIN>,TrConcat<TrJoin<TrDelay<50>,TrInstant>,Mix<IsLessThan<ClashImpactF<>,Int<26000>>,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,AlphaL<RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Sum<IntArg<LOCKUP_POSITION_ARG,15632>,Int<-12000>>,Sum<IntArg<LOCKUP_POSITION_ARG,15632>,Int<10000>>>,Sum<IntArg<LOCKUP_POSITION_ARG,15632>,Int<-10000>>>,Scale<ClashImpactF<>,Int<20000>,Int<60000>>>>>,TrFade<300>>,TrConcat<TrInstant,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,TrFade<400>>,SaberBase::LOCKUP_NORMAL>,ResponsiveLightningBlockL<Strobe<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,AudioFlicker<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,Blue>,50,1>,TrConcat<TrInstant,AlphaL<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,Bump<Int<12000>,Int<18000>>>,TrFade<200>>,TrConcat<TrInstant,HumpFlickerL<AlphaL<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,Int<16000>>,30>,TrSmoothFade<600>>>,LockupTrL<AlphaL<RandomPerLEDFlickerL<RgbArg<DRAG_COLOR_ARG,Rgb<255,255,255>>>,SmoothStep<IntArg<DRAG_SIZE_ARG,28000>,Int<3000>>>,TrConcat<TrJoin<TrDelay<4000>,TrWipeIn<200>>,AlphaL<BrownNoiseFlickerL<RgbArg<DRAG_COLOR_ARG,Rgb<255,255,255>>,Int<300>>,SmoothStep<IntArg<DRAG_SIZE_ARG,28000>,Int<3000>>>,TrFade<4000>>,TrFade<300>,SaberBase::LOCKUP_DRAG>,LockupTrL<AlphaL<Remap<Scale<RampF,Int<65536>,Int<0>>,StaticFire<Mix<TwistAngle<>,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>,RotateColorsX<Int<3000>,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>>>,Mix<TwistAngle<>,RotateColorsX<Int<3000>,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>>,RotateColorsX<Int<3000>,Mix<Int<12000>,Black,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>>>>,0,3,5,3000,10>>,SmoothStep<IntArg<MELT_SIZE_ARG,28000>,Int<4000>>>,TrConcat<TrWipeIn<100>,AlphaL<RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>,SmoothStep<IntArg<MELT_SIZE_ARG,28000>,Int<4000>>>,TrJoin<TrDelay<4000>,TrFade<300>>,AlphaL<Mix<TwistAngle<>,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>,RotateColorsX<Int<3000>,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>>>,SmoothStep<IntArg<MELT_SIZE_ARG,28000>,Int<4000>>>,TrFade<4000>>,TrWipe<200>,SaberBase::LOCKUP_MELT>,InOutTrL<TrWipeX<IgnitionTime<300>>,TrWipeInX<RetractionTime<0>>,Black>>>(),

		//TOP CC

	/* copyright Fett263 KyloRen (Accent LED / PCB) OS6 Style
https://fett263.com/fett263-proffieOS6-style-library.html#KyloRen
OS6.7 v4.021
Single Style
Base Style: Kylo Ren Unstable (Film Based)

Off Behavior: Slow Pulse Off-On

Base Color: Rgb<0,0,255> (0)

--Effects Included--
Ignition Effect: Glitch On
Retraction Effect: Cycle Down
CoolDown Effect: Unstable Cool Down Reverse
Lockup Effect: Lockup Flash
LightningBlock Effect: Lightning After Effect
Blast Effect: Blast Wave Up (Sound Based)
Clash Effect: Real Clash V1 Up
*/
StylePtr<Layers<StaticFire<BrownNoiseFlicker<RgbArg<BASE_COLOR_ARG,Rgb<0,0,255>>,RandomPerLEDFlicker<Mix<Int<3213>,Black,RgbArg<BASE_COLOR_ARG,Rgb<0,0,255>>>,Mix<Int<7710>,Black,RgbArg<BASE_COLOR_ARG,Rgb<0,0,255>>>>,300>,Mix<Int<10280>,Black,RgbArg<BASE_COLOR_ARG,Rgb<0,0,255>>>,0,6,10,1000,2>,TransitionEffectL<TrConcat<TrJoin<TrDelayX<RetractionTime<5000>>,TrInstant>,Stripes<3000,3500,RgbArg<RETRACTION_COLOR_ARG,Rgb<255,255,255>>,RandomPerLEDFlicker<Mix<Int<7710>,Black,RgbArg<RETRACTION_COLOR_ARG,Rgb<255,255,255>>>,Black>,BrownNoiseFlicker<RgbArg<RETRACTION_COLOR_ARG,Rgb<255,255,255>>,Mix<Int<3855>,Black,RgbArg<RETRACTION_COLOR_ARG,Rgb<255,255,255>>>,200>,RandomPerLEDFlicker<Mix<Int<3137>,Black,RgbArg<RETRACTION_COLOR_ARG,Rgb<255,255,255>>>,Mix<Int<3855>,Black,RgbArg<RETRACTION_COLOR_ARG,Rgb<255,255,255>>>>>,TrFade<800>>,EFFECT_RETRACTION>,TransitionEffectL<TrWaveX<RgbArg<BLAST_COLOR_ARG,Rgb<255,255,255>>,Scale<WavLen<>,Int<100>,Int<400>>,Int<100>,Scale<WavLen<>,Int<100>,Int<400>>,Int<0>>,EFFECT_BLAST>,Mix<IsLessThan<ClashImpactF<>,Int<26000>>,TransitionEffectL<TrWaveX<RgbArg<CLASH_COLOR_ARG,Rgb<255,255,255>>,Scale<ClashImpactF<>,Int<100>,Int<400>>,Int<100>,Scale<ClashImpactF<>,Int<100>,Int<400>>,Int<0>>,EFFECT_CLASH>,AlphaL<White,Int<0>>>,TransitionEffectL<TrConcat<TrInstant,AlphaL<RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,SmoothStep<ClashImpactF<>,Int<-4000>>>,TrFadeX<Scale<ClashImpactF<>,Int<100>,Int<300>>>>,EFFECT_LOCKUP_BEGIN>,TransitionEffectL<TrConcat<TrInstant,AlphaL<RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,SmoothStep<ClashImpactF<>,Int<-4000>>>,TrFadeX<Scale<ClashImpactF<>,Int<100>,Int<300>>>>,EFFECT_LOCKUP_END>,LockupTrL<AlphaL<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,Int<0>>,TrInstant,TrConcat<TrInstant,Strobe<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,AudioFlicker<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,Blue>,50,1>,TrFade<1000>>,SaberBase::LOCKUP_LIGHTNING_BLOCK>,InOutTrL<TrConcat<TrJoin<TrDelayX<Mult<IgnitionTime<3000>,Int<16384>>>,TrWipeX<Mult<IgnitionTime<3000>,Int<16384>>>>,Mix<SmoothStep<NoisySoundLevel,Int<-1>>,Black,RgbArg<IGNITION_COLOR_ARG,Rgb<255,255,255>>>,TrWipeX<Mult<IgnitionTime<3000>,Int<16384>>>>,TrColorCycleX<RetractionTime<5000>>,Pulsing<Black,RgbArg<OFF_COLOR_ARG,Rgb<2,72,255>>,8000>>>>(),},






{ "Emperor;common", "tracks/Emperor.wav",
	/* copyright Fett263 Rotoscope (Primary Blade) OS6 Style
	https://fett263.com/fett263-proffieOS6-style-library.html#Rotoscope
	OS6.7 v4.012
	Single Style
	Base Style: Rotoscope - Single Color (Original Trilogy)

	Base Color: Rgb<255,0,0> (0)

	--Effects Included--
	Ignition Effect: Standard Ignition
	Retraction Effect: Standard Retraction
	Lockup Effect: Intensity Lockup V1, Begin Effect: Real Clash, End Effect: Full Blade Absorb
	LightningBlock Effect: Responsive Lightning Block
	Drag Effect: Intensity Sparking Drag
	Melt Effect: Intensity Melt
	Blast Effect: Blast Wave (Random)
	Clash Effect: Real Clash V1
	*/
	StylePtr<Layers<RandomFlicker<Stripes<10000,-2600,RgbArg<BASE_COLOR_ARG,Rgb<255,0,0>>,RgbArg<BASE_COLOR_ARG,Rgb<255,0,0>>,Mix<Int<7710>,Black,RgbArg<BASE_COLOR_ARG,Rgb<255,0,0>>>,RgbArg<BASE_COLOR_ARG,Rgb<255,0,0>>,Mix<Int<16448>,Black,RgbArg<BASE_COLOR_ARG,Rgb<255,0,0>>>>,RgbArg<BASE_COLOR_ARG,Rgb<255,0,0>>>,MultiTransitionEffectL<TrWaveX<RgbArg<BLAST_COLOR_ARG,Rgb<255,255,255>>,Scale<EffectRandomF<EFFECT_BLAST>,Int<100>,Int<400>>,Int<100>,Scale<EffectRandomF<EFFECT_BLAST>,Int<100>,Int<400>>,Scale<EffectRandomF<EFFECT_BLAST>,Int<28000>,Int<8000>>>,EFFECT_BLAST>,Mix<IsLessThan<ClashImpactF<>,Int<26000>>,TransitionEffectL<TrConcat<TrInstant,AlphaL<RgbArg<CLASH_COLOR_ARG,Rgb<255,255,255>>,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-12000>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<10000>>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-10000>>>,Scale<ClashImpactF<>,Int<12000>,Int<60000>>>>,TrFadeX<Scale<ClashImpactF<>,Int<200>,Int<400>>>>,EFFECT_CLASH>,TransitionEffectL<TrWaveX<RgbArg<CLASH_COLOR_ARG,Rgb<255,255,255>>,Scale<ClashImpactF<>,Int<100>,Int<400>>,Int<100>,Scale<ClashImpactF<>,Int<100>,Int<400>>,Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-12000>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<10000>>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-10000>>>>,EFFECT_CLASH>>,LockupTrL<TransitionEffect<AlphaMixL<Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-12000>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<10000>>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-10000>>>,Scale<SwingSpeed<100>,Int<14000>,Int<18000>>>,BrownNoiseFlickerL<RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,Int<200>>,StripesX<Int<1800>,Scale<NoisySoundLevel,Int<-3500>,Int<-5000>>,Mix<Int<6425>,Black,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>>,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,Mix<Int<12850>,Black,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>>>>,AlphaL<AudioFlicker<RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,Mix<Int<10280>,Black,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>>>,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-12000>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<10000>>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-10000>>>,Int<13000>>>,TrJoin<TrDelay<8000>,TrInstant>,TrFade<3000>,EFFECT_LOCKUP_BEGIN>,TrConcat<TrJoin<TrDelay<50>,TrInstant>,Mix<IsLessThan<ClashImpactF<>,Int<26000>>,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,AlphaL<RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-12000>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<10000>>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-10000>>>,Scale<ClashImpactF<>,Int<20000>,Int<60000>>>>>,TrFade<300>>,TrConcat<TrInstant,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,TrFade<400>>,SaberBase::LOCKUP_NORMAL>,ResponsiveLightningBlockL<Strobe<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,AudioFlicker<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,Blue>,50,1>,TrConcat<TrInstant,AlphaL<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,Bump<Int<12000>,Int<18000>>>,TrFade<200>>,TrConcat<TrInstant,HumpFlickerL<AlphaL<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,Int<16000>>,30>,TrSmoothFade<600>>>,LockupTrL<AlphaL<RandomPerLEDFlickerL<RgbArg<DRAG_COLOR_ARG,Rgb<255,255,255>>>,SmoothStep<IntArg<DRAG_SIZE_ARG,28000>,Int<3000>>>,TrConcat<TrJoin<TrDelay<4000>,TrWipeIn<200>>,AlphaL<BrownNoiseFlickerL<RgbArg<DRAG_COLOR_ARG,Rgb<255,255,255>>,Int<300>>,SmoothStep<IntArg<DRAG_SIZE_ARG,28000>,Int<3000>>>,TrFade<4000>>,TrFade<300>,SaberBase::LOCKUP_DRAG>,LockupTrL<AlphaL<Remap<Scale<RampF,Int<65536>,Int<0>>,StaticFire<Mix<TwistAngle<>,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>,RotateColorsX<Int<3000>,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>>>,Mix<TwistAngle<>,RotateColorsX<Int<3000>,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>>,RotateColorsX<Int<3000>,Mix<Int<12000>,Black,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>>>>,0,3,5,3000,10>>,SmoothStep<IntArg<MELT_SIZE_ARG,28000>,Int<4000>>>,TrConcat<TrWipeIn<100>,AlphaL<RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>,SmoothStep<IntArg<MELT_SIZE_ARG,28000>,Int<4000>>>,TrJoin<TrDelay<4000>,TrFade<300>>,AlphaL<Mix<TwistAngle<>,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>,RotateColorsX<Int<3000>,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>>>,SmoothStep<IntArg<MELT_SIZE_ARG,28000>,Int<4000>>>,TrFade<4000>>,TrWipe<200>,SaberBase::LOCKUP_MELT>,InOutTrL<TrWipeX<IgnitionTime<500>>,TrWipeInX<RetractionTime<0>>,Black>>>(),

		//TOP CC

	/* copyright Fett263 KyloRen (Accent LED / PCB) OS6 Style
https://fett263.com/fett263-proffieOS6-style-library.html#KyloRen
OS6.7 v4.021
Single Style
Base Style: Kylo Ren Unstable (Film Based)

Off Behavior: Slow Pulse Off-On

Base Color: Rgb<255,0,0> (0)

--Effects Included--
Ignition Effect: Glitch On
Retraction Effect: Cycle Down
CoolDown Effect: Unstable Cool Down Reverse
Lockup Effect: Lockup Flash
LightningBlock Effect: Lightning After Effect
Blast Effect: Blast Wave Up (Sound Based)
Clash Effect: Real Clash V1 Up
*/
StylePtr<Layers<StaticFire<BrownNoiseFlicker<RgbArg<BASE_COLOR_ARG,Rgb<255,0,0>>,RandomPerLEDFlicker<Mix<Int<3213>,Black,RgbArg<BASE_COLOR_ARG,Rgb<255,0,0>>>,Mix<Int<7710>,Black,RgbArg<BASE_COLOR_ARG,Rgb<255,0,0>>>>,300>,Mix<Int<10280>,Black,RgbArg<BASE_COLOR_ARG,Rgb<255,0,0>>>,0,6,10,1000,2>,TransitionEffectL<TrConcat<TrJoin<TrDelayX<RetractionTime<5000>>,TrInstant>,Stripes<3000,3500,RgbArg<RETRACTION_COLOR_ARG,Rgb<255,255,255>>,RandomPerLEDFlicker<Mix<Int<7710>,Black,RgbArg<RETRACTION_COLOR_ARG,Rgb<255,255,255>>>,Black>,BrownNoiseFlicker<RgbArg<RETRACTION_COLOR_ARG,Rgb<255,255,255>>,Mix<Int<3855>,Black,RgbArg<RETRACTION_COLOR_ARG,Rgb<255,255,255>>>,200>,RandomPerLEDFlicker<Mix<Int<3137>,Black,RgbArg<RETRACTION_COLOR_ARG,Rgb<255,255,255>>>,Mix<Int<3855>,Black,RgbArg<RETRACTION_COLOR_ARG,Rgb<255,255,255>>>>>,TrFade<800>>,EFFECT_RETRACTION>,TransitionEffectL<TrWaveX<RgbArg<BLAST_COLOR_ARG,Rgb<255,255,255>>,Scale<WavLen<>,Int<100>,Int<400>>,Int<100>,Scale<WavLen<>,Int<100>,Int<400>>,Int<0>>,EFFECT_BLAST>,Mix<IsLessThan<ClashImpactF<>,Int<26000>>,TransitionEffectL<TrWaveX<RgbArg<CLASH_COLOR_ARG,Rgb<255,255,255>>,Scale<ClashImpactF<>,Int<100>,Int<400>>,Int<100>,Scale<ClashImpactF<>,Int<100>,Int<400>>,Int<0>>,EFFECT_CLASH>,AlphaL<White,Int<0>>>,TransitionEffectL<TrConcat<TrInstant,AlphaL<RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,SmoothStep<ClashImpactF<>,Int<-4000>>>,TrFadeX<Scale<ClashImpactF<>,Int<100>,Int<300>>>>,EFFECT_LOCKUP_BEGIN>,TransitionEffectL<TrConcat<TrInstant,AlphaL<RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,SmoothStep<ClashImpactF<>,Int<-4000>>>,TrFadeX<Scale<ClashImpactF<>,Int<100>,Int<300>>>>,EFFECT_LOCKUP_END>,LockupTrL<AlphaL<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,Int<0>>,TrInstant,TrConcat<TrInstant,Strobe<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,AudioFlicker<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,Blue>,50,1>,TrFade<1000>>,SaberBase::LOCKUP_LIGHTNING_BLOCK>,InOutTrL<TrConcat<TrJoin<TrDelayX<Mult<IgnitionTime<3000>,Int<16384>>>,TrWipeX<Mult<IgnitionTime<3000>,Int<16384>>>>,Mix<SmoothStep<NoisySoundLevel,Int<-1>>,Black,RgbArg<IGNITION_COLOR_ARG,Rgb<255,255,255>>>,TrWipeX<Mult<IgnitionTime<3000>,Int<16384>>>>,TrColorCycleX<RetractionTime<5000>>,Pulsing<Black,Rgb<236,126,126>,8000>>>>(),},




{ "ESB_Graflex;common", "tracks/ESB_Graflex.wav",
	/* copyright Fett263 Rotoscope (Primary Blade) OS6 Style
	https://fett263.com/fett263-proffieOS6-style-library.html#Rotoscope
	OS6.7 v4.016
	Single Style
	Base Style: Hyper Responsive Rotoscope (Prequels)

	Base Color: Rgb<0,135,255> (0)

	--Effects Included--
	Ignition Effect: Standard Ignition
	Retraction Effect: Standard Retraction
	Lockup Effect: Intensity Lockup V1, Begin Effect: Real Clash, End Effect: Full Blade Absorb
	LightningBlock Effect: Responsive Lightning Block
	Drag Effect: Intensity Sparking Drag
	Melt Effect: Intensity Melt
	Blast Effect: Blast Wave (Random)
	Clash Effect: Real Clash V1
	*/
		StylePtr<Layers<Mix<HoldPeakF<SwingSpeed<250>,Scale<SwingAcceleration<100>,Int<50>,Int<500>>,Scale<SwingAcceleration<>,Int<20000>,Int<10000>>>,RandomFlicker<StripesX<Int<24000>,Scale<HoldPeakF<SwingSpeed<200>,Scale<SwingAcceleration<100>,Int<50>,Int<300>>,Scale<SwingAcceleration<100>,Int<24000>,Int<16000>>>,Int<-1400>,Int<-100>>,RgbArg<BASE_COLOR_ARG,Rgb<0,135,255>>,RgbArg<BASE_COLOR_ARG,Rgb<0,135,255>>,Mix<Int<7710>,Black,RgbArg<BASE_COLOR_ARG,Rgb<0,135,255>>>,RgbArg<BASE_COLOR_ARG,Rgb<0,135,255>>,Mix<Int<19276>,Black,RgbArg<BASE_COLOR_ARG,Rgb<0,135,255>>>>,RgbArg<BASE_COLOR_ARG,Rgb<0,135,255>>>,RgbArg<BASE_COLOR_ARG,Rgb<0,135,255>>>,TransitionEffectL<TrWaveX<RgbArg<BLAST_COLOR_ARG,Rgb<255,255,255>>,Scale<EffectRandomF<EFFECT_BLAST>,Int<100>,Int<400>>,Int<100>,Scale<EffectPosition<EFFECT_BLAST>,Int<100>,Int<400>>,Scale<EffectPosition<EFFECT_BLAST>,Int<28000>,Int<8000>>>,EFFECT_BLAST>,Mix<IsLessThan<ClashImpactF<>,Int<26000>>,TransitionEffectL<TrConcat<TrInstant,AlphaL<RgbArg<CLASH_COLOR_ARG,Rgb<255,255,255>>,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Sum<IntArg<LOCKUP_POSITION_ARG,15632>,Int<-12000>>,Sum<IntArg<LOCKUP_POSITION_ARG,15632>,Int<10000>>>,Sum<IntArg<LOCKUP_POSITION_ARG,15632>,Int<-10000>>>,Scale<ClashImpactF<>,Int<12000>,Int<60000>>>>,TrFadeX<Scale<ClashImpactF<>,Int<200>,Int<400>>>>,EFFECT_CLASH>,TransitionEffectL<TrWaveX<RgbArg<CLASH_COLOR_ARG,Rgb<255,255,255>>,Scale<ClashImpactF<>,Int<100>,Int<400>>,Int<100>,Scale<ClashImpactF<>,Int<100>,Int<400>>,Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Sum<IntArg<LOCKUP_POSITION_ARG,15632>,Int<-12000>>,Sum<IntArg<LOCKUP_POSITION_ARG,15632>,Int<10000>>>,Sum<IntArg<LOCKUP_POSITION_ARG,15632>,Int<-10000>>>>,EFFECT_CLASH>>,LockupTrL<TransitionEffect<AlphaMixL<Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Sum<IntArg<LOCKUP_POSITION_ARG,15632>,Int<-12000>>,Sum<IntArg<LOCKUP_POSITION_ARG,15632>,Int<10000>>>,Sum<IntArg<LOCKUP_POSITION_ARG,15632>,Int<-10000>>>,Scale<SwingSpeed<100>,Int<14000>,Int<18000>>>,BrownNoiseFlickerL<RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,Int<200>>,StripesX<Int<1800>,Scale<NoisySoundLevel,Int<-3500>,Int<-5000>>,Mix<Int<6425>,Black,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>>,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,Mix<Int<12850>,Black,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>>>>,AlphaL<AudioFlicker<RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,Mix<Int<10280>,Black,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>>>,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Sum<IntArg<LOCKUP_POSITION_ARG,15632>,Int<-12000>>,Sum<IntArg<LOCKUP_POSITION_ARG,15632>,Int<10000>>>,Sum<IntArg<LOCKUP_POSITION_ARG,15632>,Int<-10000>>>,Int<13000>>>,TrJoin<TrDelay<8000>,TrInstant>,TrFade<3000>,EFFECT_LOCKUP_BEGIN>,TrConcat<TrJoin<TrDelay<50>,TrInstant>,Mix<IsLessThan<ClashImpactF<>,Int<26000>>,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,AlphaL<RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Sum<IntArg<LOCKUP_POSITION_ARG,15632>,Int<-12000>>,Sum<IntArg<LOCKUP_POSITION_ARG,15632>,Int<10000>>>,Sum<IntArg<LOCKUP_POSITION_ARG,15632>,Int<-10000>>>,Scale<ClashImpactF<>,Int<20000>,Int<60000>>>>>,TrFade<300>>,TrConcat<TrInstant,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,TrFade<400>>,SaberBase::LOCKUP_NORMAL>,ResponsiveLightningBlockL<Strobe<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,AudioFlicker<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,Blue>,50,1>,TrConcat<TrInstant,AlphaL<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,Bump<Int<12000>,Int<18000>>>,TrFade<200>>,TrConcat<TrInstant,HumpFlickerL<AlphaL<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,Int<16000>>,30>,TrSmoothFade<600>>>,LockupTrL<AlphaL<RandomPerLEDFlickerL<RgbArg<DRAG_COLOR_ARG,Rgb<255,255,255>>>,SmoothStep<IntArg<DRAG_SIZE_ARG,28000>,Int<3000>>>,TrConcat<TrJoin<TrDelay<4000>,TrWipeIn<200>>,AlphaL<BrownNoiseFlickerL<RgbArg<DRAG_COLOR_ARG,Rgb<255,255,255>>,Int<300>>,SmoothStep<IntArg<DRAG_SIZE_ARG,28000>,Int<3000>>>,TrFade<4000>>,TrFade<300>,SaberBase::LOCKUP_DRAG>,LockupTrL<AlphaL<Remap<Scale<RampF,Int<65536>,Int<0>>,StaticFire<Mix<TwistAngle<>,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>,RotateColorsX<Int<3000>,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>>>,Mix<TwistAngle<>,RotateColorsX<Int<3000>,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>>,RotateColorsX<Int<3000>,Mix<Int<12000>,Black,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>>>>,0,3,5,3000,10>>,SmoothStep<IntArg<MELT_SIZE_ARG,28000>,Int<4000>>>,TrConcat<TrWipeIn<100>,AlphaL<RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>,SmoothStep<IntArg<MELT_SIZE_ARG,28000>,Int<4000>>>,TrJoin<TrDelay<4000>,TrFade<300>>,AlphaL<Mix<TwistAngle<>,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>,RotateColorsX<Int<3000>,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>>>,SmoothStep<IntArg<MELT_SIZE_ARG,28000>,Int<4000>>>,TrFade<4000>>,TrWipe<200>,SaberBase::LOCKUP_MELT>,InOutTrL<TrWipeX<IgnitionTime<300>>,TrWipeInX<RetractionTime<0>>,Black>>>(),

		//TOP CC

	/* copyright Fett263 KyloRen (Accent LED / PCB) OS6 Style
https://fett263.com/fett263-proffieOS6-style-library.html#KyloRen
OS6.7 v4.021
Single Style
Base Style: Kylo Ren Unstable (Film Based)

Off Behavior: Slow Pulse Off-On

Base Color: Rgb<0,0,255> (0)

--Effects Included--
Ignition Effect: Glitch On
Retraction Effect: Cycle Down
CoolDown Effect: Unstable Cool Down Reverse
Lockup Effect: Lockup Flash
LightningBlock Effect: Lightning After Effect
Blast Effect: Blast Wave Up (Sound Based)
Clash Effect: Real Clash V1 Up
*/
StylePtr<Layers<StaticFire<BrownNoiseFlicker<RgbArg<BASE_COLOR_ARG,Rgb<0,0,255>>,RandomPerLEDFlicker<Mix<Int<3213>,Black,RgbArg<BASE_COLOR_ARG,Rgb<0,0,255>>>,Mix<Int<7710>,Black,RgbArg<BASE_COLOR_ARG,Rgb<0,0,255>>>>,300>,Mix<Int<10280>,Black,RgbArg<BASE_COLOR_ARG,Rgb<0,0,255>>>,0,6,10,1000,2>,TransitionEffectL<TrConcat<TrJoin<TrDelayX<RetractionTime<5000>>,TrInstant>,Stripes<3000,3500,RgbArg<RETRACTION_COLOR_ARG,Rgb<255,255,255>>,RandomPerLEDFlicker<Mix<Int<7710>,Black,RgbArg<RETRACTION_COLOR_ARG,Rgb<255,255,255>>>,Black>,BrownNoiseFlicker<RgbArg<RETRACTION_COLOR_ARG,Rgb<255,255,255>>,Mix<Int<3855>,Black,RgbArg<RETRACTION_COLOR_ARG,Rgb<255,255,255>>>,200>,RandomPerLEDFlicker<Mix<Int<3137>,Black,RgbArg<RETRACTION_COLOR_ARG,Rgb<255,255,255>>>,Mix<Int<3855>,Black,RgbArg<RETRACTION_COLOR_ARG,Rgb<255,255,255>>>>>,TrFade<800>>,EFFECT_RETRACTION>,TransitionEffectL<TrWaveX<RgbArg<BLAST_COLOR_ARG,Rgb<255,255,255>>,Scale<WavLen<>,Int<100>,Int<400>>,Int<100>,Scale<WavLen<>,Int<100>,Int<400>>,Int<0>>,EFFECT_BLAST>,Mix<IsLessThan<ClashImpactF<>,Int<26000>>,TransitionEffectL<TrWaveX<RgbArg<CLASH_COLOR_ARG,Rgb<255,255,255>>,Scale<ClashImpactF<>,Int<100>,Int<400>>,Int<100>,Scale<ClashImpactF<>,Int<100>,Int<400>>,Int<0>>,EFFECT_CLASH>,AlphaL<White,Int<0>>>,TransitionEffectL<TrConcat<TrInstant,AlphaL<RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,SmoothStep<ClashImpactF<>,Int<-4000>>>,TrFadeX<Scale<ClashImpactF<>,Int<100>,Int<300>>>>,EFFECT_LOCKUP_BEGIN>,TransitionEffectL<TrConcat<TrInstant,AlphaL<RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,SmoothStep<ClashImpactF<>,Int<-4000>>>,TrFadeX<Scale<ClashImpactF<>,Int<100>,Int<300>>>>,EFFECT_LOCKUP_END>,LockupTrL<AlphaL<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,Int<0>>,TrInstant,TrConcat<TrInstant,Strobe<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,AudioFlicker<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,Blue>,50,1>,TrFade<1000>>,SaberBase::LOCKUP_LIGHTNING_BLOCK>,InOutTrL<TrConcat<TrJoin<TrDelayX<Mult<IgnitionTime<3000>,Int<16384>>>,TrWipeX<Mult<IgnitionTime<3000>,Int<16384>>>>,Mix<SmoothStep<NoisySoundLevel,Int<-1>>,Black,RgbArg<IGNITION_COLOR_ARG,Rgb<255,255,255>>>,TrWipeX<Mult<IgnitionTime<3000>,Int<16384>>>>,TrColorCycleX<RetractionTime<5000>>,Pulsing<Black,RgbArg<OFF_COLOR_ARG,Rgb<2,72,255>>,8000>>>>(),},




	
{ "Father;common", "tracks/Father.wav",
	/* copyright Fett263 Rotoscope (Primary Blade) OS6 Style
	https://fett263.com/fett263-proffieOS6-style-library.html#Rotoscope
	OS6.7 v4.012
	Single Style
	Base Style: Rotoscope - Single Color (Original Trilogy)

	Base Color: Rgb<255,0,0> (0)

	--Effects Included--
	Ignition Effect: Standard Ignition
	Retraction Effect: Standard Retraction
	Lockup Effect: Intensity Lockup V1, Begin Effect: Real Clash, End Effect: Full Blade Absorb
	LightningBlock Effect: Responsive Lightning Block
	Drag Effect: Intensity Sparking Drag
	Melt Effect: Intensity Melt
	Blast Effect: Blast Wave (Random)
	Clash Effect: Real Clash V1
	*/
	StylePtr<Layers<RandomFlicker<Stripes<10000,-2600,RgbArg<BASE_COLOR_ARG,Rgb<255,0,0>>,RgbArg<BASE_COLOR_ARG,Rgb<255,0,0>>,Mix<Int<7710>,Black,RgbArg<BASE_COLOR_ARG,Rgb<255,0,0>>>,RgbArg<BASE_COLOR_ARG,Rgb<255,0,0>>,Mix<Int<16448>,Black,RgbArg<BASE_COLOR_ARG,Rgb<255,0,0>>>>,RgbArg<BASE_COLOR_ARG,Rgb<255,0,0>>>,MultiTransitionEffectL<TrWaveX<RgbArg<BLAST_COLOR_ARG,Rgb<255,255,255>>,Scale<EffectRandomF<EFFECT_BLAST>,Int<100>,Int<400>>,Int<100>,Scale<EffectRandomF<EFFECT_BLAST>,Int<100>,Int<400>>,Scale<EffectRandomF<EFFECT_BLAST>,Int<28000>,Int<8000>>>,EFFECT_BLAST>,Mix<IsLessThan<ClashImpactF<>,Int<26000>>,TransitionEffectL<TrConcat<TrInstant,AlphaL<RgbArg<CLASH_COLOR_ARG,Rgb<255,255,255>>,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-12000>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<10000>>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-10000>>>,Scale<ClashImpactF<>,Int<12000>,Int<60000>>>>,TrFadeX<Scale<ClashImpactF<>,Int<200>,Int<400>>>>,EFFECT_CLASH>,TransitionEffectL<TrWaveX<RgbArg<CLASH_COLOR_ARG,Rgb<255,255,255>>,Scale<ClashImpactF<>,Int<100>,Int<400>>,Int<100>,Scale<ClashImpactF<>,Int<100>,Int<400>>,Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-12000>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<10000>>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-10000>>>>,EFFECT_CLASH>>,LockupTrL<TransitionEffect<AlphaMixL<Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-12000>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<10000>>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-10000>>>,Scale<SwingSpeed<100>,Int<14000>,Int<18000>>>,BrownNoiseFlickerL<RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,Int<200>>,StripesX<Int<1800>,Scale<NoisySoundLevel,Int<-3500>,Int<-5000>>,Mix<Int<6425>,Black,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>>,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,Mix<Int<12850>,Black,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>>>>,AlphaL<AudioFlicker<RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,Mix<Int<10280>,Black,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>>>,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-12000>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<10000>>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-10000>>>,Int<13000>>>,TrJoin<TrDelay<8000>,TrInstant>,TrFade<3000>,EFFECT_LOCKUP_BEGIN>,TrConcat<TrJoin<TrDelay<50>,TrInstant>,Mix<IsLessThan<ClashImpactF<>,Int<26000>>,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,AlphaL<RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-12000>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<10000>>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-10000>>>,Scale<ClashImpactF<>,Int<20000>,Int<60000>>>>>,TrFade<300>>,TrConcat<TrInstant,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,TrFade<400>>,SaberBase::LOCKUP_NORMAL>,ResponsiveLightningBlockL<Strobe<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,AudioFlicker<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,Blue>,50,1>,TrConcat<TrInstant,AlphaL<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,Bump<Int<12000>,Int<18000>>>,TrFade<200>>,TrConcat<TrInstant,HumpFlickerL<AlphaL<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,Int<16000>>,30>,TrSmoothFade<600>>>,LockupTrL<AlphaL<RandomPerLEDFlickerL<RgbArg<DRAG_COLOR_ARG,Rgb<255,255,255>>>,SmoothStep<IntArg<DRAG_SIZE_ARG,28000>,Int<3000>>>,TrConcat<TrJoin<TrDelay<4000>,TrWipeIn<200>>,AlphaL<BrownNoiseFlickerL<RgbArg<DRAG_COLOR_ARG,Rgb<255,255,255>>,Int<300>>,SmoothStep<IntArg<DRAG_SIZE_ARG,28000>,Int<3000>>>,TrFade<4000>>,TrFade<300>,SaberBase::LOCKUP_DRAG>,LockupTrL<AlphaL<Remap<Scale<RampF,Int<65536>,Int<0>>,StaticFire<Mix<TwistAngle<>,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>,RotateColorsX<Int<3000>,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>>>,Mix<TwistAngle<>,RotateColorsX<Int<3000>,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>>,RotateColorsX<Int<3000>,Mix<Int<12000>,Black,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>>>>,0,3,5,3000,10>>,SmoothStep<IntArg<MELT_SIZE_ARG,28000>,Int<4000>>>,TrConcat<TrWipeIn<100>,AlphaL<RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>,SmoothStep<IntArg<MELT_SIZE_ARG,28000>,Int<4000>>>,TrJoin<TrDelay<4000>,TrFade<300>>,AlphaL<Mix<TwistAngle<>,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>,RotateColorsX<Int<3000>,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>>>,SmoothStep<IntArg<MELT_SIZE_ARG,28000>,Int<4000>>>,TrFade<4000>>,TrWipe<200>,SaberBase::LOCKUP_MELT>,InOutTrL<TrWipeX<IgnitionTime<500>>,TrWipeInX<RetractionTime<0>>,Black>>>(),

		//TOP CC

	/* copyright Fett263 KyloRen (Accent LED / PCB) OS6 Style
https://fett263.com/fett263-proffieOS6-style-library.html#KyloRen
OS6.7 v4.021
Single Style
Base Style: Kylo Ren Unstable (Film Based)

Off Behavior: Slow Pulse Off-On

Base Color: Rgb<255,0,0> (0)

--Effects Included--
Ignition Effect: Glitch On
Retraction Effect: Cycle Down
CoolDown Effect: Unstable Cool Down Reverse
Lockup Effect: Lockup Flash
LightningBlock Effect: Lightning After Effect
Blast Effect: Blast Wave Up (Sound Based)
Clash Effect: Real Clash V1 Up
*/
StylePtr<Layers<StaticFire<BrownNoiseFlicker<RgbArg<BASE_COLOR_ARG,Rgb<255,0,0>>,RandomPerLEDFlicker<Mix<Int<3213>,Black,RgbArg<BASE_COLOR_ARG,Rgb<255,0,0>>>,Mix<Int<7710>,Black,RgbArg<BASE_COLOR_ARG,Rgb<255,0,0>>>>,300>,Mix<Int<10280>,Black,RgbArg<BASE_COLOR_ARG,Rgb<255,0,0>>>,0,6,10,1000,2>,TransitionEffectL<TrConcat<TrJoin<TrDelayX<RetractionTime<5000>>,TrInstant>,Stripes<3000,3500,RgbArg<RETRACTION_COLOR_ARG,Rgb<255,255,255>>,RandomPerLEDFlicker<Mix<Int<7710>,Black,RgbArg<RETRACTION_COLOR_ARG,Rgb<255,255,255>>>,Black>,BrownNoiseFlicker<RgbArg<RETRACTION_COLOR_ARG,Rgb<255,255,255>>,Mix<Int<3855>,Black,RgbArg<RETRACTION_COLOR_ARG,Rgb<255,255,255>>>,200>,RandomPerLEDFlicker<Mix<Int<3137>,Black,RgbArg<RETRACTION_COLOR_ARG,Rgb<255,255,255>>>,Mix<Int<3855>,Black,RgbArg<RETRACTION_COLOR_ARG,Rgb<255,255,255>>>>>,TrFade<800>>,EFFECT_RETRACTION>,TransitionEffectL<TrWaveX<RgbArg<BLAST_COLOR_ARG,Rgb<255,255,255>>,Scale<WavLen<>,Int<100>,Int<400>>,Int<100>,Scale<WavLen<>,Int<100>,Int<400>>,Int<0>>,EFFECT_BLAST>,Mix<IsLessThan<ClashImpactF<>,Int<26000>>,TransitionEffectL<TrWaveX<RgbArg<CLASH_COLOR_ARG,Rgb<255,255,255>>,Scale<ClashImpactF<>,Int<100>,Int<400>>,Int<100>,Scale<ClashImpactF<>,Int<100>,Int<400>>,Int<0>>,EFFECT_CLASH>,AlphaL<White,Int<0>>>,TransitionEffectL<TrConcat<TrInstant,AlphaL<RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,SmoothStep<ClashImpactF<>,Int<-4000>>>,TrFadeX<Scale<ClashImpactF<>,Int<100>,Int<300>>>>,EFFECT_LOCKUP_BEGIN>,TransitionEffectL<TrConcat<TrInstant,AlphaL<RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,SmoothStep<ClashImpactF<>,Int<-4000>>>,TrFadeX<Scale<ClashImpactF<>,Int<100>,Int<300>>>>,EFFECT_LOCKUP_END>,LockupTrL<AlphaL<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,Int<0>>,TrInstant,TrConcat<TrInstant,Strobe<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,AudioFlicker<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,Blue>,50,1>,TrFade<1000>>,SaberBase::LOCKUP_LIGHTNING_BLOCK>,InOutTrL<TrConcat<TrJoin<TrDelayX<Mult<IgnitionTime<3000>,Int<16384>>>,TrWipeX<Mult<IgnitionTime<3000>,Int<16384>>>>,Mix<SmoothStep<NoisySoundLevel,Int<-1>>,Black,RgbArg<IGNITION_COLOR_ARG,Rgb<255,255,255>>>,TrWipeX<Mult<IgnitionTime<3000>,Int<16384>>>>,TrColorCycleX<RetractionTime<5000>>,Pulsing<Black,Rgb<236,126,126>,8000>>>>(),},






{ "Little_Green_Friend;common", "tracks/Little_Green_Friend.wav",
	/* copyright Fett263 Rotoscope (Primary Blade) OS6 Style
	https://fett263.com/fett263-proffieOS6-style-library.html#Rotoscope
	OS6.7 v4.01
	Single Style
	Base Style: Rotoscope - Single Color (Prequels)

	Base Color: Rgb<0,255,0> (0)

	--Effects Included--
	Ignition Effect: Standard Ignition
	Retraction Effect: Standard Retraction
	Lockup Effect: Intensity Lockup V1, Begin Effect: Real Clash, End Effect: Full Blade Absorb
	LightningBlock Effect: Responsive Lightning Block
	Drag Effect: Intensity Sparking Drag
	Melt Effect: Intensity Melt
	Blast Effect: Blast Ripple
	Clash Effect: Real Clash V1
	*/
	StylePtr<Layers<RandomFlicker<Stripes<24000,-1400,RgbArg<BASE_COLOR_ARG,Rgb<0,255,0>>,RgbArg<BASE_COLOR_ARG,Rgb<0,255,0>>,Mix<Int<11565>,Black,RgbArg<BASE_COLOR_ARG,Rgb<0,255,0>>>,RgbArg<BASE_COLOR_ARG,Rgb<0,255,0>>,Mix<Int<16448>,Black,RgbArg<BASE_COLOR_ARG,Rgb<0,255,0>>>>,RgbArg<BASE_COLOR_ARG,Rgb<0,255,0>>>,MultiTransitionEffectL<TrConcat<TrInstant,AlphaL<RgbArg<BLAST_COLOR_ARG,Rgb<255,255,255>>,Bump<Scale<EffectRandomF<EFFECT_BLAST>,Int<3000>,Int<29000>>,Int<6000>>>,TrCenterWipeX<Int<100>,Scale<EffectRandomF<EFFECT_BLAST>,Int<3000>,Int<29000>>>,Remap<CenterDistF<Scale<EffectRandomF<EFFECT_BLAST>,Int<3000>,Int<29000>>>,Stripes<1600,-2000,RgbArg<BLAST_COLOR_ARG,Rgb<255,255,255>>,Mix<Int<2096>,Black,RgbArg<BLAST_COLOR_ARG,Rgb<255,255,255>>>>>,TrCenterWipeX<Int<100>,Scale<EffectRandomF<EFFECT_BLAST>,Int<3000>,Int<29000>>>>,EFFECT_BLAST>,Mix<IsLessThan<ClashImpactF<>,Int<26000>>,TransitionEffectL<TrConcat<TrInstant,AlphaL<RgbArg<CLASH_COLOR_ARG,Rgb<100,100,150>>,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-12000>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<10000>>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-10000>>>,Scale<ClashImpactF<>,Int<12000>,Int<60000>>>>,TrFadeX<Scale<ClashImpactF<>,Int<200>,Int<400>>>>,EFFECT_CLASH>,TransitionEffectL<TrWaveX<RgbArg<CLASH_COLOR_ARG,Rgb<100,100,150>>,Scale<ClashImpactF<>,Int<100>,Int<400>>,Int<100>,Scale<ClashImpactF<>,Int<100>,Int<400>>,Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-12000>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<10000>>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-10000>>>>,EFFECT_CLASH>>,LockupTrL<TransitionEffect<AlphaMixL<Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-12000>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<10000>>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-10000>>>,Scale<SwingSpeed<100>,Int<14000>,Int<18000>>>,BrownNoiseFlickerL<RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,Int<200>>,StripesX<Int<1800>,Scale<NoisySoundLevel,Int<-3500>,Int<-5000>>,Mix<Int<6425>,Black,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>>,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,Mix<Int<12850>,Black,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>>>>,AlphaL<AudioFlicker<RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,Mix<Int<10280>,Black,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>>>,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-12000>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<10000>>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-10000>>>,Int<13000>>>,TrJoin<TrDelay<8000>,TrInstant>,TrFade<3000>,EFFECT_LOCKUP_BEGIN>,TrConcat<TrJoin<TrDelay<50>,TrInstant>,Mix<IsLessThan<ClashImpactF<>,Int<26000>>,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,AlphaL<RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-12000>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<10000>>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-10000>>>,Scale<ClashImpactF<>,Int<20000>,Int<60000>>>>>,TrFade<300>>,TrConcat<TrInstant,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,TrFade<400>>,SaberBase::LOCKUP_NORMAL>,ResponsiveLightningBlockL<Strobe<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,AudioFlicker<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,Blue>,50,1>,TrConcat<TrInstant,AlphaL<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,Bump<Int<12000>,Int<18000>>>,TrFade<200>>,TrConcat<TrInstant,HumpFlickerL<AlphaL<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,Int<16000>>,30>,TrSmoothFade<600>>>,LockupTrL<AlphaL<RandomPerLEDFlickerL<RgbArg<DRAG_COLOR_ARG,Rgb<255,255,255>>>,SmoothStep<IntArg<DRAG_SIZE_ARG,28000>,Int<3000>>>,TrConcat<TrJoin<TrDelay<4000>,TrWipeIn<200>>,AlphaL<BrownNoiseFlickerL<RgbArg<DRAG_COLOR_ARG,Rgb<255,255,255>>,Int<300>>,SmoothStep<IntArg<DRAG_SIZE_ARG,28000>,Int<3000>>>,TrFade<4000>>,TrFade<300>,SaberBase::LOCKUP_DRAG>,LockupTrL<AlphaL<Remap<Scale<RampF,Int<65536>,Int<0>>,StaticFire<Mix<TwistAngle<>,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>,RotateColorsX<Int<3000>,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>>>,Mix<TwistAngle<>,RotateColorsX<Int<3000>,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>>,RotateColorsX<Int<3000>,Mix<Int<12000>,Black,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>>>>,0,3,5,3000,10>>,SmoothStep<IntArg<MELT_SIZE_ARG,28000>,Int<4000>>>,TrConcat<TrWipeIn<100>,AlphaL<RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>,SmoothStep<IntArg<MELT_SIZE_ARG,28000>,Int<4000>>>,TrJoin<TrDelay<4000>,TrFade<300>>,AlphaL<Mix<TwistAngle<>,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>,RotateColorsX<Int<3000>,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>>>,SmoothStep<IntArg<MELT_SIZE_ARG,28000>,Int<4000>>>,TrFade<4000>>,TrWipe<200>,SaberBase::LOCKUP_MELT>,InOutTrL<TrWipeX<IgnitionTime<300>>,TrWipeInX<RetractionTime<0>>,Black>>>(),

	//TOP CC

	/* copyright Fett263 KyloRen (Accent LED / PCB) OS6 Style
https://fett263.com/fett263-proffieOS6-style-library.html#KyloRen
OS6.7 v4.021
Single Style
Base Style: Kylo Ren Unstable (Film Based)

Off Behavior: Slow Pulse Off-On

Base Color: Rgb<0,255,0> (0)

--Effects Included--
Ignition Effect: Glitch On
Retraction Effect: Cycle Down
CoolDown Effect: Unstable Cool Down Reverse
Lockup Effect: Lockup Flash
LightningBlock Effect: Lightning After Effect
Blast Effect: Blast Wave Up (Sound Based)
Clash Effect: Real Clash V1 Up
*/
StylePtr<Layers<StaticFire<BrownNoiseFlicker<RgbArg<BASE_COLOR_ARG,Rgb<0,255,0>>,RandomPerLEDFlicker<Mix<Int<3213>,Black,RgbArg<BASE_COLOR_ARG,Rgb<0,255,0>>>,Mix<Int<7710>,Black,RgbArg<BASE_COLOR_ARG,Rgb<0,255,0>>>>,300>,Mix<Int<10280>,Black,RgbArg<BASE_COLOR_ARG,Rgb<0,255,0>>>,0,6,10,1000,2>,TransitionEffectL<TrConcat<TrJoin<TrDelayX<RetractionTime<5000>>,TrInstant>,Stripes<3000,3500,RgbArg<RETRACTION_COLOR_ARG,Rgb<255,255,255>>,RandomPerLEDFlicker<Mix<Int<7710>,Black,RgbArg<RETRACTION_COLOR_ARG,Rgb<255,255,255>>>,Black>,BrownNoiseFlicker<RgbArg<RETRACTION_COLOR_ARG,Rgb<255,255,255>>,Mix<Int<3855>,Black,RgbArg<RETRACTION_COLOR_ARG,Rgb<255,255,255>>>,200>,RandomPerLEDFlicker<Mix<Int<3137>,Black,RgbArg<RETRACTION_COLOR_ARG,Rgb<255,255,255>>>,Mix<Int<3855>,Black,RgbArg<RETRACTION_COLOR_ARG,Rgb<255,255,255>>>>>,TrFade<800>>,EFFECT_RETRACTION>,TransitionEffectL<TrWaveX<RgbArg<BLAST_COLOR_ARG,Rgb<255,255,255>>,Scale<WavLen<>,Int<100>,Int<400>>,Int<100>,Scale<WavLen<>,Int<100>,Int<400>>,Int<0>>,EFFECT_BLAST>,Mix<IsLessThan<ClashImpactF<>,Int<26000>>,TransitionEffectL<TrWaveX<RgbArg<CLASH_COLOR_ARG,Rgb<255,255,255>>,Scale<ClashImpactF<>,Int<100>,Int<400>>,Int<100>,Scale<ClashImpactF<>,Int<100>,Int<400>>,Int<0>>,EFFECT_CLASH>,AlphaL<White,Int<0>>>,TransitionEffectL<TrConcat<TrInstant,AlphaL<RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,SmoothStep<ClashImpactF<>,Int<-4000>>>,TrFadeX<Scale<ClashImpactF<>,Int<100>,Int<300>>>>,EFFECT_LOCKUP_BEGIN>,TransitionEffectL<TrConcat<TrInstant,AlphaL<RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,SmoothStep<ClashImpactF<>,Int<-4000>>>,TrFadeX<Scale<ClashImpactF<>,Int<100>,Int<300>>>>,EFFECT_LOCKUP_END>,LockupTrL<AlphaL<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,Int<0>>,TrInstant,TrConcat<TrInstant,Strobe<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,AudioFlicker<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,Blue>,50,1>,TrFade<1000>>,SaberBase::LOCKUP_LIGHTNING_BLOCK>,InOutTrL<TrConcat<TrJoin<TrDelayX<Mult<IgnitionTime<3000>,Int<16384>>>,TrWipeX<Mult<IgnitionTime<3000>,Int<16384>>>>,Mix<SmoothStep<NoisySoundLevel,Int<-1>>,Black,RgbArg<IGNITION_COLOR_ARG,Rgb<255,255,255>>>,TrWipeX<Mult<IgnitionTime<3000>,Int<16384>>>>,TrColorCycleX<RetractionTime<5000>>,Pulsing<Black,Rgb<135,232,146>,8000>>>>(),},





{ "Loth_Hero;common", "tracks/Loth_Hero.wav",
/* copyright Fett263 Rotoscope (Primary Blade) OS6 Style
	https://fett263.com/fett263-proffieOS6-style-library.html#Rotoscope
	OS6.7 v4.01
	Single Style
	Base Style: Rotoscope - Single Color (Prequels)

	Base Color: Rgb<0,255,0> (0)

	--Effects Included--
	Ignition Effect: Standard Ignition
	Retraction Effect: Standard Retraction
	Lockup Effect: Intensity Lockup V1, Begin Effect: Real Clash, End Effect: Full Blade Absorb
	LightningBlock Effect: Responsive Lightning Block
	Drag Effect: Intensity Sparking Drag
	Melt Effect: Intensity Melt
	Blast Effect: Blast Ripple
	Clash Effect: Real Clash V1
	*/
	StylePtr<Layers<RandomFlicker<Stripes<24000,-1400,RgbArg<BASE_COLOR_ARG,Rgb<0,255,0>>,RgbArg<BASE_COLOR_ARG,Rgb<0,255,0>>,Mix<Int<11565>,Black,RgbArg<BASE_COLOR_ARG,Rgb<0,255,0>>>,RgbArg<BASE_COLOR_ARG,Rgb<0,255,0>>,Mix<Int<16448>,Black,RgbArg<BASE_COLOR_ARG,Rgb<0,255,0>>>>,RgbArg<BASE_COLOR_ARG,Rgb<0,255,0>>>,MultiTransitionEffectL<TrConcat<TrInstant,AlphaL<RgbArg<BLAST_COLOR_ARG,Rgb<255,255,255>>,Bump<Scale<EffectRandomF<EFFECT_BLAST>,Int<3000>,Int<29000>>,Int<6000>>>,TrCenterWipeX<Int<100>,Scale<EffectRandomF<EFFECT_BLAST>,Int<3000>,Int<29000>>>,Remap<CenterDistF<Scale<EffectRandomF<EFFECT_BLAST>,Int<3000>,Int<29000>>>,Stripes<1600,-2000,RgbArg<BLAST_COLOR_ARG,Rgb<255,255,255>>,Mix<Int<2096>,Black,RgbArg<BLAST_COLOR_ARG,Rgb<255,255,255>>>>>,TrCenterWipeX<Int<100>,Scale<EffectRandomF<EFFECT_BLAST>,Int<3000>,Int<29000>>>>,EFFECT_BLAST>,Mix<IsLessThan<ClashImpactF<>,Int<26000>>,TransitionEffectL<TrConcat<TrInstant,AlphaL<RgbArg<CLASH_COLOR_ARG,Rgb<100,100,150>>,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-12000>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<10000>>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-10000>>>,Scale<ClashImpactF<>,Int<12000>,Int<60000>>>>,TrFadeX<Scale<ClashImpactF<>,Int<200>,Int<400>>>>,EFFECT_CLASH>,TransitionEffectL<TrWaveX<RgbArg<CLASH_COLOR_ARG,Rgb<100,100,150>>,Scale<ClashImpactF<>,Int<100>,Int<400>>,Int<100>,Scale<ClashImpactF<>,Int<100>,Int<400>>,Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-12000>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<10000>>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-10000>>>>,EFFECT_CLASH>>,LockupTrL<TransitionEffect<AlphaMixL<Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-12000>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<10000>>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-10000>>>,Scale<SwingSpeed<100>,Int<14000>,Int<18000>>>,BrownNoiseFlickerL<RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,Int<200>>,StripesX<Int<1800>,Scale<NoisySoundLevel,Int<-3500>,Int<-5000>>,Mix<Int<6425>,Black,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>>,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,Mix<Int<12850>,Black,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>>>>,AlphaL<AudioFlicker<RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,Mix<Int<10280>,Black,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>>>,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-12000>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<10000>>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-10000>>>,Int<13000>>>,TrJoin<TrDelay<8000>,TrInstant>,TrFade<3000>,EFFECT_LOCKUP_BEGIN>,TrConcat<TrJoin<TrDelay<50>,TrInstant>,Mix<IsLessThan<ClashImpactF<>,Int<26000>>,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,AlphaL<RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-12000>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<10000>>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-10000>>>,Scale<ClashImpactF<>,Int<20000>,Int<60000>>>>>,TrFade<300>>,TrConcat<TrInstant,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,TrFade<400>>,SaberBase::LOCKUP_NORMAL>,ResponsiveLightningBlockL<Strobe<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,AudioFlicker<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,Blue>,50,1>,TrConcat<TrInstant,AlphaL<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,Bump<Int<12000>,Int<18000>>>,TrFade<200>>,TrConcat<TrInstant,HumpFlickerL<AlphaL<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,Int<16000>>,30>,TrSmoothFade<600>>>,LockupTrL<AlphaL<RandomPerLEDFlickerL<RgbArg<DRAG_COLOR_ARG,Rgb<255,255,255>>>,SmoothStep<IntArg<DRAG_SIZE_ARG,28000>,Int<3000>>>,TrConcat<TrJoin<TrDelay<4000>,TrWipeIn<200>>,AlphaL<BrownNoiseFlickerL<RgbArg<DRAG_COLOR_ARG,Rgb<255,255,255>>,Int<300>>,SmoothStep<IntArg<DRAG_SIZE_ARG,28000>,Int<3000>>>,TrFade<4000>>,TrFade<300>,SaberBase::LOCKUP_DRAG>,LockupTrL<AlphaL<Remap<Scale<RampF,Int<65536>,Int<0>>,StaticFire<Mix<TwistAngle<>,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>,RotateColorsX<Int<3000>,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>>>,Mix<TwistAngle<>,RotateColorsX<Int<3000>,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>>,RotateColorsX<Int<3000>,Mix<Int<12000>,Black,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>>>>,0,3,5,3000,10>>,SmoothStep<IntArg<MELT_SIZE_ARG,28000>,Int<4000>>>,TrConcat<TrWipeIn<100>,AlphaL<RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>,SmoothStep<IntArg<MELT_SIZE_ARG,28000>,Int<4000>>>,TrJoin<TrDelay<4000>,TrFade<300>>,AlphaL<Mix<TwistAngle<>,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>,RotateColorsX<Int<3000>,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>>>,SmoothStep<IntArg<MELT_SIZE_ARG,28000>,Int<4000>>>,TrFade<4000>>,TrWipe<200>,SaberBase::LOCKUP_MELT>,InOutTrL<TrWipeX<IgnitionTime<300>>,TrWipeInX<RetractionTime<0>>,Black>>>(),

	//TOP CC

	/* copyright Fett263 KyloRen (Accent LED / PCB) OS6 Style
https://fett263.com/fett263-proffieOS6-style-library.html#KyloRen
OS6.7 v4.021
Single Style
Base Style: Kylo Ren Unstable (Film Based)

Off Behavior: Slow Pulse Off-On

Base Color: Rgb<0,255,0> (0)

--Effects Included--
Ignition Effect: Glitch On
Retraction Effect: Cycle Down
CoolDown Effect: Unstable Cool Down Reverse
Lockup Effect: Lockup Flash
LightningBlock Effect: Lightning After Effect
Blast Effect: Blast Wave Up (Sound Based)
Clash Effect: Real Clash V1 Up
*/
StylePtr<Layers<StaticFire<BrownNoiseFlicker<RgbArg<BASE_COLOR_ARG,Rgb<0,255,0>>,RandomPerLEDFlicker<Mix<Int<3213>,Black,RgbArg<BASE_COLOR_ARG,Rgb<0,255,0>>>,Mix<Int<7710>,Black,RgbArg<BASE_COLOR_ARG,Rgb<0,255,0>>>>,300>,Mix<Int<10280>,Black,RgbArg<BASE_COLOR_ARG,Rgb<0,255,0>>>,0,6,10,1000,2>,TransitionEffectL<TrConcat<TrJoin<TrDelayX<RetractionTime<5000>>,TrInstant>,Stripes<3000,3500,RgbArg<RETRACTION_COLOR_ARG,Rgb<255,255,255>>,RandomPerLEDFlicker<Mix<Int<7710>,Black,RgbArg<RETRACTION_COLOR_ARG,Rgb<255,255,255>>>,Black>,BrownNoiseFlicker<RgbArg<RETRACTION_COLOR_ARG,Rgb<255,255,255>>,Mix<Int<3855>,Black,RgbArg<RETRACTION_COLOR_ARG,Rgb<255,255,255>>>,200>,RandomPerLEDFlicker<Mix<Int<3137>,Black,RgbArg<RETRACTION_COLOR_ARG,Rgb<255,255,255>>>,Mix<Int<3855>,Black,RgbArg<RETRACTION_COLOR_ARG,Rgb<255,255,255>>>>>,TrFade<800>>,EFFECT_RETRACTION>,TransitionEffectL<TrWaveX<RgbArg<BLAST_COLOR_ARG,Rgb<255,255,255>>,Scale<WavLen<>,Int<100>,Int<400>>,Int<100>,Scale<WavLen<>,Int<100>,Int<400>>,Int<0>>,EFFECT_BLAST>,Mix<IsLessThan<ClashImpactF<>,Int<26000>>,TransitionEffectL<TrWaveX<RgbArg<CLASH_COLOR_ARG,Rgb<255,255,255>>,Scale<ClashImpactF<>,Int<100>,Int<400>>,Int<100>,Scale<ClashImpactF<>,Int<100>,Int<400>>,Int<0>>,EFFECT_CLASH>,AlphaL<White,Int<0>>>,TransitionEffectL<TrConcat<TrInstant,AlphaL<RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,SmoothStep<ClashImpactF<>,Int<-4000>>>,TrFadeX<Scale<ClashImpactF<>,Int<100>,Int<300>>>>,EFFECT_LOCKUP_BEGIN>,TransitionEffectL<TrConcat<TrInstant,AlphaL<RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,SmoothStep<ClashImpactF<>,Int<-4000>>>,TrFadeX<Scale<ClashImpactF<>,Int<100>,Int<300>>>>,EFFECT_LOCKUP_END>,LockupTrL<AlphaL<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,Int<0>>,TrInstant,TrConcat<TrInstant,Strobe<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,AudioFlicker<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,Blue>,50,1>,TrFade<1000>>,SaberBase::LOCKUP_LIGHTNING_BLOCK>,InOutTrL<TrConcat<TrJoin<TrDelayX<Mult<IgnitionTime<3000>,Int<16384>>>,TrWipeX<Mult<IgnitionTime<3000>,Int<16384>>>>,Mix<SmoothStep<NoisySoundLevel,Int<-1>>,Black,RgbArg<IGNITION_COLOR_ARG,Rgb<255,255,255>>>,TrWipeX<Mult<IgnitionTime<3000>,Int<16384>>>>,TrColorCycleX<RetractionTime<5000>>,Pulsing<Black,Rgb<135,232,146>,8000>>>>(),},





{ "Menace;common", "tracks/Menace.wav",
	/* copyright Fett263 Rotoscope (Primary Blade) OS6 Style
	https://fett263.com/fett263-proffieOS6-style-library.html#Rotoscope
	OS6.7 v4.012
	Single Style
	Base Style: Rotoscope - Single Color (Original Trilogy)

	Base Color: Rgb<255,0,0> (0)

	--Effects Included--
	Ignition Effect: Standard Ignition
	Retraction Effect: Standard Retraction
	Lockup Effect: Intensity Lockup V1, Begin Effect: Real Clash, End Effect: Full Blade Absorb
	LightningBlock Effect: Responsive Lightning Block
	Drag Effect: Intensity Sparking Drag
	Melt Effect: Intensity Melt
	Blast Effect: Blast Wave (Random)
	Clash Effect: Real Clash V1
	*/
	StylePtr<Layers<RandomFlicker<Stripes<10000,-2600,RgbArg<BASE_COLOR_ARG,Rgb<255,0,0>>,RgbArg<BASE_COLOR_ARG,Rgb<255,0,0>>,Mix<Int<7710>,Black,RgbArg<BASE_COLOR_ARG,Rgb<255,0,0>>>,RgbArg<BASE_COLOR_ARG,Rgb<255,0,0>>,Mix<Int<16448>,Black,RgbArg<BASE_COLOR_ARG,Rgb<255,0,0>>>>,RgbArg<BASE_COLOR_ARG,Rgb<255,0,0>>>,MultiTransitionEffectL<TrWaveX<RgbArg<BLAST_COLOR_ARG,Rgb<255,255,255>>,Scale<EffectRandomF<EFFECT_BLAST>,Int<100>,Int<400>>,Int<100>,Scale<EffectRandomF<EFFECT_BLAST>,Int<100>,Int<400>>,Scale<EffectRandomF<EFFECT_BLAST>,Int<28000>,Int<8000>>>,EFFECT_BLAST>,Mix<IsLessThan<ClashImpactF<>,Int<26000>>,TransitionEffectL<TrConcat<TrInstant,AlphaL<RgbArg<CLASH_COLOR_ARG,Rgb<255,255,255>>,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-12000>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<10000>>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-10000>>>,Scale<ClashImpactF<>,Int<12000>,Int<60000>>>>,TrFadeX<Scale<ClashImpactF<>,Int<200>,Int<400>>>>,EFFECT_CLASH>,TransitionEffectL<TrWaveX<RgbArg<CLASH_COLOR_ARG,Rgb<255,255,255>>,Scale<ClashImpactF<>,Int<100>,Int<400>>,Int<100>,Scale<ClashImpactF<>,Int<100>,Int<400>>,Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-12000>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<10000>>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-10000>>>>,EFFECT_CLASH>>,LockupTrL<TransitionEffect<AlphaMixL<Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-12000>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<10000>>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-10000>>>,Scale<SwingSpeed<100>,Int<14000>,Int<18000>>>,BrownNoiseFlickerL<RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,Int<200>>,StripesX<Int<1800>,Scale<NoisySoundLevel,Int<-3500>,Int<-5000>>,Mix<Int<6425>,Black,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>>,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,Mix<Int<12850>,Black,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>>>>,AlphaL<AudioFlicker<RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,Mix<Int<10280>,Black,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>>>,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-12000>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<10000>>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-10000>>>,Int<13000>>>,TrJoin<TrDelay<8000>,TrInstant>,TrFade<3000>,EFFECT_LOCKUP_BEGIN>,TrConcat<TrJoin<TrDelay<50>,TrInstant>,Mix<IsLessThan<ClashImpactF<>,Int<26000>>,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,AlphaL<RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-12000>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<10000>>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-10000>>>,Scale<ClashImpactF<>,Int<20000>,Int<60000>>>>>,TrFade<300>>,TrConcat<TrInstant,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,TrFade<400>>,SaberBase::LOCKUP_NORMAL>,ResponsiveLightningBlockL<Strobe<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,AudioFlicker<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,Blue>,50,1>,TrConcat<TrInstant,AlphaL<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,Bump<Int<12000>,Int<18000>>>,TrFade<200>>,TrConcat<TrInstant,HumpFlickerL<AlphaL<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,Int<16000>>,30>,TrSmoothFade<600>>>,LockupTrL<AlphaL<RandomPerLEDFlickerL<RgbArg<DRAG_COLOR_ARG,Rgb<255,255,255>>>,SmoothStep<IntArg<DRAG_SIZE_ARG,28000>,Int<3000>>>,TrConcat<TrJoin<TrDelay<4000>,TrWipeIn<200>>,AlphaL<BrownNoiseFlickerL<RgbArg<DRAG_COLOR_ARG,Rgb<255,255,255>>,Int<300>>,SmoothStep<IntArg<DRAG_SIZE_ARG,28000>,Int<3000>>>,TrFade<4000>>,TrFade<300>,SaberBase::LOCKUP_DRAG>,LockupTrL<AlphaL<Remap<Scale<RampF,Int<65536>,Int<0>>,StaticFire<Mix<TwistAngle<>,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>,RotateColorsX<Int<3000>,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>>>,Mix<TwistAngle<>,RotateColorsX<Int<3000>,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>>,RotateColorsX<Int<3000>,Mix<Int<12000>,Black,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>>>>,0,3,5,3000,10>>,SmoothStep<IntArg<MELT_SIZE_ARG,28000>,Int<4000>>>,TrConcat<TrWipeIn<100>,AlphaL<RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>,SmoothStep<IntArg<MELT_SIZE_ARG,28000>,Int<4000>>>,TrJoin<TrDelay<4000>,TrFade<300>>,AlphaL<Mix<TwistAngle<>,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>,RotateColorsX<Int<3000>,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>>>,SmoothStep<IntArg<MELT_SIZE_ARG,28000>,Int<4000>>>,TrFade<4000>>,TrWipe<200>,SaberBase::LOCKUP_MELT>,InOutTrL<TrWipeX<IgnitionTime<500>>,TrWipeInX<RetractionTime<0>>,Black>>>(),

		//TOP CC

	/* copyright Fett263 KyloRen (Accent LED / PCB) OS6 Style
https://fett263.com/fett263-proffieOS6-style-library.html#KyloRen
OS6.7 v4.021
Single Style
Base Style: Kylo Ren Unstable (Film Based)

Off Behavior: Slow Pulse Off-On

Base Color: Rgb<255,0,0> (0)

--Effects Included--
Ignition Effect: Glitch On
Retraction Effect: Cycle Down
CoolDown Effect: Unstable Cool Down Reverse
Lockup Effect: Lockup Flash
LightningBlock Effect: Lightning After Effect
Blast Effect: Blast Wave Up (Sound Based)
Clash Effect: Real Clash V1 Up
*/
StylePtr<Layers<StaticFire<BrownNoiseFlicker<RgbArg<BASE_COLOR_ARG,Rgb<255,0,0>>,RandomPerLEDFlicker<Mix<Int<3213>,Black,RgbArg<BASE_COLOR_ARG,Rgb<255,0,0>>>,Mix<Int<7710>,Black,RgbArg<BASE_COLOR_ARG,Rgb<255,0,0>>>>,300>,Mix<Int<10280>,Black,RgbArg<BASE_COLOR_ARG,Rgb<255,0,0>>>,0,6,10,1000,2>,TransitionEffectL<TrConcat<TrJoin<TrDelayX<RetractionTime<5000>>,TrInstant>,Stripes<3000,3500,RgbArg<RETRACTION_COLOR_ARG,Rgb<255,255,255>>,RandomPerLEDFlicker<Mix<Int<7710>,Black,RgbArg<RETRACTION_COLOR_ARG,Rgb<255,255,255>>>,Black>,BrownNoiseFlicker<RgbArg<RETRACTION_COLOR_ARG,Rgb<255,255,255>>,Mix<Int<3855>,Black,RgbArg<RETRACTION_COLOR_ARG,Rgb<255,255,255>>>,200>,RandomPerLEDFlicker<Mix<Int<3137>,Black,RgbArg<RETRACTION_COLOR_ARG,Rgb<255,255,255>>>,Mix<Int<3855>,Black,RgbArg<RETRACTION_COLOR_ARG,Rgb<255,255,255>>>>>,TrFade<800>>,EFFECT_RETRACTION>,TransitionEffectL<TrWaveX<RgbArg<BLAST_COLOR_ARG,Rgb<255,255,255>>,Scale<WavLen<>,Int<100>,Int<400>>,Int<100>,Scale<WavLen<>,Int<100>,Int<400>>,Int<0>>,EFFECT_BLAST>,Mix<IsLessThan<ClashImpactF<>,Int<26000>>,TransitionEffectL<TrWaveX<RgbArg<CLASH_COLOR_ARG,Rgb<255,255,255>>,Scale<ClashImpactF<>,Int<100>,Int<400>>,Int<100>,Scale<ClashImpactF<>,Int<100>,Int<400>>,Int<0>>,EFFECT_CLASH>,AlphaL<White,Int<0>>>,TransitionEffectL<TrConcat<TrInstant,AlphaL<RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,SmoothStep<ClashImpactF<>,Int<-4000>>>,TrFadeX<Scale<ClashImpactF<>,Int<100>,Int<300>>>>,EFFECT_LOCKUP_BEGIN>,TransitionEffectL<TrConcat<TrInstant,AlphaL<RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,SmoothStep<ClashImpactF<>,Int<-4000>>>,TrFadeX<Scale<ClashImpactF<>,Int<100>,Int<300>>>>,EFFECT_LOCKUP_END>,LockupTrL<AlphaL<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,Int<0>>,TrInstant,TrConcat<TrInstant,Strobe<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,AudioFlicker<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,Blue>,50,1>,TrFade<1000>>,SaberBase::LOCKUP_LIGHTNING_BLOCK>,InOutTrL<TrConcat<TrJoin<TrDelayX<Mult<IgnitionTime<3000>,Int<16384>>>,TrWipeX<Mult<IgnitionTime<3000>,Int<16384>>>>,Mix<SmoothStep<NoisySoundLevel,Int<-1>>,Black,RgbArg<IGNITION_COLOR_ARG,Rgb<255,255,255>>>,TrWipeX<Mult<IgnitionTime<3000>,Int<16384>>>>,TrColorCycleX<RetractionTime<5000>>,Pulsing<Black,Rgb<236,126,126>,8000>>>>(),},




{ "Nightsister;common", "tracks/Nightsister.wav",
	/* copyright Fett263 Rotoscope (Primary Blade) OS6 Style
	https://fett263.com/fett263-proffieOS6-style-library.html#Rotoscope
	OS6.7 v4.012
	Single Style
	Base Style: Rotoscope - Single Color (Original Trilogy)

	Base Color: Rgb<255,0,0> (0)

	--Effects Included--
	Ignition Effect: Standard Ignition
	Retraction Effect: Standard Retraction
	Lockup Effect: Intensity Lockup V1, Begin Effect: Real Clash, End Effect: Full Blade Absorb
	LightningBlock Effect: Responsive Lightning Block
	Drag Effect: Intensity Sparking Drag
	Melt Effect: Intensity Melt
	Blast Effect: Blast Wave (Random)
	Clash Effect: Real Clash V1
	*/
	StylePtr<Layers<RandomFlicker<Stripes<10000,-2600,RgbArg<BASE_COLOR_ARG,Rgb<255,0,0>>,RgbArg<BASE_COLOR_ARG,Rgb<255,0,0>>,Mix<Int<7710>,Black,RgbArg<BASE_COLOR_ARG,Rgb<255,0,0>>>,RgbArg<BASE_COLOR_ARG,Rgb<255,0,0>>,Mix<Int<16448>,Black,RgbArg<BASE_COLOR_ARG,Rgb<255,0,0>>>>,RgbArg<BASE_COLOR_ARG,Rgb<255,0,0>>>,MultiTransitionEffectL<TrWaveX<RgbArg<BLAST_COLOR_ARG,Rgb<255,255,255>>,Scale<EffectRandomF<EFFECT_BLAST>,Int<100>,Int<400>>,Int<100>,Scale<EffectRandomF<EFFECT_BLAST>,Int<100>,Int<400>>,Scale<EffectRandomF<EFFECT_BLAST>,Int<28000>,Int<8000>>>,EFFECT_BLAST>,Mix<IsLessThan<ClashImpactF<>,Int<26000>>,TransitionEffectL<TrConcat<TrInstant,AlphaL<RgbArg<CLASH_COLOR_ARG,Rgb<255,255,255>>,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-12000>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<10000>>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-10000>>>,Scale<ClashImpactF<>,Int<12000>,Int<60000>>>>,TrFadeX<Scale<ClashImpactF<>,Int<200>,Int<400>>>>,EFFECT_CLASH>,TransitionEffectL<TrWaveX<RgbArg<CLASH_COLOR_ARG,Rgb<255,255,255>>,Scale<ClashImpactF<>,Int<100>,Int<400>>,Int<100>,Scale<ClashImpactF<>,Int<100>,Int<400>>,Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-12000>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<10000>>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-10000>>>>,EFFECT_CLASH>>,LockupTrL<TransitionEffect<AlphaMixL<Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-12000>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<10000>>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-10000>>>,Scale<SwingSpeed<100>,Int<14000>,Int<18000>>>,BrownNoiseFlickerL<RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,Int<200>>,StripesX<Int<1800>,Scale<NoisySoundLevel,Int<-3500>,Int<-5000>>,Mix<Int<6425>,Black,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>>,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,Mix<Int<12850>,Black,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>>>>,AlphaL<AudioFlicker<RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,Mix<Int<10280>,Black,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>>>,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-12000>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<10000>>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-10000>>>,Int<13000>>>,TrJoin<TrDelay<8000>,TrInstant>,TrFade<3000>,EFFECT_LOCKUP_BEGIN>,TrConcat<TrJoin<TrDelay<50>,TrInstant>,Mix<IsLessThan<ClashImpactF<>,Int<26000>>,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,AlphaL<RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-12000>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<10000>>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-10000>>>,Scale<ClashImpactF<>,Int<20000>,Int<60000>>>>>,TrFade<300>>,TrConcat<TrInstant,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,TrFade<400>>,SaberBase::LOCKUP_NORMAL>,ResponsiveLightningBlockL<Strobe<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,AudioFlicker<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,Blue>,50,1>,TrConcat<TrInstant,AlphaL<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,Bump<Int<12000>,Int<18000>>>,TrFade<200>>,TrConcat<TrInstant,HumpFlickerL<AlphaL<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,Int<16000>>,30>,TrSmoothFade<600>>>,LockupTrL<AlphaL<RandomPerLEDFlickerL<RgbArg<DRAG_COLOR_ARG,Rgb<255,255,255>>>,SmoothStep<IntArg<DRAG_SIZE_ARG,28000>,Int<3000>>>,TrConcat<TrJoin<TrDelay<4000>,TrWipeIn<200>>,AlphaL<BrownNoiseFlickerL<RgbArg<DRAG_COLOR_ARG,Rgb<255,255,255>>,Int<300>>,SmoothStep<IntArg<DRAG_SIZE_ARG,28000>,Int<3000>>>,TrFade<4000>>,TrFade<300>,SaberBase::LOCKUP_DRAG>,LockupTrL<AlphaL<Remap<Scale<RampF,Int<65536>,Int<0>>,StaticFire<Mix<TwistAngle<>,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>,RotateColorsX<Int<3000>,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>>>,Mix<TwistAngle<>,RotateColorsX<Int<3000>,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>>,RotateColorsX<Int<3000>,Mix<Int<12000>,Black,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>>>>,0,3,5,3000,10>>,SmoothStep<IntArg<MELT_SIZE_ARG,28000>,Int<4000>>>,TrConcat<TrWipeIn<100>,AlphaL<RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>,SmoothStep<IntArg<MELT_SIZE_ARG,28000>,Int<4000>>>,TrJoin<TrDelay<4000>,TrFade<300>>,AlphaL<Mix<TwistAngle<>,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>,RotateColorsX<Int<3000>,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>>>,SmoothStep<IntArg<MELT_SIZE_ARG,28000>,Int<4000>>>,TrFade<4000>>,TrWipe<200>,SaberBase::LOCKUP_MELT>,InOutTrL<TrWipeX<IgnitionTime<500>>,TrWipeInX<RetractionTime<0>>,Black>>>(),

		//TOP CC

	/* copyright Fett263 KyloRen (Accent LED / PCB) OS6 Style
https://fett263.com/fett263-proffieOS6-style-library.html#KyloRen
OS6.7 v4.021
Single Style
Base Style: Kylo Ren Unstable (Film Based)

Off Behavior: Slow Pulse Off-On

Base Color: Rgb<255,0,0> (0)

--Effects Included--
Ignition Effect: Glitch On
Retraction Effect: Cycle Down
CoolDown Effect: Unstable Cool Down Reverse
Lockup Effect: Lockup Flash
LightningBlock Effect: Lightning After Effect
Blast Effect: Blast Wave Up (Sound Based)
Clash Effect: Real Clash V1 Up
*/
StylePtr<Layers<StaticFire<BrownNoiseFlicker<RgbArg<BASE_COLOR_ARG,Rgb<255,0,0>>,RandomPerLEDFlicker<Mix<Int<3213>,Black,RgbArg<BASE_COLOR_ARG,Rgb<255,0,0>>>,Mix<Int<7710>,Black,RgbArg<BASE_COLOR_ARG,Rgb<255,0,0>>>>,300>,Mix<Int<10280>,Black,RgbArg<BASE_COLOR_ARG,Rgb<255,0,0>>>,0,6,10,1000,2>,TransitionEffectL<TrConcat<TrJoin<TrDelayX<RetractionTime<5000>>,TrInstant>,Stripes<3000,3500,RgbArg<RETRACTION_COLOR_ARG,Rgb<255,255,255>>,RandomPerLEDFlicker<Mix<Int<7710>,Black,RgbArg<RETRACTION_COLOR_ARG,Rgb<255,255,255>>>,Black>,BrownNoiseFlicker<RgbArg<RETRACTION_COLOR_ARG,Rgb<255,255,255>>,Mix<Int<3855>,Black,RgbArg<RETRACTION_COLOR_ARG,Rgb<255,255,255>>>,200>,RandomPerLEDFlicker<Mix<Int<3137>,Black,RgbArg<RETRACTION_COLOR_ARG,Rgb<255,255,255>>>,Mix<Int<3855>,Black,RgbArg<RETRACTION_COLOR_ARG,Rgb<255,255,255>>>>>,TrFade<800>>,EFFECT_RETRACTION>,TransitionEffectL<TrWaveX<RgbArg<BLAST_COLOR_ARG,Rgb<255,255,255>>,Scale<WavLen<>,Int<100>,Int<400>>,Int<100>,Scale<WavLen<>,Int<100>,Int<400>>,Int<0>>,EFFECT_BLAST>,Mix<IsLessThan<ClashImpactF<>,Int<26000>>,TransitionEffectL<TrWaveX<RgbArg<CLASH_COLOR_ARG,Rgb<255,255,255>>,Scale<ClashImpactF<>,Int<100>,Int<400>>,Int<100>,Scale<ClashImpactF<>,Int<100>,Int<400>>,Int<0>>,EFFECT_CLASH>,AlphaL<White,Int<0>>>,TransitionEffectL<TrConcat<TrInstant,AlphaL<RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,SmoothStep<ClashImpactF<>,Int<-4000>>>,TrFadeX<Scale<ClashImpactF<>,Int<100>,Int<300>>>>,EFFECT_LOCKUP_BEGIN>,TransitionEffectL<TrConcat<TrInstant,AlphaL<RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,SmoothStep<ClashImpactF<>,Int<-4000>>>,TrFadeX<Scale<ClashImpactF<>,Int<100>,Int<300>>>>,EFFECT_LOCKUP_END>,LockupTrL<AlphaL<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,Int<0>>,TrInstant,TrConcat<TrInstant,Strobe<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,AudioFlicker<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,Blue>,50,1>,TrFade<1000>>,SaberBase::LOCKUP_LIGHTNING_BLOCK>,InOutTrL<TrConcat<TrJoin<TrDelayX<Mult<IgnitionTime<3000>,Int<16384>>>,TrWipeX<Mult<IgnitionTime<3000>,Int<16384>>>>,Mix<SmoothStep<NoisySoundLevel,Int<-1>>,Black,RgbArg<IGNITION_COLOR_ARG,Rgb<255,255,255>>>,TrWipeX<Mult<IgnitionTime<3000>,Int<16384>>>>,TrColorCycleX<RetractionTime<5000>>,Pulsing<Black,Rgb<236,126,126>,8000>>>>(),},





{ "OB1;common", "tracks/OB1.wav",
	/* copyright Fett263 Rotoscope (Primary Blade) OS6 Style
	https://fett263.com/fett263-proffieOS6-style-library.html#Rotoscope
	OS6.7 v4.016
	Single Style
	Base Style: Hyper Responsive Rotoscope (Prequels)

	Base Color: Rgb<0,135,255> (0)

	--Effects Included--
	Ignition Effect: Standard Ignition
	Retraction Effect: Standard Retraction
	Lockup Effect: Intensity Lockup V1, Begin Effect: Real Clash, End Effect: Full Blade Absorb
	LightningBlock Effect: Responsive Lightning Block
	Drag Effect: Intensity Sparking Drag
	Melt Effect: Intensity Melt
	Blast Effect: Blast Wave (Random)
	Clash Effect: Real Clash V1
	*/
		StylePtr<Layers<Mix<HoldPeakF<SwingSpeed<250>,Scale<SwingAcceleration<100>,Int<50>,Int<500>>,Scale<SwingAcceleration<>,Int<20000>,Int<10000>>>,RandomFlicker<StripesX<Int<24000>,Scale<HoldPeakF<SwingSpeed<200>,Scale<SwingAcceleration<100>,Int<50>,Int<300>>,Scale<SwingAcceleration<100>,Int<24000>,Int<16000>>>,Int<-1400>,Int<-100>>,RgbArg<BASE_COLOR_ARG,Rgb<0,135,255>>,RgbArg<BASE_COLOR_ARG,Rgb<0,135,255>>,Mix<Int<7710>,Black,RgbArg<BASE_COLOR_ARG,Rgb<0,135,255>>>,RgbArg<BASE_COLOR_ARG,Rgb<0,135,255>>,Mix<Int<19276>,Black,RgbArg<BASE_COLOR_ARG,Rgb<0,135,255>>>>,RgbArg<BASE_COLOR_ARG,Rgb<0,135,255>>>,RgbArg<BASE_COLOR_ARG,Rgb<0,135,255>>>,TransitionEffectL<TrWaveX<RgbArg<BLAST_COLOR_ARG,Rgb<255,255,255>>,Scale<EffectRandomF<EFFECT_BLAST>,Int<100>,Int<400>>,Int<100>,Scale<EffectPosition<EFFECT_BLAST>,Int<100>,Int<400>>,Scale<EffectPosition<EFFECT_BLAST>,Int<28000>,Int<8000>>>,EFFECT_BLAST>,Mix<IsLessThan<ClashImpactF<>,Int<26000>>,TransitionEffectL<TrConcat<TrInstant,AlphaL<RgbArg<CLASH_COLOR_ARG,Rgb<255,255,255>>,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Sum<IntArg<LOCKUP_POSITION_ARG,15632>,Int<-12000>>,Sum<IntArg<LOCKUP_POSITION_ARG,15632>,Int<10000>>>,Sum<IntArg<LOCKUP_POSITION_ARG,15632>,Int<-10000>>>,Scale<ClashImpactF<>,Int<12000>,Int<60000>>>>,TrFadeX<Scale<ClashImpactF<>,Int<200>,Int<400>>>>,EFFECT_CLASH>,TransitionEffectL<TrWaveX<RgbArg<CLASH_COLOR_ARG,Rgb<255,255,255>>,Scale<ClashImpactF<>,Int<100>,Int<400>>,Int<100>,Scale<ClashImpactF<>,Int<100>,Int<400>>,Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Sum<IntArg<LOCKUP_POSITION_ARG,15632>,Int<-12000>>,Sum<IntArg<LOCKUP_POSITION_ARG,15632>,Int<10000>>>,Sum<IntArg<LOCKUP_POSITION_ARG,15632>,Int<-10000>>>>,EFFECT_CLASH>>,LockupTrL<TransitionEffect<AlphaMixL<Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Sum<IntArg<LOCKUP_POSITION_ARG,15632>,Int<-12000>>,Sum<IntArg<LOCKUP_POSITION_ARG,15632>,Int<10000>>>,Sum<IntArg<LOCKUP_POSITION_ARG,15632>,Int<-10000>>>,Scale<SwingSpeed<100>,Int<14000>,Int<18000>>>,BrownNoiseFlickerL<RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,Int<200>>,StripesX<Int<1800>,Scale<NoisySoundLevel,Int<-3500>,Int<-5000>>,Mix<Int<6425>,Black,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>>,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,Mix<Int<12850>,Black,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>>>>,AlphaL<AudioFlicker<RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,Mix<Int<10280>,Black,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>>>,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Sum<IntArg<LOCKUP_POSITION_ARG,15632>,Int<-12000>>,Sum<IntArg<LOCKUP_POSITION_ARG,15632>,Int<10000>>>,Sum<IntArg<LOCKUP_POSITION_ARG,15632>,Int<-10000>>>,Int<13000>>>,TrJoin<TrDelay<8000>,TrInstant>,TrFade<3000>,EFFECT_LOCKUP_BEGIN>,TrConcat<TrJoin<TrDelay<50>,TrInstant>,Mix<IsLessThan<ClashImpactF<>,Int<26000>>,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,AlphaL<RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Sum<IntArg<LOCKUP_POSITION_ARG,15632>,Int<-12000>>,Sum<IntArg<LOCKUP_POSITION_ARG,15632>,Int<10000>>>,Sum<IntArg<LOCKUP_POSITION_ARG,15632>,Int<-10000>>>,Scale<ClashImpactF<>,Int<20000>,Int<60000>>>>>,TrFade<300>>,TrConcat<TrInstant,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,TrFade<400>>,SaberBase::LOCKUP_NORMAL>,ResponsiveLightningBlockL<Strobe<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,AudioFlicker<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,Blue>,50,1>,TrConcat<TrInstant,AlphaL<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,Bump<Int<12000>,Int<18000>>>,TrFade<200>>,TrConcat<TrInstant,HumpFlickerL<AlphaL<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,Int<16000>>,30>,TrSmoothFade<600>>>,LockupTrL<AlphaL<RandomPerLEDFlickerL<RgbArg<DRAG_COLOR_ARG,Rgb<255,255,255>>>,SmoothStep<IntArg<DRAG_SIZE_ARG,28000>,Int<3000>>>,TrConcat<TrJoin<TrDelay<4000>,TrWipeIn<200>>,AlphaL<BrownNoiseFlickerL<RgbArg<DRAG_COLOR_ARG,Rgb<255,255,255>>,Int<300>>,SmoothStep<IntArg<DRAG_SIZE_ARG,28000>,Int<3000>>>,TrFade<4000>>,TrFade<300>,SaberBase::LOCKUP_DRAG>,LockupTrL<AlphaL<Remap<Scale<RampF,Int<65536>,Int<0>>,StaticFire<Mix<TwistAngle<>,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>,RotateColorsX<Int<3000>,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>>>,Mix<TwistAngle<>,RotateColorsX<Int<3000>,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>>,RotateColorsX<Int<3000>,Mix<Int<12000>,Black,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>>>>,0,3,5,3000,10>>,SmoothStep<IntArg<MELT_SIZE_ARG,28000>,Int<4000>>>,TrConcat<TrWipeIn<100>,AlphaL<RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>,SmoothStep<IntArg<MELT_SIZE_ARG,28000>,Int<4000>>>,TrJoin<TrDelay<4000>,TrFade<300>>,AlphaL<Mix<TwistAngle<>,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>,RotateColorsX<Int<3000>,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>>>,SmoothStep<IntArg<MELT_SIZE_ARG,28000>,Int<4000>>>,TrFade<4000>>,TrWipe<200>,SaberBase::LOCKUP_MELT>,InOutTrL<TrWipeX<IgnitionTime<300>>,TrWipeInX<RetractionTime<0>>,Black>>>(),

		//TOP CC

	/* copyright Fett263 KyloRen (Accent LED / PCB) OS6 Style
https://fett263.com/fett263-proffieOS6-style-library.html#KyloRen
OS6.7 v4.021
Single Style
Base Style: Kylo Ren Unstable (Film Based)

Off Behavior: Slow Pulse Off-On

Base Color: Rgb<0,0,255> (0)

--Effects Included--
Ignition Effect: Glitch On
Retraction Effect: Cycle Down
CoolDown Effect: Unstable Cool Down Reverse
Lockup Effect: Lockup Flash
LightningBlock Effect: Lightning After Effect
Blast Effect: Blast Wave Up (Sound Based)
Clash Effect: Real Clash V1 Up
*/
StylePtr<Layers<StaticFire<BrownNoiseFlicker<RgbArg<BASE_COLOR_ARG,Rgb<0,0,255>>,RandomPerLEDFlicker<Mix<Int<3213>,Black,RgbArg<BASE_COLOR_ARG,Rgb<0,0,255>>>,Mix<Int<7710>,Black,RgbArg<BASE_COLOR_ARG,Rgb<0,0,255>>>>,300>,Mix<Int<10280>,Black,RgbArg<BASE_COLOR_ARG,Rgb<0,0,255>>>,0,6,10,1000,2>,TransitionEffectL<TrConcat<TrJoin<TrDelayX<RetractionTime<5000>>,TrInstant>,Stripes<3000,3500,RgbArg<RETRACTION_COLOR_ARG,Rgb<255,255,255>>,RandomPerLEDFlicker<Mix<Int<7710>,Black,RgbArg<RETRACTION_COLOR_ARG,Rgb<255,255,255>>>,Black>,BrownNoiseFlicker<RgbArg<RETRACTION_COLOR_ARG,Rgb<255,255,255>>,Mix<Int<3855>,Black,RgbArg<RETRACTION_COLOR_ARG,Rgb<255,255,255>>>,200>,RandomPerLEDFlicker<Mix<Int<3137>,Black,RgbArg<RETRACTION_COLOR_ARG,Rgb<255,255,255>>>,Mix<Int<3855>,Black,RgbArg<RETRACTION_COLOR_ARG,Rgb<255,255,255>>>>>,TrFade<800>>,EFFECT_RETRACTION>,TransitionEffectL<TrWaveX<RgbArg<BLAST_COLOR_ARG,Rgb<255,255,255>>,Scale<WavLen<>,Int<100>,Int<400>>,Int<100>,Scale<WavLen<>,Int<100>,Int<400>>,Int<0>>,EFFECT_BLAST>,Mix<IsLessThan<ClashImpactF<>,Int<26000>>,TransitionEffectL<TrWaveX<RgbArg<CLASH_COLOR_ARG,Rgb<255,255,255>>,Scale<ClashImpactF<>,Int<100>,Int<400>>,Int<100>,Scale<ClashImpactF<>,Int<100>,Int<400>>,Int<0>>,EFFECT_CLASH>,AlphaL<White,Int<0>>>,TransitionEffectL<TrConcat<TrInstant,AlphaL<RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,SmoothStep<ClashImpactF<>,Int<-4000>>>,TrFadeX<Scale<ClashImpactF<>,Int<100>,Int<300>>>>,EFFECT_LOCKUP_BEGIN>,TransitionEffectL<TrConcat<TrInstant,AlphaL<RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,SmoothStep<ClashImpactF<>,Int<-4000>>>,TrFadeX<Scale<ClashImpactF<>,Int<100>,Int<300>>>>,EFFECT_LOCKUP_END>,LockupTrL<AlphaL<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,Int<0>>,TrInstant,TrConcat<TrInstant,Strobe<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,AudioFlicker<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,Blue>,50,1>,TrFade<1000>>,SaberBase::LOCKUP_LIGHTNING_BLOCK>,InOutTrL<TrConcat<TrJoin<TrDelayX<Mult<IgnitionTime<3000>,Int<16384>>>,TrWipeX<Mult<IgnitionTime<3000>,Int<16384>>>>,Mix<SmoothStep<NoisySoundLevel,Int<-1>>,Black,RgbArg<IGNITION_COLOR_ARG,Rgb<255,255,255>>>,TrWipeX<Mult<IgnitionTime<3000>,Int<16384>>>>,TrColorCycleX<RetractionTime<5000>>,Pulsing<Black,RgbArg<OFF_COLOR_ARG,Rgb<2,72,255>>,8000>>>>(),},





{ "OB4;common", "tracks/OB4.wav",
	/* copyright Fett263 Rotoscope (Primary Blade) OS6 Style
	https://fett263.com/fett263-proffieOS6-style-library.html#Rotoscope
	OS6.7 v4.016
	Single Style
	Base Style: Hyper Responsive Rotoscope (Prequels)

	Base Color: Rgb<0,135,255> (0)

	--Effects Included--
	Ignition Effect: Standard Ignition
	Retraction Effect: Standard Retraction
	Lockup Effect: Intensity Lockup V1, Begin Effect: Real Clash, End Effect: Full Blade Absorb
	LightningBlock Effect: Responsive Lightning Block
	Drag Effect: Intensity Sparking Drag
	Melt Effect: Intensity Melt
	Blast Effect: Blast Wave (Random)
	Clash Effect: Real Clash V1
	*/
		StylePtr<Layers<Mix<HoldPeakF<SwingSpeed<250>,Scale<SwingAcceleration<100>,Int<50>,Int<500>>,Scale<SwingAcceleration<>,Int<20000>,Int<10000>>>,RandomFlicker<StripesX<Int<24000>,Scale<HoldPeakF<SwingSpeed<200>,Scale<SwingAcceleration<100>,Int<50>,Int<300>>,Scale<SwingAcceleration<100>,Int<24000>,Int<16000>>>,Int<-1400>,Int<-100>>,RgbArg<BASE_COLOR_ARG,Rgb<0,135,255>>,RgbArg<BASE_COLOR_ARG,Rgb<0,135,255>>,Mix<Int<7710>,Black,RgbArg<BASE_COLOR_ARG,Rgb<0,135,255>>>,RgbArg<BASE_COLOR_ARG,Rgb<0,135,255>>,Mix<Int<19276>,Black,RgbArg<BASE_COLOR_ARG,Rgb<0,135,255>>>>,RgbArg<BASE_COLOR_ARG,Rgb<0,135,255>>>,RgbArg<BASE_COLOR_ARG,Rgb<0,135,255>>>,TransitionEffectL<TrWaveX<RgbArg<BLAST_COLOR_ARG,Rgb<255,255,255>>,Scale<EffectRandomF<EFFECT_BLAST>,Int<100>,Int<400>>,Int<100>,Scale<EffectPosition<EFFECT_BLAST>,Int<100>,Int<400>>,Scale<EffectPosition<EFFECT_BLAST>,Int<28000>,Int<8000>>>,EFFECT_BLAST>,Mix<IsLessThan<ClashImpactF<>,Int<26000>>,TransitionEffectL<TrConcat<TrInstant,AlphaL<RgbArg<CLASH_COLOR_ARG,Rgb<255,255,255>>,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Sum<IntArg<LOCKUP_POSITION_ARG,15632>,Int<-12000>>,Sum<IntArg<LOCKUP_POSITION_ARG,15632>,Int<10000>>>,Sum<IntArg<LOCKUP_POSITION_ARG,15632>,Int<-10000>>>,Scale<ClashImpactF<>,Int<12000>,Int<60000>>>>,TrFadeX<Scale<ClashImpactF<>,Int<200>,Int<400>>>>,EFFECT_CLASH>,TransitionEffectL<TrWaveX<RgbArg<CLASH_COLOR_ARG,Rgb<255,255,255>>,Scale<ClashImpactF<>,Int<100>,Int<400>>,Int<100>,Scale<ClashImpactF<>,Int<100>,Int<400>>,Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Sum<IntArg<LOCKUP_POSITION_ARG,15632>,Int<-12000>>,Sum<IntArg<LOCKUP_POSITION_ARG,15632>,Int<10000>>>,Sum<IntArg<LOCKUP_POSITION_ARG,15632>,Int<-10000>>>>,EFFECT_CLASH>>,LockupTrL<TransitionEffect<AlphaMixL<Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Sum<IntArg<LOCKUP_POSITION_ARG,15632>,Int<-12000>>,Sum<IntArg<LOCKUP_POSITION_ARG,15632>,Int<10000>>>,Sum<IntArg<LOCKUP_POSITION_ARG,15632>,Int<-10000>>>,Scale<SwingSpeed<100>,Int<14000>,Int<18000>>>,BrownNoiseFlickerL<RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,Int<200>>,StripesX<Int<1800>,Scale<NoisySoundLevel,Int<-3500>,Int<-5000>>,Mix<Int<6425>,Black,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>>,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,Mix<Int<12850>,Black,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>>>>,AlphaL<AudioFlicker<RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,Mix<Int<10280>,Black,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>>>,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Sum<IntArg<LOCKUP_POSITION_ARG,15632>,Int<-12000>>,Sum<IntArg<LOCKUP_POSITION_ARG,15632>,Int<10000>>>,Sum<IntArg<LOCKUP_POSITION_ARG,15632>,Int<-10000>>>,Int<13000>>>,TrJoin<TrDelay<8000>,TrInstant>,TrFade<3000>,EFFECT_LOCKUP_BEGIN>,TrConcat<TrJoin<TrDelay<50>,TrInstant>,Mix<IsLessThan<ClashImpactF<>,Int<26000>>,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,AlphaL<RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Sum<IntArg<LOCKUP_POSITION_ARG,15632>,Int<-12000>>,Sum<IntArg<LOCKUP_POSITION_ARG,15632>,Int<10000>>>,Sum<IntArg<LOCKUP_POSITION_ARG,15632>,Int<-10000>>>,Scale<ClashImpactF<>,Int<20000>,Int<60000>>>>>,TrFade<300>>,TrConcat<TrInstant,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,TrFade<400>>,SaberBase::LOCKUP_NORMAL>,ResponsiveLightningBlockL<Strobe<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,AudioFlicker<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,Blue>,50,1>,TrConcat<TrInstant,AlphaL<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,Bump<Int<12000>,Int<18000>>>,TrFade<200>>,TrConcat<TrInstant,HumpFlickerL<AlphaL<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,Int<16000>>,30>,TrSmoothFade<600>>>,LockupTrL<AlphaL<RandomPerLEDFlickerL<RgbArg<DRAG_COLOR_ARG,Rgb<255,255,255>>>,SmoothStep<IntArg<DRAG_SIZE_ARG,28000>,Int<3000>>>,TrConcat<TrJoin<TrDelay<4000>,TrWipeIn<200>>,AlphaL<BrownNoiseFlickerL<RgbArg<DRAG_COLOR_ARG,Rgb<255,255,255>>,Int<300>>,SmoothStep<IntArg<DRAG_SIZE_ARG,28000>,Int<3000>>>,TrFade<4000>>,TrFade<300>,SaberBase::LOCKUP_DRAG>,LockupTrL<AlphaL<Remap<Scale<RampF,Int<65536>,Int<0>>,StaticFire<Mix<TwistAngle<>,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>,RotateColorsX<Int<3000>,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>>>,Mix<TwistAngle<>,RotateColorsX<Int<3000>,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>>,RotateColorsX<Int<3000>,Mix<Int<12000>,Black,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>>>>,0,3,5,3000,10>>,SmoothStep<IntArg<MELT_SIZE_ARG,28000>,Int<4000>>>,TrConcat<TrWipeIn<100>,AlphaL<RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>,SmoothStep<IntArg<MELT_SIZE_ARG,28000>,Int<4000>>>,TrJoin<TrDelay<4000>,TrFade<300>>,AlphaL<Mix<TwistAngle<>,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>,RotateColorsX<Int<3000>,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>>>,SmoothStep<IntArg<MELT_SIZE_ARG,28000>,Int<4000>>>,TrFade<4000>>,TrWipe<200>,SaberBase::LOCKUP_MELT>,InOutTrL<TrWipeX<IgnitionTime<300>>,TrWipeInX<RetractionTime<0>>,Black>>>(),

		//TOP CC

	/* copyright Fett263 KyloRen (Accent LED / PCB) OS6 Style
https://fett263.com/fett263-proffieOS6-style-library.html#KyloRen
OS6.7 v4.021
Single Style
Base Style: Kylo Ren Unstable (Film Based)

Off Behavior: Slow Pulse Off-On

Base Color: Rgb<0,0,255> (0)

--Effects Included--
Ignition Effect: Glitch On
Retraction Effect: Cycle Down
CoolDown Effect: Unstable Cool Down Reverse
Lockup Effect: Lockup Flash
LightningBlock Effect: Lightning After Effect
Blast Effect: Blast Wave Up (Sound Based)
Clash Effect: Real Clash V1 Up
*/
StylePtr<Layers<StaticFire<BrownNoiseFlicker<RgbArg<BASE_COLOR_ARG,Rgb<0,0,255>>,RandomPerLEDFlicker<Mix<Int<3213>,Black,RgbArg<BASE_COLOR_ARG,Rgb<0,0,255>>>,Mix<Int<7710>,Black,RgbArg<BASE_COLOR_ARG,Rgb<0,0,255>>>>,300>,Mix<Int<10280>,Black,RgbArg<BASE_COLOR_ARG,Rgb<0,0,255>>>,0,6,10,1000,2>,TransitionEffectL<TrConcat<TrJoin<TrDelayX<RetractionTime<5000>>,TrInstant>,Stripes<3000,3500,RgbArg<RETRACTION_COLOR_ARG,Rgb<255,255,255>>,RandomPerLEDFlicker<Mix<Int<7710>,Black,RgbArg<RETRACTION_COLOR_ARG,Rgb<255,255,255>>>,Black>,BrownNoiseFlicker<RgbArg<RETRACTION_COLOR_ARG,Rgb<255,255,255>>,Mix<Int<3855>,Black,RgbArg<RETRACTION_COLOR_ARG,Rgb<255,255,255>>>,200>,RandomPerLEDFlicker<Mix<Int<3137>,Black,RgbArg<RETRACTION_COLOR_ARG,Rgb<255,255,255>>>,Mix<Int<3855>,Black,RgbArg<RETRACTION_COLOR_ARG,Rgb<255,255,255>>>>>,TrFade<800>>,EFFECT_RETRACTION>,TransitionEffectL<TrWaveX<RgbArg<BLAST_COLOR_ARG,Rgb<255,255,255>>,Scale<WavLen<>,Int<100>,Int<400>>,Int<100>,Scale<WavLen<>,Int<100>,Int<400>>,Int<0>>,EFFECT_BLAST>,Mix<IsLessThan<ClashImpactF<>,Int<26000>>,TransitionEffectL<TrWaveX<RgbArg<CLASH_COLOR_ARG,Rgb<255,255,255>>,Scale<ClashImpactF<>,Int<100>,Int<400>>,Int<100>,Scale<ClashImpactF<>,Int<100>,Int<400>>,Int<0>>,EFFECT_CLASH>,AlphaL<White,Int<0>>>,TransitionEffectL<TrConcat<TrInstant,AlphaL<RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,SmoothStep<ClashImpactF<>,Int<-4000>>>,TrFadeX<Scale<ClashImpactF<>,Int<100>,Int<300>>>>,EFFECT_LOCKUP_BEGIN>,TransitionEffectL<TrConcat<TrInstant,AlphaL<RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,SmoothStep<ClashImpactF<>,Int<-4000>>>,TrFadeX<Scale<ClashImpactF<>,Int<100>,Int<300>>>>,EFFECT_LOCKUP_END>,LockupTrL<AlphaL<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,Int<0>>,TrInstant,TrConcat<TrInstant,Strobe<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,AudioFlicker<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,Blue>,50,1>,TrFade<1000>>,SaberBase::LOCKUP_LIGHTNING_BLOCK>,InOutTrL<TrConcat<TrJoin<TrDelayX<Mult<IgnitionTime<3000>,Int<16384>>>,TrWipeX<Mult<IgnitionTime<3000>,Int<16384>>>>,Mix<SmoothStep<NoisySoundLevel,Int<-1>>,Black,RgbArg<IGNITION_COLOR_ARG,Rgb<255,255,255>>>,TrWipeX<Mult<IgnitionTime<3000>,Int<16384>>>>,TrColorCycleX<RetractionTime<5000>>,Pulsing<Black,RgbArg<OFF_COLOR_ARG,Rgb<2,72,255>>,8000>>>>(),},






{ "Qui;common", "tracks/Qui.wav",
/* copyright Fett263 Rotoscope (Primary Blade) OS6 Style
	https://fett263.com/fett263-proffieOS6-style-library.html#Rotoscope
	OS6.7 v4.01
	Single Style
	Base Style: Rotoscope - Single Color (Prequels)

	Base Color: Rgb<0,255,0> (0)

	--Effects Included--
	Ignition Effect: Standard Ignition
	Retraction Effect: Standard Retraction
	Lockup Effect: Intensity Lockup V1, Begin Effect: Real Clash, End Effect: Full Blade Absorb
	LightningBlock Effect: Responsive Lightning Block
	Drag Effect: Intensity Sparking Drag
	Melt Effect: Intensity Melt
	Blast Effect: Blast Ripple
	Clash Effect: Real Clash V1
	*/
	StylePtr<Layers<RandomFlicker<Stripes<24000,-1400,RgbArg<BASE_COLOR_ARG,Rgb<0,255,0>>,RgbArg<BASE_COLOR_ARG,Rgb<0,255,0>>,Mix<Int<11565>,Black,RgbArg<BASE_COLOR_ARG,Rgb<0,255,0>>>,RgbArg<BASE_COLOR_ARG,Rgb<0,255,0>>,Mix<Int<16448>,Black,RgbArg<BASE_COLOR_ARG,Rgb<0,255,0>>>>,RgbArg<BASE_COLOR_ARG,Rgb<0,255,0>>>,MultiTransitionEffectL<TrConcat<TrInstant,AlphaL<RgbArg<BLAST_COLOR_ARG,Rgb<255,255,255>>,Bump<Scale<EffectRandomF<EFFECT_BLAST>,Int<3000>,Int<29000>>,Int<6000>>>,TrCenterWipeX<Int<100>,Scale<EffectRandomF<EFFECT_BLAST>,Int<3000>,Int<29000>>>,Remap<CenterDistF<Scale<EffectRandomF<EFFECT_BLAST>,Int<3000>,Int<29000>>>,Stripes<1600,-2000,RgbArg<BLAST_COLOR_ARG,Rgb<255,255,255>>,Mix<Int<2096>,Black,RgbArg<BLAST_COLOR_ARG,Rgb<255,255,255>>>>>,TrCenterWipeX<Int<100>,Scale<EffectRandomF<EFFECT_BLAST>,Int<3000>,Int<29000>>>>,EFFECT_BLAST>,Mix<IsLessThan<ClashImpactF<>,Int<26000>>,TransitionEffectL<TrConcat<TrInstant,AlphaL<RgbArg<CLASH_COLOR_ARG,Rgb<100,100,150>>,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-12000>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<10000>>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-10000>>>,Scale<ClashImpactF<>,Int<12000>,Int<60000>>>>,TrFadeX<Scale<ClashImpactF<>,Int<200>,Int<400>>>>,EFFECT_CLASH>,TransitionEffectL<TrWaveX<RgbArg<CLASH_COLOR_ARG,Rgb<100,100,150>>,Scale<ClashImpactF<>,Int<100>,Int<400>>,Int<100>,Scale<ClashImpactF<>,Int<100>,Int<400>>,Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-12000>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<10000>>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-10000>>>>,EFFECT_CLASH>>,LockupTrL<TransitionEffect<AlphaMixL<Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-12000>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<10000>>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-10000>>>,Scale<SwingSpeed<100>,Int<14000>,Int<18000>>>,BrownNoiseFlickerL<RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,Int<200>>,StripesX<Int<1800>,Scale<NoisySoundLevel,Int<-3500>,Int<-5000>>,Mix<Int<6425>,Black,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>>,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,Mix<Int<12850>,Black,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>>>>,AlphaL<AudioFlicker<RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,Mix<Int<10280>,Black,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>>>,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-12000>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<10000>>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-10000>>>,Int<13000>>>,TrJoin<TrDelay<8000>,TrInstant>,TrFade<3000>,EFFECT_LOCKUP_BEGIN>,TrConcat<TrJoin<TrDelay<50>,TrInstant>,Mix<IsLessThan<ClashImpactF<>,Int<26000>>,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,AlphaL<RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-12000>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<10000>>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-10000>>>,Scale<ClashImpactF<>,Int<20000>,Int<60000>>>>>,TrFade<300>>,TrConcat<TrInstant,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,TrFade<400>>,SaberBase::LOCKUP_NORMAL>,ResponsiveLightningBlockL<Strobe<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,AudioFlicker<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,Blue>,50,1>,TrConcat<TrInstant,AlphaL<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,Bump<Int<12000>,Int<18000>>>,TrFade<200>>,TrConcat<TrInstant,HumpFlickerL<AlphaL<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,Int<16000>>,30>,TrSmoothFade<600>>>,LockupTrL<AlphaL<RandomPerLEDFlickerL<RgbArg<DRAG_COLOR_ARG,Rgb<255,255,255>>>,SmoothStep<IntArg<DRAG_SIZE_ARG,28000>,Int<3000>>>,TrConcat<TrJoin<TrDelay<4000>,TrWipeIn<200>>,AlphaL<BrownNoiseFlickerL<RgbArg<DRAG_COLOR_ARG,Rgb<255,255,255>>,Int<300>>,SmoothStep<IntArg<DRAG_SIZE_ARG,28000>,Int<3000>>>,TrFade<4000>>,TrFade<300>,SaberBase::LOCKUP_DRAG>,LockupTrL<AlphaL<Remap<Scale<RampF,Int<65536>,Int<0>>,StaticFire<Mix<TwistAngle<>,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>,RotateColorsX<Int<3000>,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>>>,Mix<TwistAngle<>,RotateColorsX<Int<3000>,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>>,RotateColorsX<Int<3000>,Mix<Int<12000>,Black,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>>>>,0,3,5,3000,10>>,SmoothStep<IntArg<MELT_SIZE_ARG,28000>,Int<4000>>>,TrConcat<TrWipeIn<100>,AlphaL<RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>,SmoothStep<IntArg<MELT_SIZE_ARG,28000>,Int<4000>>>,TrJoin<TrDelay<4000>,TrFade<300>>,AlphaL<Mix<TwistAngle<>,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>,RotateColorsX<Int<3000>,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>>>,SmoothStep<IntArg<MELT_SIZE_ARG,28000>,Int<4000>>>,TrFade<4000>>,TrWipe<200>,SaberBase::LOCKUP_MELT>,InOutTrL<TrWipeX<IgnitionTime<300>>,TrWipeInX<RetractionTime<0>>,Black>>>(),

	//TOP CC

	/* copyright Fett263 KyloRen (Accent LED / PCB) OS6 Style
https://fett263.com/fett263-proffieOS6-style-library.html#KyloRen
OS6.7 v4.021
Single Style
Base Style: Kylo Ren Unstable (Film Based)

Off Behavior: Slow Pulse Off-On

Base Color: Rgb<0,255,0> (0)

--Effects Included--
Ignition Effect: Glitch On
Retraction Effect: Cycle Down
CoolDown Effect: Unstable Cool Down Reverse
Lockup Effect: Lockup Flash
LightningBlock Effect: Lightning After Effect
Blast Effect: Blast Wave Up (Sound Based)
Clash Effect: Real Clash V1 Up
*/
StylePtr<Layers<StaticFire<BrownNoiseFlicker<RgbArg<BASE_COLOR_ARG,Rgb<0,255,0>>,RandomPerLEDFlicker<Mix<Int<3213>,Black,RgbArg<BASE_COLOR_ARG,Rgb<0,255,0>>>,Mix<Int<7710>,Black,RgbArg<BASE_COLOR_ARG,Rgb<0,255,0>>>>,300>,Mix<Int<10280>,Black,RgbArg<BASE_COLOR_ARG,Rgb<0,255,0>>>,0,6,10,1000,2>,TransitionEffectL<TrConcat<TrJoin<TrDelayX<RetractionTime<5000>>,TrInstant>,Stripes<3000,3500,RgbArg<RETRACTION_COLOR_ARG,Rgb<255,255,255>>,RandomPerLEDFlicker<Mix<Int<7710>,Black,RgbArg<RETRACTION_COLOR_ARG,Rgb<255,255,255>>>,Black>,BrownNoiseFlicker<RgbArg<RETRACTION_COLOR_ARG,Rgb<255,255,255>>,Mix<Int<3855>,Black,RgbArg<RETRACTION_COLOR_ARG,Rgb<255,255,255>>>,200>,RandomPerLEDFlicker<Mix<Int<3137>,Black,RgbArg<RETRACTION_COLOR_ARG,Rgb<255,255,255>>>,Mix<Int<3855>,Black,RgbArg<RETRACTION_COLOR_ARG,Rgb<255,255,255>>>>>,TrFade<800>>,EFFECT_RETRACTION>,TransitionEffectL<TrWaveX<RgbArg<BLAST_COLOR_ARG,Rgb<255,255,255>>,Scale<WavLen<>,Int<100>,Int<400>>,Int<100>,Scale<WavLen<>,Int<100>,Int<400>>,Int<0>>,EFFECT_BLAST>,Mix<IsLessThan<ClashImpactF<>,Int<26000>>,TransitionEffectL<TrWaveX<RgbArg<CLASH_COLOR_ARG,Rgb<255,255,255>>,Scale<ClashImpactF<>,Int<100>,Int<400>>,Int<100>,Scale<ClashImpactF<>,Int<100>,Int<400>>,Int<0>>,EFFECT_CLASH>,AlphaL<White,Int<0>>>,TransitionEffectL<TrConcat<TrInstant,AlphaL<RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,SmoothStep<ClashImpactF<>,Int<-4000>>>,TrFadeX<Scale<ClashImpactF<>,Int<100>,Int<300>>>>,EFFECT_LOCKUP_BEGIN>,TransitionEffectL<TrConcat<TrInstant,AlphaL<RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,SmoothStep<ClashImpactF<>,Int<-4000>>>,TrFadeX<Scale<ClashImpactF<>,Int<100>,Int<300>>>>,EFFECT_LOCKUP_END>,LockupTrL<AlphaL<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,Int<0>>,TrInstant,TrConcat<TrInstant,Strobe<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,AudioFlicker<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,Blue>,50,1>,TrFade<1000>>,SaberBase::LOCKUP_LIGHTNING_BLOCK>,InOutTrL<TrConcat<TrJoin<TrDelayX<Mult<IgnitionTime<3000>,Int<16384>>>,TrWipeX<Mult<IgnitionTime<3000>,Int<16384>>>>,Mix<SmoothStep<NoisySoundLevel,Int<-1>>,Black,RgbArg<IGNITION_COLOR_ARG,Rgb<255,255,255>>>,TrWipeX<Mult<IgnitionTime<3000>,Int<16384>>>>,TrColorCycleX<RetractionTime<5000>>,Pulsing<Black,Rgb<135,232,146>,8000>>>>(),},






{ "Royalty;common", "tracks/Royalty.wav",
	/* copyright Fett263 Rotoscope (Primary Blade) OS6 Style
	https://fett263.com/fett263-proffieOS6-style-library.html#Rotoscope
	OS6.7 v4.016
	Single Style
	Base Style: Hyper Responsive Rotoscope (Prequels)

	Base Color: Rgb<0,135,255> (0)

	--Effects Included--
	Ignition Effect: Standard Ignition
	Retraction Effect: Standard Retraction
	Lockup Effect: Intensity Lockup V1, Begin Effect: Real Clash, End Effect: Full Blade Absorb
	LightningBlock Effect: Responsive Lightning Block
	Drag Effect: Intensity Sparking Drag
	Melt Effect: Intensity Melt
	Blast Effect: Blast Wave (Random)
	Clash Effect: Real Clash V1
	*/
		StylePtr<Layers<Mix<HoldPeakF<SwingSpeed<250>,Scale<SwingAcceleration<100>,Int<50>,Int<500>>,Scale<SwingAcceleration<>,Int<20000>,Int<10000>>>,RandomFlicker<StripesX<Int<24000>,Scale<HoldPeakF<SwingSpeed<200>,Scale<SwingAcceleration<100>,Int<50>,Int<300>>,Scale<SwingAcceleration<100>,Int<24000>,Int<16000>>>,Int<-1400>,Int<-100>>,RgbArg<BASE_COLOR_ARG,Rgb<0,135,255>>,RgbArg<BASE_COLOR_ARG,Rgb<0,135,255>>,Mix<Int<7710>,Black,RgbArg<BASE_COLOR_ARG,Rgb<0,135,255>>>,RgbArg<BASE_COLOR_ARG,Rgb<0,135,255>>,Mix<Int<19276>,Black,RgbArg<BASE_COLOR_ARG,Rgb<0,135,255>>>>,RgbArg<BASE_COLOR_ARG,Rgb<0,135,255>>>,RgbArg<BASE_COLOR_ARG,Rgb<0,135,255>>>,TransitionEffectL<TrWaveX<RgbArg<BLAST_COLOR_ARG,Rgb<255,255,255>>,Scale<EffectRandomF<EFFECT_BLAST>,Int<100>,Int<400>>,Int<100>,Scale<EffectPosition<EFFECT_BLAST>,Int<100>,Int<400>>,Scale<EffectPosition<EFFECT_BLAST>,Int<28000>,Int<8000>>>,EFFECT_BLAST>,Mix<IsLessThan<ClashImpactF<>,Int<26000>>,TransitionEffectL<TrConcat<TrInstant,AlphaL<RgbArg<CLASH_COLOR_ARG,Rgb<255,255,255>>,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Sum<IntArg<LOCKUP_POSITION_ARG,15632>,Int<-12000>>,Sum<IntArg<LOCKUP_POSITION_ARG,15632>,Int<10000>>>,Sum<IntArg<LOCKUP_POSITION_ARG,15632>,Int<-10000>>>,Scale<ClashImpactF<>,Int<12000>,Int<60000>>>>,TrFadeX<Scale<ClashImpactF<>,Int<200>,Int<400>>>>,EFFECT_CLASH>,TransitionEffectL<TrWaveX<RgbArg<CLASH_COLOR_ARG,Rgb<255,255,255>>,Scale<ClashImpactF<>,Int<100>,Int<400>>,Int<100>,Scale<ClashImpactF<>,Int<100>,Int<400>>,Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Sum<IntArg<LOCKUP_POSITION_ARG,15632>,Int<-12000>>,Sum<IntArg<LOCKUP_POSITION_ARG,15632>,Int<10000>>>,Sum<IntArg<LOCKUP_POSITION_ARG,15632>,Int<-10000>>>>,EFFECT_CLASH>>,LockupTrL<TransitionEffect<AlphaMixL<Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Sum<IntArg<LOCKUP_POSITION_ARG,15632>,Int<-12000>>,Sum<IntArg<LOCKUP_POSITION_ARG,15632>,Int<10000>>>,Sum<IntArg<LOCKUP_POSITION_ARG,15632>,Int<-10000>>>,Scale<SwingSpeed<100>,Int<14000>,Int<18000>>>,BrownNoiseFlickerL<RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,Int<200>>,StripesX<Int<1800>,Scale<NoisySoundLevel,Int<-3500>,Int<-5000>>,Mix<Int<6425>,Black,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>>,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,Mix<Int<12850>,Black,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>>>>,AlphaL<AudioFlicker<RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,Mix<Int<10280>,Black,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>>>,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Sum<IntArg<LOCKUP_POSITION_ARG,15632>,Int<-12000>>,Sum<IntArg<LOCKUP_POSITION_ARG,15632>,Int<10000>>>,Sum<IntArg<LOCKUP_POSITION_ARG,15632>,Int<-10000>>>,Int<13000>>>,TrJoin<TrDelay<8000>,TrInstant>,TrFade<3000>,EFFECT_LOCKUP_BEGIN>,TrConcat<TrJoin<TrDelay<50>,TrInstant>,Mix<IsLessThan<ClashImpactF<>,Int<26000>>,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,AlphaL<RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Sum<IntArg<LOCKUP_POSITION_ARG,15632>,Int<-12000>>,Sum<IntArg<LOCKUP_POSITION_ARG,15632>,Int<10000>>>,Sum<IntArg<LOCKUP_POSITION_ARG,15632>,Int<-10000>>>,Scale<ClashImpactF<>,Int<20000>,Int<60000>>>>>,TrFade<300>>,TrConcat<TrInstant,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,TrFade<400>>,SaberBase::LOCKUP_NORMAL>,ResponsiveLightningBlockL<Strobe<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,AudioFlicker<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,Blue>,50,1>,TrConcat<TrInstant,AlphaL<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,Bump<Int<12000>,Int<18000>>>,TrFade<200>>,TrConcat<TrInstant,HumpFlickerL<AlphaL<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,Int<16000>>,30>,TrSmoothFade<600>>>,LockupTrL<AlphaL<RandomPerLEDFlickerL<RgbArg<DRAG_COLOR_ARG,Rgb<255,255,255>>>,SmoothStep<IntArg<DRAG_SIZE_ARG,28000>,Int<3000>>>,TrConcat<TrJoin<TrDelay<4000>,TrWipeIn<200>>,AlphaL<BrownNoiseFlickerL<RgbArg<DRAG_COLOR_ARG,Rgb<255,255,255>>,Int<300>>,SmoothStep<IntArg<DRAG_SIZE_ARG,28000>,Int<3000>>>,TrFade<4000>>,TrFade<300>,SaberBase::LOCKUP_DRAG>,LockupTrL<AlphaL<Remap<Scale<RampF,Int<65536>,Int<0>>,StaticFire<Mix<TwistAngle<>,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>,RotateColorsX<Int<3000>,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>>>,Mix<TwistAngle<>,RotateColorsX<Int<3000>,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>>,RotateColorsX<Int<3000>,Mix<Int<12000>,Black,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>>>>,0,3,5,3000,10>>,SmoothStep<IntArg<MELT_SIZE_ARG,28000>,Int<4000>>>,TrConcat<TrWipeIn<100>,AlphaL<RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>,SmoothStep<IntArg<MELT_SIZE_ARG,28000>,Int<4000>>>,TrJoin<TrDelay<4000>,TrFade<300>>,AlphaL<Mix<TwistAngle<>,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>,RotateColorsX<Int<3000>,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>>>,SmoothStep<IntArg<MELT_SIZE_ARG,28000>,Int<4000>>>,TrFade<4000>>,TrWipe<200>,SaberBase::LOCKUP_MELT>,InOutTrL<TrWipeX<IgnitionTime<300>>,TrWipeInX<RetractionTime<0>>,Black>>>(),

		//TOP CC

	/* copyright Fett263 KyloRen (Accent LED / PCB) OS6 Style
https://fett263.com/fett263-proffieOS6-style-library.html#KyloRen
OS6.7 v4.021
Single Style
Base Style: Kylo Ren Unstable (Film Based)

Off Behavior: Slow Pulse Off-On

Base Color: Rgb<0,0,255> (0)

--Effects Included--
Ignition Effect: Glitch On
Retraction Effect: Cycle Down
CoolDown Effect: Unstable Cool Down Reverse
Lockup Effect: Lockup Flash
LightningBlock Effect: Lightning After Effect
Blast Effect: Blast Wave Up (Sound Based)
Clash Effect: Real Clash V1 Up
*/
StylePtr<Layers<StaticFire<BrownNoiseFlicker<RgbArg<BASE_COLOR_ARG,Rgb<0,0,255>>,RandomPerLEDFlicker<Mix<Int<3213>,Black,RgbArg<BASE_COLOR_ARG,Rgb<0,0,255>>>,Mix<Int<7710>,Black,RgbArg<BASE_COLOR_ARG,Rgb<0,0,255>>>>,300>,Mix<Int<10280>,Black,RgbArg<BASE_COLOR_ARG,Rgb<0,0,255>>>,0,6,10,1000,2>,TransitionEffectL<TrConcat<TrJoin<TrDelayX<RetractionTime<5000>>,TrInstant>,Stripes<3000,3500,RgbArg<RETRACTION_COLOR_ARG,Rgb<255,255,255>>,RandomPerLEDFlicker<Mix<Int<7710>,Black,RgbArg<RETRACTION_COLOR_ARG,Rgb<255,255,255>>>,Black>,BrownNoiseFlicker<RgbArg<RETRACTION_COLOR_ARG,Rgb<255,255,255>>,Mix<Int<3855>,Black,RgbArg<RETRACTION_COLOR_ARG,Rgb<255,255,255>>>,200>,RandomPerLEDFlicker<Mix<Int<3137>,Black,RgbArg<RETRACTION_COLOR_ARG,Rgb<255,255,255>>>,Mix<Int<3855>,Black,RgbArg<RETRACTION_COLOR_ARG,Rgb<255,255,255>>>>>,TrFade<800>>,EFFECT_RETRACTION>,TransitionEffectL<TrWaveX<RgbArg<BLAST_COLOR_ARG,Rgb<255,255,255>>,Scale<WavLen<>,Int<100>,Int<400>>,Int<100>,Scale<WavLen<>,Int<100>,Int<400>>,Int<0>>,EFFECT_BLAST>,Mix<IsLessThan<ClashImpactF<>,Int<26000>>,TransitionEffectL<TrWaveX<RgbArg<CLASH_COLOR_ARG,Rgb<255,255,255>>,Scale<ClashImpactF<>,Int<100>,Int<400>>,Int<100>,Scale<ClashImpactF<>,Int<100>,Int<400>>,Int<0>>,EFFECT_CLASH>,AlphaL<White,Int<0>>>,TransitionEffectL<TrConcat<TrInstant,AlphaL<RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,SmoothStep<ClashImpactF<>,Int<-4000>>>,TrFadeX<Scale<ClashImpactF<>,Int<100>,Int<300>>>>,EFFECT_LOCKUP_BEGIN>,TransitionEffectL<TrConcat<TrInstant,AlphaL<RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,SmoothStep<ClashImpactF<>,Int<-4000>>>,TrFadeX<Scale<ClashImpactF<>,Int<100>,Int<300>>>>,EFFECT_LOCKUP_END>,LockupTrL<AlphaL<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,Int<0>>,TrInstant,TrConcat<TrInstant,Strobe<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,AudioFlicker<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,Blue>,50,1>,TrFade<1000>>,SaberBase::LOCKUP_LIGHTNING_BLOCK>,InOutTrL<TrConcat<TrJoin<TrDelayX<Mult<IgnitionTime<3000>,Int<16384>>>,TrWipeX<Mult<IgnitionTime<3000>,Int<16384>>>>,Mix<SmoothStep<NoisySoundLevel,Int<-1>>,Black,RgbArg<IGNITION_COLOR_ARG,Rgb<255,255,255>>>,TrWipeX<Mult<IgnitionTime<3000>,Int<16384>>>>,TrColorCycleX<RetractionTime<5000>>,Pulsing<Black,RgbArg<OFF_COLOR_ARG,Rgb<2,72,255>>,8000>>>>(),},




{ "Savage_Night;common", "tracks/Savage_Night.wav",
	/* copyright Fett263 Rotoscope (Primary Blade) OS6 Style
	https://fett263.com/fett263-proffieOS6-style-library.html#Rotoscope
	OS6.7 v4.012
	Single Style
	Base Style: Rotoscope - Single Color (Original Trilogy)

	Base Color: Rgb<255,0,0> (0)

	--Effects Included--
	Ignition Effect: Standard Ignition
	Retraction Effect: Standard Retraction
	Lockup Effect: Intensity Lockup V1, Begin Effect: Real Clash, End Effect: Full Blade Absorb
	LightningBlock Effect: Responsive Lightning Block
	Drag Effect: Intensity Sparking Drag
	Melt Effect: Intensity Melt
	Blast Effect: Blast Wave (Random)
	Clash Effect: Real Clash V1
	*/
	StylePtr<Layers<RandomFlicker<Stripes<10000,-2600,RgbArg<BASE_COLOR_ARG,Rgb<255,0,0>>,RgbArg<BASE_COLOR_ARG,Rgb<255,0,0>>,Mix<Int<7710>,Black,RgbArg<BASE_COLOR_ARG,Rgb<255,0,0>>>,RgbArg<BASE_COLOR_ARG,Rgb<255,0,0>>,Mix<Int<16448>,Black,RgbArg<BASE_COLOR_ARG,Rgb<255,0,0>>>>,RgbArg<BASE_COLOR_ARG,Rgb<255,0,0>>>,MultiTransitionEffectL<TrWaveX<RgbArg<BLAST_COLOR_ARG,Rgb<255,255,255>>,Scale<EffectRandomF<EFFECT_BLAST>,Int<100>,Int<400>>,Int<100>,Scale<EffectRandomF<EFFECT_BLAST>,Int<100>,Int<400>>,Scale<EffectRandomF<EFFECT_BLAST>,Int<28000>,Int<8000>>>,EFFECT_BLAST>,Mix<IsLessThan<ClashImpactF<>,Int<26000>>,TransitionEffectL<TrConcat<TrInstant,AlphaL<RgbArg<CLASH_COLOR_ARG,Rgb<255,255,255>>,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-12000>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<10000>>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-10000>>>,Scale<ClashImpactF<>,Int<12000>,Int<60000>>>>,TrFadeX<Scale<ClashImpactF<>,Int<200>,Int<400>>>>,EFFECT_CLASH>,TransitionEffectL<TrWaveX<RgbArg<CLASH_COLOR_ARG,Rgb<255,255,255>>,Scale<ClashImpactF<>,Int<100>,Int<400>>,Int<100>,Scale<ClashImpactF<>,Int<100>,Int<400>>,Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-12000>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<10000>>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-10000>>>>,EFFECT_CLASH>>,LockupTrL<TransitionEffect<AlphaMixL<Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-12000>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<10000>>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-10000>>>,Scale<SwingSpeed<100>,Int<14000>,Int<18000>>>,BrownNoiseFlickerL<RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,Int<200>>,StripesX<Int<1800>,Scale<NoisySoundLevel,Int<-3500>,Int<-5000>>,Mix<Int<6425>,Black,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>>,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,Mix<Int<12850>,Black,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>>>>,AlphaL<AudioFlicker<RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,Mix<Int<10280>,Black,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>>>,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-12000>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<10000>>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-10000>>>,Int<13000>>>,TrJoin<TrDelay<8000>,TrInstant>,TrFade<3000>,EFFECT_LOCKUP_BEGIN>,TrConcat<TrJoin<TrDelay<50>,TrInstant>,Mix<IsLessThan<ClashImpactF<>,Int<26000>>,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,AlphaL<RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-12000>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<10000>>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-10000>>>,Scale<ClashImpactF<>,Int<20000>,Int<60000>>>>>,TrFade<300>>,TrConcat<TrInstant,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,TrFade<400>>,SaberBase::LOCKUP_NORMAL>,ResponsiveLightningBlockL<Strobe<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,AudioFlicker<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,Blue>,50,1>,TrConcat<TrInstant,AlphaL<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,Bump<Int<12000>,Int<18000>>>,TrFade<200>>,TrConcat<TrInstant,HumpFlickerL<AlphaL<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,Int<16000>>,30>,TrSmoothFade<600>>>,LockupTrL<AlphaL<RandomPerLEDFlickerL<RgbArg<DRAG_COLOR_ARG,Rgb<255,255,255>>>,SmoothStep<IntArg<DRAG_SIZE_ARG,28000>,Int<3000>>>,TrConcat<TrJoin<TrDelay<4000>,TrWipeIn<200>>,AlphaL<BrownNoiseFlickerL<RgbArg<DRAG_COLOR_ARG,Rgb<255,255,255>>,Int<300>>,SmoothStep<IntArg<DRAG_SIZE_ARG,28000>,Int<3000>>>,TrFade<4000>>,TrFade<300>,SaberBase::LOCKUP_DRAG>,LockupTrL<AlphaL<Remap<Scale<RampF,Int<65536>,Int<0>>,StaticFire<Mix<TwistAngle<>,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>,RotateColorsX<Int<3000>,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>>>,Mix<TwistAngle<>,RotateColorsX<Int<3000>,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>>,RotateColorsX<Int<3000>,Mix<Int<12000>,Black,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>>>>,0,3,5,3000,10>>,SmoothStep<IntArg<MELT_SIZE_ARG,28000>,Int<4000>>>,TrConcat<TrWipeIn<100>,AlphaL<RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>,SmoothStep<IntArg<MELT_SIZE_ARG,28000>,Int<4000>>>,TrJoin<TrDelay<4000>,TrFade<300>>,AlphaL<Mix<TwistAngle<>,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>,RotateColorsX<Int<3000>,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>>>,SmoothStep<IntArg<MELT_SIZE_ARG,28000>,Int<4000>>>,TrFade<4000>>,TrWipe<200>,SaberBase::LOCKUP_MELT>,InOutTrL<TrWipeX<IgnitionTime<500>>,TrWipeInX<RetractionTime<0>>,Black>>>(),

		//TOP CC

	/* copyright Fett263 KyloRen (Accent LED / PCB) OS6 Style
https://fett263.com/fett263-proffieOS6-style-library.html#KyloRen
OS6.7 v4.021
Single Style
Base Style: Kylo Ren Unstable (Film Based)

Off Behavior: Slow Pulse Off-On

Base Color: Rgb<255,0,0> (0)

--Effects Included--
Ignition Effect: Glitch On
Retraction Effect: Cycle Down
CoolDown Effect: Unstable Cool Down Reverse
Lockup Effect: Lockup Flash
LightningBlock Effect: Lightning After Effect
Blast Effect: Blast Wave Up (Sound Based)
Clash Effect: Real Clash V1 Up
*/
StylePtr<Layers<StaticFire<BrownNoiseFlicker<RgbArg<BASE_COLOR_ARG,Rgb<255,0,0>>,RandomPerLEDFlicker<Mix<Int<3213>,Black,RgbArg<BASE_COLOR_ARG,Rgb<255,0,0>>>,Mix<Int<7710>,Black,RgbArg<BASE_COLOR_ARG,Rgb<255,0,0>>>>,300>,Mix<Int<10280>,Black,RgbArg<BASE_COLOR_ARG,Rgb<255,0,0>>>,0,6,10,1000,2>,TransitionEffectL<TrConcat<TrJoin<TrDelayX<RetractionTime<5000>>,TrInstant>,Stripes<3000,3500,RgbArg<RETRACTION_COLOR_ARG,Rgb<255,255,255>>,RandomPerLEDFlicker<Mix<Int<7710>,Black,RgbArg<RETRACTION_COLOR_ARG,Rgb<255,255,255>>>,Black>,BrownNoiseFlicker<RgbArg<RETRACTION_COLOR_ARG,Rgb<255,255,255>>,Mix<Int<3855>,Black,RgbArg<RETRACTION_COLOR_ARG,Rgb<255,255,255>>>,200>,RandomPerLEDFlicker<Mix<Int<3137>,Black,RgbArg<RETRACTION_COLOR_ARG,Rgb<255,255,255>>>,Mix<Int<3855>,Black,RgbArg<RETRACTION_COLOR_ARG,Rgb<255,255,255>>>>>,TrFade<800>>,EFFECT_RETRACTION>,TransitionEffectL<TrWaveX<RgbArg<BLAST_COLOR_ARG,Rgb<255,255,255>>,Scale<WavLen<>,Int<100>,Int<400>>,Int<100>,Scale<WavLen<>,Int<100>,Int<400>>,Int<0>>,EFFECT_BLAST>,Mix<IsLessThan<ClashImpactF<>,Int<26000>>,TransitionEffectL<TrWaveX<RgbArg<CLASH_COLOR_ARG,Rgb<255,255,255>>,Scale<ClashImpactF<>,Int<100>,Int<400>>,Int<100>,Scale<ClashImpactF<>,Int<100>,Int<400>>,Int<0>>,EFFECT_CLASH>,AlphaL<White,Int<0>>>,TransitionEffectL<TrConcat<TrInstant,AlphaL<RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,SmoothStep<ClashImpactF<>,Int<-4000>>>,TrFadeX<Scale<ClashImpactF<>,Int<100>,Int<300>>>>,EFFECT_LOCKUP_BEGIN>,TransitionEffectL<TrConcat<TrInstant,AlphaL<RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,SmoothStep<ClashImpactF<>,Int<-4000>>>,TrFadeX<Scale<ClashImpactF<>,Int<100>,Int<300>>>>,EFFECT_LOCKUP_END>,LockupTrL<AlphaL<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,Int<0>>,TrInstant,TrConcat<TrInstant,Strobe<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,AudioFlicker<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,Blue>,50,1>,TrFade<1000>>,SaberBase::LOCKUP_LIGHTNING_BLOCK>,InOutTrL<TrConcat<TrJoin<TrDelayX<Mult<IgnitionTime<3000>,Int<16384>>>,TrWipeX<Mult<IgnitionTime<3000>,Int<16384>>>>,Mix<SmoothStep<NoisySoundLevel,Int<-1>>,Black,RgbArg<IGNITION_COLOR_ARG,Rgb<255,255,255>>>,TrWipeX<Mult<IgnitionTime<3000>,Int<16384>>>>,TrColorCycleX<RetractionTime<5000>>,Pulsing<Black,Rgb<236,126,126>,8000>>>>(),},





{ "Scavengers_Destiny;common", "tracks/Scavengers_Destiny.wav",
	/* copyright Fett263 ComboBuilder (Primary Blade) OS6 Style
	https://fett263.com/fett263-proffieOS6-style-library.html#ComboBuilder
	OS6.7 v4.012
	Single Style
	Base Style: Rotoscope - Single Color (Sequels)

	Base Color: Rgb<255,255,0> (0)

	--Effects Included--
	Ignition Effect: Standard Ignition
	PowerUp Effect: Rey TROS Spark
	Retraction Effect: Standard Retraction
	Lockup Effect: Intensity Lockup V1, Begin Effect: Real Clash, End Effect: Full Blade Absorb
	LightningBlock Effect: Responsive Lightning Block
	Drag Effect: Intensity Sparking Drag
	Melt Effect: Intensity Melt
	Blast Effect: Blast Wave (Random)
	Clash Effect: Real Clash V1
	*/
	StylePtr<Layers<RandomFlicker<Stripes<14000,-4000,RgbArg<BASE_COLOR_ARG,Rgb<255,255,0>>,RgbArg<BASE_COLOR_ARG,Rgb<255,255,0>>,Mix<Int<7710>,Black,RgbArg<BASE_COLOR_ARG,Rgb<255,255,0>>>,RgbArg<BASE_COLOR_ARG,Rgb<255,255,0>>,Mix<Int<16448>,Black,RgbArg<BASE_COLOR_ARG,Rgb<255,255,0>>>>,RgbArg<BASE_COLOR_ARG,Rgb<255,255,0>>>,TransitionEffectL<TrConcat<TrJoin<TrDelay<200>,TrInstant>,AlphaL<Green,SmoothStep<IntArg<EMITTER_SIZE_ARG,2000>,Int<-500>>>,TrFade<300>,AlphaL<Blue,SmoothStep<IntArg<EMITTER_SIZE_ARG,2000>,Int<-500>>>,TrFade<500>>,EFFECT_IGNITION>,MultiTransitionEffectL<TrWaveX<RgbArg<BLAST_COLOR_ARG,Rgb<255,255,255>>,Scale<EffectRandomF<EFFECT_BLAST>,Int<100>,Int<400>>,Int<100>,Scale<EffectRandomF<EFFECT_BLAST>,Int<100>,Int<400>>,Scale<EffectRandomF<EFFECT_BLAST>,Int<28000>,Int<8000>>>,EFFECT_BLAST>,Mix<IsLessThan<ClashImpactF<>,Int<26000>>,TransitionEffectL<TrConcat<TrInstant,AlphaL<RgbArg<CLASH_COLOR_ARG,Rgb<255,255,255>>,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-12000>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<10000>>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-10000>>>,Scale<ClashImpactF<>,Int<12000>,Int<60000>>>>,TrFadeX<Scale<ClashImpactF<>,Int<200>,Int<400>>>>,EFFECT_CLASH>,TransitionEffectL<TrWaveX<RgbArg<CLASH_COLOR_ARG,Rgb<255,255,255>>,Scale<ClashImpactF<>,Int<100>,Int<400>>,Int<100>,Scale<ClashImpactF<>,Int<100>,Int<400>>,Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-12000>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<10000>>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-10000>>>>,EFFECT_CLASH>>,LockupTrL<TransitionEffect<AlphaMixL<Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-12000>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<10000>>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-10000>>>,Scale<SwingSpeed<100>,Int<14000>,Int<18000>>>,BrownNoiseFlickerL<RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,Int<200>>,StripesX<Int<1800>,Scale<NoisySoundLevel,Int<-3500>,Int<-5000>>,Mix<Int<6425>,Black,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>>,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,Mix<Int<12850>,Black,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>>>>,AlphaL<AudioFlicker<RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,Mix<Int<10280>,Black,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>>>,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-12000>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<10000>>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-10000>>>,Int<13000>>>,TrJoin<TrDelay<8000>,TrInstant>,TrFade<3000>,EFFECT_LOCKUP_BEGIN>,TrConcat<TrJoin<TrDelay<50>,TrInstant>,Mix<IsLessThan<ClashImpactF<>,Int<26000>>,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,AlphaL<RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-12000>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<10000>>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-10000>>>,Scale<ClashImpactF<>,Int<20000>,Int<60000>>>>>,TrFade<300>>,TrConcat<TrInstant,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,TrFade<400>>,SaberBase::LOCKUP_NORMAL>,ResponsiveLightningBlockL<Strobe<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,AudioFlicker<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,Blue>,50,1>,TrConcat<TrInstant,AlphaL<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,Bump<Int<12000>,Int<18000>>>,TrFade<200>>,TrConcat<TrInstant,HumpFlickerL<AlphaL<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,Int<16000>>,30>,TrSmoothFade<600>>>,LockupTrL<AlphaL<RandomPerLEDFlickerL<RgbArg<DRAG_COLOR_ARG,Rgb<255,255,255>>>,SmoothStep<IntArg<DRAG_SIZE_ARG,28000>,Int<3000>>>,TrConcat<TrJoin<TrDelay<4000>,TrWipeIn<200>>,AlphaL<BrownNoiseFlickerL<RgbArg<DRAG_COLOR_ARG,Rgb<255,255,255>>,Int<300>>,SmoothStep<IntArg<DRAG_SIZE_ARG,28000>,Int<3000>>>,TrFade<4000>>,TrFade<300>,SaberBase::LOCKUP_DRAG>,LockupTrL<AlphaL<Remap<Scale<RampF,Int<65536>,Int<0>>,StaticFire<Mix<TwistAngle<>,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>,RotateColorsX<Int<3000>,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>>>,Mix<TwistAngle<>,RotateColorsX<Int<3000>,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>>,RotateColorsX<Int<3000>,Mix<Int<12000>,Black,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>>>>,0,3,5,3000,10>>,SmoothStep<IntArg<MELT_SIZE_ARG,28000>,Int<4000>>>,TrConcat<TrWipeIn<100>,AlphaL<RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>,SmoothStep<IntArg<MELT_SIZE_ARG,28000>,Int<4000>>>,TrJoin<TrDelay<4000>,TrFade<300>>,AlphaL<Mix<TwistAngle<>,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>,RotateColorsX<Int<3000>,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>>>,SmoothStep<IntArg<MELT_SIZE_ARG,28000>,Int<4000>>>,TrFade<4000>>,TrWipe<200>,SaberBase::LOCKUP_MELT>,InOutTrL<TrWipeX<IgnitionTime<500>>,TrWipeInX<RetractionTime<0>>,Black>>>(),

		//TOP CC

	/* copyright Fett263 KyloRen (Accent LED / PCB) OS6 Style
https://fett263.com/fett263-proffieOS6-style-library.html#KyloRen
OS6.7 v4.021
Single Style
Base Style: Kylo Ren Unstable (Film Based)

Off Behavior: Slow Pulse Off-On

Base Color: Rgb<255,255,0> (0)

--Effects Included--
Ignition Effect: Glitch On
Retraction Effect: Cycle Down
CoolDown Effect: Unstable Cool Down Reverse
Lockup Effect: Lockup Flash
LightningBlock Effect: Lightning After Effect
Blast Effect: Blast Wave Up (Sound Based)
Clash Effect: Real Clash V1 Up
*/
StylePtr<Layers<StaticFire<BrownNoiseFlicker<RgbArg<BASE_COLOR_ARG,Rgb<255,255,0>>,RandomPerLEDFlicker<Mix<Int<3213>,Black,RgbArg<BASE_COLOR_ARG,Rgb<255,255,0>>>,Mix<Int<7710>,Black,RgbArg<BASE_COLOR_ARG,Rgb<255,255,0>>>>,300>,Mix<Int<10280>,Black,RgbArg<BASE_COLOR_ARG,Rgb<255,255,0>>>,0,6,10,1000,2>,TransitionEffectL<TrConcat<TrJoin<TrDelayX<RetractionTime<5000>>,TrInstant>,Stripes<3000,3500,RgbArg<RETRACTION_COLOR_ARG,Rgb<255,255,255>>,RandomPerLEDFlicker<Mix<Int<7710>,Black,RgbArg<RETRACTION_COLOR_ARG,Rgb<255,255,255>>>,Black>,BrownNoiseFlicker<RgbArg<RETRACTION_COLOR_ARG,Rgb<255,255,255>>,Mix<Int<3855>,Black,RgbArg<RETRACTION_COLOR_ARG,Rgb<255,255,255>>>,200>,RandomPerLEDFlicker<Mix<Int<3137>,Black,RgbArg<RETRACTION_COLOR_ARG,Rgb<255,255,255>>>,Mix<Int<3855>,Black,RgbArg<RETRACTION_COLOR_ARG,Rgb<255,255,255>>>>>,TrFade<800>>,EFFECT_RETRACTION>,TransitionEffectL<TrWaveX<RgbArg<BLAST_COLOR_ARG,Rgb<255,255,255>>,Scale<WavLen<>,Int<100>,Int<400>>,Int<100>,Scale<WavLen<>,Int<100>,Int<400>>,Int<0>>,EFFECT_BLAST>,Mix<IsLessThan<ClashImpactF<>,Int<26000>>,TransitionEffectL<TrWaveX<RgbArg<CLASH_COLOR_ARG,Rgb<255,255,255>>,Scale<ClashImpactF<>,Int<100>,Int<400>>,Int<100>,Scale<ClashImpactF<>,Int<100>,Int<400>>,Int<0>>,EFFECT_CLASH>,AlphaL<White,Int<0>>>,TransitionEffectL<TrConcat<TrInstant,AlphaL<RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,SmoothStep<ClashImpactF<>,Int<-4000>>>,TrFadeX<Scale<ClashImpactF<>,Int<100>,Int<300>>>>,EFFECT_LOCKUP_BEGIN>,TransitionEffectL<TrConcat<TrInstant,AlphaL<RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,SmoothStep<ClashImpactF<>,Int<-4000>>>,TrFadeX<Scale<ClashImpactF<>,Int<100>,Int<300>>>>,EFFECT_LOCKUP_END>,LockupTrL<AlphaL<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,Int<0>>,TrInstant,TrConcat<TrInstant,Strobe<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,AudioFlicker<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,Blue>,50,1>,TrFade<1000>>,SaberBase::LOCKUP_LIGHTNING_BLOCK>,InOutTrL<TrConcat<TrJoin<TrDelayX<Mult<IgnitionTime<3000>,Int<16384>>>,TrWipeX<Mult<IgnitionTime<3000>,Int<16384>>>>,Mix<SmoothStep<NoisySoundLevel,Int<-1>>,Black,RgbArg<IGNITION_COLOR_ARG,Rgb<255,255,255>>>,TrWipeX<Mult<IgnitionTime<3000>,Int<16384>>>>,TrColorCycleX<RetractionTime<5000>>,Pulsing<Black,Rgb<77,126,239>,8000>>>>(),},



{ "Secret_Apprentice_Dark;common", "tracks/Secret_Apprentice_Dark.wav",
	/* copyright Fett263 Rotoscope (Primary Blade) OS6 Style
	https://fett263.com/fett263-proffieOS6-style-library.html#Rotoscope
	OS6.7 v4.012
	Single Style
	Base Style: Rotoscope - Single Color (Original Trilogy)

	Base Color: Rgb<255,0,0> (0)

	--Effects Included--
	Ignition Effect: Standard Ignition
	Retraction Effect: Standard Retraction
	Lockup Effect: Intensity Lockup V1, Begin Effect: Real Clash, End Effect: Full Blade Absorb
	LightningBlock Effect: Responsive Lightning Block
	Drag Effect: Intensity Sparking Drag
	Melt Effect: Intensity Melt
	Blast Effect: Blast Wave (Random)
	Clash Effect: Real Clash V1
	*/
	StylePtr<Layers<RandomFlicker<Stripes<10000,-2600,RgbArg<BASE_COLOR_ARG,Rgb<255,0,0>>,RgbArg<BASE_COLOR_ARG,Rgb<255,0,0>>,Mix<Int<7710>,Black,RgbArg<BASE_COLOR_ARG,Rgb<255,0,0>>>,RgbArg<BASE_COLOR_ARG,Rgb<255,0,0>>,Mix<Int<16448>,Black,RgbArg<BASE_COLOR_ARG,Rgb<255,0,0>>>>,RgbArg<BASE_COLOR_ARG,Rgb<255,0,0>>>,MultiTransitionEffectL<TrWaveX<RgbArg<BLAST_COLOR_ARG,Rgb<255,255,255>>,Scale<EffectRandomF<EFFECT_BLAST>,Int<100>,Int<400>>,Int<100>,Scale<EffectRandomF<EFFECT_BLAST>,Int<100>,Int<400>>,Scale<EffectRandomF<EFFECT_BLAST>,Int<28000>,Int<8000>>>,EFFECT_BLAST>,Mix<IsLessThan<ClashImpactF<>,Int<26000>>,TransitionEffectL<TrConcat<TrInstant,AlphaL<RgbArg<CLASH_COLOR_ARG,Rgb<255,255,255>>,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-12000>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<10000>>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-10000>>>,Scale<ClashImpactF<>,Int<12000>,Int<60000>>>>,TrFadeX<Scale<ClashImpactF<>,Int<200>,Int<400>>>>,EFFECT_CLASH>,TransitionEffectL<TrWaveX<RgbArg<CLASH_COLOR_ARG,Rgb<255,255,255>>,Scale<ClashImpactF<>,Int<100>,Int<400>>,Int<100>,Scale<ClashImpactF<>,Int<100>,Int<400>>,Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-12000>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<10000>>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-10000>>>>,EFFECT_CLASH>>,LockupTrL<TransitionEffect<AlphaMixL<Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-12000>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<10000>>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-10000>>>,Scale<SwingSpeed<100>,Int<14000>,Int<18000>>>,BrownNoiseFlickerL<RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,Int<200>>,StripesX<Int<1800>,Scale<NoisySoundLevel,Int<-3500>,Int<-5000>>,Mix<Int<6425>,Black,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>>,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,Mix<Int<12850>,Black,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>>>>,AlphaL<AudioFlicker<RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,Mix<Int<10280>,Black,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>>>,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-12000>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<10000>>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-10000>>>,Int<13000>>>,TrJoin<TrDelay<8000>,TrInstant>,TrFade<3000>,EFFECT_LOCKUP_BEGIN>,TrConcat<TrJoin<TrDelay<50>,TrInstant>,Mix<IsLessThan<ClashImpactF<>,Int<26000>>,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,AlphaL<RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-12000>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<10000>>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-10000>>>,Scale<ClashImpactF<>,Int<20000>,Int<60000>>>>>,TrFade<300>>,TrConcat<TrInstant,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,TrFade<400>>,SaberBase::LOCKUP_NORMAL>,ResponsiveLightningBlockL<Strobe<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,AudioFlicker<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,Blue>,50,1>,TrConcat<TrInstant,AlphaL<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,Bump<Int<12000>,Int<18000>>>,TrFade<200>>,TrConcat<TrInstant,HumpFlickerL<AlphaL<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,Int<16000>>,30>,TrSmoothFade<600>>>,LockupTrL<AlphaL<RandomPerLEDFlickerL<RgbArg<DRAG_COLOR_ARG,Rgb<255,255,255>>>,SmoothStep<IntArg<DRAG_SIZE_ARG,28000>,Int<3000>>>,TrConcat<TrJoin<TrDelay<4000>,TrWipeIn<200>>,AlphaL<BrownNoiseFlickerL<RgbArg<DRAG_COLOR_ARG,Rgb<255,255,255>>,Int<300>>,SmoothStep<IntArg<DRAG_SIZE_ARG,28000>,Int<3000>>>,TrFade<4000>>,TrFade<300>,SaberBase::LOCKUP_DRAG>,LockupTrL<AlphaL<Remap<Scale<RampF,Int<65536>,Int<0>>,StaticFire<Mix<TwistAngle<>,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>,RotateColorsX<Int<3000>,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>>>,Mix<TwistAngle<>,RotateColorsX<Int<3000>,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>>,RotateColorsX<Int<3000>,Mix<Int<12000>,Black,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>>>>,0,3,5,3000,10>>,SmoothStep<IntArg<MELT_SIZE_ARG,28000>,Int<4000>>>,TrConcat<TrWipeIn<100>,AlphaL<RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>,SmoothStep<IntArg<MELT_SIZE_ARG,28000>,Int<4000>>>,TrJoin<TrDelay<4000>,TrFade<300>>,AlphaL<Mix<TwistAngle<>,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>,RotateColorsX<Int<3000>,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>>>,SmoothStep<IntArg<MELT_SIZE_ARG,28000>,Int<4000>>>,TrFade<4000>>,TrWipe<200>,SaberBase::LOCKUP_MELT>,InOutTrL<TrWipeX<IgnitionTime<500>>,TrWipeInX<RetractionTime<0>>,Black>>>(),

		//TOP CC

	/* copyright Fett263 KyloRen (Accent LED / PCB) OS6 Style
https://fett263.com/fett263-proffieOS6-style-library.html#KyloRen
OS6.7 v4.021
Single Style
Base Style: Kylo Ren Unstable (Film Based)

Off Behavior: Slow Pulse Off-On

Base Color: Rgb<255,0,0> (0)

--Effects Included--
Ignition Effect: Glitch On
Retraction Effect: Cycle Down
CoolDown Effect: Unstable Cool Down Reverse
Lockup Effect: Lockup Flash
LightningBlock Effect: Lightning After Effect
Blast Effect: Blast Wave Up (Sound Based)
Clash Effect: Real Clash V1 Up
*/
StylePtr<Layers<StaticFire<BrownNoiseFlicker<RgbArg<BASE_COLOR_ARG,Rgb<255,0,0>>,RandomPerLEDFlicker<Mix<Int<3213>,Black,RgbArg<BASE_COLOR_ARG,Rgb<255,0,0>>>,Mix<Int<7710>,Black,RgbArg<BASE_COLOR_ARG,Rgb<255,0,0>>>>,300>,Mix<Int<10280>,Black,RgbArg<BASE_COLOR_ARG,Rgb<255,0,0>>>,0,6,10,1000,2>,TransitionEffectL<TrConcat<TrJoin<TrDelayX<RetractionTime<5000>>,TrInstant>,Stripes<3000,3500,RgbArg<RETRACTION_COLOR_ARG,Rgb<255,255,255>>,RandomPerLEDFlicker<Mix<Int<7710>,Black,RgbArg<RETRACTION_COLOR_ARG,Rgb<255,255,255>>>,Black>,BrownNoiseFlicker<RgbArg<RETRACTION_COLOR_ARG,Rgb<255,255,255>>,Mix<Int<3855>,Black,RgbArg<RETRACTION_COLOR_ARG,Rgb<255,255,255>>>,200>,RandomPerLEDFlicker<Mix<Int<3137>,Black,RgbArg<RETRACTION_COLOR_ARG,Rgb<255,255,255>>>,Mix<Int<3855>,Black,RgbArg<RETRACTION_COLOR_ARG,Rgb<255,255,255>>>>>,TrFade<800>>,EFFECT_RETRACTION>,TransitionEffectL<TrWaveX<RgbArg<BLAST_COLOR_ARG,Rgb<255,255,255>>,Scale<WavLen<>,Int<100>,Int<400>>,Int<100>,Scale<WavLen<>,Int<100>,Int<400>>,Int<0>>,EFFECT_BLAST>,Mix<IsLessThan<ClashImpactF<>,Int<26000>>,TransitionEffectL<TrWaveX<RgbArg<CLASH_COLOR_ARG,Rgb<255,255,255>>,Scale<ClashImpactF<>,Int<100>,Int<400>>,Int<100>,Scale<ClashImpactF<>,Int<100>,Int<400>>,Int<0>>,EFFECT_CLASH>,AlphaL<White,Int<0>>>,TransitionEffectL<TrConcat<TrInstant,AlphaL<RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,SmoothStep<ClashImpactF<>,Int<-4000>>>,TrFadeX<Scale<ClashImpactF<>,Int<100>,Int<300>>>>,EFFECT_LOCKUP_BEGIN>,TransitionEffectL<TrConcat<TrInstant,AlphaL<RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,SmoothStep<ClashImpactF<>,Int<-4000>>>,TrFadeX<Scale<ClashImpactF<>,Int<100>,Int<300>>>>,EFFECT_LOCKUP_END>,LockupTrL<AlphaL<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,Int<0>>,TrInstant,TrConcat<TrInstant,Strobe<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,AudioFlicker<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,Blue>,50,1>,TrFade<1000>>,SaberBase::LOCKUP_LIGHTNING_BLOCK>,InOutTrL<TrConcat<TrJoin<TrDelayX<Mult<IgnitionTime<3000>,Int<16384>>>,TrWipeX<Mult<IgnitionTime<3000>,Int<16384>>>>,Mix<SmoothStep<NoisySoundLevel,Int<-1>>,Black,RgbArg<IGNITION_COLOR_ARG,Rgb<255,255,255>>>,TrWipeX<Mult<IgnitionTime<3000>,Int<16384>>>>,TrColorCycleX<RetractionTime<5000>>,Pulsing<Black,Rgb<236,126,126>,8000>>>>(),},





{ "Secret_Apprentice_Light;common", "tracks/Secret_Apprentice_Light.wav",
	/* copyright Fett263 Rotoscope (Primary Blade) OS6 Style
	https://fett263.com/fett263-proffieOS6-style-library.html#Rotoscope
	OS6.7 v4.01
	Single Style
	Base Style: Rotoscope - Single Color (Prequels)

	Base Color: Rgb<115,15,240> (0)

	--Effects Included--
	Ignition Effect: Standard Ignition
	Retraction Effect: Standard Retraction
	Lockup Effect: Intensity Lockup V1, Begin Effect: Real Clash, End Effect: Full Blade Absorb
	LightningBlock Effect: Responsive Lightning Block
	Drag Effect: Intensity Sparking Drag
	Melt Effect: Intensity Melt
	Blast Effect: Blast Ripple
	Clash Effect: Real Clash V1
	*/
	StylePtr<Layers<RandomFlicker<Stripes<24000,-1400,RgbArg<BASE_COLOR_ARG,Rgb<115,15,240>>,RgbArg<BASE_COLOR_ARG,Rgb<115,15,240>>,Mix<Int<11565>,Black,RgbArg<BASE_COLOR_ARG,Rgb<115,15,240>>>,RgbArg<BASE_COLOR_ARG,Rgb<115,15,240>>,Mix<Int<16448>,Black,RgbArg<BASE_COLOR_ARG,Rgb<115,15,240>>>>,RgbArg<BASE_COLOR_ARG,Rgb<115,15,240>>>,MultiTransitionEffectL<TrConcat<TrInstant,AlphaL<RgbArg<BLAST_COLOR_ARG,Rgb<255,255,255>>,Bump<Scale<EffectRandomF<EFFECT_BLAST>,Int<3000>,Int<29000>>,Int<6000>>>,TrCenterWipeX<Int<100>,Scale<EffectRandomF<EFFECT_BLAST>,Int<3000>,Int<29000>>>,Remap<CenterDistF<Scale<EffectRandomF<EFFECT_BLAST>,Int<3000>,Int<29000>>>,Stripes<1600,-2000,RgbArg<BLAST_COLOR_ARG,Rgb<255,255,255>>,Mix<Int<2096>,Black,RgbArg<BLAST_COLOR_ARG,Rgb<255,255,255>>>>>,TrCenterWipeX<Int<100>,Scale<EffectRandomF<EFFECT_BLAST>,Int<3000>,Int<29000>>>>,EFFECT_BLAST>,Mix<IsLessThan<ClashImpactF<>,Int<26000>>,TransitionEffectL<TrConcat<TrInstant,AlphaL<RgbArg<CLASH_COLOR_ARG,Rgb<100,100,150>>,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-12000>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<10000>>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-10000>>>,Scale<ClashImpactF<>,Int<12000>,Int<60000>>>>,TrFadeX<Scale<ClashImpactF<>,Int<200>,Int<400>>>>,EFFECT_CLASH>,TransitionEffectL<TrWaveX<RgbArg<CLASH_COLOR_ARG,Rgb<100,100,150>>,Scale<ClashImpactF<>,Int<100>,Int<400>>,Int<100>,Scale<ClashImpactF<>,Int<100>,Int<400>>,Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-12000>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<10000>>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-10000>>>>,EFFECT_CLASH>>,LockupTrL<TransitionEffect<AlphaMixL<Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-12000>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<10000>>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-10000>>>,Scale<SwingSpeed<100>,Int<14000>,Int<18000>>>,BrownNoiseFlickerL<RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,Int<200>>,StripesX<Int<1800>,Scale<NoisySoundLevel,Int<-3500>,Int<-5000>>,Mix<Int<6425>,Black,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>>,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,Mix<Int<12850>,Black,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>>>>,AlphaL<AudioFlicker<RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,Mix<Int<10280>,Black,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>>>,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-12000>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<10000>>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-10000>>>,Int<13000>>>,TrJoin<TrDelay<8000>,TrInstant>,TrFade<3000>,EFFECT_LOCKUP_BEGIN>,TrConcat<TrJoin<TrDelay<50>,TrInstant>,Mix<IsLessThan<ClashImpactF<>,Int<26000>>,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,AlphaL<RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-12000>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<10000>>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-10000>>>,Scale<ClashImpactF<>,Int<20000>,Int<60000>>>>>,TrFade<300>>,TrConcat<TrInstant,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,TrFade<400>>,SaberBase::LOCKUP_NORMAL>,ResponsiveLightningBlockL<Strobe<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,AudioFlicker<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,Blue>,50,1>,TrConcat<TrInstant,AlphaL<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,Bump<Int<12000>,Int<18000>>>,TrFade<200>>,TrConcat<TrInstant,HumpFlickerL<AlphaL<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,Int<16000>>,30>,TrSmoothFade<600>>>,LockupTrL<AlphaL<RandomPerLEDFlickerL<RgbArg<DRAG_COLOR_ARG,Rgb<255,255,255>>>,SmoothStep<IntArg<DRAG_SIZE_ARG,28000>,Int<3000>>>,TrConcat<TrJoin<TrDelay<4000>,TrWipeIn<200>>,AlphaL<BrownNoiseFlickerL<RgbArg<DRAG_COLOR_ARG,Rgb<255,255,255>>,Int<300>>,SmoothStep<IntArg<DRAG_SIZE_ARG,28000>,Int<3000>>>,TrFade<4000>>,TrFade<300>,SaberBase::LOCKUP_DRAG>,LockupTrL<AlphaL<Remap<Scale<RampF,Int<65536>,Int<0>>,StaticFire<Mix<TwistAngle<>,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>,RotateColorsX<Int<3000>,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>>>,Mix<TwistAngle<>,RotateColorsX<Int<3000>,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>>,RotateColorsX<Int<3000>,Mix<Int<12000>,Black,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>>>>,0,3,5,3000,10>>,SmoothStep<IntArg<MELT_SIZE_ARG,28000>,Int<4000>>>,TrConcat<TrWipeIn<100>,AlphaL<RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>,SmoothStep<IntArg<MELT_SIZE_ARG,28000>,Int<4000>>>,TrJoin<TrDelay<4000>,TrFade<300>>,AlphaL<Mix<TwistAngle<>,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>,RotateColorsX<Int<3000>,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>>>,SmoothStep<IntArg<MELT_SIZE_ARG,28000>,Int<4000>>>,TrFade<4000>>,TrWipe<200>,SaberBase::LOCKUP_MELT>,InOutTrL<TrWipeX<IgnitionTime<300>>,TrWipeInX<RetractionTime<0>>,Black>>>(),

		//TOP CC

	/* copyright Fett263 KyloRen (Accent LED / PCB) OS6 Style
https://fett263.com/fett263-proffieOS6-style-library.html#KyloRen
OS6.7 v4.021
Single Style
Base Style: Kylo Ren Unstable (Film Based)

Off Behavior: Slow Pulse Off-On

Base Color: Rgb<115,15,240> (0)

--Effects Included--
Ignition Effect: Glitch On
Retraction Effect: Cycle Down
CoolDown Effect: Unstable Cool Down Reverse
Lockup Effect: Lockup Flash
LightningBlock Effect: Lightning After Effect
Blast Effect: Blast Wave Up (Sound Based)
Clash Effect: Real Clash V1 Up
*/
StylePtr<Layers<StaticFire<BrownNoiseFlicker<RgbArg<BASE_COLOR_ARG,Rgb<115,15,240>>,RandomPerLEDFlicker<Mix<Int<3213>,Black,RgbArg<BASE_COLOR_ARG,Rgb<115,15,240>>>,Mix<Int<7710>,Black,RgbArg<BASE_COLOR_ARG,Rgb<115,15,240>>>>,300>,Mix<Int<10280>,Black,RgbArg<BASE_COLOR_ARG,Rgb<115,15,240>>>,0,6,10,1000,2>,TransitionEffectL<TrConcat<TrJoin<TrDelayX<RetractionTime<5000>>,TrInstant>,Stripes<3000,3500,RgbArg<RETRACTION_COLOR_ARG,Rgb<255,255,255>>,RandomPerLEDFlicker<Mix<Int<7710>,Black,RgbArg<RETRACTION_COLOR_ARG,Rgb<255,255,255>>>,Black>,BrownNoiseFlicker<RgbArg<RETRACTION_COLOR_ARG,Rgb<255,255,255>>,Mix<Int<3855>,Black,RgbArg<RETRACTION_COLOR_ARG,Rgb<255,255,255>>>,200>,RandomPerLEDFlicker<Mix<Int<3137>,Black,RgbArg<RETRACTION_COLOR_ARG,Rgb<255,255,255>>>,Mix<Int<3855>,Black,RgbArg<RETRACTION_COLOR_ARG,Rgb<255,255,255>>>>>,TrFade<800>>,EFFECT_RETRACTION>,TransitionEffectL<TrWaveX<RgbArg<BLAST_COLOR_ARG,Rgb<255,255,255>>,Scale<WavLen<>,Int<100>,Int<400>>,Int<100>,Scale<WavLen<>,Int<100>,Int<400>>,Int<0>>,EFFECT_BLAST>,Mix<IsLessThan<ClashImpactF<>,Int<26000>>,TransitionEffectL<TrWaveX<RgbArg<CLASH_COLOR_ARG,Rgb<255,255,255>>,Scale<ClashImpactF<>,Int<100>,Int<400>>,Int<100>,Scale<ClashImpactF<>,Int<100>,Int<400>>,Int<0>>,EFFECT_CLASH>,AlphaL<White,Int<0>>>,TransitionEffectL<TrConcat<TrInstant,AlphaL<RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,SmoothStep<ClashImpactF<>,Int<-4000>>>,TrFadeX<Scale<ClashImpactF<>,Int<100>,Int<300>>>>,EFFECT_LOCKUP_BEGIN>,TransitionEffectL<TrConcat<TrInstant,AlphaL<RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,SmoothStep<ClashImpactF<>,Int<-4000>>>,TrFadeX<Scale<ClashImpactF<>,Int<100>,Int<300>>>>,EFFECT_LOCKUP_END>,LockupTrL<AlphaL<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,Int<0>>,TrInstant,TrConcat<TrInstant,Strobe<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,AudioFlicker<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,Blue>,50,1>,TrFade<1000>>,SaberBase::LOCKUP_LIGHTNING_BLOCK>,InOutTrL<TrConcat<TrJoin<TrDelayX<Mult<IgnitionTime<3000>,Int<16384>>>,TrWipeX<Mult<IgnitionTime<3000>,Int<16384>>>>,Mix<SmoothStep<NoisySoundLevel,Int<-1>>,Black,RgbArg<IGNITION_COLOR_ARG,Rgb<255,255,255>>>,TrWipeX<Mult<IgnitionTime<3000>,Int<16384>>>>,TrColorCycleX<RetractionTime<5000>>,Pulsing<Black,RgbArg<OFF_COLOR_ARG,Rgb<80,50,210>>,8000>>>>(),},






{ "The_Prodigal_Butcher;common", "tracks/The_Prodigal_Butcher.wav",
	/* copyright Fett263 Rotoscope (Primary Blade) OS6 Style
	https://fett263.com/fett263-proffieOS6-style-library.html#Rotoscope
	OS6.7 v4.012
	Single Style
	Base Style: Rotoscope - Single Color (Original Trilogy)

	Base Color: Rgb<255,0,0> (0)

	--Effects Included--
	Ignition Effect: Standard Ignition
	Retraction Effect: Standard Retraction
	Lockup Effect: Intensity Lockup V1, Begin Effect: Real Clash, End Effect: Full Blade Absorb
	LightningBlock Effect: Responsive Lightning Block
	Drag Effect: Intensity Sparking Drag
	Melt Effect: Intensity Melt
	Blast Effect: Blast Wave (Random)
	Clash Effect: Real Clash V1
	*/
	StylePtr<Layers<RandomFlicker<Stripes<10000,-2600,RgbArg<BASE_COLOR_ARG,Rgb<255,0,0>>,RgbArg<BASE_COLOR_ARG,Rgb<255,0,0>>,Mix<Int<7710>,Black,RgbArg<BASE_COLOR_ARG,Rgb<255,0,0>>>,RgbArg<BASE_COLOR_ARG,Rgb<255,0,0>>,Mix<Int<16448>,Black,RgbArg<BASE_COLOR_ARG,Rgb<255,0,0>>>>,RgbArg<BASE_COLOR_ARG,Rgb<255,0,0>>>,MultiTransitionEffectL<TrWaveX<RgbArg<BLAST_COLOR_ARG,Rgb<255,255,255>>,Scale<EffectRandomF<EFFECT_BLAST>,Int<100>,Int<400>>,Int<100>,Scale<EffectRandomF<EFFECT_BLAST>,Int<100>,Int<400>>,Scale<EffectRandomF<EFFECT_BLAST>,Int<28000>,Int<8000>>>,EFFECT_BLAST>,Mix<IsLessThan<ClashImpactF<>,Int<26000>>,TransitionEffectL<TrConcat<TrInstant,AlphaL<RgbArg<CLASH_COLOR_ARG,Rgb<255,255,255>>,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-12000>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<10000>>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-10000>>>,Scale<ClashImpactF<>,Int<12000>,Int<60000>>>>,TrFadeX<Scale<ClashImpactF<>,Int<200>,Int<400>>>>,EFFECT_CLASH>,TransitionEffectL<TrWaveX<RgbArg<CLASH_COLOR_ARG,Rgb<255,255,255>>,Scale<ClashImpactF<>,Int<100>,Int<400>>,Int<100>,Scale<ClashImpactF<>,Int<100>,Int<400>>,Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-12000>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<10000>>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-10000>>>>,EFFECT_CLASH>>,LockupTrL<TransitionEffect<AlphaMixL<Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-12000>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<10000>>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-10000>>>,Scale<SwingSpeed<100>,Int<14000>,Int<18000>>>,BrownNoiseFlickerL<RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,Int<200>>,StripesX<Int<1800>,Scale<NoisySoundLevel,Int<-3500>,Int<-5000>>,Mix<Int<6425>,Black,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>>,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,Mix<Int<12850>,Black,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>>>>,AlphaL<AudioFlicker<RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,Mix<Int<10280>,Black,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>>>,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-12000>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<10000>>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-10000>>>,Int<13000>>>,TrJoin<TrDelay<8000>,TrInstant>,TrFade<3000>,EFFECT_LOCKUP_BEGIN>,TrConcat<TrJoin<TrDelay<50>,TrInstant>,Mix<IsLessThan<ClashImpactF<>,Int<26000>>,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,AlphaL<RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-12000>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<10000>>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-10000>>>,Scale<ClashImpactF<>,Int<20000>,Int<60000>>>>>,TrFade<300>>,TrConcat<TrInstant,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,TrFade<400>>,SaberBase::LOCKUP_NORMAL>,ResponsiveLightningBlockL<Strobe<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,AudioFlicker<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,Blue>,50,1>,TrConcat<TrInstant,AlphaL<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,Bump<Int<12000>,Int<18000>>>,TrFade<200>>,TrConcat<TrInstant,HumpFlickerL<AlphaL<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,Int<16000>>,30>,TrSmoothFade<600>>>,LockupTrL<AlphaL<RandomPerLEDFlickerL<RgbArg<DRAG_COLOR_ARG,Rgb<255,255,255>>>,SmoothStep<IntArg<DRAG_SIZE_ARG,28000>,Int<3000>>>,TrConcat<TrJoin<TrDelay<4000>,TrWipeIn<200>>,AlphaL<BrownNoiseFlickerL<RgbArg<DRAG_COLOR_ARG,Rgb<255,255,255>>,Int<300>>,SmoothStep<IntArg<DRAG_SIZE_ARG,28000>,Int<3000>>>,TrFade<4000>>,TrFade<300>,SaberBase::LOCKUP_DRAG>,LockupTrL<AlphaL<Remap<Scale<RampF,Int<65536>,Int<0>>,StaticFire<Mix<TwistAngle<>,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>,RotateColorsX<Int<3000>,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>>>,Mix<TwistAngle<>,RotateColorsX<Int<3000>,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>>,RotateColorsX<Int<3000>,Mix<Int<12000>,Black,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>>>>,0,3,5,3000,10>>,SmoothStep<IntArg<MELT_SIZE_ARG,28000>,Int<4000>>>,TrConcat<TrWipeIn<100>,AlphaL<RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>,SmoothStep<IntArg<MELT_SIZE_ARG,28000>,Int<4000>>>,TrJoin<TrDelay<4000>,TrFade<300>>,AlphaL<Mix<TwistAngle<>,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>,RotateColorsX<Int<3000>,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>>>,SmoothStep<IntArg<MELT_SIZE_ARG,28000>,Int<4000>>>,TrFade<4000>>,TrWipe<200>,SaberBase::LOCKUP_MELT>,InOutTrL<TrWipeX<IgnitionTime<500>>,TrWipeInX<RetractionTime<0>>,Black>>>(),

		//TOP CC

	/* copyright Fett263 KyloRen (Accent LED / PCB) OS6 Style
https://fett263.com/fett263-proffieOS6-style-library.html#KyloRen
OS6.7 v4.021
Single Style
Base Style: Kylo Ren Unstable (Film Based)

Off Behavior: Slow Pulse Off-On

Base Color: Rgb<255,0,0> (0)

--Effects Included--
Ignition Effect: Glitch On
Retraction Effect: Cycle Down
CoolDown Effect: Unstable Cool Down Reverse
Lockup Effect: Lockup Flash
LightningBlock Effect: Lightning After Effect
Blast Effect: Blast Wave Up (Sound Based)
Clash Effect: Real Clash V1 Up
*/
StylePtr<Layers<StaticFire<BrownNoiseFlicker<RgbArg<BASE_COLOR_ARG,Rgb<255,0,0>>,RandomPerLEDFlicker<Mix<Int<3213>,Black,RgbArg<BASE_COLOR_ARG,Rgb<255,0,0>>>,Mix<Int<7710>,Black,RgbArg<BASE_COLOR_ARG,Rgb<255,0,0>>>>,300>,Mix<Int<10280>,Black,RgbArg<BASE_COLOR_ARG,Rgb<255,0,0>>>,0,6,10,1000,2>,TransitionEffectL<TrConcat<TrJoin<TrDelayX<RetractionTime<5000>>,TrInstant>,Stripes<3000,3500,RgbArg<RETRACTION_COLOR_ARG,Rgb<255,255,255>>,RandomPerLEDFlicker<Mix<Int<7710>,Black,RgbArg<RETRACTION_COLOR_ARG,Rgb<255,255,255>>>,Black>,BrownNoiseFlicker<RgbArg<RETRACTION_COLOR_ARG,Rgb<255,255,255>>,Mix<Int<3855>,Black,RgbArg<RETRACTION_COLOR_ARG,Rgb<255,255,255>>>,200>,RandomPerLEDFlicker<Mix<Int<3137>,Black,RgbArg<RETRACTION_COLOR_ARG,Rgb<255,255,255>>>,Mix<Int<3855>,Black,RgbArg<RETRACTION_COLOR_ARG,Rgb<255,255,255>>>>>,TrFade<800>>,EFFECT_RETRACTION>,TransitionEffectL<TrWaveX<RgbArg<BLAST_COLOR_ARG,Rgb<255,255,255>>,Scale<WavLen<>,Int<100>,Int<400>>,Int<100>,Scale<WavLen<>,Int<100>,Int<400>>,Int<0>>,EFFECT_BLAST>,Mix<IsLessThan<ClashImpactF<>,Int<26000>>,TransitionEffectL<TrWaveX<RgbArg<CLASH_COLOR_ARG,Rgb<255,255,255>>,Scale<ClashImpactF<>,Int<100>,Int<400>>,Int<100>,Scale<ClashImpactF<>,Int<100>,Int<400>>,Int<0>>,EFFECT_CLASH>,AlphaL<White,Int<0>>>,TransitionEffectL<TrConcat<TrInstant,AlphaL<RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,SmoothStep<ClashImpactF<>,Int<-4000>>>,TrFadeX<Scale<ClashImpactF<>,Int<100>,Int<300>>>>,EFFECT_LOCKUP_BEGIN>,TransitionEffectL<TrConcat<TrInstant,AlphaL<RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,SmoothStep<ClashImpactF<>,Int<-4000>>>,TrFadeX<Scale<ClashImpactF<>,Int<100>,Int<300>>>>,EFFECT_LOCKUP_END>,LockupTrL<AlphaL<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,Int<0>>,TrInstant,TrConcat<TrInstant,Strobe<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,AudioFlicker<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,Blue>,50,1>,TrFade<1000>>,SaberBase::LOCKUP_LIGHTNING_BLOCK>,InOutTrL<TrConcat<TrJoin<TrDelayX<Mult<IgnitionTime<3000>,Int<16384>>>,TrWipeX<Mult<IgnitionTime<3000>,Int<16384>>>>,Mix<SmoothStep<NoisySoundLevel,Int<-1>>,Black,RgbArg<IGNITION_COLOR_ARG,Rgb<255,255,255>>>,TrWipeX<Mult<IgnitionTime<3000>,Int<16384>>>>,TrColorCycleX<RetractionTime<5000>>,Pulsing<Black,Rgb<236,126,126>,8000>>>>(),},






{ "The_Survivor_Blue;common", "tracks/The_Survivor_Blue.wav",
	/* copyright Fett263 Rotoscope (Primary Blade) OS6 Style
	https://fett263.com/fett263-proffieOS6-style-library.html#Rotoscope
	OS6.7 v4.016
	Single Style
	Base Style: Hyper Responsive Rotoscope (Prequels)

	Base Color: Rgb<0,135,255> (0)

	--Effects Included--
	Ignition Effect: Standard Ignition
	Retraction Effect: Standard Retraction
	Lockup Effect: Intensity Lockup V1, Begin Effect: Real Clash, End Effect: Full Blade Absorb
	LightningBlock Effect: Responsive Lightning Block
	Drag Effect: Intensity Sparking Drag
	Melt Effect: Intensity Melt
	Blast Effect: Blast Wave (Random)
	Clash Effect: Real Clash V1
	*/
		StylePtr<Layers<Mix<HoldPeakF<SwingSpeed<250>,Scale<SwingAcceleration<100>,Int<50>,Int<500>>,Scale<SwingAcceleration<>,Int<20000>,Int<10000>>>,RandomFlicker<StripesX<Int<24000>,Scale<HoldPeakF<SwingSpeed<200>,Scale<SwingAcceleration<100>,Int<50>,Int<300>>,Scale<SwingAcceleration<100>,Int<24000>,Int<16000>>>,Int<-1400>,Int<-100>>,RgbArg<BASE_COLOR_ARG,Rgb<0,135,255>>,RgbArg<BASE_COLOR_ARG,Rgb<0,135,255>>,Mix<Int<7710>,Black,RgbArg<BASE_COLOR_ARG,Rgb<0,135,255>>>,RgbArg<BASE_COLOR_ARG,Rgb<0,135,255>>,Mix<Int<19276>,Black,RgbArg<BASE_COLOR_ARG,Rgb<0,135,255>>>>,RgbArg<BASE_COLOR_ARG,Rgb<0,135,255>>>,RgbArg<BASE_COLOR_ARG,Rgb<0,135,255>>>,TransitionEffectL<TrWaveX<RgbArg<BLAST_COLOR_ARG,Rgb<255,255,255>>,Scale<EffectRandomF<EFFECT_BLAST>,Int<100>,Int<400>>,Int<100>,Scale<EffectPosition<EFFECT_BLAST>,Int<100>,Int<400>>,Scale<EffectPosition<EFFECT_BLAST>,Int<28000>,Int<8000>>>,EFFECT_BLAST>,Mix<IsLessThan<ClashImpactF<>,Int<26000>>,TransitionEffectL<TrConcat<TrInstant,AlphaL<RgbArg<CLASH_COLOR_ARG,Rgb<255,255,255>>,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Sum<IntArg<LOCKUP_POSITION_ARG,15632>,Int<-12000>>,Sum<IntArg<LOCKUP_POSITION_ARG,15632>,Int<10000>>>,Sum<IntArg<LOCKUP_POSITION_ARG,15632>,Int<-10000>>>,Scale<ClashImpactF<>,Int<12000>,Int<60000>>>>,TrFadeX<Scale<ClashImpactF<>,Int<200>,Int<400>>>>,EFFECT_CLASH>,TransitionEffectL<TrWaveX<RgbArg<CLASH_COLOR_ARG,Rgb<255,255,255>>,Scale<ClashImpactF<>,Int<100>,Int<400>>,Int<100>,Scale<ClashImpactF<>,Int<100>,Int<400>>,Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Sum<IntArg<LOCKUP_POSITION_ARG,15632>,Int<-12000>>,Sum<IntArg<LOCKUP_POSITION_ARG,15632>,Int<10000>>>,Sum<IntArg<LOCKUP_POSITION_ARG,15632>,Int<-10000>>>>,EFFECT_CLASH>>,LockupTrL<TransitionEffect<AlphaMixL<Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Sum<IntArg<LOCKUP_POSITION_ARG,15632>,Int<-12000>>,Sum<IntArg<LOCKUP_POSITION_ARG,15632>,Int<10000>>>,Sum<IntArg<LOCKUP_POSITION_ARG,15632>,Int<-10000>>>,Scale<SwingSpeed<100>,Int<14000>,Int<18000>>>,BrownNoiseFlickerL<RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,Int<200>>,StripesX<Int<1800>,Scale<NoisySoundLevel,Int<-3500>,Int<-5000>>,Mix<Int<6425>,Black,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>>,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,Mix<Int<12850>,Black,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>>>>,AlphaL<AudioFlicker<RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,Mix<Int<10280>,Black,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>>>,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Sum<IntArg<LOCKUP_POSITION_ARG,15632>,Int<-12000>>,Sum<IntArg<LOCKUP_POSITION_ARG,15632>,Int<10000>>>,Sum<IntArg<LOCKUP_POSITION_ARG,15632>,Int<-10000>>>,Int<13000>>>,TrJoin<TrDelay<8000>,TrInstant>,TrFade<3000>,EFFECT_LOCKUP_BEGIN>,TrConcat<TrJoin<TrDelay<50>,TrInstant>,Mix<IsLessThan<ClashImpactF<>,Int<26000>>,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,AlphaL<RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Sum<IntArg<LOCKUP_POSITION_ARG,15632>,Int<-12000>>,Sum<IntArg<LOCKUP_POSITION_ARG,15632>,Int<10000>>>,Sum<IntArg<LOCKUP_POSITION_ARG,15632>,Int<-10000>>>,Scale<ClashImpactF<>,Int<20000>,Int<60000>>>>>,TrFade<300>>,TrConcat<TrInstant,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,TrFade<400>>,SaberBase::LOCKUP_NORMAL>,ResponsiveLightningBlockL<Strobe<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,AudioFlicker<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,Blue>,50,1>,TrConcat<TrInstant,AlphaL<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,Bump<Int<12000>,Int<18000>>>,TrFade<200>>,TrConcat<TrInstant,HumpFlickerL<AlphaL<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,Int<16000>>,30>,TrSmoothFade<600>>>,LockupTrL<AlphaL<RandomPerLEDFlickerL<RgbArg<DRAG_COLOR_ARG,Rgb<255,255,255>>>,SmoothStep<IntArg<DRAG_SIZE_ARG,28000>,Int<3000>>>,TrConcat<TrJoin<TrDelay<4000>,TrWipeIn<200>>,AlphaL<BrownNoiseFlickerL<RgbArg<DRAG_COLOR_ARG,Rgb<255,255,255>>,Int<300>>,SmoothStep<IntArg<DRAG_SIZE_ARG,28000>,Int<3000>>>,TrFade<4000>>,TrFade<300>,SaberBase::LOCKUP_DRAG>,LockupTrL<AlphaL<Remap<Scale<RampF,Int<65536>,Int<0>>,StaticFire<Mix<TwistAngle<>,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>,RotateColorsX<Int<3000>,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>>>,Mix<TwistAngle<>,RotateColorsX<Int<3000>,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>>,RotateColorsX<Int<3000>,Mix<Int<12000>,Black,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>>>>,0,3,5,3000,10>>,SmoothStep<IntArg<MELT_SIZE_ARG,28000>,Int<4000>>>,TrConcat<TrWipeIn<100>,AlphaL<RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>,SmoothStep<IntArg<MELT_SIZE_ARG,28000>,Int<4000>>>,TrJoin<TrDelay<4000>,TrFade<300>>,AlphaL<Mix<TwistAngle<>,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>,RotateColorsX<Int<3000>,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>>>,SmoothStep<IntArg<MELT_SIZE_ARG,28000>,Int<4000>>>,TrFade<4000>>,TrWipe<200>,SaberBase::LOCKUP_MELT>,InOutTrL<TrWipeX<IgnitionTime<300>>,TrWipeInX<RetractionTime<0>>,Black>>>(),

		//TOP CC

	/* copyright Fett263 KyloRen (Accent LED / PCB) OS6 Style
https://fett263.com/fett263-proffieOS6-style-library.html#KyloRen
OS6.7 v4.021
Single Style
Base Style: Kylo Ren Unstable (Film Based)

Off Behavior: Slow Pulse Off-On

Base Color: Rgb<0,0,255> (0)

--Effects Included--
Ignition Effect: Glitch On
Retraction Effect: Cycle Down
CoolDown Effect: Unstable Cool Down Reverse
Lockup Effect: Lockup Flash
LightningBlock Effect: Lightning After Effect
Blast Effect: Blast Wave Up (Sound Based)
Clash Effect: Real Clash V1 Up
*/
StylePtr<Layers<StaticFire<BrownNoiseFlicker<RgbArg<BASE_COLOR_ARG,Rgb<0,0,255>>,RandomPerLEDFlicker<Mix<Int<3213>,Black,RgbArg<BASE_COLOR_ARG,Rgb<0,0,255>>>,Mix<Int<7710>,Black,RgbArg<BASE_COLOR_ARG,Rgb<0,0,255>>>>,300>,Mix<Int<10280>,Black,RgbArg<BASE_COLOR_ARG,Rgb<0,0,255>>>,0,6,10,1000,2>,TransitionEffectL<TrConcat<TrJoin<TrDelayX<RetractionTime<5000>>,TrInstant>,Stripes<3000,3500,RgbArg<RETRACTION_COLOR_ARG,Rgb<255,255,255>>,RandomPerLEDFlicker<Mix<Int<7710>,Black,RgbArg<RETRACTION_COLOR_ARG,Rgb<255,255,255>>>,Black>,BrownNoiseFlicker<RgbArg<RETRACTION_COLOR_ARG,Rgb<255,255,255>>,Mix<Int<3855>,Black,RgbArg<RETRACTION_COLOR_ARG,Rgb<255,255,255>>>,200>,RandomPerLEDFlicker<Mix<Int<3137>,Black,RgbArg<RETRACTION_COLOR_ARG,Rgb<255,255,255>>>,Mix<Int<3855>,Black,RgbArg<RETRACTION_COLOR_ARG,Rgb<255,255,255>>>>>,TrFade<800>>,EFFECT_RETRACTION>,TransitionEffectL<TrWaveX<RgbArg<BLAST_COLOR_ARG,Rgb<255,255,255>>,Scale<WavLen<>,Int<100>,Int<400>>,Int<100>,Scale<WavLen<>,Int<100>,Int<400>>,Int<0>>,EFFECT_BLAST>,Mix<IsLessThan<ClashImpactF<>,Int<26000>>,TransitionEffectL<TrWaveX<RgbArg<CLASH_COLOR_ARG,Rgb<255,255,255>>,Scale<ClashImpactF<>,Int<100>,Int<400>>,Int<100>,Scale<ClashImpactF<>,Int<100>,Int<400>>,Int<0>>,EFFECT_CLASH>,AlphaL<White,Int<0>>>,TransitionEffectL<TrConcat<TrInstant,AlphaL<RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,SmoothStep<ClashImpactF<>,Int<-4000>>>,TrFadeX<Scale<ClashImpactF<>,Int<100>,Int<300>>>>,EFFECT_LOCKUP_BEGIN>,TransitionEffectL<TrConcat<TrInstant,AlphaL<RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,SmoothStep<ClashImpactF<>,Int<-4000>>>,TrFadeX<Scale<ClashImpactF<>,Int<100>,Int<300>>>>,EFFECT_LOCKUP_END>,LockupTrL<AlphaL<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,Int<0>>,TrInstant,TrConcat<TrInstant,Strobe<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,AudioFlicker<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,Blue>,50,1>,TrFade<1000>>,SaberBase::LOCKUP_LIGHTNING_BLOCK>,InOutTrL<TrConcat<TrJoin<TrDelayX<Mult<IgnitionTime<3000>,Int<16384>>>,TrWipeX<Mult<IgnitionTime<3000>,Int<16384>>>>,Mix<SmoothStep<NoisySoundLevel,Int<-1>>,Black,RgbArg<IGNITION_COLOR_ARG,Rgb<255,255,255>>>,TrWipeX<Mult<IgnitionTime<3000>,Int<16384>>>>,TrColorCycleX<RetractionTime<5000>>,Pulsing<Black,RgbArg<OFF_COLOR_ARG,Rgb<2,72,255>>,8000>>>>(),},






{ "TROS_Graflex;common", "tracks/TROS_Graflex.wav",
	/* copyright Fett263 Rotoscope (Primary Blade) OS6 Style
	https://fett263.com/fett263-proffieOS6-style-library.html#Rotoscope
	OS6.7 v4.016
	Single Style
	Base Style: Hyper Responsive Rotoscope (Prequels)

	Base Color: Rgb<0,135,255> (0)

	--Effects Included--
	Ignition Effect: Standard Ignition
	Retraction Effect: Standard Retraction
	Lockup Effect: Intensity Lockup V1, Begin Effect: Real Clash, End Effect: Full Blade Absorb
	LightningBlock Effect: Responsive Lightning Block
	Drag Effect: Intensity Sparking Drag
	Melt Effect: Intensity Melt
	Blast Effect: Blast Wave (Random)
	Clash Effect: Real Clash V1
	*/
		StylePtr<Layers<Mix<HoldPeakF<SwingSpeed<250>,Scale<SwingAcceleration<100>,Int<50>,Int<500>>,Scale<SwingAcceleration<>,Int<20000>,Int<10000>>>,RandomFlicker<StripesX<Int<24000>,Scale<HoldPeakF<SwingSpeed<200>,Scale<SwingAcceleration<100>,Int<50>,Int<300>>,Scale<SwingAcceleration<100>,Int<24000>,Int<16000>>>,Int<-1400>,Int<-100>>,RgbArg<BASE_COLOR_ARG,Rgb<0,135,255>>,RgbArg<BASE_COLOR_ARG,Rgb<0,135,255>>,Mix<Int<7710>,Black,RgbArg<BASE_COLOR_ARG,Rgb<0,135,255>>>,RgbArg<BASE_COLOR_ARG,Rgb<0,135,255>>,Mix<Int<19276>,Black,RgbArg<BASE_COLOR_ARG,Rgb<0,135,255>>>>,RgbArg<BASE_COLOR_ARG,Rgb<0,135,255>>>,RgbArg<BASE_COLOR_ARG,Rgb<0,135,255>>>,TransitionEffectL<TrWaveX<RgbArg<BLAST_COLOR_ARG,Rgb<255,255,255>>,Scale<EffectRandomF<EFFECT_BLAST>,Int<100>,Int<400>>,Int<100>,Scale<EffectPosition<EFFECT_BLAST>,Int<100>,Int<400>>,Scale<EffectPosition<EFFECT_BLAST>,Int<28000>,Int<8000>>>,EFFECT_BLAST>,Mix<IsLessThan<ClashImpactF<>,Int<26000>>,TransitionEffectL<TrConcat<TrInstant,AlphaL<RgbArg<CLASH_COLOR_ARG,Rgb<255,255,255>>,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Sum<IntArg<LOCKUP_POSITION_ARG,15632>,Int<-12000>>,Sum<IntArg<LOCKUP_POSITION_ARG,15632>,Int<10000>>>,Sum<IntArg<LOCKUP_POSITION_ARG,15632>,Int<-10000>>>,Scale<ClashImpactF<>,Int<12000>,Int<60000>>>>,TrFadeX<Scale<ClashImpactF<>,Int<200>,Int<400>>>>,EFFECT_CLASH>,TransitionEffectL<TrWaveX<RgbArg<CLASH_COLOR_ARG,Rgb<255,255,255>>,Scale<ClashImpactF<>,Int<100>,Int<400>>,Int<100>,Scale<ClashImpactF<>,Int<100>,Int<400>>,Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Sum<IntArg<LOCKUP_POSITION_ARG,15632>,Int<-12000>>,Sum<IntArg<LOCKUP_POSITION_ARG,15632>,Int<10000>>>,Sum<IntArg<LOCKUP_POSITION_ARG,15632>,Int<-10000>>>>,EFFECT_CLASH>>,LockupTrL<TransitionEffect<AlphaMixL<Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Sum<IntArg<LOCKUP_POSITION_ARG,15632>,Int<-12000>>,Sum<IntArg<LOCKUP_POSITION_ARG,15632>,Int<10000>>>,Sum<IntArg<LOCKUP_POSITION_ARG,15632>,Int<-10000>>>,Scale<SwingSpeed<100>,Int<14000>,Int<18000>>>,BrownNoiseFlickerL<RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,Int<200>>,StripesX<Int<1800>,Scale<NoisySoundLevel,Int<-3500>,Int<-5000>>,Mix<Int<6425>,Black,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>>,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,Mix<Int<12850>,Black,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>>>>,AlphaL<AudioFlicker<RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,Mix<Int<10280>,Black,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>>>,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Sum<IntArg<LOCKUP_POSITION_ARG,15632>,Int<-12000>>,Sum<IntArg<LOCKUP_POSITION_ARG,15632>,Int<10000>>>,Sum<IntArg<LOCKUP_POSITION_ARG,15632>,Int<-10000>>>,Int<13000>>>,TrJoin<TrDelay<8000>,TrInstant>,TrFade<3000>,EFFECT_LOCKUP_BEGIN>,TrConcat<TrJoin<TrDelay<50>,TrInstant>,Mix<IsLessThan<ClashImpactF<>,Int<26000>>,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,AlphaL<RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Sum<IntArg<LOCKUP_POSITION_ARG,15632>,Int<-12000>>,Sum<IntArg<LOCKUP_POSITION_ARG,15632>,Int<10000>>>,Sum<IntArg<LOCKUP_POSITION_ARG,15632>,Int<-10000>>>,Scale<ClashImpactF<>,Int<20000>,Int<60000>>>>>,TrFade<300>>,TrConcat<TrInstant,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,TrFade<400>>,SaberBase::LOCKUP_NORMAL>,ResponsiveLightningBlockL<Strobe<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,AudioFlicker<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,Blue>,50,1>,TrConcat<TrInstant,AlphaL<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,Bump<Int<12000>,Int<18000>>>,TrFade<200>>,TrConcat<TrInstant,HumpFlickerL<AlphaL<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,Int<16000>>,30>,TrSmoothFade<600>>>,LockupTrL<AlphaL<RandomPerLEDFlickerL<RgbArg<DRAG_COLOR_ARG,Rgb<255,255,255>>>,SmoothStep<IntArg<DRAG_SIZE_ARG,28000>,Int<3000>>>,TrConcat<TrJoin<TrDelay<4000>,TrWipeIn<200>>,AlphaL<BrownNoiseFlickerL<RgbArg<DRAG_COLOR_ARG,Rgb<255,255,255>>,Int<300>>,SmoothStep<IntArg<DRAG_SIZE_ARG,28000>,Int<3000>>>,TrFade<4000>>,TrFade<300>,SaberBase::LOCKUP_DRAG>,LockupTrL<AlphaL<Remap<Scale<RampF,Int<65536>,Int<0>>,StaticFire<Mix<TwistAngle<>,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>,RotateColorsX<Int<3000>,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>>>,Mix<TwistAngle<>,RotateColorsX<Int<3000>,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>>,RotateColorsX<Int<3000>,Mix<Int<12000>,Black,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>>>>,0,3,5,3000,10>>,SmoothStep<IntArg<MELT_SIZE_ARG,28000>,Int<4000>>>,TrConcat<TrWipeIn<100>,AlphaL<RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>,SmoothStep<IntArg<MELT_SIZE_ARG,28000>,Int<4000>>>,TrJoin<TrDelay<4000>,TrFade<300>>,AlphaL<Mix<TwistAngle<>,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>,RotateColorsX<Int<3000>,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>>>,SmoothStep<IntArg<MELT_SIZE_ARG,28000>,Int<4000>>>,TrFade<4000>>,TrWipe<200>,SaberBase::LOCKUP_MELT>,InOutTrL<TrWipeX<IgnitionTime<300>>,TrWipeInX<RetractionTime<0>>,Black>>>(),

		//TOP CC

	/* copyright Fett263 KyloRen (Accent LED / PCB) OS6 Style
https://fett263.com/fett263-proffieOS6-style-library.html#KyloRen
OS6.7 v4.021
Single Style
Base Style: Kylo Ren Unstable (Film Based)

Off Behavior: Slow Pulse Off-On

Base Color: Rgb<0,0,255> (0)

--Effects Included--
Ignition Effect: Glitch On
Retraction Effect: Cycle Down
CoolDown Effect: Unstable Cool Down Reverse
Lockup Effect: Lockup Flash
LightningBlock Effect: Lightning After Effect
Blast Effect: Blast Wave Up (Sound Based)
Clash Effect: Real Clash V1 Up
*/
StylePtr<Layers<StaticFire<BrownNoiseFlicker<RgbArg<BASE_COLOR_ARG,Rgb<0,0,255>>,RandomPerLEDFlicker<Mix<Int<3213>,Black,RgbArg<BASE_COLOR_ARG,Rgb<0,0,255>>>,Mix<Int<7710>,Black,RgbArg<BASE_COLOR_ARG,Rgb<0,0,255>>>>,300>,Mix<Int<10280>,Black,RgbArg<BASE_COLOR_ARG,Rgb<0,0,255>>>,0,6,10,1000,2>,TransitionEffectL<TrConcat<TrJoin<TrDelayX<RetractionTime<5000>>,TrInstant>,Stripes<3000,3500,RgbArg<RETRACTION_COLOR_ARG,Rgb<255,255,255>>,RandomPerLEDFlicker<Mix<Int<7710>,Black,RgbArg<RETRACTION_COLOR_ARG,Rgb<255,255,255>>>,Black>,BrownNoiseFlicker<RgbArg<RETRACTION_COLOR_ARG,Rgb<255,255,255>>,Mix<Int<3855>,Black,RgbArg<RETRACTION_COLOR_ARG,Rgb<255,255,255>>>,200>,RandomPerLEDFlicker<Mix<Int<3137>,Black,RgbArg<RETRACTION_COLOR_ARG,Rgb<255,255,255>>>,Mix<Int<3855>,Black,RgbArg<RETRACTION_COLOR_ARG,Rgb<255,255,255>>>>>,TrFade<800>>,EFFECT_RETRACTION>,TransitionEffectL<TrWaveX<RgbArg<BLAST_COLOR_ARG,Rgb<255,255,255>>,Scale<WavLen<>,Int<100>,Int<400>>,Int<100>,Scale<WavLen<>,Int<100>,Int<400>>,Int<0>>,EFFECT_BLAST>,Mix<IsLessThan<ClashImpactF<>,Int<26000>>,TransitionEffectL<TrWaveX<RgbArg<CLASH_COLOR_ARG,Rgb<255,255,255>>,Scale<ClashImpactF<>,Int<100>,Int<400>>,Int<100>,Scale<ClashImpactF<>,Int<100>,Int<400>>,Int<0>>,EFFECT_CLASH>,AlphaL<White,Int<0>>>,TransitionEffectL<TrConcat<TrInstant,AlphaL<RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,SmoothStep<ClashImpactF<>,Int<-4000>>>,TrFadeX<Scale<ClashImpactF<>,Int<100>,Int<300>>>>,EFFECT_LOCKUP_BEGIN>,TransitionEffectL<TrConcat<TrInstant,AlphaL<RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,SmoothStep<ClashImpactF<>,Int<-4000>>>,TrFadeX<Scale<ClashImpactF<>,Int<100>,Int<300>>>>,EFFECT_LOCKUP_END>,LockupTrL<AlphaL<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,Int<0>>,TrInstant,TrConcat<TrInstant,Strobe<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,AudioFlicker<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,Blue>,50,1>,TrFade<1000>>,SaberBase::LOCKUP_LIGHTNING_BLOCK>,InOutTrL<TrConcat<TrJoin<TrDelayX<Mult<IgnitionTime<3000>,Int<16384>>>,TrWipeX<Mult<IgnitionTime<3000>,Int<16384>>>>,Mix<SmoothStep<NoisySoundLevel,Int<-1>>,Black,RgbArg<IGNITION_COLOR_ARG,Rgb<255,255,255>>>,TrWipeX<Mult<IgnitionTime<3000>,Int<16384>>>>,TrColorCycleX<RetractionTime<5000>>,Pulsing<Black,RgbArg<OFF_COLOR_ARG,Rgb<2,72,255>>,8000>>>>(),},




{ "Kart_Racer;common", "tracks/Kart_Racer.wav",
	/* copyright Fett263 RainbowBlade (Primary Blade) OS6 Style
https://fett263.com/fett263-proffieOS6-style-library.html#RainbowBlade
OS6.7 v4.021
Single Style
Base Style: Running Rainbow (Fast)

Base Color: Rgb<255,255,0> (0)

--Effects Included--
Ignition Effect: Standard Ignition
Retraction Effect: Standard Retraction
Lockup Effect: Intensity Lockup V1, Begin Effect: Real Clash, End Effect: Full Blade Absorb
LightningBlock Effect: Responsive Lightning Block
Drag Effect: Intensity Sparking Drag
Melt Effect: Intensity Melt
Blast Effect: Blast Wave (Random)
Clash Effect: Real Clash V1
*/
StylePtr<Layers<Stripes<30000,-300,RgbArg<BASE_COLOR_ARG,Rgb<255,255,0>>,RotateColorsX<Int<5461>,RgbArg<BASE_COLOR_ARG,Rgb<255,255,0>>>,RotateColorsX<Int<10922>,RgbArg<BASE_COLOR_ARG,Rgb<255,255,0>>>,RotateColorsX<Int<16384>,RgbArg<BASE_COLOR_ARG,Rgb<255,255,0>>>,RotateColorsX<Int<21845>,RgbArg<BASE_COLOR_ARG,Rgb<255,255,0>>>,RotateColorsX<Int<27306>,RgbArg<BASE_COLOR_ARG,Rgb<255,255,0>>>>,TransitionEffectL<TrWaveX<RgbArg<BLAST_COLOR_ARG,Rgb<255,255,255>>,Scale<EffectRandomF<EFFECT_BLAST>,Int<100>,Int<400>>,Int<100>,Scale<EffectPosition<EFFECT_BLAST>,Int<100>,Int<400>>,Scale<EffectPosition<EFFECT_BLAST>,Int<28000>,Int<8000>>>,EFFECT_BLAST>,Mix<IsLessThan<ClashImpactF<>,Int<26000>>,TransitionEffectL<TrConcat<TrInstant,AlphaL<RgbArg<CLASH_COLOR_ARG,Rgb<255,255,255>>,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-12000>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<10000>>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-10000>>>,Scale<ClashImpactF<>,Int<12000>,Int<60000>>>>,TrFadeX<Scale<ClashImpactF<>,Int<200>,Int<400>>>>,EFFECT_CLASH>,TransitionEffectL<TrWaveX<RgbArg<CLASH_COLOR_ARG,Rgb<255,255,255>>,Scale<ClashImpactF<>,Int<100>,Int<400>>,Int<100>,Scale<ClashImpactF<>,Int<100>,Int<400>>,Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-12000>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<10000>>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-10000>>>>,EFFECT_CLASH>>,LockupTrL<TransitionEffect<AlphaMixL<Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-12000>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<10000>>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-10000>>>,Scale<SwingSpeed<100>,Int<14000>,Int<18000>>>,BrownNoiseFlickerL<RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,Int<200>>,StripesX<Int<1800>,Scale<NoisySoundLevel,Int<-3500>,Int<-5000>>,Mix<Int<6425>,Black,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>>,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,Mix<Int<12850>,Black,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>>>>,AlphaL<AudioFlicker<RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,Mix<Int<10280>,Black,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>>>,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-12000>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<10000>>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-10000>>>,Int<13000>>>,TrJoin<TrDelay<8000>,TrInstant>,TrFade<3000>,EFFECT_LOCKUP_BEGIN>,TrConcat<TrJoin<TrDelay<50>,TrInstant>,Mix<IsLessThan<ClashImpactF<>,Int<26000>>,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,AlphaL<RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-12000>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<10000>>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-10000>>>,Scale<ClashImpactF<>,Int<20000>,Int<60000>>>>>,TrFade<300>>,TrConcat<TrInstant,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,TrFade<400>>,SaberBase::LOCKUP_NORMAL>,ResponsiveLightningBlockL<Strobe<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,AudioFlicker<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,Blue>,50,1>,TrConcat<TrInstant,AlphaL<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,Bump<Int<12000>,Int<18000>>>,TrFade<200>>,TrConcat<TrInstant,HumpFlickerL<AlphaL<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,Int<16000>>,30>,TrSmoothFade<600>>>,LockupTrL<AlphaL<RandomPerLEDFlickerL<RgbArg<DRAG_COLOR_ARG,Rgb<255,255,255>>>,SmoothStep<IntArg<DRAG_SIZE_ARG,28000>,Int<3000>>>,TrConcat<TrJoin<TrDelay<4000>,TrWipeIn<200>>,AlphaL<BrownNoiseFlickerL<RgbArg<DRAG_COLOR_ARG,Rgb<255,255,255>>,Int<300>>,SmoothStep<IntArg<DRAG_SIZE_ARG,28000>,Int<3000>>>,TrFade<4000>>,TrFade<300>,SaberBase::LOCKUP_DRAG>,LockupTrL<AlphaL<Remap<Scale<RampF,Int<65536>,Int<0>>,StaticFire<Mix<TwistAngle<>,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>,RotateColorsX<Int<3000>,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>>>,Mix<TwistAngle<>,RotateColorsX<Int<3000>,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>>,RotateColorsX<Int<3000>,Mix<Int<12000>,Black,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>>>>,0,3,5,3000,10>>,SmoothStep<IntArg<MELT_SIZE_ARG,28000>,Int<4000>>>,TrConcat<TrWipeIn<100>,AlphaL<RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>,SmoothStep<IntArg<MELT_SIZE_ARG,28000>,Int<4000>>>,TrJoin<TrDelay<4000>,TrFade<300>>,AlphaL<Mix<TwistAngle<>,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>,RotateColorsX<Int<3000>,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>>>,SmoothStep<IntArg<MELT_SIZE_ARG,28000>,Int<4000>>>,TrFade<4000>>,TrWipe<200>,SaberBase::LOCKUP_MELT>,InOutTrL<TrWipeX<IgnitionTime<300>>,TrWipeInX<RetractionTime<0>>,Black>>>(),


		//TOP CC

	/* copyright Fett263 RainbowBlade (Accent LED / PCB) OS6 Style
https://fett263.com/fett263-proffieOS6-style-library.html#RainbowBlade
OS6.7 v4.021
Single Style
Base Style: Running Rainbow (Fast)

Off Behavior: Fast Color Rotate

Base Color: Rgb<255,255,0> (0)

--Effects Included--
Ignition Effect: Glitch On
Retraction Effect: Cycle Down
CoolDown Effect: Unstable Cool Down Reverse
Lockup Effect: Lockup Flash
LightningBlock Effect: Lightning After Effect
Blast Effect: Blast Wave Up (Sound Based)
Clash Effect: Real Clash V1 Up
*/
StylePtr<Layers<Stripes<30000,-300,RgbArg<BASE_COLOR_ARG,Rgb<255,255,0>>,RotateColorsX<Int<5461>,RgbArg<BASE_COLOR_ARG,Rgb<255,255,0>>>,RotateColorsX<Int<10922>,RgbArg<BASE_COLOR_ARG,Rgb<255,255,0>>>,RotateColorsX<Int<16384>,RgbArg<BASE_COLOR_ARG,Rgb<255,255,0>>>,RotateColorsX<Int<21845>,RgbArg<BASE_COLOR_ARG,Rgb<255,255,0>>>,RotateColorsX<Int<27306>,RgbArg<BASE_COLOR_ARG,Rgb<255,255,0>>>>,TransitionEffectL<TrConcat<TrJoin<TrDelayX<RetractionTime<5000>>,TrInstant>,Stripes<3000,3500,RgbArg<RETRACTION_COLOR_ARG,Rgb<255,255,255>>,RandomPerLEDFlicker<Mix<Int<7710>,Black,RgbArg<RETRACTION_COLOR_ARG,Rgb<255,255,255>>>,Black>,BrownNoiseFlicker<RgbArg<RETRACTION_COLOR_ARG,Rgb<255,255,255>>,Mix<Int<3855>,Black,RgbArg<RETRACTION_COLOR_ARG,Rgb<255,255,255>>>,200>,RandomPerLEDFlicker<Mix<Int<3137>,Black,RgbArg<RETRACTION_COLOR_ARG,Rgb<255,255,255>>>,Mix<Int<3855>,Black,RgbArg<RETRACTION_COLOR_ARG,Rgb<255,255,255>>>>>,TrFade<800>>,EFFECT_RETRACTION>,TransitionEffectL<TrWaveX<RgbArg<BLAST_COLOR_ARG,Rgb<255,255,255>>,Scale<WavLen<>,Int<100>,Int<400>>,Int<100>,Scale<WavLen<>,Int<100>,Int<400>>,Int<0>>,EFFECT_BLAST>,Mix<IsLessThan<ClashImpactF<>,Int<26000>>,TransitionEffectL<TrWaveX<RgbArg<CLASH_COLOR_ARG,Rgb<255,255,255>>,Scale<ClashImpactF<>,Int<100>,Int<400>>,Int<100>,Scale<ClashImpactF<>,Int<100>,Int<400>>,Int<0>>,EFFECT_CLASH>,AlphaL<White,Int<0>>>,TransitionEffectL<TrConcat<TrInstant,AlphaL<RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,SmoothStep<ClashImpactF<>,Int<-4000>>>,TrFadeX<Scale<ClashImpactF<>,Int<100>,Int<300>>>>,EFFECT_LOCKUP_BEGIN>,TransitionEffectL<TrConcat<TrInstant,AlphaL<RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,SmoothStep<ClashImpactF<>,Int<-4000>>>,TrFadeX<Scale<ClashImpactF<>,Int<100>,Int<300>>>>,EFFECT_LOCKUP_END>,LockupTrL<AlphaL<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,Int<0>>,TrInstant,TrConcat<TrInstant,Strobe<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,AudioFlicker<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,Blue>,50,1>,TrFade<1000>>,SaberBase::LOCKUP_LIGHTNING_BLOCK>,InOutTrL<TrConcat<TrJoin<TrDelayX<Mult<IgnitionTime<3000>,Int<16384>>>,TrWipeX<Mult<IgnitionTime<3000>,Int<16384>>>>,Mix<SmoothStep<NoisySoundLevel,Int<-1>>,Black,RgbArg<IGNITION_COLOR_ARG,Rgb<255,255,255>>>,TrWipeX<Mult<IgnitionTime<3000>,Int<16384>>>>,TrColorCycleX<RetractionTime<5000>>,RotateColorsX<Saw<Int<5>>,Red>>>>(),},




{ "N1_Mod;common", "tracks/N1_Mod.wav",
	/* copyright Fett263 EnergyBlade (Primary Blade) OS6 Style
https://fett263.com/fett263-proffieOS6-style-library.html#EnergyBlade
OS6.7 v4.021
Single Style
Base Style: HALO Energy Sword

Base Color: Rgb<30,60,200> (0)

--Effects Included--
Ignition Effect: Standard Ignition
Retraction Effect: Standard Retraction
Lockup Effect: Intensity Lockup V1, Begin Effect: Real Clash, End Effect: Full Blade Absorb
LightningBlock Effect: Responsive Lightning Block
Drag Effect: Intensity Sparking Drag
Melt Effect: Intensity Melt
Blast Effect: Blast Wave (Random)
Clash Effect: Real Clash V1
*/
StylePtr<Layers<RandomFlicker<StaticFire<Stripes<12000,-2200,Rgb<100,100,150>,Rgb<50,50,75>,HumpFlicker<Mix<Int<10000>,Black,RgbArg<BASE_COLOR_ARG,Rgb<30,60,200>>>,RgbArg<BASE_COLOR_ARG,Rgb<30,60,200>>,60>>,Rgb<30,30,50>,0,3,0,2100,5>,Rgb<75,75,110>>,TransitionEffectL<TrWaveX<RgbArg<BLAST_COLOR_ARG,Rgb<255,255,255>>,Scale<EffectRandomF<EFFECT_BLAST>,Int<100>,Int<400>>,Int<100>,Scale<EffectPosition<EFFECT_BLAST>,Int<100>,Int<400>>,Scale<EffectPosition<EFFECT_BLAST>,Int<28000>,Int<8000>>>,EFFECT_BLAST>,Mix<IsLessThan<ClashImpactF<>,Int<26000>>,TransitionEffectL<TrConcat<TrInstant,AlphaL<RgbArg<CLASH_COLOR_ARG,Rgb<255,255,255>>,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-12000>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<10000>>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-10000>>>,Scale<ClashImpactF<>,Int<12000>,Int<60000>>>>,TrFadeX<Scale<ClashImpactF<>,Int<200>,Int<400>>>>,EFFECT_CLASH>,TransitionEffectL<TrWaveX<RgbArg<CLASH_COLOR_ARG,Rgb<255,255,255>>,Scale<ClashImpactF<>,Int<100>,Int<400>>,Int<100>,Scale<ClashImpactF<>,Int<100>,Int<400>>,Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-12000>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<10000>>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-10000>>>>,EFFECT_CLASH>>,LockupTrL<TransitionEffect<AlphaMixL<Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-12000>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<10000>>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-10000>>>,Scale<SwingSpeed<100>,Int<14000>,Int<18000>>>,BrownNoiseFlickerL<RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,Int<200>>,StripesX<Int<1800>,Scale<NoisySoundLevel,Int<-3500>,Int<-5000>>,Mix<Int<6425>,Black,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>>,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,Mix<Int<12850>,Black,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>>>>,AlphaL<AudioFlicker<RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,Mix<Int<10280>,Black,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>>>,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-12000>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<10000>>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-10000>>>,Int<13000>>>,TrJoin<TrDelay<8000>,TrInstant>,TrFade<3000>,EFFECT_LOCKUP_BEGIN>,TrConcat<TrJoin<TrDelay<50>,TrInstant>,Mix<IsLessThan<ClashImpactF<>,Int<26000>>,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,AlphaL<RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-12000>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<10000>>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-10000>>>,Scale<ClashImpactF<>,Int<20000>,Int<60000>>>>>,TrFade<300>>,TrConcat<TrInstant,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,TrFade<400>>,SaberBase::LOCKUP_NORMAL>,ResponsiveLightningBlockL<Strobe<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,AudioFlicker<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,Blue>,50,1>,TrConcat<TrInstant,AlphaL<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,Bump<Int<12000>,Int<18000>>>,TrFade<200>>,TrConcat<TrInstant,HumpFlickerL<AlphaL<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,Int<16000>>,30>,TrSmoothFade<600>>>,LockupTrL<AlphaL<RandomPerLEDFlickerL<RgbArg<DRAG_COLOR_ARG,Rgb<255,255,255>>>,SmoothStep<IntArg<DRAG_SIZE_ARG,28000>,Int<3000>>>,TrConcat<TrJoin<TrDelay<4000>,TrWipeIn<200>>,AlphaL<BrownNoiseFlickerL<RgbArg<DRAG_COLOR_ARG,Rgb<255,255,255>>,Int<300>>,SmoothStep<IntArg<DRAG_SIZE_ARG,28000>,Int<3000>>>,TrFade<4000>>,TrFade<300>,SaberBase::LOCKUP_DRAG>,LockupTrL<AlphaL<Remap<Scale<RampF,Int<65536>,Int<0>>,StaticFire<Mix<TwistAngle<>,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>,RotateColorsX<Int<3000>,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>>>,Mix<TwistAngle<>,RotateColorsX<Int<3000>,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>>,RotateColorsX<Int<3000>,Mix<Int<12000>,Black,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>>>>,0,3,5,3000,10>>,SmoothStep<IntArg<MELT_SIZE_ARG,28000>,Int<4000>>>,TrConcat<TrWipeIn<100>,AlphaL<RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>,SmoothStep<IntArg<MELT_SIZE_ARG,28000>,Int<4000>>>,TrJoin<TrDelay<4000>,TrFade<300>>,AlphaL<Mix<TwistAngle<>,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>,RotateColorsX<Int<3000>,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>>>,SmoothStep<IntArg<MELT_SIZE_ARG,28000>,Int<4000>>>,TrFade<4000>>,TrWipe<200>,SaberBase::LOCKUP_MELT>,InOutTrL<TrWipeX<IgnitionTime<300>>,TrWipeInX<RetractionTime<0>>,Black>>>(),



		//TOP CC

	/* copyright Fett263 EnergyBlade (Accent LED / PCB) OS6 Style
https://fett263.com/fett263-proffieOS6-style-library.html#EnergyBlade
OS6.7 v4.021
Single Style
Base Style: HALO Energy Sword

Off Behavior: RandomFlicker (Two Color)

Base Color: Rgb<30,60,200> (0)

--Effects Included--
Ignition Effect: Glitch On
Retraction Effect: Cycle Down
CoolDown Effect: Unstable Cool Down Reverse
Lockup Effect: Lockup Flash
LightningBlock Effect: Lightning After Effect
Blast Effect: Blast Wave Up (Sound Based)
Clash Effect: Real Clash V1 Up
*/
StylePtr<Layers<RandomFlicker<StaticFire<Stripes<12000,-2200,Rgb<100,100,150>,Rgb<50,50,75>,HumpFlicker<Mix<Int<10000>,Black,RgbArg<BASE_COLOR_ARG,Rgb<30,60,200>>>,RgbArg<BASE_COLOR_ARG,Rgb<30,60,200>>,60>>,Rgb<30,30,50>,0,3,0,2100,5>,Rgb<75,75,110>>,TransitionEffectL<TrConcat<TrJoin<TrDelayX<RetractionTime<5000>>,TrInstant>,Stripes<3000,3500,RgbArg<RETRACTION_COLOR_ARG,Rgb<255,255,255>>,RandomPerLEDFlicker<Mix<Int<7710>,Black,RgbArg<RETRACTION_COLOR_ARG,Rgb<255,255,255>>>,Black>,BrownNoiseFlicker<RgbArg<RETRACTION_COLOR_ARG,Rgb<255,255,255>>,Mix<Int<3855>,Black,RgbArg<RETRACTION_COLOR_ARG,Rgb<255,255,255>>>,200>,RandomPerLEDFlicker<Mix<Int<3137>,Black,RgbArg<RETRACTION_COLOR_ARG,Rgb<255,255,255>>>,Mix<Int<3855>,Black,RgbArg<RETRACTION_COLOR_ARG,Rgb<255,255,255>>>>>,TrFade<800>>,EFFECT_RETRACTION>,TransitionEffectL<TrWaveX<RgbArg<BLAST_COLOR_ARG,Rgb<255,255,255>>,Scale<WavLen<>,Int<100>,Int<400>>,Int<100>,Scale<WavLen<>,Int<100>,Int<400>>,Int<0>>,EFFECT_BLAST>,Mix<IsLessThan<ClashImpactF<>,Int<26000>>,TransitionEffectL<TrWaveX<RgbArg<CLASH_COLOR_ARG,Rgb<255,255,255>>,Scale<ClashImpactF<>,Int<100>,Int<400>>,Int<100>,Scale<ClashImpactF<>,Int<100>,Int<400>>,Int<0>>,EFFECT_CLASH>,AlphaL<White,Int<0>>>,TransitionEffectL<TrConcat<TrInstant,AlphaL<RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,SmoothStep<ClashImpactF<>,Int<-4000>>>,TrFadeX<Scale<ClashImpactF<>,Int<100>,Int<300>>>>,EFFECT_LOCKUP_BEGIN>,TransitionEffectL<TrConcat<TrInstant,AlphaL<RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,SmoothStep<ClashImpactF<>,Int<-4000>>>,TrFadeX<Scale<ClashImpactF<>,Int<100>,Int<300>>>>,EFFECT_LOCKUP_END>,LockupTrL<AlphaL<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,Int<0>>,TrInstant,TrConcat<TrInstant,Strobe<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,AudioFlicker<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,Blue>,50,1>,TrFade<1000>>,SaberBase::LOCKUP_LIGHTNING_BLOCK>,InOutTrL<TrConcat<TrJoin<TrDelayX<Mult<IgnitionTime<3000>,Int<16384>>>,TrWipeX<Mult<IgnitionTime<3000>,Int<16384>>>>,Mix<SmoothStep<NoisySoundLevel,Int<-1>>,Black,RgbArg<IGNITION_COLOR_ARG,Rgb<255,255,255>>>,TrWipeX<Mult<IgnitionTime<3000>,Int<16384>>>>,TrColorCycleX<RetractionTime<5000>>,RandomFlicker<RgbArg<BASE_COLOR_ARG,Rgb<30,60,200>>,RgbArg<ALT_COLOR_ARG,Rgb<15,30,100>>>>>>(),},







{ "Strange;common", "tracks/Strange.wav",
	/* copyright Fett263 TornadoBlade (Primary Blade) OS6 Style
https://fett263.com/fett263-proffieOS6-style-library.html#TornadoBlade
OS6.7 v4.021
Single Style
Base Style: Interactive Tornado Blade

Base Color: Rgb<255,97,0> (0)
Interactive Tornado Blade Interactive Control: Swing to build up momentum on blade, clash to dissipate.

--Effects Included--
Ignition Effect: Standard Ignition
Retraction Effect: Standard Retraction
Lockup Effect: Intensity Lockup V1, Begin Effect: Real Clash, End Effect: Full Blade Absorb
LightningBlock Effect: Responsive Lightning Block
Drag Effect: Intensity Sparking Drag
Melt Effect: Intensity Melt
Blast Effect: Blast Wave (Random)
Clash Effect: Real Clash V1
*/
StylePtr<Layers<Black,ColorSelect<IncrementWithReset<ThresholdPulseF<SwingSpeed<400>,Int<18000>>,Sum<EffectPulseF<EFFECT_CLASH>,EffectPulseF<EFFECT_LOCKUP_BEGIN>>,Int<1>>,TrSelect<IncrementWithReset<ThresholdPulseF<SwingSpeed<400>,Int<18000>>,Sum<EffectPulseF<EFFECT_CLASH>,EffectPulseF<EFFECT_LOCKUP_BEGIN>>,Int<1>>,TrCenterWipeX<Int<200>>,TrCenterWipeInX<Int<200>>>,RandomFlicker<RgbArg<BASE_COLOR_ARG,Rgb<255,97,0>>,Mix<Int<18000>,Black,RgbArg<BASE_COLOR_ARG,Rgb<255,97,0>>>>,Mix<LinearSectionF<Int<16384>,Int<2000>>,Remap<CenterDistF<Int<16384>>,StripesX<Scale<IncrementWithReset<ThresholdPulseF<SwingSpeed<400>,Int<18000>>,Sum<EffectPulseF<EFFECT_CLASH>,EffectPulseF<EFFECT_LOCKUP_BEGIN>>,Int<8000>,Int<1000>>,Int<8000>,Int<2000>>,IncrementWithReset<ThresholdPulseF<SwingSpeed<400>,Int<18000>>,Sum<EffectPulseF<EFFECT_CLASH>,EffectPulseF<EFFECT_LOCKUP_BEGIN>>,Int<6000>,Int<600>>,Mix<Int<4000>,Black,RgbArg<BASE_COLOR_ARG,Rgb<255,97,0>>>,RgbArg<BASE_COLOR_ARG,Rgb<255,97,0>>,Mix<Scale<IncrementWithReset<ThresholdPulseF<SwingSpeed<400>,Int<18000>>,Sum<EffectPulseF<EFFECT_CLASH>,EffectPulseF<EFFECT_LOCKUP_BEGIN>>,Int<16000>,Int<2000>>,Int<16000>,Int<2000>>,Black,RgbArg<BASE_COLOR_ARG,Rgb<255,97,0>>>>>,Mix<Int<2000>,Black,RgbArg<BASE_COLOR_ARG,Rgb<255,97,0>>>>>,TransitionEffectL<TrWaveX<RgbArg<BLAST_COLOR_ARG,Rgb<255,255,255>>,Scale<EffectRandomF<EFFECT_BLAST>,Int<100>,Int<400>>,Int<100>,Scale<EffectPosition<EFFECT_BLAST>,Int<100>,Int<400>>,Scale<EffectPosition<EFFECT_BLAST>,Int<28000>,Int<8000>>>,EFFECT_BLAST>,Mix<IsLessThan<ClashImpactF<>,Int<26000>>,TransitionEffectL<TrConcat<TrInstant,AlphaL<RgbArg<CLASH_COLOR_ARG,Rgb<255,255,255>>,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-12000>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<10000>>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-10000>>>,Scale<ClashImpactF<>,Int<12000>,Int<60000>>>>,TrFadeX<Scale<ClashImpactF<>,Int<200>,Int<400>>>>,EFFECT_CLASH>,TransitionEffectL<TrWaveX<RgbArg<CLASH_COLOR_ARG,Rgb<255,255,255>>,Scale<ClashImpactF<>,Int<100>,Int<400>>,Int<100>,Scale<ClashImpactF<>,Int<100>,Int<400>>,Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-12000>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<10000>>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-10000>>>>,EFFECT_CLASH>>,LockupTrL<TransitionEffect<AlphaMixL<Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-12000>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<10000>>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-10000>>>,Scale<SwingSpeed<100>,Int<14000>,Int<18000>>>,BrownNoiseFlickerL<RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,Int<200>>,StripesX<Int<1800>,Scale<NoisySoundLevel,Int<-3500>,Int<-5000>>,Mix<Int<6425>,Black,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>>,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,Mix<Int<12850>,Black,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>>>>,AlphaL<AudioFlicker<RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,Mix<Int<10280>,Black,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>>>,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-12000>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<10000>>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-10000>>>,Int<13000>>>,TrJoin<TrDelay<8000>,TrInstant>,TrFade<3000>,EFFECT_LOCKUP_BEGIN>,TrConcat<TrJoin<TrDelay<50>,TrInstant>,Mix<IsLessThan<ClashImpactF<>,Int<26000>>,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,AlphaL<RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-12000>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<10000>>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-10000>>>,Scale<ClashImpactF<>,Int<20000>,Int<60000>>>>>,TrFade<300>>,TrConcat<TrInstant,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,TrFade<400>>,SaberBase::LOCKUP_NORMAL>,ResponsiveLightningBlockL<Strobe<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,AudioFlicker<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,Blue>,50,1>,TrConcat<TrInstant,AlphaL<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,Bump<Int<12000>,Int<18000>>>,TrFade<200>>,TrConcat<TrInstant,HumpFlickerL<AlphaL<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,Int<16000>>,30>,TrSmoothFade<600>>>,LockupTrL<AlphaL<RandomPerLEDFlickerL<RgbArg<DRAG_COLOR_ARG,Rgb<255,255,255>>>,SmoothStep<IntArg<DRAG_SIZE_ARG,28000>,Int<3000>>>,TrConcat<TrJoin<TrDelay<4000>,TrWipeIn<200>>,AlphaL<BrownNoiseFlickerL<RgbArg<DRAG_COLOR_ARG,Rgb<255,255,255>>,Int<300>>,SmoothStep<IntArg<DRAG_SIZE_ARG,28000>,Int<3000>>>,TrFade<4000>>,TrFade<300>,SaberBase::LOCKUP_DRAG>,LockupTrL<AlphaL<Remap<Scale<RampF,Int<65536>,Int<0>>,StaticFire<Mix<TwistAngle<>,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>,RotateColorsX<Int<3000>,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>>>,Mix<TwistAngle<>,RotateColorsX<Int<3000>,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>>,RotateColorsX<Int<3000>,Mix<Int<12000>,Black,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>>>>,0,3,5,3000,10>>,SmoothStep<IntArg<MELT_SIZE_ARG,28000>,Int<4000>>>,TrConcat<TrWipeIn<100>,AlphaL<RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>,SmoothStep<IntArg<MELT_SIZE_ARG,28000>,Int<4000>>>,TrJoin<TrDelay<4000>,TrFade<300>>,AlphaL<Mix<TwistAngle<>,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>,RotateColorsX<Int<3000>,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>>>,SmoothStep<IntArg<MELT_SIZE_ARG,28000>,Int<4000>>>,TrFade<4000>>,TrWipe<200>,SaberBase::LOCKUP_MELT>,InOutTrL<TrWipeX<IgnitionTime<300>>,TrWipeInX<RetractionTime<0>>,Black>>>(),




		//TOP CC

	/* copyright Fett263 TornadoBlade (Accent LED / PCB) OS6 Style
https://fett263.com/fett263-proffieOS6-style-library.html#TornadoBlade
OS6.7 v4.021
Single Style
Base Style: Interactive Tornado Blade

Off Behavior: RandomFlicker (Two Color)

Base Color: Rgb<255,68,0> (0)
Interactive Tornado Blade Interactive Control: Swing to build up momentum on blade, clash to dissipate.

--Effects Included--
Ignition Effect: Glitch On
Retraction Effect: Cycle Down
CoolDown Effect: Unstable Cool Down Reverse
Lockup Effect: Lockup Flash
LightningBlock Effect: Lightning After Effect
Blast Effect: Blast Wave Up (Sound Based)
Clash Effect: Real Clash V1 Up
*/
StylePtr<Layers<Black,ColorSelect<IncrementWithReset<ThresholdPulseF<SwingSpeed<400>,Int<18000>>,Sum<EffectPulseF<EFFECT_CLASH>,EffectPulseF<EFFECT_LOCKUP_BEGIN>>,Int<1>>,TrSelect<IncrementWithReset<ThresholdPulseF<SwingSpeed<400>,Int<18000>>,Sum<EffectPulseF<EFFECT_CLASH>,EffectPulseF<EFFECT_LOCKUP_BEGIN>>,Int<1>>,TrCenterWipeX<Int<200>>,TrCenterWipeInX<Int<200>>>,RandomFlicker<RgbArg<BASE_COLOR_ARG,Rgb<255,68,0>>,Mix<Int<18000>,Black,RgbArg<BASE_COLOR_ARG,Rgb<255,68,0>>>>,Mix<LinearSectionF<Int<16384>,Int<2000>>,Remap<CenterDistF<Int<16384>>,StripesX<Scale<IncrementWithReset<ThresholdPulseF<SwingSpeed<400>,Int<18000>>,Sum<EffectPulseF<EFFECT_CLASH>,EffectPulseF<EFFECT_LOCKUP_BEGIN>>,Int<8000>,Int<1000>>,Int<8000>,Int<2000>>,IncrementWithReset<ThresholdPulseF<SwingSpeed<400>,Int<18000>>,Sum<EffectPulseF<EFFECT_CLASH>,EffectPulseF<EFFECT_LOCKUP_BEGIN>>,Int<6000>,Int<600>>,Mix<Int<4000>,Black,RgbArg<BASE_COLOR_ARG,Rgb<255,68,0>>>,RgbArg<BASE_COLOR_ARG,Rgb<255,68,0>>,Mix<Scale<IncrementWithReset<ThresholdPulseF<SwingSpeed<400>,Int<18000>>,Sum<EffectPulseF<EFFECT_CLASH>,EffectPulseF<EFFECT_LOCKUP_BEGIN>>,Int<16000>,Int<2000>>,Int<16000>,Int<2000>>,Black,RgbArg<BASE_COLOR_ARG,Rgb<255,68,0>>>>>,Mix<Int<2000>,Black,RgbArg<BASE_COLOR_ARG,Rgb<255,68,0>>>>>,TransitionEffectL<TrConcat<TrJoin<TrDelayX<RetractionTime<5000>>,TrInstant>,Stripes<3000,3500,RgbArg<RETRACTION_COLOR_ARG,Rgb<255,255,255>>,RandomPerLEDFlicker<Mix<Int<7710>,Black,RgbArg<RETRACTION_COLOR_ARG,Rgb<255,255,255>>>,Black>,BrownNoiseFlicker<RgbArg<RETRACTION_COLOR_ARG,Rgb<255,255,255>>,Mix<Int<3855>,Black,RgbArg<RETRACTION_COLOR_ARG,Rgb<255,255,255>>>,200>,RandomPerLEDFlicker<Mix<Int<3137>,Black,RgbArg<RETRACTION_COLOR_ARG,Rgb<255,255,255>>>,Mix<Int<3855>,Black,RgbArg<RETRACTION_COLOR_ARG,Rgb<255,255,255>>>>>,TrFade<800>>,EFFECT_RETRACTION>,TransitionEffectL<TrWaveX<RgbArg<BLAST_COLOR_ARG,Rgb<255,255,255>>,Scale<WavLen<>,Int<100>,Int<400>>,Int<100>,Scale<WavLen<>,Int<100>,Int<400>>,Int<0>>,EFFECT_BLAST>,Mix<IsLessThan<ClashImpactF<>,Int<26000>>,TransitionEffectL<TrWaveX<RgbArg<CLASH_COLOR_ARG,Rgb<255,255,255>>,Scale<ClashImpactF<>,Int<100>,Int<400>>,Int<100>,Scale<ClashImpactF<>,Int<100>,Int<400>>,Int<0>>,EFFECT_CLASH>,AlphaL<White,Int<0>>>,TransitionEffectL<TrConcat<TrInstant,AlphaL<RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,SmoothStep<ClashImpactF<>,Int<-4000>>>,TrFadeX<Scale<ClashImpactF<>,Int<100>,Int<300>>>>,EFFECT_LOCKUP_BEGIN>,TransitionEffectL<TrConcat<TrInstant,AlphaL<RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,SmoothStep<ClashImpactF<>,Int<-4000>>>,TrFadeX<Scale<ClashImpactF<>,Int<100>,Int<300>>>>,EFFECT_LOCKUP_END>,LockupTrL<AlphaL<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,Int<0>>,TrInstant,TrConcat<TrInstant,Strobe<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,AudioFlicker<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,Blue>,50,1>,TrFade<1000>>,SaberBase::LOCKUP_LIGHTNING_BLOCK>,InOutTrL<TrConcat<TrJoin<TrDelayX<Mult<IgnitionTime<3000>,Int<16384>>>,TrWipeX<Mult<IgnitionTime<3000>,Int<16384>>>>,Mix<SmoothStep<NoisySoundLevel,Int<-1>>,Black,RgbArg<IGNITION_COLOR_ARG,Rgb<255,255,255>>>,TrWipeX<Mult<IgnitionTime<3000>,Int<16384>>>>,TrColorCycleX<RetractionTime<5000>>,RandomFlicker<RgbArg<BASE_COLOR_ARG,Rgb<255,68,0>>,RgbArg<ALT_COLOR_ARG,Rgb<255,97,0>>>>>>(),},



};
BladeConfig blades[] = {
 { 0, WS281XBladePtr<144, bladePin, Color8::GRB, PowerPINS<bladePowerPin2, bladePowerPin3> >(),
     WS281XBladePtr<1, blade4Pin, Color8::GRB, PowerPINS<bladePowerPin6> >()
   , CONFIGARRAY(presets) },
};
#endif

#ifdef CONFIG_BUTTONS
Button PowerButton(BUTTON_POWER, powerButtonPin, "pow");
Button AuxButton(BUTTON_AUX, auxPin, "aux");
#endif
