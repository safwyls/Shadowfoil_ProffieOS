#ifdef CONFIG_TOP
#include "proffieboard_v3_config.h"
#define NUM_BLADES 5
#define NUM_BUTTONS 2
#define VOLUME 2400
const unsigned int maxLedsPerStrip = 144;
#define CLASH_THRESHOLD_G 2.5
#define ENABLE_AUDIO
#define ENABLE_MOTION
#define ENABLE_WS2811
#define ENABLE_SD
#define ENABLE_SSD1306
#define SHARED_POWER_PINS
#define SAVE_STATE
#define IDLE_OFF_TIME 60 * 5 * 1000	//5 minutes
// should not be needed, only use if you run out of memory while compiling
#define DISABLE_DIAGNOSTIC_COMMANDS
#endif

#ifdef CONFIG_PROP
#include "../props/saber_shtok_buttons.h"
#endif

#ifdef CONFIG_PRESETS
Preset presets[] = {
	//Jesse Tusken Terminator
	{ "tusken", "tusken/tracks/Tusken_Camp.wav",
		//Jedi DeepSkyBlue Default
		//Standard Ignition: 300
		//Standard Retraction: 500
		//Lockup Effect: Animated Lockup
		//Lightning Block: Responsive Lightning block
		//Blast Effect: Responsive Blast
		//Clash Effect: Responsive Clash with Wave V2 (Mid-Blade)
		//Power Save: Gradual
		StylePtr<Layers<AudioFlicker<RotateColorsX<Variation,DeepSkyBlue>,RotateColorsX<Variation,Rgb<0,0,128>>>,TransitionEffectL<TrConcat<TrInstant,BrownNoiseFlickerL<AlphaL<White,Int<16000>>,Int<50>>,TrSmoothFade<600>>,EFFECT_LOCKUP_END>,LockupTrL<AlphaL<Strobe<White,BrownNoiseFlicker<White,Red,300>,50,1>,Bump<Sin<Int<10>,Int<10000>,Int<20000>>,Int<12000>>>,TrConcat<TrInstant,White,TrFade<200>>,TrFade<400>,SaberBase::LOCKUP_NORMAL>,ResponsiveLightningBlockL<Strobe<White,AudioFlicker<White,Blue>,50,1>,TrConcat<TrInstant,AlphaL<White,Bump<Int<12000>,Int<18000>>>,TrFade<200>>,TrConcat<TrInstant,HumpFlickerL<AlphaL<White,Int<16000>>,30>,TrSmoothFade<600>>>,ResponsiveBlastL<White,Int<400>,Scale<SwingSpeed<200>,Int<100>,Int<400>>,Int<400>>,ResponsiveBlastWaveL<White,Int<300>,Int<100>,Int<300>,Scale<BladeAngle<0,16000>,Int<10000>,Int<30000>>,Int<10000>,EFFECT_CLASH>,ResponsiveStabL<Red,TrWipeIn<600>,TrWipe<600>>,ResponsiveDragL<BrownNoiseFlickerL<White,Int<300>>,TrWipeIn<400>,TrFade<400>>,ResponsiveMeltL<Mix<TwistAngle<>,Red,Orange>,TrWipeIn<600>,TrSmoothFade<600>>,InOutTrL<TrWipe<300>,TrWipeIn<500>,Black>,AlphaL<Black,Scale<IsLessThan<BatteryLevel,Int<10000>>,Int<0>,Scale<BatteryLevel,Int<16384>,Int<7500>>>>>>(),

		StylePtr<Layers<AudioFlicker<RotateColorsX<Variation,DeepSkyBlue>,RotateColorsX<Variation,Rgb<0,0,128>>> ,InOutTrL<TrInstant,TrFade<300>,Layers<Black,TransitionEffectL<TrConcat<TrInstant,Pulsing<RotateColorsX<Variation,DeepSkyBlue>,RotateColorsX<Variation,Rgb<0,4,10>>,10000>,TrDelay<180000>,Pulsing<RotateColorsX<Variation,DeepSkyBlue>,RotateColorsX<Variation,Rgb<0,4,10>>,10000>,TrFade<1000>>,EFFECT_BOOT>,TransitionEffectL<TrConcat<TrInstant,Pulsing<RotateColorsX<Variation,DeepSkyBlue>,RotateColorsX<Variation,Rgb<0,4,10>>,10000>,TrDelay<180000>,Pulsing<RotateColorsX<Variation,DeepSkyBlue>,RotateColorsX<Variation,Rgb<0,4,10>>,10000>,TrFade<1000>>,EFFECT_NEWFONT>,TransitionEffectL<TrConcat<TrInstant,Pulsing<RotateColorsX<Variation,DeepSkyBlue>,RotateColorsX<Variation,Rgb<0,4,10>>,10000>,TrDelay<180000>,Pulsing<RotateColorsX<Variation,DeepSkyBlue>,RotateColorsX<Variation,Rgb<0,4,10>>,10000>,TrFade<1000>>,EFFECT_RETRACTION>>>>>(),

		StylePtr<Layers<RotateColorsX<Variation,Rgb<180,130,0>>,TransitionEffectL<TrConcat<TrInstant,BrownNoiseFlickerL<AlphaL<White,Int<16000>>,Int<50>>,TrSmoothFade<600>>,EFFECT_LOCKUP_END>,ResponsiveLockupL<Strobe<White,BrownNoiseFlicker<White,Red,300>,50,1>,TrConcat<TrInstant,White,TrFade<400>>,TrFade<100>,Scale<BladeAngle<0,16000>,Int<4000>,Int<26000>>,Int<6000>,Scale<SwingSpeed<100>,Int<10000>,Int<14000>>>,ResponsiveLightningBlockL<Strobe<White,AudioFlicker<White,Blue>,50,1>,TrConcat<TrInstant,AlphaL<White,Bump<Int<12000>,Int<18000>>>,TrFade<200>>,TrConcat<TrInstant,HumpFlickerL<AlphaL<White,Int<16000>>,30>,TrSmoothFade<600>>>,AlphaL<TransitionEffect<White,Rgb<128,0,0>,TrInstant,TrConcat<TrFade<1500>,Red,TrFade<2000>,Orange,TrFade<2500>>,EFFECT_IGNITION>,Bump<Int<0>,Int<6000>>>,ResponsiveStabL<Red,TrWipeIn<600>,TrWipe<600>>,ResponsiveBlastL<White,Int<400>,Scale<SwingSpeed<200>,Int<100>,Int<400>>,Int<400>>,ResponsiveClashL<White,TrInstant,TrFade<400>,Scale<BladeAngle<0,16000>,Int<4000>,Int<26000>>,Int<6000>>,LockupTrL<AlphaL<BrownNoiseFlickerL<White,Int<300>>,SmoothStep<Int<30000>,Int<5000>>>,TrWipeIn<400>,TrFade<300>,SaberBase::LOCKUP_DRAG>,LockupTrL<AlphaL<Mix<TwistAngle<>,Red,Orange>,SmoothStep<Int<28000>,Int<5000>>>,TrWipeIn<600>,TrFade<300>,SaberBase::LOCKUP_MELT>,InOutTrL<TrWipe<7000>,TrWipeIn<500>,Black>,TransitionEffectL<TrConcat<TrInstant,AlphaL<White,Bump<Int<0>,Int<10000>>>,TrFade<3000>,AlphaL<Orange,Bump<Int<0>,Int<8000>>>,TrFade<3000>,AlphaL<Red,Bump<Int<0>,Int<6000>>>,TrFade<2000>>,EFFECT_RETRACTION>,TransitionEffectL<TrConcat<TrFade<2000>,AlphaL<HumpFlickerL<Red,10>,Bump<Int<0>,Int<4000>>>,TrFade<2950>,AlphaL<HumpFlickerL<Orange,15>,Bump<Int<0>,Int<5000>>>,TrFade<3000>,AlphaL<HumpFlickerL<White,20>,Bump<Int<0>,Int<6000>>>,TrBoing<1000,3>>,EFFECT_PREON>>>(),

		//green: slow blink when idle, faster blink when saber is on, lockup mimics blade
				/* copyright Fett263 (Accent LED / PCB) OS7 Style
		https://www.fett263.com/fett263-proffieOS7-style-library.html#Rotoscope
		OS7.14 v2.241p
		Single Style
		On Behavior: Blinking On-Off [Color: BaseColorArg]
		Off Behavior: Slow Pulse Off-On [Color: Match ON Color]

		Base Color: BaseColorArg (0)

		--Effects Included--
		Ignition Effect: Instant [Color: IgnitionColorArg]
		Retraction Effect: Instant [Color: RetractionColorArg]
		Lockup Effect: NoneLightning Block Effect: NoneDrag Effect:
		0: accentDragMulti0Shape - Begin: Wipe In - Style: Intensity Sparking Drag - End: Wipe Out
		[Color: DragColorArg]
		Melt Effect:
		0: accentMeltMulti0Shape - Begin: Wipe In - Style: Intensity Melt - End: Wipe Out
		[Color: StabColorArg]
		*/
		StylePtr<Layers<Blinking<RgbArg<BASE_COLOR_ARG,Rgb<0,255,0>>,Black,500,500>,LockupTrL<AlphaL<TransitionEffect<RandomPerLEDFlickerL<RgbArg<DRAG_COLOR_ARG,Rgb<255,255,255>>>,BrownNoiseFlickerL<RgbArg<DRAG_COLOR_ARG,Rgb<255,255,255>>,Int<300>>,TrExtend<4000,TrInstant>,TrFade<4000>,EFFECT_DRAG_BEGIN>,SmoothStep<Scale<TwistAngle<>,IntArg<DRAG_SIZE_ARG,31000>,Int<30000>>,Int<3000>>>,TrWipeIn<200>,TrWipe<200>,SaberBase::LOCKUP_DRAG,Int<1>>,LockupTrL<AlphaL<Stripes<2000,4000,Mix<TwistAngle<>,RgbArg<STAB_COLOR_ARG,Rgb<255,68,0>>,RotateColorsX<Int<3000>,RgbArg<STAB_COLOR_ARG,Rgb<255,68,0>>>>,Mix<Sin<Int<50>>,Black,Mix<TwistAngle<>,RgbArg<STAB_COLOR_ARG,Rgb<255,68,0>>,RotateColorsX<Int<3000>,RgbArg<STAB_COLOR_ARG,Rgb<255,68,0>>>>>,Mix<Int<4096>,Black,Mix<TwistAngle<>,RgbArg<STAB_COLOR_ARG,Rgb<255,68,0>>,RotateColorsX<Int<3000>,RgbArg<STAB_COLOR_ARG,Rgb<255,68,0>>>>>>,SmoothStep<Scale<TwistAngle<>,IntArg<MELT_SIZE_ARG,26000>,Int<30000>>,Int<3000>>>,TrConcat<TrExtend<4000,TrWipeIn<200>>,AlphaL<HumpFlicker<Mix<TwistAngle<>,RgbArg<STAB_COLOR_ARG,Rgb<255,68,0>>,RotateColorsX<Int<3000>,RgbArg<STAB_COLOR_ARG,Rgb<255,68,0>>>>,RotateColorsX<Int<3000>,Mix<TwistAngle<>,RgbArg<STAB_COLOR_ARG,Rgb<255,68,0>>,RotateColorsX<Int<3000>,RgbArg<STAB_COLOR_ARG,Rgb<255,68,0>>>>>,100>,SmoothStep<Scale<TwistAngle<>,IntArg<MELT_SIZE_ARG,26000>,Int<30000>>,Int<3000>>>,TrFade<4000>>,TrWipe<200>,SaberBase::LOCKUP_MELT,Int<1>>,InOutTrL<TrInstant,TrInstant,Pulsing<Black,RgbArg<BASE_COLOR_ARG,Rgb<0,255,0>>,8000>>>>(),


		//red: slow blink when idle, faster blink when saber is on, lockup turns off (blinks alternate with green)
		/* copyright Fett263 (Accent LED / PCB) OS7 Style
		https://www.fett263.com/fett263-proffieOS7-style-library.html#Rotoscope
		OS7.14 v2.241p
		Single Style
		On Behavior: Blinking On-Off [Color: BaseColorArg]
		Off Behavior: Slow Pulse Off-On [Color: Match ON Color]

		Base Color: BaseColorArg (0)

		--Effects Included--
		Ignition Effect: Instant [Color: IgnitionColorArg]
		Retraction Effect: Instant [Color: RetractionColorArg]
		Lockup Effect: NoneLightning Block Effect: NoneDrag Effect:
		0: accentDragMulti0Shape - Begin: Wipe In - Style: Intensity Sparking Drag - End: Wipe Out
		[Color: DragColorArg]
		Melt Effect:
		0: accentMeltMulti0Shape - Begin: Wipe In - Style: Intensity Melt - End: Wipe Out
		[Color: StabColorArg]
		*/
		StylePtr<Layers<Blinking<RgbArg<BASE_COLOR_ARG,Rgb<255,0,0>>,Black,500,500>,LockupTrL<AlphaL<TransitionEffect<RandomPerLEDFlickerL<RgbArg<DRAG_COLOR_ARG,Rgb<255,255,255>>>,BrownNoiseFlickerL<RgbArg<DRAG_COLOR_ARG,Rgb<255,255,255>>,Int<300>>,TrExtend<4000,TrInstant>,TrFade<4000>,EFFECT_DRAG_BEGIN>,SmoothStep<Scale<TwistAngle<>,IntArg<DRAG_SIZE_ARG,31000>,Int<30000>>,Int<3000>>>,TrWipeIn<200>,TrWipe<200>,SaberBase::LOCKUP_DRAG,Int<1>>,LockupTrL<AlphaL<Stripes<2000,4000,Mix<TwistAngle<>,RgbArg<STAB_COLOR_ARG,Rgb<255,68,0>>,RotateColorsX<Int<3000>,RgbArg<STAB_COLOR_ARG,Rgb<255,68,0>>>>,Mix<Sin<Int<50>>,Black,Mix<TwistAngle<>,RgbArg<STAB_COLOR_ARG,Rgb<255,68,0>>,RotateColorsX<Int<3000>,RgbArg<STAB_COLOR_ARG,Rgb<255,68,0>>>>>,Mix<Int<4096>,Black,Mix<TwistAngle<>,RgbArg<STAB_COLOR_ARG,Rgb<255,68,0>>,RotateColorsX<Int<3000>,RgbArg<STAB_COLOR_ARG,Rgb<255,68,0>>>>>>,SmoothStep<Scale<TwistAngle<>,IntArg<MELT_SIZE_ARG,26000>,Int<30000>>,Int<3000>>>,TrConcat<TrExtend<4000,TrWipeIn<200>>,AlphaL<HumpFlicker<Mix<TwistAngle<>,RgbArg<STAB_COLOR_ARG,Rgb<255,68,0>>,RotateColorsX<Int<3000>,RgbArg<STAB_COLOR_ARG,Rgb<255,68,0>>>>,RotateColorsX<Int<3000>,Mix<TwistAngle<>,RgbArg<STAB_COLOR_ARG,Rgb<255,68,0>>,RotateColorsX<Int<3000>,RgbArg<STAB_COLOR_ARG,Rgb<255,68,0>>>>>,100>,SmoothStep<Scale<TwistAngle<>,IntArg<MELT_SIZE_ARG,26000>,Int<30000>>,Int<3000>>>,TrFade<4000>>,TrWipe<200>,SaberBase::LOCKUP_MELT,Int<1>>,InOutTrL<TrInstant,TrInstant,Pulsing<Black,RgbArg<BASE_COLOR_ARG,Rgb<255,0,0>>,8000>>>>(),},

	//Jesse Hero Pack Anakin
	{ "Ani3", "tracks/Ani3.wav",
		//Jedi Blue Default
		//Standard Ignition: 300
		//Standard Retraction: 500
		//Lockup Effect: Animated Lockup
		//Lightning Block: Responsive Lightning block
		//Blast Effect: Responsive Blast
		//Clash Effect: Responsive Clash with Wave V2 (Mid-Blade)
		//Power Save: Gradual
		StylePtr<Layers<AudioFlicker<RotateColorsX<Variation,Blue>,RotateColorsX<Variation,Rgb<0,0,128>>>,TransitionEffectL<TrConcat<TrInstant,BrownNoiseFlickerL<AlphaL<White,Int<16000>>,Int<50>>,TrSmoothFade<600>>,EFFECT_LOCKUP_END>,LockupTrL<AlphaL<Strobe<White,BrownNoiseFlicker<White,Red,300>,50,1>,Bump<Sin<Int<10>,Int<10000>,Int<20000>>,Int<12000>>>,TrConcat<TrInstant,White,TrFade<200>>,TrFade<400>,SaberBase::LOCKUP_NORMAL>,ResponsiveLightningBlockL<Strobe<White,AudioFlicker<White,Blue>,50,1>,TrConcat<TrInstant,AlphaL<White,Bump<Int<12000>,Int<18000>>>,TrFade<200>>,TrConcat<TrInstant,HumpFlickerL<AlphaL<White,Int<16000>>,30>,TrSmoothFade<600>>>,ResponsiveBlastL<White,Int<400>,Scale<SwingSpeed<200>,Int<100>,Int<400>>,Int<400>>,ResponsiveBlastWaveL<White,Int<300>,Int<100>,Int<300>,Scale<BladeAngle<0,16000>,Int<10000>,Int<30000>>,Int<10000>,EFFECT_CLASH>,ResponsiveStabL<Red,TrWipeIn<600>,TrWipe<600>>,ResponsiveDragL<BrownNoiseFlickerL<White,Int<300>>,TrWipeIn<400>,TrFade<400>>,ResponsiveMeltL<Mix<TwistAngle<>,Red,Orange>,TrWipeIn<600>,TrSmoothFade<600>>,InOutTrL<TrWipe<300>,TrWipeIn<500>,Black>,AlphaL<Black,Scale<IsLessThan<BatteryLevel,Int<10000>>,Int<0>,Scale<BatteryLevel,Int<16384>,Int<7500>>>>>>(),

		StylePtr<Layers<AudioFlicker<RotateColorsX<Variation,DeepSkyBlue>,RotateColorsX<Variation,Rgb<0,0,128>>> ,InOutTrL<TrInstant,TrFade<300>,Layers<Black,TransitionEffectL<TrConcat<TrInstant,Pulsing<RotateColorsX<Variation,DeepSkyBlue>,RotateColorsX<Variation,Rgb<0,4,10>>,10000>,TrDelay<180000>,Pulsing<RotateColorsX<Variation,DeepSkyBlue>,RotateColorsX<Variation,Rgb<0,4,10>>,10000>,TrFade<1000>>,EFFECT_BOOT>,TransitionEffectL<TrConcat<TrInstant,Pulsing<RotateColorsX<Variation,DeepSkyBlue>,RotateColorsX<Variation,Rgb<0,4,10>>,10000>,TrDelay<180000>,Pulsing<RotateColorsX<Variation,DeepSkyBlue>,RotateColorsX<Variation,Rgb<0,4,10>>,10000>,TrFade<1000>>,EFFECT_NEWFONT>,TransitionEffectL<TrConcat<TrInstant,Pulsing<RotateColorsX<Variation,DeepSkyBlue>,RotateColorsX<Variation,Rgb<0,4,10>>,10000>,TrDelay<180000>,Pulsing<RotateColorsX<Variation,DeepSkyBlue>,RotateColorsX<Variation,Rgb<0,4,10>>,10000>,TrFade<1000>>,EFFECT_RETRACTION>>>>>(),

		StylePtr<Layers<RotateColorsX<Variation,Rgb<180,130,0>>,TransitionEffectL<TrConcat<TrInstant,BrownNoiseFlickerL<AlphaL<White,Int<16000>>,Int<50>>,TrSmoothFade<600>>,EFFECT_LOCKUP_END>,ResponsiveLockupL<Strobe<White,BrownNoiseFlicker<White,Red,300>,50,1>,TrConcat<TrInstant,White,TrFade<400>>,TrFade<100>,Scale<BladeAngle<0,16000>,Int<4000>,Int<26000>>,Int<6000>,Scale<SwingSpeed<100>,Int<10000>,Int<14000>>>,ResponsiveLightningBlockL<Strobe<White,AudioFlicker<White,Blue>,50,1>,TrConcat<TrInstant,AlphaL<White,Bump<Int<12000>,Int<18000>>>,TrFade<200>>,TrConcat<TrInstant,HumpFlickerL<AlphaL<White,Int<16000>>,30>,TrSmoothFade<600>>>,AlphaL<TransitionEffect<White,Rgb<128,0,0>,TrInstant,TrConcat<TrFade<1500>,Red,TrFade<2000>,Orange,TrFade<2500>>,EFFECT_IGNITION>,Bump<Int<0>,Int<6000>>>,ResponsiveStabL<Red,TrWipeIn<600>,TrWipe<600>>,ResponsiveBlastL<White,Int<400>,Scale<SwingSpeed<200>,Int<100>,Int<400>>,Int<400>>,ResponsiveClashL<White,TrInstant,TrFade<400>,Scale<BladeAngle<0,16000>,Int<4000>,Int<26000>>,Int<6000>>,LockupTrL<AlphaL<BrownNoiseFlickerL<White,Int<300>>,SmoothStep<Int<30000>,Int<5000>>>,TrWipeIn<400>,TrFade<300>,SaberBase::LOCKUP_DRAG>,LockupTrL<AlphaL<Mix<TwistAngle<>,Red,Orange>,SmoothStep<Int<28000>,Int<5000>>>,TrWipeIn<600>,TrFade<300>,SaberBase::LOCKUP_MELT>,InOutTrL<TrWipe<7000>,TrWipeIn<500>,Black>,TransitionEffectL<TrConcat<TrInstant,AlphaL<White,Bump<Int<0>,Int<10000>>>,TrFade<3000>,AlphaL<Orange,Bump<Int<0>,Int<8000>>>,TrFade<3000>,AlphaL<Red,Bump<Int<0>,Int<6000>>>,TrFade<2000>>,EFFECT_RETRACTION>,TransitionEffectL<TrConcat<TrFade<2000>,AlphaL<HumpFlickerL<Red,10>,Bump<Int<0>,Int<4000>>>,TrFade<2950>,AlphaL<HumpFlickerL<Orange,15>,Bump<Int<0>,Int<5000>>>,TrFade<3000>,AlphaL<HumpFlickerL<White,20>,Bump<Int<0>,Int<6000>>>,TrBoing<1000,3>>,EFFECT_PREON>>>(),

		//green: slow blink when idle, faster blink when saber is on, lockup mimics blade
				/* copyright Fett263 (Accent LED / PCB) OS7 Style
		https://www.fett263.com/fett263-proffieOS7-style-library.html#Rotoscope
		OS7.14 v2.241p
		Single Style
		On Behavior: Blinking On-Off [Color: BaseColorArg]
		Off Behavior: Slow Pulse Off-On [Color: Match ON Color]

		Base Color: BaseColorArg (0)

		--Effects Included--
		Ignition Effect: Instant [Color: IgnitionColorArg]
		Retraction Effect: Instant [Color: RetractionColorArg]
		Lockup Effect: NoneLightning Block Effect: NoneDrag Effect:
		0: accentDragMulti0Shape - Begin: Wipe In - Style: Intensity Sparking Drag - End: Wipe Out
		[Color: DragColorArg]
		Melt Effect:
		0: accentMeltMulti0Shape - Begin: Wipe In - Style: Intensity Melt - End: Wipe Out
		[Color: StabColorArg]
		*/
		StylePtr<Layers<Blinking<RgbArg<BASE_COLOR_ARG,Rgb<0,255,0>>,Black,500,500>,LockupTrL<AlphaL<TransitionEffect<RandomPerLEDFlickerL<RgbArg<DRAG_COLOR_ARG,Rgb<255,255,255>>>,BrownNoiseFlickerL<RgbArg<DRAG_COLOR_ARG,Rgb<255,255,255>>,Int<300>>,TrExtend<4000,TrInstant>,TrFade<4000>,EFFECT_DRAG_BEGIN>,SmoothStep<Scale<TwistAngle<>,IntArg<DRAG_SIZE_ARG,31000>,Int<30000>>,Int<3000>>>,TrWipeIn<200>,TrWipe<200>,SaberBase::LOCKUP_DRAG,Int<1>>,LockupTrL<AlphaL<Stripes<2000,4000,Mix<TwistAngle<>,RgbArg<STAB_COLOR_ARG,Rgb<255,68,0>>,RotateColorsX<Int<3000>,RgbArg<STAB_COLOR_ARG,Rgb<255,68,0>>>>,Mix<Sin<Int<50>>,Black,Mix<TwistAngle<>,RgbArg<STAB_COLOR_ARG,Rgb<255,68,0>>,RotateColorsX<Int<3000>,RgbArg<STAB_COLOR_ARG,Rgb<255,68,0>>>>>,Mix<Int<4096>,Black,Mix<TwistAngle<>,RgbArg<STAB_COLOR_ARG,Rgb<255,68,0>>,RotateColorsX<Int<3000>,RgbArg<STAB_COLOR_ARG,Rgb<255,68,0>>>>>>,SmoothStep<Scale<TwistAngle<>,IntArg<MELT_SIZE_ARG,26000>,Int<30000>>,Int<3000>>>,TrConcat<TrExtend<4000,TrWipeIn<200>>,AlphaL<HumpFlicker<Mix<TwistAngle<>,RgbArg<STAB_COLOR_ARG,Rgb<255,68,0>>,RotateColorsX<Int<3000>,RgbArg<STAB_COLOR_ARG,Rgb<255,68,0>>>>,RotateColorsX<Int<3000>,Mix<TwistAngle<>,RgbArg<STAB_COLOR_ARG,Rgb<255,68,0>>,RotateColorsX<Int<3000>,RgbArg<STAB_COLOR_ARG,Rgb<255,68,0>>>>>,100>,SmoothStep<Scale<TwistAngle<>,IntArg<MELT_SIZE_ARG,26000>,Int<30000>>,Int<3000>>>,TrFade<4000>>,TrWipe<200>,SaberBase::LOCKUP_MELT,Int<1>>,InOutTrL<TrInstant,TrInstant,Pulsing<Black,RgbArg<BASE_COLOR_ARG,Rgb<0,255,0>>,8000>>>>(),


		//red: slow blink when idle, faster blink when saber is on, lockup turns off (blinks alternate with green)
		/* copyright Fett263 (Accent LED / PCB) OS7 Style
		https://www.fett263.com/fett263-proffieOS7-style-library.html#Rotoscope
		OS7.14 v2.241p
		Single Style
		On Behavior: Blinking On-Off [Color: BaseColorArg]
		Off Behavior: Slow Pulse Off-On [Color: Match ON Color]

		Base Color: BaseColorArg (0)

		--Effects Included--
		Ignition Effect: Instant [Color: IgnitionColorArg]
		Retraction Effect: Instant [Color: RetractionColorArg]
		Lockup Effect: NoneLightning Block Effect: NoneDrag Effect:
		0: accentDragMulti0Shape - Begin: Wipe In - Style: Intensity Sparking Drag - End: Wipe Out
		[Color: DragColorArg]
		Melt Effect:
		0: accentMeltMulti0Shape - Begin: Wipe In - Style: Intensity Melt - End: Wipe Out
		[Color: StabColorArg]
		*/
		StylePtr<Layers<Blinking<RgbArg<BASE_COLOR_ARG,Rgb<255,0,0>>,Black,500,500>,LockupTrL<AlphaL<TransitionEffect<RandomPerLEDFlickerL<RgbArg<DRAG_COLOR_ARG,Rgb<255,255,255>>>,BrownNoiseFlickerL<RgbArg<DRAG_COLOR_ARG,Rgb<255,255,255>>,Int<300>>,TrExtend<4000,TrInstant>,TrFade<4000>,EFFECT_DRAG_BEGIN>,SmoothStep<Scale<TwistAngle<>,IntArg<DRAG_SIZE_ARG,31000>,Int<30000>>,Int<3000>>>,TrWipeIn<200>,TrWipe<200>,SaberBase::LOCKUP_DRAG,Int<1>>,LockupTrL<AlphaL<Stripes<2000,4000,Mix<TwistAngle<>,RgbArg<STAB_COLOR_ARG,Rgb<255,68,0>>,RotateColorsX<Int<3000>,RgbArg<STAB_COLOR_ARG,Rgb<255,68,0>>>>,Mix<Sin<Int<50>>,Black,Mix<TwistAngle<>,RgbArg<STAB_COLOR_ARG,Rgb<255,68,0>>,RotateColorsX<Int<3000>,RgbArg<STAB_COLOR_ARG,Rgb<255,68,0>>>>>,Mix<Int<4096>,Black,Mix<TwistAngle<>,RgbArg<STAB_COLOR_ARG,Rgb<255,68,0>>,RotateColorsX<Int<3000>,RgbArg<STAB_COLOR_ARG,Rgb<255,68,0>>>>>>,SmoothStep<Scale<TwistAngle<>,IntArg<MELT_SIZE_ARG,26000>,Int<30000>>,Int<3000>>>,TrConcat<TrExtend<4000,TrWipeIn<200>>,AlphaL<HumpFlicker<Mix<TwistAngle<>,RgbArg<STAB_COLOR_ARG,Rgb<255,68,0>>,RotateColorsX<Int<3000>,RgbArg<STAB_COLOR_ARG,Rgb<255,68,0>>>>,RotateColorsX<Int<3000>,Mix<TwistAngle<>,RgbArg<STAB_COLOR_ARG,Rgb<255,68,0>>,RotateColorsX<Int<3000>,RgbArg<STAB_COLOR_ARG,Rgb<255,68,0>>>>>,100>,SmoothStep<Scale<TwistAngle<>,IntArg<MELT_SIZE_ARG,26000>,Int<30000>>,Int<3000>>>,TrFade<4000>>,TrWipe<200>,SaberBase::LOCKUP_MELT,Int<1>>,InOutTrL<TrInstant,TrInstant,Pulsing<Black,RgbArg<BASE_COLOR_ARG,Rgb<255,0,0>>,8000>>>>(),},

	//Jesse ESB_Graflex
	{ "ESB_Graflex", "tracks/ESB_Graflex.wav",
		//Jedi Blue Default
		//Standard Ignition: 300
		//Standard Retraction: 500
		//Lockup Effect: Animated Lockup
		//Lightning Block: Responsive Lightning block
		//Blast Effect: Responsive Blast
		//Clash Effect: Responsive Clash with Wave V2 (Mid-Blade)
		//Power Save: Gradual
		StylePtr<Layers<AudioFlicker<RotateColorsX<Variation,Blue>,RotateColorsX<Variation,Rgb<0,0,128>>>,TransitionEffectL<TrConcat<TrInstant,BrownNoiseFlickerL<AlphaL<White,Int<16000>>,Int<50>>,TrSmoothFade<600>>,EFFECT_LOCKUP_END>,LockupTrL<AlphaL<Strobe<White,BrownNoiseFlicker<White,Red,300>,50,1>,Bump<Sin<Int<10>,Int<10000>,Int<20000>>,Int<12000>>>,TrConcat<TrInstant,White,TrFade<200>>,TrFade<400>,SaberBase::LOCKUP_NORMAL>,ResponsiveLightningBlockL<Strobe<White,AudioFlicker<White,Blue>,50,1>,TrConcat<TrInstant,AlphaL<White,Bump<Int<12000>,Int<18000>>>,TrFade<200>>,TrConcat<TrInstant,HumpFlickerL<AlphaL<White,Int<16000>>,30>,TrSmoothFade<600>>>,ResponsiveBlastL<White,Int<400>,Scale<SwingSpeed<200>,Int<100>,Int<400>>,Int<400>>,ResponsiveBlastWaveL<White,Int<300>,Int<100>,Int<300>,Scale<BladeAngle<0,16000>,Int<10000>,Int<30000>>,Int<10000>,EFFECT_CLASH>,ResponsiveStabL<Red,TrWipeIn<600>,TrWipe<600>>,ResponsiveDragL<BrownNoiseFlickerL<White,Int<300>>,TrWipeIn<400>,TrFade<400>>,ResponsiveMeltL<Mix<TwistAngle<>,Red,Orange>,TrWipeIn<600>,TrSmoothFade<600>>,InOutTrL<TrWipe<300>,TrWipeIn<500>,Black>,AlphaL<Black,Scale<IsLessThan<BatteryLevel,Int<10000>>,Int<0>,Scale<BatteryLevel,Int<16384>,Int<7500>>>>>>(),

		StylePtr<Layers<AudioFlicker<RotateColorsX<Variation,DeepSkyBlue>,RotateColorsX<Variation,Rgb<0,0,128>>> ,InOutTrL<TrInstant,TrFade<300>,Layers<Black,TransitionEffectL<TrConcat<TrInstant,Pulsing<RotateColorsX<Variation,DeepSkyBlue>,RotateColorsX<Variation,Rgb<0,4,10>>,10000>,TrDelay<180000>,Pulsing<RotateColorsX<Variation,DeepSkyBlue>,RotateColorsX<Variation,Rgb<0,4,10>>,10000>,TrFade<1000>>,EFFECT_BOOT>,TransitionEffectL<TrConcat<TrInstant,Pulsing<RotateColorsX<Variation,DeepSkyBlue>,RotateColorsX<Variation,Rgb<0,4,10>>,10000>,TrDelay<180000>,Pulsing<RotateColorsX<Variation,DeepSkyBlue>,RotateColorsX<Variation,Rgb<0,4,10>>,10000>,TrFade<1000>>,EFFECT_NEWFONT>,TransitionEffectL<TrConcat<TrInstant,Pulsing<RotateColorsX<Variation,DeepSkyBlue>,RotateColorsX<Variation,Rgb<0,4,10>>,10000>,TrDelay<180000>,Pulsing<RotateColorsX<Variation,DeepSkyBlue>,RotateColorsX<Variation,Rgb<0,4,10>>,10000>,TrFade<1000>>,EFFECT_RETRACTION>>>>>(),

		StylePtr<Layers<RotateColorsX<Variation,Rgb<180,130,0>>,TransitionEffectL<TrConcat<TrInstant,BrownNoiseFlickerL<AlphaL<White,Int<16000>>,Int<50>>,TrSmoothFade<600>>,EFFECT_LOCKUP_END>,ResponsiveLockupL<Strobe<White,BrownNoiseFlicker<White,Red,300>,50,1>,TrConcat<TrInstant,White,TrFade<400>>,TrFade<100>,Scale<BladeAngle<0,16000>,Int<4000>,Int<26000>>,Int<6000>,Scale<SwingSpeed<100>,Int<10000>,Int<14000>>>,ResponsiveLightningBlockL<Strobe<White,AudioFlicker<White,Blue>,50,1>,TrConcat<TrInstant,AlphaL<White,Bump<Int<12000>,Int<18000>>>,TrFade<200>>,TrConcat<TrInstant,HumpFlickerL<AlphaL<White,Int<16000>>,30>,TrSmoothFade<600>>>,AlphaL<TransitionEffect<White,Rgb<128,0,0>,TrInstant,TrConcat<TrFade<1500>,Red,TrFade<2000>,Orange,TrFade<2500>>,EFFECT_IGNITION>,Bump<Int<0>,Int<6000>>>,ResponsiveStabL<Red,TrWipeIn<600>,TrWipe<600>>,ResponsiveBlastL<White,Int<400>,Scale<SwingSpeed<200>,Int<100>,Int<400>>,Int<400>>,ResponsiveClashL<White,TrInstant,TrFade<400>,Scale<BladeAngle<0,16000>,Int<4000>,Int<26000>>,Int<6000>>,LockupTrL<AlphaL<BrownNoiseFlickerL<White,Int<300>>,SmoothStep<Int<30000>,Int<5000>>>,TrWipeIn<400>,TrFade<300>,SaberBase::LOCKUP_DRAG>,LockupTrL<AlphaL<Mix<TwistAngle<>,Red,Orange>,SmoothStep<Int<28000>,Int<5000>>>,TrWipeIn<600>,TrFade<300>,SaberBase::LOCKUP_MELT>,InOutTrL<TrWipe<7000>,TrWipeIn<500>,Black>,TransitionEffectL<TrConcat<TrInstant,AlphaL<White,Bump<Int<0>,Int<10000>>>,TrFade<3000>,AlphaL<Orange,Bump<Int<0>,Int<8000>>>,TrFade<3000>,AlphaL<Red,Bump<Int<0>,Int<6000>>>,TrFade<2000>>,EFFECT_RETRACTION>,TransitionEffectL<TrConcat<TrFade<2000>,AlphaL<HumpFlickerL<Red,10>,Bump<Int<0>,Int<4000>>>,TrFade<2950>,AlphaL<HumpFlickerL<Orange,15>,Bump<Int<0>,Int<5000>>>,TrFade<3000>,AlphaL<HumpFlickerL<White,20>,Bump<Int<0>,Int<6000>>>,TrBoing<1000,3>>,EFFECT_PREON>>>(),

		//green: slow blink when idle, faster blink when saber is on, lockup mimics blade
		StylePtr<InOutHelperX<Lockup<Sequence<Green,Black,175,80,0b1010101010101010,0b1010101010101010,0b1010101010101010,0b1010101010101010,0b1010101010101010>,Pulsing<Gradient<AudioFlicker<Green,Black>,AudioFlicker<Green,Black>,Strobe<Green,RandomPerLEDFlicker<Green,Black>,15,3>,AudioFlicker<Green,Black>,AudioFlicker<Green,Black>,Strobe<Green,RandomPerLEDFlicker<Green,Black>,15,3>,AudioFlicker<Green,Black>,AudioFlicker<Green,Black>,AudioFlicker<Green,Black>>,Pulsing<Gradient<AudioFlicker<Green,Black>,Strobe<Green,RandomPerLEDFlicker<Green,Black>,15,3>,AudioFlicker<Green,Black>,AudioFlicker<Green,Black>,Strobe<Green,RandomPerLEDFlicker<Green,Black>,15,3>,AudioFlicker<Green,Black>,AudioFlicker<Green,Black>,AudioFlicker<Green,Black>>,Gradient<AudioFlicker<Green,Black>,AudioFlicker<Green,Black>,Strobe<Green,RandomPerLEDFlicker<Green,Black>,15,3>,AudioFlicker<Green,Black>,AudioFlicker<Green,Black>,AudioFlicker<Green,Black>>,1500>,2000>>,InOutFuncX<Int<1>,Int<1>>,Sequence<Green,Black,500,80,0b1010101010101010,0b1010101010101010,0b1010101010101010,0b1010101010101010,0b1010101010101010>>>(),

		//red: slow blink when idle, faster blink when saber is on, lockup turns off (blinks alternate with green)
		StylePtr<InOutHelper<Lockup<Sequence<Red, Black, 175, 80, 0b0101010101010101,0b0101010101010101,0b0101010101010101,0b0101010101010101,0b0101010101010101>, Black>, 1, 1, Sequence<Red, Black, 500, 80, 0b0101010101010101,0b0101010101010101,0b0101010101010101,0b0101010101010101,0b0101010101010101>>>(),
	},

	//Jesse Hero Pack Obi-Wan Kenobi
	{ "ob3", "tracks/OB3.wav",
		//Jedi Blue Default
		//Standard Ignition: 300
		//Standard Retraction: 500
		//Lockup Effect: Animated Lockup
		//Lightning Block: Responsive Lightning block
		//Blast Effect: Responsive Blast
		//Clash Effect: Responsive Clash with Wave V2 (Mid-Blade)
		//Power Save: Gradual
		StylePtr<Layers<AudioFlicker<RotateColorsX<Variation,Blue>,RotateColorsX<Variation,Rgb<0,0,128>>>,TransitionEffectL<TrConcat<TrInstant,BrownNoiseFlickerL<AlphaL<White,Int<16000>>,Int<50>>,TrSmoothFade<600>>,EFFECT_LOCKUP_END>,LockupTrL<AlphaL<Strobe<White,BrownNoiseFlicker<White,Red,300>,50,1>,Bump<Sin<Int<10>,Int<10000>,Int<20000>>,Int<12000>>>,TrConcat<TrInstant,White,TrFade<200>>,TrFade<400>,SaberBase::LOCKUP_NORMAL>,ResponsiveLightningBlockL<Strobe<White,AudioFlicker<White,Blue>,50,1>,TrConcat<TrInstant,AlphaL<White,Bump<Int<12000>,Int<18000>>>,TrFade<200>>,TrConcat<TrInstant,HumpFlickerL<AlphaL<White,Int<16000>>,30>,TrSmoothFade<600>>>,ResponsiveBlastL<White,Int<400>,Scale<SwingSpeed<200>,Int<100>,Int<400>>,Int<400>>,ResponsiveBlastWaveL<White,Int<300>,Int<100>,Int<300>,Scale<BladeAngle<0,16000>,Int<10000>,Int<30000>>,Int<10000>,EFFECT_CLASH>,ResponsiveStabL<Red,TrWipeIn<600>,TrWipe<600>>,ResponsiveDragL<BrownNoiseFlickerL<White,Int<300>>,TrWipeIn<400>,TrFade<400>>,ResponsiveMeltL<Mix<TwistAngle<>,Red,Orange>,TrWipeIn<600>,TrSmoothFade<600>>,InOutTrL<TrWipe<300>,TrWipeIn<500>,Black>,AlphaL<Black,Scale<IsLessThan<BatteryLevel,Int<10000>>,Int<0>,Scale<BatteryLevel,Int<16384>,Int<7500>>>>>>(),

		StylePtr<Layers<AudioFlicker<RotateColorsX<Variation,DeepSkyBlue>,RotateColorsX<Variation,Rgb<0,0,128>>> ,InOutTrL<TrInstant,TrFade<300>,Layers<Black,TransitionEffectL<TrConcat<TrInstant,Pulsing<RotateColorsX<Variation,DeepSkyBlue>,RotateColorsX<Variation,Rgb<0,4,10>>,10000>,TrDelay<180000>,Pulsing<RotateColorsX<Variation,DeepSkyBlue>,RotateColorsX<Variation,Rgb<0,4,10>>,10000>,TrFade<1000>>,EFFECT_BOOT>,TransitionEffectL<TrConcat<TrInstant,Pulsing<RotateColorsX<Variation,DeepSkyBlue>,RotateColorsX<Variation,Rgb<0,4,10>>,10000>,TrDelay<180000>,Pulsing<RotateColorsX<Variation,DeepSkyBlue>,RotateColorsX<Variation,Rgb<0,4,10>>,10000>,TrFade<1000>>,EFFECT_NEWFONT>,TransitionEffectL<TrConcat<TrInstant,Pulsing<RotateColorsX<Variation,DeepSkyBlue>,RotateColorsX<Variation,Rgb<0,4,10>>,10000>,TrDelay<180000>,Pulsing<RotateColorsX<Variation,DeepSkyBlue>,RotateColorsX<Variation,Rgb<0,4,10>>,10000>,TrFade<1000>>,EFFECT_RETRACTION>>>>>(),


		StylePtr<Layers<RotateColorsX<Variation,Rgb<180,130,0>>,TransitionEffectL<TrConcat<TrInstant,BrownNoiseFlickerL<AlphaL<White,Int<16000>>,Int<50>>,TrSmoothFade<600>>,EFFECT_LOCKUP_END>,ResponsiveLockupL<Strobe<White,BrownNoiseFlicker<White,Red,300>,50,1>,TrConcat<TrInstant,White,TrFade<400>>,TrFade<100>,Scale<BladeAngle<0,16000>,Int<4000>,Int<26000>>,Int<6000>,Scale<SwingSpeed<100>,Int<10000>,Int<14000>>>,ResponsiveLightningBlockL<Strobe<White,AudioFlicker<White,Blue>,50,1>,TrConcat<TrInstant,AlphaL<White,Bump<Int<12000>,Int<18000>>>,TrFade<200>>,TrConcat<TrInstant,HumpFlickerL<AlphaL<White,Int<16000>>,30>,TrSmoothFade<600>>>,AlphaL<TransitionEffect<White,Rgb<128,0,0>,TrInstant,TrConcat<TrFade<1500>,Red,TrFade<2000>,Orange,TrFade<2500>>,EFFECT_IGNITION>,Bump<Int<0>,Int<6000>>>,ResponsiveStabL<Red,TrWipeIn<600>,TrWipe<600>>,ResponsiveBlastL<White,Int<400>,Scale<SwingSpeed<200>,Int<100>,Int<400>>,Int<400>>,ResponsiveClashL<White,TrInstant,TrFade<400>,Scale<BladeAngle<0,16000>,Int<4000>,Int<26000>>,Int<6000>>,LockupTrL<AlphaL<BrownNoiseFlickerL<White,Int<300>>,SmoothStep<Int<30000>,Int<5000>>>,TrWipeIn<400>,TrFade<300>,SaberBase::LOCKUP_DRAG>,LockupTrL<AlphaL<Mix<TwistAngle<>,Red,Orange>,SmoothStep<Int<28000>,Int<5000>>>,TrWipeIn<600>,TrFade<300>,SaberBase::LOCKUP_MELT>,InOutTrL<TrWipe<7000>,TrWipeIn<500>,Black>,TransitionEffectL<TrConcat<TrInstant,AlphaL<White,Bump<Int<0>,Int<10000>>>,TrFade<3000>,AlphaL<Orange,Bump<Int<0>,Int<8000>>>,TrFade<3000>,AlphaL<Red,Bump<Int<0>,Int<6000>>>,TrFade<2000>>,EFFECT_RETRACTION>,TransitionEffectL<TrConcat<TrFade<2000>,AlphaL<HumpFlickerL<Red,10>,Bump<Int<0>,Int<4000>>>,TrFade<2950>,AlphaL<HumpFlickerL<Orange,15>,Bump<Int<0>,Int<5000>>>,TrFade<3000>,AlphaL<HumpFlickerL<White,20>,Bump<Int<0>,Int<6000>>>,TrBoing<1000,3>>,EFFECT_PREON>>>(),

		//green: slow blink when idle, faster blink when saber is on, lockup mimics blade
				/* copyright Fett263 (Accent LED / PCB) OS7 Style
		https://www.fett263.com/fett263-proffieOS7-style-library.html#Rotoscope
		OS7.14 v2.241p
		Single Style
		On Behavior: Blinking On-Off [Color: BaseColorArg]
		Off Behavior: Slow Pulse Off-On [Color: Match ON Color]

		Base Color: BaseColorArg (0)

		--Effects Included--
		Ignition Effect: Instant [Color: IgnitionColorArg]
		Retraction Effect: Instant [Color: RetractionColorArg]
		Lockup Effect: NoneLightning Block Effect: NoneDrag Effect:
		0: accentDragMulti0Shape - Begin: Wipe In - Style: Intensity Sparking Drag - End: Wipe Out
		[Color: DragColorArg]
		Melt Effect:
		0: accentMeltMulti0Shape - Begin: Wipe In - Style: Intensity Melt - End: Wipe Out
		[Color: StabColorArg]
		*/
		StylePtr<Layers<Blinking<RgbArg<BASE_COLOR_ARG,Rgb<0,255,0>>,Black,500,500>,LockupTrL<AlphaL<TransitionEffect<RandomPerLEDFlickerL<RgbArg<DRAG_COLOR_ARG,Rgb<255,255,255>>>,BrownNoiseFlickerL<RgbArg<DRAG_COLOR_ARG,Rgb<255,255,255>>,Int<300>>,TrExtend<4000,TrInstant>,TrFade<4000>,EFFECT_DRAG_BEGIN>,SmoothStep<Scale<TwistAngle<>,IntArg<DRAG_SIZE_ARG,31000>,Int<30000>>,Int<3000>>>,TrWipeIn<200>,TrWipe<200>,SaberBase::LOCKUP_DRAG,Int<1>>,LockupTrL<AlphaL<Stripes<2000,4000,Mix<TwistAngle<>,RgbArg<STAB_COLOR_ARG,Rgb<255,68,0>>,RotateColorsX<Int<3000>,RgbArg<STAB_COLOR_ARG,Rgb<255,68,0>>>>,Mix<Sin<Int<50>>,Black,Mix<TwistAngle<>,RgbArg<STAB_COLOR_ARG,Rgb<255,68,0>>,RotateColorsX<Int<3000>,RgbArg<STAB_COLOR_ARG,Rgb<255,68,0>>>>>,Mix<Int<4096>,Black,Mix<TwistAngle<>,RgbArg<STAB_COLOR_ARG,Rgb<255,68,0>>,RotateColorsX<Int<3000>,RgbArg<STAB_COLOR_ARG,Rgb<255,68,0>>>>>>,SmoothStep<Scale<TwistAngle<>,IntArg<MELT_SIZE_ARG,26000>,Int<30000>>,Int<3000>>>,TrConcat<TrExtend<4000,TrWipeIn<200>>,AlphaL<HumpFlicker<Mix<TwistAngle<>,RgbArg<STAB_COLOR_ARG,Rgb<255,68,0>>,RotateColorsX<Int<3000>,RgbArg<STAB_COLOR_ARG,Rgb<255,68,0>>>>,RotateColorsX<Int<3000>,Mix<TwistAngle<>,RgbArg<STAB_COLOR_ARG,Rgb<255,68,0>>,RotateColorsX<Int<3000>,RgbArg<STAB_COLOR_ARG,Rgb<255,68,0>>>>>,100>,SmoothStep<Scale<TwistAngle<>,IntArg<MELT_SIZE_ARG,26000>,Int<30000>>,Int<3000>>>,TrFade<4000>>,TrWipe<200>,SaberBase::LOCKUP_MELT,Int<1>>,InOutTrL<TrInstant,TrInstant,Pulsing<Black,RgbArg<BASE_COLOR_ARG,Rgb<0,255,0>>,8000>>>>(),


		//red: slow blink when idle, faster blink when saber is on, lockup turns off (blinks alternate with green)
		/* copyright Fett263 (Accent LED / PCB) OS7 Style
		https://www.fett263.com/fett263-proffieOS7-style-library.html#Rotoscope
		OS7.14 v2.241p
		Single Style
		On Behavior: Blinking On-Off [Color: BaseColorArg]
		Off Behavior: Slow Pulse Off-On [Color: Match ON Color]

		Base Color: BaseColorArg (0)

		--Effects Included--
		Ignition Effect: Instant [Color: IgnitionColorArg]
		Retraction Effect: Instant [Color: RetractionColorArg]
		Lockup Effect: NoneLightning Block Effect: NoneDrag Effect:
		0: accentDragMulti0Shape - Begin: Wipe In - Style: Intensity Sparking Drag - End: Wipe Out
		[Color: DragColorArg]
		Melt Effect:
		0: accentMeltMulti0Shape - Begin: Wipe In - Style: Intensity Melt - End: Wipe Out
		[Color: StabColorArg]
		*/
		StylePtr<Layers<Blinking<RgbArg<BASE_COLOR_ARG,Rgb<255,0,0>>,Black,500,500>,LockupTrL<AlphaL<TransitionEffect<RandomPerLEDFlickerL<RgbArg<DRAG_COLOR_ARG,Rgb<255,255,255>>>,BrownNoiseFlickerL<RgbArg<DRAG_COLOR_ARG,Rgb<255,255,255>>,Int<300>>,TrExtend<4000,TrInstant>,TrFade<4000>,EFFECT_DRAG_BEGIN>,SmoothStep<Scale<TwistAngle<>,IntArg<DRAG_SIZE_ARG,31000>,Int<30000>>,Int<3000>>>,TrWipeIn<200>,TrWipe<200>,SaberBase::LOCKUP_DRAG,Int<1>>,LockupTrL<AlphaL<Stripes<2000,4000,Mix<TwistAngle<>,RgbArg<STAB_COLOR_ARG,Rgb<255,68,0>>,RotateColorsX<Int<3000>,RgbArg<STAB_COLOR_ARG,Rgb<255,68,0>>>>,Mix<Sin<Int<50>>,Black,Mix<TwistAngle<>,RgbArg<STAB_COLOR_ARG,Rgb<255,68,0>>,RotateColorsX<Int<3000>,RgbArg<STAB_COLOR_ARG,Rgb<255,68,0>>>>>,Mix<Int<4096>,Black,Mix<TwistAngle<>,RgbArg<STAB_COLOR_ARG,Rgb<255,68,0>>,RotateColorsX<Int<3000>,RgbArg<STAB_COLOR_ARG,Rgb<255,68,0>>>>>>,SmoothStep<Scale<TwistAngle<>,IntArg<MELT_SIZE_ARG,26000>,Int<30000>>,Int<3000>>>,TrConcat<TrExtend<4000,TrWipeIn<200>>,AlphaL<HumpFlicker<Mix<TwistAngle<>,RgbArg<STAB_COLOR_ARG,Rgb<255,68,0>>,RotateColorsX<Int<3000>,RgbArg<STAB_COLOR_ARG,Rgb<255,68,0>>>>,RotateColorsX<Int<3000>,Mix<TwistAngle<>,RgbArg<STAB_COLOR_ARG,Rgb<255,68,0>>,RotateColorsX<Int<3000>,RgbArg<STAB_COLOR_ARG,Rgb<255,68,0>>>>>,100>,SmoothStep<Scale<TwistAngle<>,IntArg<MELT_SIZE_ARG,26000>,Int<30000>>,Int<3000>>>,TrFade<4000>>,TrWipe<200>,SaberBase::LOCKUP_MELT,Int<1>>,InOutTrL<TrInstant,TrInstant,Pulsing<Black,RgbArg<BASE_COLOR_ARG,Rgb<255,0,0>>,8000>>>>(),},
	
	//Jesse's Qui-Gonn Hero Pack
	{ "little+_greemn_friend", "tracks/little_green_friend.wav",
		//Jedi Green Default
		//Standard Ignition: 300
		//Standard Retraction: 500
		//Lockup Effect: Animated Lockup
		//Lightning Block: Responsive Lightning block
		//Blast Effect: Responsive Blast
		//Clash Effect: Responsive Clash with Wave V2 (Mid-Blade)
		//Power Save: Gradual
		StylePtr<Layers<AudioFlicker<RotateColorsX<Variation,Green>,RotateColorsX<Variation,Rgb<0,128,0>>>,TransitionEffectL<TrConcat<TrInstant,BrownNoiseFlickerL<AlphaL<White,Int<16000>>,Int<50>>,TrSmoothFade<600>>,EFFECT_LOCKUP_END>,LockupTrL<AlphaL<Strobe<White,BrownNoiseFlicker<White,Red,300>,50,1>,Bump<Sin<Int<10>,Int<10000>,Int<20000>>,Int<12000>>>,TrConcat<TrInstant,White,TrFade<200>>,TrFade<400>,SaberBase::LOCKUP_NORMAL>,ResponsiveLightningBlockL<Strobe<White,AudioFlicker<White,Blue>,50,1>,TrConcat<TrInstant,AlphaL<White,Bump<Int<12000>,Int<18000>>>,TrFade<200>>,TrConcat<TrInstant,HumpFlickerL<AlphaL<White,Int<16000>>,30>,TrSmoothFade<600>>>,ResponsiveBlastL<White,Int<400>,Scale<SwingSpeed<200>,Int<100>,Int<400>>,Int<400>>,ResponsiveBlastWaveL<White,Int<300>,Int<100>,Int<300>,Scale<BladeAngle<0,16000>,Int<10000>,Int<30000>>,Int<10000>,EFFECT_CLASH>,ResponsiveStabL<Red,TrWipeIn<600>,TrWipe<600>>,ResponsiveDragL<BrownNoiseFlickerL<White,Int<300>>,TrWipeIn<400>,TrFade<400>>,ResponsiveMeltL<Mix<TwistAngle<>,Red,Orange>,TrWipeIn<600>,TrSmoothFade<600>>,InOutTrL<TrWipe<300>,TrWipeIn<500>,Black>,AlphaL<Black,Scale<IsLessThan<BatteryLevel,Int<10000>>,Int<0>,Scale<BatteryLevel,Int<16384>,Int<7500>>>>>>(),

		StylePtr<Layers<AudioFlicker<RotateColorsX<Variation,Green>,RotateColorsX<Variation,Rgb<0,128,0>>> ,InOutTrL<TrInstant,TrFade<300>,Layers<Black,TransitionEffectL<TrConcat<TrInstant,Pulsing<RotateColorsX<Variation,Green>,RotateColorsX<Variation,Rgb<0,10,0>>,10000>,TrDelay<180000>,Pulsing<RotateColorsX<Variation,Green>,RotateColorsX<Variation,Rgb<0,10,0>>,10000>,TrFade<1000>>,EFFECT_BOOT>,TransitionEffectL<TrConcat<TrInstant,Pulsing<RotateColorsX<Variation,Green>,RotateColorsX<Variation,Rgb<0,10,0>>,10000>,TrDelay<180000>,Pulsing<RotateColorsX<Variation,Green>,RotateColorsX<Variation,Rgb<0,10,0>>,10000>,TrFade<1000>>,EFFECT_NEWFONT>,TransitionEffectL<TrConcat<TrInstant,Pulsing<RotateColorsX<Variation,Green>,RotateColorsX<Variation,Rgb<0,10,0>>,10000>,TrDelay<180000>,Pulsing<RotateColorsX<Variation,Green>,RotateColorsX<Variation,Rgb<0,10,0>>,10000>,TrFade<1000>>,EFFECT_RETRACTION>>>>>(), 

		StylePtr<Layers<RotateColorsX<Variation,Rgb<180,130,0>>,TransitionEffectL<TrConcat<TrInstant,BrownNoiseFlickerL<AlphaL<White,Int<16000>>,Int<50>>,TrSmoothFade<600>>,EFFECT_LOCKUP_END>,ResponsiveLockupL<Strobe<White,BrownNoiseFlicker<White,Red,300>,50,1>,TrConcat<TrInstant,White,TrFade<400>>,TrFade<100>,Scale<BladeAngle<0,16000>,Int<4000>,Int<26000>>,Int<6000>,Scale<SwingSpeed<100>,Int<10000>,Int<14000>>>,ResponsiveLightningBlockL<Strobe<White,AudioFlicker<White,Blue>,50,1>,TrConcat<TrInstant,AlphaL<White,Bump<Int<12000>,Int<18000>>>,TrFade<200>>,TrConcat<TrInstant,HumpFlickerL<AlphaL<White,Int<16000>>,30>,TrSmoothFade<600>>>,AlphaL<TransitionEffect<White,Rgb<128,0,0>,TrInstant,TrConcat<TrFade<1500>,Red,TrFade<2000>,Orange,TrFade<2500>>,EFFECT_IGNITION>,Bump<Int<0>,Int<6000>>>,ResponsiveStabL<Red,TrWipeIn<600>,TrWipe<600>>,ResponsiveBlastL<White,Int<400>,Scale<SwingSpeed<200>,Int<100>,Int<400>>,Int<400>>,ResponsiveClashL<White,TrInstant,TrFade<400>,Scale<BladeAngle<0,16000>,Int<4000>,Int<26000>>,Int<6000>>,LockupTrL<AlphaL<BrownNoiseFlickerL<White,Int<300>>,SmoothStep<Int<30000>,Int<5000>>>,TrWipeIn<400>,TrFade<300>,SaberBase::LOCKUP_DRAG>,LockupTrL<AlphaL<Mix<TwistAngle<>,Red,Orange>,SmoothStep<Int<28000>,Int<5000>>>,TrWipeIn<600>,TrFade<300>,SaberBase::LOCKUP_MELT>,InOutTrL<TrWipe<7000>,TrWipeIn<500>,Black>,TransitionEffectL<TrConcat<TrInstant,AlphaL<White,Bump<Int<0>,Int<10000>>>,TrFade<3000>,AlphaL<Orange,Bump<Int<0>,Int<8000>>>,TrFade<3000>,AlphaL<Red,Bump<Int<0>,Int<6000>>>,TrFade<2000>>,EFFECT_RETRACTION>,TransitionEffectL<TrConcat<TrFade<2000>,AlphaL<HumpFlickerL<Red,10>,Bump<Int<0>,Int<4000>>>,TrFade<2950>,AlphaL<HumpFlickerL<Orange,15>,Bump<Int<0>,Int<5000>>>,TrFade<3000>,AlphaL<HumpFlickerL<White,20>,Bump<Int<0>,Int<6000>>>,TrBoing<1000,3>>,EFFECT_PREON>>>(),

		//green: slow blink when idle, faster blink when saber is on, lockup mimics blade
				/* copyright Fett263 (Accent LED / PCB) OS7 Style
		https://www.fett263.com/fett263-proffieOS7-style-library.html#Rotoscope
		OS7.14 v2.241p
		Single Style
		On Behavior: Blinking On-Off [Color: BaseColorArg]
		Off Behavior: Slow Pulse Off-On [Color: Match ON Color]

		Base Color: BaseColorArg (0)

		--Effects Included--
		Ignition Effect: Instant [Color: IgnitionColorArg]
		Retraction Effect: Instant [Color: RetractionColorArg]
		Lockup Effect: NoneLightning Block Effect: NoneDrag Effect:
		0: accentDragMulti0Shape - Begin: Wipe In - Style: Intensity Sparking Drag - End: Wipe Out
		[Color: DragColorArg]
		Melt Effect:
		0: accentMeltMulti0Shape - Begin: Wipe In - Style: Intensity Melt - End: Wipe Out
		[Color: StabColorArg]
		*/
		StylePtr<Layers<Blinking<RgbArg<BASE_COLOR_ARG,Rgb<0,255,0>>,Black,500,500>,LockupTrL<AlphaL<TransitionEffect<RandomPerLEDFlickerL<RgbArg<DRAG_COLOR_ARG,Rgb<255,255,255>>>,BrownNoiseFlickerL<RgbArg<DRAG_COLOR_ARG,Rgb<255,255,255>>,Int<300>>,TrExtend<4000,TrInstant>,TrFade<4000>,EFFECT_DRAG_BEGIN>,SmoothStep<Scale<TwistAngle<>,IntArg<DRAG_SIZE_ARG,31000>,Int<30000>>,Int<3000>>>,TrWipeIn<200>,TrWipe<200>,SaberBase::LOCKUP_DRAG,Int<1>>,LockupTrL<AlphaL<Stripes<2000,4000,Mix<TwistAngle<>,RgbArg<STAB_COLOR_ARG,Rgb<255,68,0>>,RotateColorsX<Int<3000>,RgbArg<STAB_COLOR_ARG,Rgb<255,68,0>>>>,Mix<Sin<Int<50>>,Black,Mix<TwistAngle<>,RgbArg<STAB_COLOR_ARG,Rgb<255,68,0>>,RotateColorsX<Int<3000>,RgbArg<STAB_COLOR_ARG,Rgb<255,68,0>>>>>,Mix<Int<4096>,Black,Mix<TwistAngle<>,RgbArg<STAB_COLOR_ARG,Rgb<255,68,0>>,RotateColorsX<Int<3000>,RgbArg<STAB_COLOR_ARG,Rgb<255,68,0>>>>>>,SmoothStep<Scale<TwistAngle<>,IntArg<MELT_SIZE_ARG,26000>,Int<30000>>,Int<3000>>>,TrConcat<TrExtend<4000,TrWipeIn<200>>,AlphaL<HumpFlicker<Mix<TwistAngle<>,RgbArg<STAB_COLOR_ARG,Rgb<255,68,0>>,RotateColorsX<Int<3000>,RgbArg<STAB_COLOR_ARG,Rgb<255,68,0>>>>,RotateColorsX<Int<3000>,Mix<TwistAngle<>,RgbArg<STAB_COLOR_ARG,Rgb<255,68,0>>,RotateColorsX<Int<3000>,RgbArg<STAB_COLOR_ARG,Rgb<255,68,0>>>>>,100>,SmoothStep<Scale<TwistAngle<>,IntArg<MELT_SIZE_ARG,26000>,Int<30000>>,Int<3000>>>,TrFade<4000>>,TrWipe<200>,SaberBase::LOCKUP_MELT,Int<1>>,InOutTrL<TrInstant,TrInstant,Pulsing<Black,RgbArg<BASE_COLOR_ARG,Rgb<0,255,0>>,8000>>>>(),


		//red: slow blink when idle, faster blink when saber is on, lockup turns off (blinks alternate with green)
		/* copyright Fett263 (Accent LED / PCB) OS7 Style
		https://www.fett263.com/fett263-proffieOS7-style-library.html#Rotoscope
		OS7.14 v2.241p
		Single Style
		On Behavior: Blinking On-Off [Color: BaseColorArg]
		Off Behavior: Slow Pulse Off-On [Color: Match ON Color]

		Base Color: BaseColorArg (0)

		--Effects Included--
		Ignition Effect: Instant [Color: IgnitionColorArg]
		Retraction Effect: Instant [Color: RetractionColorArg]
		Lockup Effect: NoneLightning Block Effect: NoneDrag Effect:
		0: accentDragMulti0Shape - Begin: Wipe In - Style: Intensity Sparking Drag - End: Wipe Out
		[Color: DragColorArg]
		Melt Effect:
		0: accentMeltMulti0Shape - Begin: Wipe In - Style: Intensity Melt - End: Wipe Out
		[Color: StabColorArg]
		*/
		StylePtr<Layers<Blinking<RgbArg<BASE_COLOR_ARG,Rgb<255,0,0>>,Black,500,500>,LockupTrL<AlphaL<TransitionEffect<RandomPerLEDFlickerL<RgbArg<DRAG_COLOR_ARG,Rgb<255,255,255>>>,BrownNoiseFlickerL<RgbArg<DRAG_COLOR_ARG,Rgb<255,255,255>>,Int<300>>,TrExtend<4000,TrInstant>,TrFade<4000>,EFFECT_DRAG_BEGIN>,SmoothStep<Scale<TwistAngle<>,IntArg<DRAG_SIZE_ARG,31000>,Int<30000>>,Int<3000>>>,TrWipeIn<200>,TrWipe<200>,SaberBase::LOCKUP_DRAG,Int<1>>,LockupTrL<AlphaL<Stripes<2000,4000,Mix<TwistAngle<>,RgbArg<STAB_COLOR_ARG,Rgb<255,68,0>>,RotateColorsX<Int<3000>,RgbArg<STAB_COLOR_ARG,Rgb<255,68,0>>>>,Mix<Sin<Int<50>>,Black,Mix<TwistAngle<>,RgbArg<STAB_COLOR_ARG,Rgb<255,68,0>>,RotateColorsX<Int<3000>,RgbArg<STAB_COLOR_ARG,Rgb<255,68,0>>>>>,Mix<Int<4096>,Black,Mix<TwistAngle<>,RgbArg<STAB_COLOR_ARG,Rgb<255,68,0>>,RotateColorsX<Int<3000>,RgbArg<STAB_COLOR_ARG,Rgb<255,68,0>>>>>>,SmoothStep<Scale<TwistAngle<>,IntArg<MELT_SIZE_ARG,26000>,Int<30000>>,Int<3000>>>,TrConcat<TrExtend<4000,TrWipeIn<200>>,AlphaL<HumpFlicker<Mix<TwistAngle<>,RgbArg<STAB_COLOR_ARG,Rgb<255,68,0>>,RotateColorsX<Int<3000>,RgbArg<STAB_COLOR_ARG,Rgb<255,68,0>>>>,RotateColorsX<Int<3000>,Mix<TwistAngle<>,RgbArg<STAB_COLOR_ARG,Rgb<255,68,0>>,RotateColorsX<Int<3000>,RgbArg<STAB_COLOR_ARG,Rgb<255,68,0>>>>>,100>,SmoothStep<Scale<TwistAngle<>,IntArg<MELT_SIZE_ARG,26000>,Int<30000>>,Int<3000>>>,TrFade<4000>>,TrWipe<200>,SaberBase::LOCKUP_MELT,Int<1>>,InOutTrL<TrInstant,TrInstant,Pulsing<Black,RgbArg<BASE_COLOR_ARG,Rgb<255,0,0>>,8000>>>>(),},

	{ "bmf", "tracks/bmf.wav",
		StylePtr<Layers<AudioFlicker<RotateColorsX<Variation,Rgb<95,0,210>>,RotateColorsX<Variation,Rgb<48,0,105>>>,TransitionEffectL<TrConcat<TrInstant,BrownNoiseFlickerL<AlphaL<White,Int<16000>>,Int<50>>,TrSmoothFade<600>>,EFFECT_LOCKUP_END>,ResponsiveLockupL<Strobe<White,BrownNoiseFlicker<White,Red,300>,50,1>,TrConcat<TrInstant,White,TrFade<400>>,TrFade<100>,Scale<BladeAngle<0,16000>,Int<4000>,Int<26000>>,Int<6000>,Scale<SwingSpeed<100>,Int<10000>,Int<14000>>>,ResponsiveLightningBlockL<Strobe<White,AudioFlicker<White,Blue>,50,1>,TrConcat<TrInstant,AlphaL<White,Bump<Int<12000>,Int<18000>>>,TrFade<200>>,TrConcat<TrInstant,HumpFlickerL<AlphaL<White,Int<16000>>,30>,TrSmoothFade<600>>>,ResponsiveStabL<Red,TrWipeIn<600>,TrWipe<600>>,ResponsiveBlastL<White,Int<400>,Scale<SwingSpeed<200>,Int<100>,Int<400>>,Int<400>>,ResponsiveClashL<White,TrInstant,TrFade<400>,Scale<BladeAngle<0,16000>,Int<4000>,Int<26000>>,Int<6000>>,LockupTrL<AlphaL<BrownNoiseFlickerL<White,Int<300>>,SmoothStep<Int<30000>,Int<5000>>>,TrWipeIn<400>,TrFade<300>,SaberBase::LOCKUP_DRAG>,LockupTrL<AlphaL<Mix<TwistAngle<>,Red,Orange>,SmoothStep<Int<28000>,Int<5000>>>,TrWipeIn<600>,TrFade<300>,SaberBase::LOCKUP_MELT>,InOutTrL<TrWipe<300>,TrWipeIn<500>,Black>>>(),

		StylePtr<Layers<AudioFlicker<RotateColorsX<Variation,Rgb<95,0,210>>,RotateColorsX<Variation,Rgb<48,0,105>>>,InOutTrL<TrInstant,TrFade<300>,Layers<Black,TransitionEffectL<TrConcat<TrInstant,Pulsing<RotateColorsX<Variation,Rgb<160,60,255>>,RotateColorsX<Variation,Rgb<4,0,9>>,10000>,TrDelay<180000>,Pulsing<RotateColorsX<Variation,Rgb<160,60,255>>,RotateColorsX<Variation,Rgb<4,0,9>>,10000>,TrFade<1000>>,EFFECT_BOOT>,TransitionEffectL<TrConcat<TrInstant,Pulsing<RotateColorsX<Variation,Rgb<160,60,255>>,RotateColorsX<Variation,Rgb<4,0,9>>,10000>,TrDelay<180000>,Pulsing<RotateColorsX<Variation,Rgb<160,60,255>>,RotateColorsX<Variation,Rgb<4,0,9>>,10000>,TrFade<1000>>,EFFECT_NEWFONT>,TransitionEffectL<TrConcat<TrInstant,Pulsing<RotateColorsX<Variation,Rgb<160,60,255>>,RotateColorsX<Variation,Rgb<4,0,9>>,10000>,TrDelay<180000>,Pulsing<RotateColorsX<Variation,Rgb<160,60,255>>,RotateColorsX<Variation,Rgb<4,0,9>>,10000>,TrFade<1000>>,EFFECT_RETRACTION>>>>>(),

		StylePtr<Layers<RotateColorsX<Variation,Rgb<180,130,0>>,TransitionEffectL<TrConcat<TrInstant,BrownNoiseFlickerL<AlphaL<White,Int<16000>>,Int<50>>,TrSmoothFade<600>>,EFFECT_LOCKUP_END>,ResponsiveLockupL<Strobe<White,BrownNoiseFlicker<White,Red,300>,50,1>,TrConcat<TrInstant,White,TrFade<400>>,TrFade<100>,Scale<BladeAngle<0,16000>,Int<4000>,Int<26000>>,Int<6000>,Scale<SwingSpeed<100>,Int<10000>,Int<14000>>>,ResponsiveLightningBlockL<Strobe<White,AudioFlicker<White,Blue>,50,1>,TrConcat<TrInstant,AlphaL<White,Bump<Int<12000>,Int<18000>>>,TrFade<200>>,TrConcat<TrInstant,HumpFlickerL<AlphaL<White,Int<16000>>,30>,TrSmoothFade<600>>>,AlphaL<TransitionEffect<White,Rgb<128,0,0>,TrInstant,TrConcat<TrFade<1500>,Red,TrFade<2000>,Orange,TrFade<2500>>,EFFECT_IGNITION>,Bump<Int<0>,Int<6000>>>,ResponsiveStabL<Red,TrWipeIn<600>,TrWipe<600>>,ResponsiveBlastL<White,Int<400>,Scale<SwingSpeed<200>,Int<100>,Int<400>>,Int<400>>,ResponsiveClashL<White,TrInstant,TrFade<400>,Scale<BladeAngle<0,16000>,Int<4000>,Int<26000>>,Int<6000>>,LockupTrL<AlphaL<BrownNoiseFlickerL<White,Int<300>>,SmoothStep<Int<30000>,Int<5000>>>,TrWipeIn<400>,TrFade<300>,SaberBase::LOCKUP_DRAG>,LockupTrL<AlphaL<Mix<TwistAngle<>,Red,Orange>,SmoothStep<Int<28000>,Int<5000>>>,TrWipeIn<600>,TrFade<300>,SaberBase::LOCKUP_MELT>,InOutTrL<TrWipe<7000>,TrWipeIn<500>,Black>,TransitionEffectL<TrConcat<TrInstant,AlphaL<White,Bump<Int<0>,Int<10000>>>,TrFade<3000>,AlphaL<Orange,Bump<Int<0>,Int<8000>>>,TrFade<3000>,AlphaL<Red,Bump<Int<0>,Int<6000>>>,TrFade<2000>>,EFFECT_RETRACTION>,TransitionEffectL<TrConcat<TrFade<2000>,AlphaL<HumpFlickerL<Red,10>,Bump<Int<0>,Int<4000>>>,TrFade<2950>,AlphaL<HumpFlickerL<Orange,15>,Bump<Int<0>,Int<5000>>>,TrFade<3000>,AlphaL<HumpFlickerL<White,20>,Bump<Int<0>,Int<6000>>>,TrBoing<1000,3>>,EFFECT_PREON>>>(),

		//green: slow blink when idle, faster blink when saber is on, lockup mimics blade
				/* copyright Fett263 (Accent LED / PCB) OS7 Style
		https://www.fett263.com/fett263-proffieOS7-style-library.html#Rotoscope
		OS7.14 v2.241p
		Single Style
		On Behavior: Blinking On-Off [Color: BaseColorArg]
		Off Behavior: Slow Pulse Off-On [Color: Match ON Color]

		Base Color: BaseColorArg (0)

		--Effects Included--
		Ignition Effect: Instant [Color: IgnitionColorArg]
		Retraction Effect: Instant [Color: RetractionColorArg]
		Lockup Effect: NoneLightning Block Effect: NoneDrag Effect:
		0: accentDragMulti0Shape - Begin: Wipe In - Style: Intensity Sparking Drag - End: Wipe Out
		[Color: DragColorArg]
		Melt Effect:
		0: accentMeltMulti0Shape - Begin: Wipe In - Style: Intensity Melt - End: Wipe Out
		[Color: StabColorArg]
		*/
		StylePtr<Layers<Blinking<RgbArg<BASE_COLOR_ARG,Rgb<0,255,0>>,Black,500,500>,LockupTrL<AlphaL<TransitionEffect<RandomPerLEDFlickerL<RgbArg<DRAG_COLOR_ARG,Rgb<255,255,255>>>,BrownNoiseFlickerL<RgbArg<DRAG_COLOR_ARG,Rgb<255,255,255>>,Int<300>>,TrExtend<4000,TrInstant>,TrFade<4000>,EFFECT_DRAG_BEGIN>,SmoothStep<Scale<TwistAngle<>,IntArg<DRAG_SIZE_ARG,31000>,Int<30000>>,Int<3000>>>,TrWipeIn<200>,TrWipe<200>,SaberBase::LOCKUP_DRAG,Int<1>>,LockupTrL<AlphaL<Stripes<2000,4000,Mix<TwistAngle<>,RgbArg<STAB_COLOR_ARG,Rgb<255,68,0>>,RotateColorsX<Int<3000>,RgbArg<STAB_COLOR_ARG,Rgb<255,68,0>>>>,Mix<Sin<Int<50>>,Black,Mix<TwistAngle<>,RgbArg<STAB_COLOR_ARG,Rgb<255,68,0>>,RotateColorsX<Int<3000>,RgbArg<STAB_COLOR_ARG,Rgb<255,68,0>>>>>,Mix<Int<4096>,Black,Mix<TwistAngle<>,RgbArg<STAB_COLOR_ARG,Rgb<255,68,0>>,RotateColorsX<Int<3000>,RgbArg<STAB_COLOR_ARG,Rgb<255,68,0>>>>>>,SmoothStep<Scale<TwistAngle<>,IntArg<MELT_SIZE_ARG,26000>,Int<30000>>,Int<3000>>>,TrConcat<TrExtend<4000,TrWipeIn<200>>,AlphaL<HumpFlicker<Mix<TwistAngle<>,RgbArg<STAB_COLOR_ARG,Rgb<255,68,0>>,RotateColorsX<Int<3000>,RgbArg<STAB_COLOR_ARG,Rgb<255,68,0>>>>,RotateColorsX<Int<3000>,Mix<TwistAngle<>,RgbArg<STAB_COLOR_ARG,Rgb<255,68,0>>,RotateColorsX<Int<3000>,RgbArg<STAB_COLOR_ARG,Rgb<255,68,0>>>>>,100>,SmoothStep<Scale<TwistAngle<>,IntArg<MELT_SIZE_ARG,26000>,Int<30000>>,Int<3000>>>,TrFade<4000>>,TrWipe<200>,SaberBase::LOCKUP_MELT,Int<1>>,InOutTrL<TrInstant,TrInstant,Pulsing<Black,RgbArg<BASE_COLOR_ARG,Rgb<0,255,0>>,8000>>>>(),


		//red: slow blink when idle, faster blink when saber is on, lockup turns off (blinks alternate with green)
		/* copyright Fett263 (Accent LED / PCB) OS7 Style
		https://www.fett263.com/fett263-proffieOS7-style-library.html#Rotoscope
		OS7.14 v2.241p
		Single Style
		On Behavior: Blinking On-Off [Color: BaseColorArg]
		Off Behavior: Slow Pulse Off-On [Color: Match ON Color]

		Base Color: BaseColorArg (0)

		--Effects Included--
		Ignition Effect: Instant [Color: IgnitionColorArg]
		Retraction Effect: Instant [Color: RetractionColorArg]
		Lockup Effect: NoneLightning Block Effect: NoneDrag Effect:
		0: accentDragMulti0Shape - Begin: Wipe In - Style: Intensity Sparking Drag - End: Wipe Out
		[Color: DragColorArg]
		Melt Effect:
		0: accentMeltMulti0Shape - Begin: Wipe In - Style: Intensity Melt - End: Wipe Out
		[Color: StabColorArg]
		*/
		StylePtr<Layers<Blinking<RgbArg<BASE_COLOR_ARG,Rgb<255,0,0>>,Black,500,500>,LockupTrL<AlphaL<TransitionEffect<RandomPerLEDFlickerL<RgbArg<DRAG_COLOR_ARG,Rgb<255,255,255>>>,BrownNoiseFlickerL<RgbArg<DRAG_COLOR_ARG,Rgb<255,255,255>>,Int<300>>,TrExtend<4000,TrInstant>,TrFade<4000>,EFFECT_DRAG_BEGIN>,SmoothStep<Scale<TwistAngle<>,IntArg<DRAG_SIZE_ARG,31000>,Int<30000>>,Int<3000>>>,TrWipeIn<200>,TrWipe<200>,SaberBase::LOCKUP_DRAG,Int<1>>,LockupTrL<AlphaL<Stripes<2000,4000,Mix<TwistAngle<>,RgbArg<STAB_COLOR_ARG,Rgb<255,68,0>>,RotateColorsX<Int<3000>,RgbArg<STAB_COLOR_ARG,Rgb<255,68,0>>>>,Mix<Sin<Int<50>>,Black,Mix<TwistAngle<>,RgbArg<STAB_COLOR_ARG,Rgb<255,68,0>>,RotateColorsX<Int<3000>,RgbArg<STAB_COLOR_ARG,Rgb<255,68,0>>>>>,Mix<Int<4096>,Black,Mix<TwistAngle<>,RgbArg<STAB_COLOR_ARG,Rgb<255,68,0>>,RotateColorsX<Int<3000>,RgbArg<STAB_COLOR_ARG,Rgb<255,68,0>>>>>>,SmoothStep<Scale<TwistAngle<>,IntArg<MELT_SIZE_ARG,26000>,Int<30000>>,Int<3000>>>,TrConcat<TrExtend<4000,TrWipeIn<200>>,AlphaL<HumpFlicker<Mix<TwistAngle<>,RgbArg<STAB_COLOR_ARG,Rgb<255,68,0>>,RotateColorsX<Int<3000>,RgbArg<STAB_COLOR_ARG,Rgb<255,68,0>>>>,RotateColorsX<Int<3000>,Mix<TwistAngle<>,RgbArg<STAB_COLOR_ARG,Rgb<255,68,0>>,RotateColorsX<Int<3000>,RgbArg<STAB_COLOR_ARG,Rgb<255,68,0>>>>>,100>,SmoothStep<Scale<TwistAngle<>,IntArg<MELT_SIZE_ARG,26000>,Int<30000>>,Int<3000>>>,TrFade<4000>>,TrWipe<200>,SaberBase::LOCKUP_MELT,Int<1>>,InOutTrL<TrInstant,TrInstant,Pulsing<Black,RgbArg<BASE_COLOR_ARG,Rgb<255,0,0>>,8000>>>>(),},
	
	{ "Father_ROTJ", "tracks/Father_ROTJ.wav",
		StylePtr<InOutSparkTip<SimpleClash<Lockup<Blast<AudioFlicker<Red,Rgb16<65535,5547,5547>>,LightCyan,200,1000,10000>,Pulsing<Gradient<AudioFlicker<Red,Rgb16<65535,5547,5547>>,AudioFlicker<Red,Rgb16<65535,5547,5547>>,BrownNoiseFlicker<White,Strobe<Cyan,White,50,1>,100>,AudioFlicker<Red,Rgb16<65535,5547,5547>>,AudioFlicker<Red,Rgb16<65535,5547,5547>>,AudioFlicker<Red,Rgb16<65535,5547,5547>>>,Gradient<AudioFlicker<Red,Rgb16<65535,5547,5547>>,AudioFlicker<Red,Rgb16<65535,5547,5547>>,BrownNoiseFlicker<White,Strobe<Cyan,White,50,1>,100>,AudioFlicker<Red,Rgb16<65535,5547,5547>>,AudioFlicker<Red,Rgb16<65535,5547,5547>>>,3500>,BrownNoiseFlicker<Rgb16<65535,17,93>,Cyan,50>>,LightCyan,40>,500,700,White>>(),

		StylePtr<Layers<AudioFlicker<RotateColorsX<Variation,Red>,RotateColorsX<Variation,Rgb<128,0,0>>> ,InOutTrL<TrInstant,TrFade<300>,Layers<Black,TransitionEffectL<TrConcat<TrInstant,Pulsing<RotateColorsX<Variation,Red>,RotateColorsX<Variation,Rgb<10,0,0>>,10000>,TrDelay<180000>,Pulsing<RotateColorsX<Variation,Red>,RotateColorsX<Variation,Rgb<10,0,0>>,10000>,TrFade<1000>>,EFFECT_BOOT>,TransitionEffectL<TrConcat<TrInstant,Pulsing<RotateColorsX<Variation,Red>,RotateColorsX<Variation,Rgb<10,0,0>>,10000>,TrDelay<180000>,Pulsing<RotateColorsX<Variation,Red>,RotateColorsX<Variation,Rgb<10,0,0>>,10000>,TrFade<1000>>,EFFECT_NEWFONT>,TransitionEffectL<TrConcat<TrInstant,Pulsing<RotateColorsX<Variation,Red>,RotateColorsX<Variation,Rgb<10,0,0>>,10000>,TrDelay<180000>,Pulsing<RotateColorsX<Variation,Red>,RotateColorsX<Variation,Rgb<10,0,0>>,10000>,TrFade<1000>>,EFFECT_RETRACTION>>>>>(), 

		StylePtr<Layers<RotateColorsX<Variation,Rgb<180,130,0>>,TransitionEffectL<TrConcat<TrInstant,BrownNoiseFlickerL<AlphaL<White,Int<16000>>,Int<50>>,TrSmoothFade<600>>,EFFECT_LOCKUP_END>,ResponsiveLockupL<Strobe<White,BrownNoiseFlicker<White,Red,300>,50,1>,TrConcat<TrInstant,White,TrFade<400>>,TrFade<100>,Scale<BladeAngle<0,16000>,Int<4000>,Int<26000>>,Int<6000>,Scale<SwingSpeed<100>,Int<10000>,Int<14000>>>,ResponsiveLightningBlockL<Strobe<White,AudioFlicker<White,Blue>,50,1>,TrConcat<TrInstant,AlphaL<White,Bump<Int<12000>,Int<18000>>>,TrFade<200>>,TrConcat<TrInstant,HumpFlickerL<AlphaL<White,Int<16000>>,30>,TrSmoothFade<600>>>,AlphaL<TransitionEffect<White,Rgb<128,0,0>,TrInstant,TrConcat<TrFade<1500>,Red,TrFade<2000>,Orange,TrFade<2500>>,EFFECT_IGNITION>,Bump<Int<0>,Int<6000>>>,ResponsiveStabL<Red,TrWipeIn<600>,TrWipe<600>>,ResponsiveBlastL<White,Int<400>,Scale<SwingSpeed<200>,Int<100>,Int<400>>,Int<400>>,ResponsiveClashL<White,TrInstant,TrFade<400>,Scale<BladeAngle<0,16000>,Int<4000>,Int<26000>>,Int<6000>>,LockupTrL<AlphaL<BrownNoiseFlickerL<White,Int<300>>,SmoothStep<Int<30000>,Int<5000>>>,TrWipeIn<400>,TrFade<300>,SaberBase::LOCKUP_DRAG>,LockupTrL<AlphaL<Mix<TwistAngle<>,Red,Orange>,SmoothStep<Int<28000>,Int<5000>>>,TrWipeIn<600>,TrFade<300>,SaberBase::LOCKUP_MELT>,InOutTrL<TrWipe<7000>,TrWipeIn<500>,Black>,TransitionEffectL<TrConcat<TrInstant,AlphaL<White,Bump<Int<0>,Int<10000>>>,TrFade<3000>,AlphaL<Orange,Bump<Int<0>,Int<8000>>>,TrFade<3000>,AlphaL<Red,Bump<Int<0>,Int<6000>>>,TrFade<2000>>,EFFECT_RETRACTION>,TransitionEffectL<TrConcat<TrFade<2000>,AlphaL<HumpFlickerL<Red,10>,Bump<Int<0>,Int<4000>>>,TrFade<2950>,AlphaL<HumpFlickerL<Orange,15>,Bump<Int<0>,Int<5000>>>,TrFade<3000>,AlphaL<HumpFlickerL<White,20>,Bump<Int<0>,Int<6000>>>,TrBoing<1000,3>>,EFFECT_PREON>>>(),

		//green: slow blink when idle, faster blink when saber is on, lockup mimics blade
				/* copyright Fett263 (Accent LED / PCB) OS7 Style
		https://www.fett263.com/fett263-proffieOS7-style-library.html#Rotoscope
		OS7.14 v2.241p
		Single Style
		On Behavior: Blinking On-Off [Color: BaseColorArg]
		Off Behavior: Slow Pulse Off-On [Color: Match ON Color]

		Base Color: BaseColorArg (0)

		--Effects Included--
		Ignition Effect: Instant [Color: IgnitionColorArg]
		Retraction Effect: Instant [Color: RetractionColorArg]
		Lockup Effect: NoneLightning Block Effect: NoneDrag Effect:
		0: accentDragMulti0Shape - Begin: Wipe In - Style: Intensity Sparking Drag - End: Wipe Out
		[Color: DragColorArg]
		Melt Effect:
		0: accentMeltMulti0Shape - Begin: Wipe In - Style: Intensity Melt - End: Wipe Out
		[Color: StabColorArg]
		*/
		StylePtr<Layers<Blinking<RgbArg<BASE_COLOR_ARG,Rgb<0,255,0>>,Black,500,500>,LockupTrL<AlphaL<TransitionEffect<RandomPerLEDFlickerL<RgbArg<DRAG_COLOR_ARG,Rgb<255,255,255>>>,BrownNoiseFlickerL<RgbArg<DRAG_COLOR_ARG,Rgb<255,255,255>>,Int<300>>,TrExtend<4000,TrInstant>,TrFade<4000>,EFFECT_DRAG_BEGIN>,SmoothStep<Scale<TwistAngle<>,IntArg<DRAG_SIZE_ARG,31000>,Int<30000>>,Int<3000>>>,TrWipeIn<200>,TrWipe<200>,SaberBase::LOCKUP_DRAG,Int<1>>,LockupTrL<AlphaL<Stripes<2000,4000,Mix<TwistAngle<>,RgbArg<STAB_COLOR_ARG,Rgb<255,68,0>>,RotateColorsX<Int<3000>,RgbArg<STAB_COLOR_ARG,Rgb<255,68,0>>>>,Mix<Sin<Int<50>>,Black,Mix<TwistAngle<>,RgbArg<STAB_COLOR_ARG,Rgb<255,68,0>>,RotateColorsX<Int<3000>,RgbArg<STAB_COLOR_ARG,Rgb<255,68,0>>>>>,Mix<Int<4096>,Black,Mix<TwistAngle<>,RgbArg<STAB_COLOR_ARG,Rgb<255,68,0>>,RotateColorsX<Int<3000>,RgbArg<STAB_COLOR_ARG,Rgb<255,68,0>>>>>>,SmoothStep<Scale<TwistAngle<>,IntArg<MELT_SIZE_ARG,26000>,Int<30000>>,Int<3000>>>,TrConcat<TrExtend<4000,TrWipeIn<200>>,AlphaL<HumpFlicker<Mix<TwistAngle<>,RgbArg<STAB_COLOR_ARG,Rgb<255,68,0>>,RotateColorsX<Int<3000>,RgbArg<STAB_COLOR_ARG,Rgb<255,68,0>>>>,RotateColorsX<Int<3000>,Mix<TwistAngle<>,RgbArg<STAB_COLOR_ARG,Rgb<255,68,0>>,RotateColorsX<Int<3000>,RgbArg<STAB_COLOR_ARG,Rgb<255,68,0>>>>>,100>,SmoothStep<Scale<TwistAngle<>,IntArg<MELT_SIZE_ARG,26000>,Int<30000>>,Int<3000>>>,TrFade<4000>>,TrWipe<200>,SaberBase::LOCKUP_MELT,Int<1>>,InOutTrL<TrInstant,TrInstant,Pulsing<Black,RgbArg<BASE_COLOR_ARG,Rgb<0,255,0>>,8000>>>>(),


		//red: slow blink when idle, faster blink when saber is on, lockup turns off (blinks alternate with green)
		/* copyright Fett263 (Accent LED / PCB) OS7 Style
		https://www.fett263.com/fett263-proffieOS7-style-library.html#Rotoscope
		OS7.14 v2.241p
		Single Style
		On Behavior: Blinking On-Off [Color: BaseColorArg]
		Off Behavior: Slow Pulse Off-On [Color: Match ON Color]

		Base Color: BaseColorArg (0)

		--Effects Included--
		Ignition Effect: Instant [Color: IgnitionColorArg]
		Retraction Effect: Instant [Color: RetractionColorArg]
		Lockup Effect: NoneLightning Block Effect: NoneDrag Effect:
		0: accentDragMulti0Shape - Begin: Wipe In - Style: Intensity Sparking Drag - End: Wipe Out
		[Color: DragColorArg]
		Melt Effect:
		0: accentMeltMulti0Shape - Begin: Wipe In - Style: Intensity Melt - End: Wipe Out
		[Color: StabColorArg]
		*/
		StylePtr<Layers<Blinking<RgbArg<BASE_COLOR_ARG,Rgb<255,0,0>>,Black,500,500>,LockupTrL<AlphaL<TransitionEffect<RandomPerLEDFlickerL<RgbArg<DRAG_COLOR_ARG,Rgb<255,255,255>>>,BrownNoiseFlickerL<RgbArg<DRAG_COLOR_ARG,Rgb<255,255,255>>,Int<300>>,TrExtend<4000,TrInstant>,TrFade<4000>,EFFECT_DRAG_BEGIN>,SmoothStep<Scale<TwistAngle<>,IntArg<DRAG_SIZE_ARG,31000>,Int<30000>>,Int<3000>>>,TrWipeIn<200>,TrWipe<200>,SaberBase::LOCKUP_DRAG,Int<1>>,LockupTrL<AlphaL<Stripes<2000,4000,Mix<TwistAngle<>,RgbArg<STAB_COLOR_ARG,Rgb<255,68,0>>,RotateColorsX<Int<3000>,RgbArg<STAB_COLOR_ARG,Rgb<255,68,0>>>>,Mix<Sin<Int<50>>,Black,Mix<TwistAngle<>,RgbArg<STAB_COLOR_ARG,Rgb<255,68,0>>,RotateColorsX<Int<3000>,RgbArg<STAB_COLOR_ARG,Rgb<255,68,0>>>>>,Mix<Int<4096>,Black,Mix<TwistAngle<>,RgbArg<STAB_COLOR_ARG,Rgb<255,68,0>>,RotateColorsX<Int<3000>,RgbArg<STAB_COLOR_ARG,Rgb<255,68,0>>>>>>,SmoothStep<Scale<TwistAngle<>,IntArg<MELT_SIZE_ARG,26000>,Int<30000>>,Int<3000>>>,TrConcat<TrExtend<4000,TrWipeIn<200>>,AlphaL<HumpFlicker<Mix<TwistAngle<>,RgbArg<STAB_COLOR_ARG,Rgb<255,68,0>>,RotateColorsX<Int<3000>,RgbArg<STAB_COLOR_ARG,Rgb<255,68,0>>>>,RotateColorsX<Int<3000>,Mix<TwistAngle<>,RgbArg<STAB_COLOR_ARG,Rgb<255,68,0>>,RotateColorsX<Int<3000>,RgbArg<STAB_COLOR_ARG,Rgb<255,68,0>>>>>,100>,SmoothStep<Scale<TwistAngle<>,IntArg<MELT_SIZE_ARG,26000>,Int<30000>>,Int<3000>>>,TrFade<4000>>,TrWipe<200>,SaberBase::LOCKUP_MELT,Int<1>>,InOutTrL<TrInstant,TrInstant,Pulsing<Black,RgbArg<BASE_COLOR_ARG,Rgb<255,0,0>>,8000>>>>(),},

	{ "The_Count's_Claw", "tracks/The_Count's_Claw.wav",

		StylePtr<InOutSparkTip<EASYBLADE(RED, WHITE), 300, 800> >(),


		StylePtr<Layers<AudioFlicker<RotateColorsX<Variation,Red>,RotateColorsX<Variation,Rgb<128,0,0>>> ,InOutTrL<TrInstant,TrFade<300>,Layers<Black,TransitionEffectL<TrConcat<TrInstant,Pulsing<RotateColorsX<Variation,Red>,RotateColorsX<Variation,Rgb<10,0,0>>,10000>,TrDelay<180000>,Pulsing<RotateColorsX<Variation,Red>,RotateColorsX<Variation,Rgb<10,0,0>>,10000>,TrFade<1000>>,EFFECT_BOOT>,TransitionEffectL<TrConcat<TrInstant,Pulsing<RotateColorsX<Variation,Red>,RotateColorsX<Variation,Rgb<10,0,0>>,10000>,TrDelay<180000>,Pulsing<RotateColorsX<Variation,Red>,RotateColorsX<Variation,Rgb<10,0,0>>,10000>,TrFade<1000>>,EFFECT_NEWFONT>,TransitionEffectL<TrConcat<TrInstant,Pulsing<RotateColorsX<Variation,Red>,RotateColorsX<Variation,Rgb<10,0,0>>,10000>,TrDelay<180000>,Pulsing<RotateColorsX<Variation,Red>,RotateColorsX<Variation,Rgb<10,0,0>>,10000>,TrFade<1000>>,EFFECT_RETRACTION>>>>>(),

		StylePtr<Layers<RotateColorsX<Variation,Rgb<180,130,0>>,TransitionEffectL<TrConcat<TrInstant,BrownNoiseFlickerL<AlphaL<White,Int<16000>>,Int<50>>,TrSmoothFade<600>>,EFFECT_LOCKUP_END>,ResponsiveLockupL<Strobe<White,BrownNoiseFlicker<White,Red,300>,50,1>,TrConcat<TrInstant,White,TrFade<400>>,TrFade<100>,Scale<BladeAngle<0,16000>,Int<4000>,Int<26000>>,Int<6000>,Scale<SwingSpeed<100>,Int<10000>,Int<14000>>>,ResponsiveLightningBlockL<Strobe<White,AudioFlicker<White,Blue>,50,1>,TrConcat<TrInstant,AlphaL<White,Bump<Int<12000>,Int<18000>>>,TrFade<200>>,TrConcat<TrInstant,HumpFlickerL<AlphaL<White,Int<16000>>,30>,TrSmoothFade<600>>>,AlphaL<TransitionEffect<White,Rgb<128,0,0>,TrInstant,TrConcat<TrFade<1500>,Red,TrFade<2000>,Orange,TrFade<2500>>,EFFECT_IGNITION>,Bump<Int<0>,Int<6000>>>,ResponsiveStabL<Red,TrWipeIn<600>,TrWipe<600>>,ResponsiveBlastL<White,Int<400>,Scale<SwingSpeed<200>,Int<100>,Int<400>>,Int<400>>,ResponsiveClashL<White,TrInstant,TrFade<400>,Scale<BladeAngle<0,16000>,Int<4000>,Int<26000>>,Int<6000>>,LockupTrL<AlphaL<BrownNoiseFlickerL<White,Int<300>>,SmoothStep<Int<30000>,Int<5000>>>,TrWipeIn<400>,TrFade<300>,SaberBase::LOCKUP_DRAG>,LockupTrL<AlphaL<Mix<TwistAngle<>,Red,Orange>,SmoothStep<Int<28000>,Int<5000>>>,TrWipeIn<600>,TrFade<300>,SaberBase::LOCKUP_MELT>,InOutTrL<TrWipe<7000>,TrWipeIn<500>,Black>,TransitionEffectL<TrConcat<TrInstant,AlphaL<White,Bump<Int<0>,Int<10000>>>,TrFade<3000>,AlphaL<Orange,Bump<Int<0>,Int<8000>>>,TrFade<3000>,AlphaL<Red,Bump<Int<0>,Int<6000>>>,TrFade<2000>>,EFFECT_RETRACTION>,TransitionEffectL<TrConcat<TrFade<2000>,AlphaL<HumpFlickerL<Red,10>,Bump<Int<0>,Int<4000>>>,TrFade<2950>,AlphaL<HumpFlickerL<Orange,15>,Bump<Int<0>,Int<5000>>>,TrFade<3000>,AlphaL<HumpFlickerL<White,20>,Bump<Int<0>,Int<6000>>>,TrBoing<1000,3>>,EFFECT_PREON>>>(),

		//green: slow blink when idle, faster blink when saber is on, lockup mimics blade
				/* copyright Fett263 (Accent LED / PCB) OS7 Style
		https://www.fett263.com/fett263-proffieOS7-style-library.html#Rotoscope
		OS7.14 v2.241p
		Single Style
		On Behavior: Blinking On-Off [Color: BaseColorArg]
		Off Behavior: Slow Pulse Off-On [Color: Match ON Color]

		Base Color: BaseColorArg (0)

		--Effects Included--
		Ignition Effect: Instant [Color: IgnitionColorArg]
		Retraction Effect: Instant [Color: RetractionColorArg]
		Lockup Effect: NoneLightning Block Effect: NoneDrag Effect:
		0: accentDragMulti0Shape - Begin: Wipe In - Style: Intensity Sparking Drag - End: Wipe Out
		[Color: DragColorArg]
		Melt Effect:
		0: accentMeltMulti0Shape - Begin: Wipe In - Style: Intensity Melt - End: Wipe Out
		[Color: StabColorArg]
		*/
		StylePtr<Layers<Blinking<RgbArg<BASE_COLOR_ARG,Rgb<0,255,0>>,Black,500,500>,LockupTrL<AlphaL<TransitionEffect<RandomPerLEDFlickerL<RgbArg<DRAG_COLOR_ARG,Rgb<255,255,255>>>,BrownNoiseFlickerL<RgbArg<DRAG_COLOR_ARG,Rgb<255,255,255>>,Int<300>>,TrExtend<4000,TrInstant>,TrFade<4000>,EFFECT_DRAG_BEGIN>,SmoothStep<Scale<TwistAngle<>,IntArg<DRAG_SIZE_ARG,31000>,Int<30000>>,Int<3000>>>,TrWipeIn<200>,TrWipe<200>,SaberBase::LOCKUP_DRAG,Int<1>>,LockupTrL<AlphaL<Stripes<2000,4000,Mix<TwistAngle<>,RgbArg<STAB_COLOR_ARG,Rgb<255,68,0>>,RotateColorsX<Int<3000>,RgbArg<STAB_COLOR_ARG,Rgb<255,68,0>>>>,Mix<Sin<Int<50>>,Black,Mix<TwistAngle<>,RgbArg<STAB_COLOR_ARG,Rgb<255,68,0>>,RotateColorsX<Int<3000>,RgbArg<STAB_COLOR_ARG,Rgb<255,68,0>>>>>,Mix<Int<4096>,Black,Mix<TwistAngle<>,RgbArg<STAB_COLOR_ARG,Rgb<255,68,0>>,RotateColorsX<Int<3000>,RgbArg<STAB_COLOR_ARG,Rgb<255,68,0>>>>>>,SmoothStep<Scale<TwistAngle<>,IntArg<MELT_SIZE_ARG,26000>,Int<30000>>,Int<3000>>>,TrConcat<TrExtend<4000,TrWipeIn<200>>,AlphaL<HumpFlicker<Mix<TwistAngle<>,RgbArg<STAB_COLOR_ARG,Rgb<255,68,0>>,RotateColorsX<Int<3000>,RgbArg<STAB_COLOR_ARG,Rgb<255,68,0>>>>,RotateColorsX<Int<3000>,Mix<TwistAngle<>,RgbArg<STAB_COLOR_ARG,Rgb<255,68,0>>,RotateColorsX<Int<3000>,RgbArg<STAB_COLOR_ARG,Rgb<255,68,0>>>>>,100>,SmoothStep<Scale<TwistAngle<>,IntArg<MELT_SIZE_ARG,26000>,Int<30000>>,Int<3000>>>,TrFade<4000>>,TrWipe<200>,SaberBase::LOCKUP_MELT,Int<1>>,InOutTrL<TrInstant,TrInstant,Pulsing<Black,RgbArg<BASE_COLOR_ARG,Rgb<0,255,0>>,8000>>>>(),


		//red: slow blink when idle, faster blink when saber is on, lockup turns off (blinks alternate with green)
		/* copyright Fett263 (Accent LED / PCB) OS7 Style
		https://www.fett263.com/fett263-proffieOS7-style-library.html#Rotoscope
		OS7.14 v2.241p
		Single Style
		On Behavior: Blinking On-Off [Color: BaseColorArg]
		Off Behavior: Slow Pulse Off-On [Color: Match ON Color]

		Base Color: BaseColorArg (0)

		--Effects Included--
		Ignition Effect: Instant [Color: IgnitionColorArg]
		Retraction Effect: Instant [Color: RetractionColorArg]
		Lockup Effect: NoneLightning Block Effect: NoneDrag Effect:
		0: accentDragMulti0Shape - Begin: Wipe In - Style: Intensity Sparking Drag - End: Wipe Out
		[Color: DragColorArg]
		Melt Effect:
		0: accentMeltMulti0Shape - Begin: Wipe In - Style: Intensity Melt - End: Wipe Out
		[Color: StabColorArg]
		*/
		StylePtr<Layers<Blinking<RgbArg<BASE_COLOR_ARG,Rgb<255,0,0>>,Black,500,500>,LockupTrL<AlphaL<TransitionEffect<RandomPerLEDFlickerL<RgbArg<DRAG_COLOR_ARG,Rgb<255,255,255>>>,BrownNoiseFlickerL<RgbArg<DRAG_COLOR_ARG,Rgb<255,255,255>>,Int<300>>,TrExtend<4000,TrInstant>,TrFade<4000>,EFFECT_DRAG_BEGIN>,SmoothStep<Scale<TwistAngle<>,IntArg<DRAG_SIZE_ARG,31000>,Int<30000>>,Int<3000>>>,TrWipeIn<200>,TrWipe<200>,SaberBase::LOCKUP_DRAG,Int<1>>,LockupTrL<AlphaL<Stripes<2000,4000,Mix<TwistAngle<>,RgbArg<STAB_COLOR_ARG,Rgb<255,68,0>>,RotateColorsX<Int<3000>,RgbArg<STAB_COLOR_ARG,Rgb<255,68,0>>>>,Mix<Sin<Int<50>>,Black,Mix<TwistAngle<>,RgbArg<STAB_COLOR_ARG,Rgb<255,68,0>>,RotateColorsX<Int<3000>,RgbArg<STAB_COLOR_ARG,Rgb<255,68,0>>>>>,Mix<Int<4096>,Black,Mix<TwistAngle<>,RgbArg<STAB_COLOR_ARG,Rgb<255,68,0>>,RotateColorsX<Int<3000>,RgbArg<STAB_COLOR_ARG,Rgb<255,68,0>>>>>>,SmoothStep<Scale<TwistAngle<>,IntArg<MELT_SIZE_ARG,26000>,Int<30000>>,Int<3000>>>,TrConcat<TrExtend<4000,TrWipeIn<200>>,AlphaL<HumpFlicker<Mix<TwistAngle<>,RgbArg<STAB_COLOR_ARG,Rgb<255,68,0>>,RotateColorsX<Int<3000>,RgbArg<STAB_COLOR_ARG,Rgb<255,68,0>>>>,RotateColorsX<Int<3000>,Mix<TwistAngle<>,RgbArg<STAB_COLOR_ARG,Rgb<255,68,0>>,RotateColorsX<Int<3000>,RgbArg<STAB_COLOR_ARG,Rgb<255,68,0>>>>>,100>,SmoothStep<Scale<TwistAngle<>,IntArg<MELT_SIZE_ARG,26000>,Int<30000>>,Int<3000>>>,TrFade<4000>>,TrWipe<200>,SaberBase::LOCKUP_MELT,Int<1>>,InOutTrL<TrInstant,TrInstant,Pulsing<Black,RgbArg<BASE_COLOR_ARG,Rgb<255,0,0>>,8000>>>>(),},

	{ "menace", "tracks/menace.wav",
		StylePtr<Layers<AudioFlicker<RotateColorsX<Variation,Red>,RotateColorsX<Variation,Rgb<128,0,0>>>,TransitionEffectL<TrConcat<TrInstant,BrownNoiseFlickerL<AlphaL<White,Int<16000>>,Int<50>>,TrSmoothFade<600>>,EFFECT_LOCKUP_END>,LockupTrL<AlphaL<Strobe<White,BrownNoiseFlicker<White,Blue,300>,50,1>,Bump<Sin<Int<10>,Int<10000>,Int<20000>>,Int<12000>>>,TrConcat<TrInstant,White,TrFade<200>>,TrFade<400>,SaberBase::LOCKUP_NORMAL>,ResponsiveLightningBlockL<Strobe<White,AudioFlicker<White,Blue>,50,1>,TrConcat<TrInstant,AlphaL<White,Bump<Int<12000>,Int<18000>>>,TrFade<200>>,TrConcat<TrInstant,HumpFlickerL<AlphaL<White,Int<16000>>,30>,TrSmoothFade<600>>>,ResponsiveStabL<Orange,TrWipeIn<600>,TrWipe<600>>,ResponsiveBlastL<White,Int<400>,Scale<SwingSpeed<200>,Int<100>,Int<400>>,Int<400>>,ResponsiveBlastWaveL<White,Int<300>,Int<100>,Int<300>,Scale<BladeAngle<0,16000>,Int<10000>,Int<30000>>,Int<10000>,EFFECT_CLASH>,ResponsiveDragL<BrownNoiseFlickerL<White,Int<300>>,TrWipeIn<400>,TrFade<400>>,ResponsiveMeltL<Mix<TwistAngle<>,OrangeRed,Orange>,TrWipeIn<600>,TrSmoothFade<600>>,InOutTrL<TrWipe<300>,TrWipeIn<500>,Black>,AlphaL<Black,Scale<IsLessThan<BatteryLevel,Int<10000>>,Int<0>,Scale<BatteryLevel,Int<16384>,Int<7500>>>>>>(),
		StylePtr<Layers<AudioFlicker<RotateColorsX<Variation,Red>,RotateColorsX<Variation,Rgb<128,0,0>>> ,InOutTrL<TrInstant,TrFade<300>,Layers<Black,TransitionEffectL<TrConcat<TrInstant,Pulsing<RotateColorsX<Variation,Red>,RotateColorsX<Variation,Rgb<10,0,0>>,10000>,TrDelay<180000>,Pulsing<RotateColorsX<Variation,Red>,RotateColorsX<Variation,Rgb<10,0,0>>,10000>,TrFade<1000>>,EFFECT_BOOT>,TransitionEffectL<TrConcat<TrInstant,Pulsing<RotateColorsX<Variation,Red>,RotateColorsX<Variation,Rgb<10,0,0>>,10000>,TrDelay<180000>,Pulsing<RotateColorsX<Variation,Red>,RotateColorsX<Variation,Rgb<10,0,0>>,10000>,TrFade<1000>>,EFFECT_NEWFONT>,TransitionEffectL<TrConcat<TrInstant,Pulsing<RotateColorsX<Variation,Red>,RotateColorsX<Variation,Rgb<10,0,0>>,10000>,TrDelay<180000>,Pulsing<RotateColorsX<Variation,Red>,RotateColorsX<Variation,Rgb<10,0,0>>,10000>,TrFade<1000>>,EFFECT_RETRACTION>>>>>(),

		StylePtr<Layers<RotateColorsX<Variation,Rgb<180,130,0>>,TransitionEffectL<TrConcat<TrInstant,BrownNoiseFlickerL<AlphaL<White,Int<16000>>,Int<50>>,TrSmoothFade<600>>,EFFECT_LOCKUP_END>,ResponsiveLockupL<Strobe<White,BrownNoiseFlicker<White,Red,300>,50,1>,TrConcat<TrInstant,White,TrFade<400>>,TrFade<100>,Scale<BladeAngle<0,16000>,Int<4000>,Int<26000>>,Int<6000>,Scale<SwingSpeed<100>,Int<10000>,Int<14000>>>,ResponsiveLightningBlockL<Strobe<White,AudioFlicker<White,Blue>,50,1>,TrConcat<TrInstant,AlphaL<White,Bump<Int<12000>,Int<18000>>>,TrFade<200>>,TrConcat<TrInstant,HumpFlickerL<AlphaL<White,Int<16000>>,30>,TrSmoothFade<600>>>,AlphaL<TransitionEffect<White,Rgb<128,0,0>,TrInstant,TrConcat<TrFade<1500>,Red,TrFade<2000>,Orange,TrFade<2500>>,EFFECT_IGNITION>,Bump<Int<0>,Int<6000>>>,ResponsiveStabL<Red,TrWipeIn<600>,TrWipe<600>>,ResponsiveBlastL<White,Int<400>,Scale<SwingSpeed<200>,Int<100>,Int<400>>,Int<400>>,ResponsiveClashL<White,TrInstant,TrFade<400>,Scale<BladeAngle<0,16000>,Int<4000>,Int<26000>>,Int<6000>>,LockupTrL<AlphaL<BrownNoiseFlickerL<White,Int<300>>,SmoothStep<Int<30000>,Int<5000>>>,TrWipeIn<400>,TrFade<300>,SaberBase::LOCKUP_DRAG>,LockupTrL<AlphaL<Mix<TwistAngle<>,Red,Orange>,SmoothStep<Int<28000>,Int<5000>>>,TrWipeIn<600>,TrFade<300>,SaberBase::LOCKUP_MELT>,InOutTrL<TrWipe<7000>,TrWipeIn<500>,Black>,TransitionEffectL<TrConcat<TrInstant,AlphaL<White,Bump<Int<0>,Int<10000>>>,TrFade<3000>,AlphaL<Orange,Bump<Int<0>,Int<8000>>>,TrFade<3000>,AlphaL<Red,Bump<Int<0>,Int<6000>>>,TrFade<2000>>,EFFECT_RETRACTION>,TransitionEffectL<TrConcat<TrFade<2000>,AlphaL<HumpFlickerL<Red,10>,Bump<Int<0>,Int<4000>>>,TrFade<2950>,AlphaL<HumpFlickerL<Orange,15>,Bump<Int<0>,Int<5000>>>,TrFade<3000>,AlphaL<HumpFlickerL<White,20>,Bump<Int<0>,Int<6000>>>,TrBoing<1000,3>>,EFFECT_PREON>>>(),

		//green: slow blink when idle, faster blink when saber is on, lockup mimics blade
		/* copyright Fett263 (Accent LED / PCB) OS7 Style
		https://www.fett263.com/fett263-proffieOS7-style-library.html#Rotoscope
		OS7.14 v2.241p
		Single Style
		On Behavior: Blinking On-Off [Color: BaseColorArg]
		Off Behavior: Slow Pulse Off-On [Color: Match ON Color]

		Base Color: BaseColorArg (0)

		--Effects Included--
		Ignition Effect: Instant [Color: IgnitionColorArg]
		Retraction Effect: Instant [Color: RetractionColorArg]
		Lockup Effect: NoneLightning Block Effect: NoneDrag Effect:
		0: accentDragMulti0Shape - Begin: Wipe In - Style: Intensity Sparking Drag - End: Wipe Out
		[Color: DragColorArg]
		Melt Effect:
		0: accentMeltMulti0Shape - Begin: Wipe In - Style: Intensity Melt - End: Wipe Out
		[Color: StabColorArg]
		*/
		StylePtr<Layers<Blinking<RgbArg<BASE_COLOR_ARG,Rgb<0,255,0>>,Black,500,500>,LockupTrL<AlphaL<TransitionEffect<RandomPerLEDFlickerL<RgbArg<DRAG_COLOR_ARG,Rgb<255,255,255>>>,BrownNoiseFlickerL<RgbArg<DRAG_COLOR_ARG,Rgb<255,255,255>>,Int<300>>,TrExtend<4000,TrInstant>,TrFade<4000>,EFFECT_DRAG_BEGIN>,SmoothStep<Scale<TwistAngle<>,IntArg<DRAG_SIZE_ARG,31000>,Int<30000>>,Int<3000>>>,TrWipeIn<200>,TrWipe<200>,SaberBase::LOCKUP_DRAG,Int<1>>,LockupTrL<AlphaL<Stripes<2000,4000,Mix<TwistAngle<>,RgbArg<STAB_COLOR_ARG,Rgb<255,68,0>>,RotateColorsX<Int<3000>,RgbArg<STAB_COLOR_ARG,Rgb<255,68,0>>>>,Mix<Sin<Int<50>>,Black,Mix<TwistAngle<>,RgbArg<STAB_COLOR_ARG,Rgb<255,68,0>>,RotateColorsX<Int<3000>,RgbArg<STAB_COLOR_ARG,Rgb<255,68,0>>>>>,Mix<Int<4096>,Black,Mix<TwistAngle<>,RgbArg<STAB_COLOR_ARG,Rgb<255,68,0>>,RotateColorsX<Int<3000>,RgbArg<STAB_COLOR_ARG,Rgb<255,68,0>>>>>>,SmoothStep<Scale<TwistAngle<>,IntArg<MELT_SIZE_ARG,26000>,Int<30000>>,Int<3000>>>,TrConcat<TrExtend<4000,TrWipeIn<200>>,AlphaL<HumpFlicker<Mix<TwistAngle<>,RgbArg<STAB_COLOR_ARG,Rgb<255,68,0>>,RotateColorsX<Int<3000>,RgbArg<STAB_COLOR_ARG,Rgb<255,68,0>>>>,RotateColorsX<Int<3000>,Mix<TwistAngle<>,RgbArg<STAB_COLOR_ARG,Rgb<255,68,0>>,RotateColorsX<Int<3000>,RgbArg<STAB_COLOR_ARG,Rgb<255,68,0>>>>>,100>,SmoothStep<Scale<TwistAngle<>,IntArg<MELT_SIZE_ARG,26000>,Int<30000>>,Int<3000>>>,TrFade<4000>>,TrWipe<200>,SaberBase::LOCKUP_MELT,Int<1>>,InOutTrL<TrInstant,TrInstant,Pulsing<Black,RgbArg<BASE_COLOR_ARG,Rgb<0,255,0>>,8000>>>>(),


		//red: slow blink when idle, faster blink when saber is on, lockup turns off (blinks alternate with green)
		/* copyright Fett263 (Accent LED / PCB) OS7 Style
		https://www.fett263.com/fett263-proffieOS7-style-library.html#Rotoscope
		OS7.14 v2.241p
		Single Style
		On Behavior: Blinking On-Off [Color: BaseColorArg]
		Off Behavior: Slow Pulse Off-On [Color: Match ON Color]

		Base Color: BaseColorArg (0)

		--Effects Included--
		Ignition Effect: Instant [Color: IgnitionColorArg]
		Retraction Effect: Instant [Color: RetractionColorArg]
		Lockup Effect: NoneLightning Block Effect: NoneDrag Effect:
		0: accentDragMulti0Shape - Begin: Wipe In - Style: Intensity Sparking Drag - End: Wipe Out
		[Color: DragColorArg]
		Melt Effect:
		0: accentMeltMulti0Shape - Begin: Wipe In - Style: Intensity Melt - End: Wipe Out
		[Color: StabColorArg]
		*/
		StylePtr<Layers<Blinking<RgbArg<BASE_COLOR_ARG,Rgb<255,0,0>>,Black,500,500>,LockupTrL<AlphaL<TransitionEffect<RandomPerLEDFlickerL<RgbArg<DRAG_COLOR_ARG,Rgb<255,255,255>>>,BrownNoiseFlickerL<RgbArg<DRAG_COLOR_ARG,Rgb<255,255,255>>,Int<300>>,TrExtend<4000,TrInstant>,TrFade<4000>,EFFECT_DRAG_BEGIN>,SmoothStep<Scale<TwistAngle<>,IntArg<DRAG_SIZE_ARG,31000>,Int<30000>>,Int<3000>>>,TrWipeIn<200>,TrWipe<200>,SaberBase::LOCKUP_DRAG,Int<1>>,LockupTrL<AlphaL<Stripes<2000,4000,Mix<TwistAngle<>,RgbArg<STAB_COLOR_ARG,Rgb<255,68,0>>,RotateColorsX<Int<3000>,RgbArg<STAB_COLOR_ARG,Rgb<255,68,0>>>>,Mix<Sin<Int<50>>,Black,Mix<TwistAngle<>,RgbArg<STAB_COLOR_ARG,Rgb<255,68,0>>,RotateColorsX<Int<3000>,RgbArg<STAB_COLOR_ARG,Rgb<255,68,0>>>>>,Mix<Int<4096>,Black,Mix<TwistAngle<>,RgbArg<STAB_COLOR_ARG,Rgb<255,68,0>>,RotateColorsX<Int<3000>,RgbArg<STAB_COLOR_ARG,Rgb<255,68,0>>>>>>,SmoothStep<Scale<TwistAngle<>,IntArg<MELT_SIZE_ARG,26000>,Int<30000>>,Int<3000>>>,TrConcat<TrExtend<4000,TrWipeIn<200>>,AlphaL<HumpFlicker<Mix<TwistAngle<>,RgbArg<STAB_COLOR_ARG,Rgb<255,68,0>>,RotateColorsX<Int<3000>,RgbArg<STAB_COLOR_ARG,Rgb<255,68,0>>>>,RotateColorsX<Int<3000>,Mix<TwistAngle<>,RgbArg<STAB_COLOR_ARG,Rgb<255,68,0>>,RotateColorsX<Int<3000>,RgbArg<STAB_COLOR_ARG,Rgb<255,68,0>>>>>,100>,SmoothStep<Scale<TwistAngle<>,IntArg<MELT_SIZE_ARG,26000>,Int<30000>>,Int<3000>>>,TrFade<4000>>,TrWipe<200>,SaberBase::LOCKUP_MELT,Int<1>>,InOutTrL<TrInstant,TrInstant,Pulsing<Black,RgbArg<BASE_COLOR_ARG,Rgb<255,0,0>>,8000>>>>(),},

	{ "dark", "tracks/dark.wav",
   
		StylePtr<Layers<AudioFlicker<BrownNoiseFlicker<Mix<SwingSpeed<400>,RotateColorsX<Variation,Rgb<100,100,150>>,RotateColorsX<Variation,Rgb<150,150,225>>>,Stripes<5000,-300,RotateColorsX<Variation,Rgb<25,25,55>>,RotateColorsX<Variation,Rgb<75,75,120>>,RotateColorsX<Variation,Rgb<10,10,20>>,RotateColorsX<Variation,Rgb<50,50,75>>>,300>,RotateColorsX<Variation,Rgb<35,35,75>>>,TransitionEffectL<TrConcat<TrInstant,BrownNoiseFlickerL<AlphaL<White,Int<16000>>,Int<50>>,TrSmoothFade<600>>,EFFECT_LOCKUP_END>,ResponsiveLockupL<Strobe<White,BrownNoiseFlicker<White,Red,300>,50,1>,TrConcat<TrInstant,White,TrFade<400>>,TrFade<100>,Scale<BladeAngle<0,16000>,Int<4000>,Int<26000>>,Int<6000>,Scale<SwingSpeed<100>,Int<10000>,Int<14000>>>,ResponsiveLightningBlockL<Strobe<White,AudioFlicker<White,Blue>,50,1>,TrConcat<TrInstant,AlphaL<White,Bump<Int<12000>,Int<18000>>>,TrFade<200>>,TrConcat<TrInstant,HumpFlickerL<AlphaL<White,Int<16000>>,30>,TrSmoothFade<600>>>,ResponsiveStabL<Red,TrWipeIn<600>,TrWipe<600>>,ResponsiveBlastL<White,Int<400>,Scale<SwingSpeed<200>,Int<100>,Int<400>>,Int<400>>,ResponsiveClashL<White,TrInstant,TrFade<400>,Scale<BladeAngle<0,16000>,Int<4000>,Int<26000>>,Int<6000>>,LockupTrL<AlphaL<BrownNoiseFlickerL<White,Int<300>>,SmoothStep<Int<30000>,Int<5000>>>,TrWipeIn<400>,TrFade<300>,SaberBase::LOCKUP_DRAG>,LockupTrL<AlphaL<Mix<TwistAngle<>,Red,Orange>,SmoothStep<Int<28000>,Int<5000>>>,TrWipeIn<600>,TrFade<300>,SaberBase::LOCKUP_MELT>,InOutTrL<TrWipe<300>,TrWipeIn<500>,Black>>>(),

		StylePtr<Layers<AudioFlicker<BrownNoiseFlicker<Mix<SwingSpeed<400>,RotateColorsX<Variation,Rgb<100,100,150>>,RotateColorsX<Variation,Rgb<150,150,225>>>,Stripes<5000,-300,RotateColorsX<Variation,Rgb<25,25,55>>,RotateColorsX<Variation,Rgb<75,75,120>>,RotateColorsX<Variation,Rgb<10,10,20>>,RotateColorsX<Variation,Rgb<50,50,75>>>,300>,RotateColorsX<Variation,Rgb<35,35,75>>> ,InOutTrL<TrInstant,TrFade<300>,Layers<Black,TransitionEffectL<TrConcat<TrInstant,Pulsing<RotateColorsX<Variation,Rgb<100,100,150>>,RotateColorsX<Variation,Rgb<4,4,6>>,10000>,TrDelay<180000>,Pulsing<RotateColorsX<Variation,Rgb<100,100,150>>,RotateColorsX<Variation,Rgb<4,4,6>>,10000>,TrFade<1000>>,EFFECT_BOOT>,TransitionEffectL<TrConcat<TrInstant,Pulsing<RotateColorsX<Variation,Rgb<100,100,150>>,RotateColorsX<Variation,Rgb<4,4,6>>,10000>,TrDelay<180000>,Pulsing<RotateColorsX<Variation,Rgb<100,100,150>>,RotateColorsX<Variation,Rgb<4,4,6>>,10000>,TrFade<1000>>,EFFECT_NEWFONT>,TransitionEffectL<TrConcat<TrInstant,Pulsing<RotateColorsX<Variation,Rgb<100,100,150>>,RotateColorsX<Variation,Rgb<4,4,6>>,10000>,TrDelay<180000>,Pulsing<RotateColorsX<Variation,Rgb<100,100,150>>,RotateColorsX<Variation,Rgb<4,4,6>>,10000>,TrFade<1000>>,EFFECT_RETRACTION>>>>>(), 

		StylePtr<Layers<RotateColorsX<Variation,Rgb<180,130,0>>,TransitionEffectL<TrConcat<TrInstant,BrownNoiseFlickerL<AlphaL<White,Int<16000>>,Int<50>>,TrSmoothFade<600>>,EFFECT_LOCKUP_END>,ResponsiveLockupL<Strobe<White,BrownNoiseFlicker<White,Red,300>,50,1>,TrConcat<TrInstant,White,TrFade<400>>,TrFade<100>,Scale<BladeAngle<0,16000>,Int<4000>,Int<26000>>,Int<6000>,Scale<SwingSpeed<100>,Int<10000>,Int<14000>>>,ResponsiveLightningBlockL<Strobe<White,AudioFlicker<White,Blue>,50,1>,TrConcat<TrInstant,AlphaL<White,Bump<Int<12000>,Int<18000>>>,TrFade<200>>,TrConcat<TrInstant,HumpFlickerL<AlphaL<White,Int<16000>>,30>,TrSmoothFade<600>>>,AlphaL<TransitionEffect<White,Rgb<128,0,0>,TrInstant,TrConcat<TrFade<1500>,Red,TrFade<2000>,Orange,TrFade<2500>>,EFFECT_IGNITION>,Bump<Int<0>,Int<6000>>>,ResponsiveStabL<Red,TrWipeIn<600>,TrWipe<600>>,ResponsiveBlastL<White,Int<400>,Scale<SwingSpeed<200>,Int<100>,Int<400>>,Int<400>>,ResponsiveClashL<White,TrInstant,TrFade<400>,Scale<BladeAngle<0,16000>,Int<4000>,Int<26000>>,Int<6000>>,LockupTrL<AlphaL<BrownNoiseFlickerL<White,Int<300>>,SmoothStep<Int<30000>,Int<5000>>>,TrWipeIn<400>,TrFade<300>,SaberBase::LOCKUP_DRAG>,LockupTrL<AlphaL<Mix<TwistAngle<>,Red,Orange>,SmoothStep<Int<28000>,Int<5000>>>,TrWipeIn<600>,TrFade<300>,SaberBase::LOCKUP_MELT>,InOutTrL<TrWipe<7000>,TrWipeIn<500>,Black>,TransitionEffectL<TrConcat<TrInstant,AlphaL<White,Bump<Int<0>,Int<10000>>>,TrFade<3000>,AlphaL<Orange,Bump<Int<0>,Int<8000>>>,TrFade<3000>,AlphaL<Red,Bump<Int<0>,Int<6000>>>,TrFade<2000>>,EFFECT_RETRACTION>,TransitionEffectL<TrConcat<TrFade<2000>,AlphaL<HumpFlickerL<Red,10>,Bump<Int<0>,Int<4000>>>,TrFade<2950>,AlphaL<HumpFlickerL<Orange,15>,Bump<Int<0>,Int<5000>>>,TrFade<3000>,AlphaL<HumpFlickerL<White,20>,Bump<Int<0>,Int<6000>>>,TrBoing<1000,3>>,EFFECT_PREON>>>(),

		//green: slow blink when idle, faster blink when saber is on, lockup mimics blade
				/* copyright Fett263 (Accent LED / PCB) OS7 Style
		https://www.fett263.com/fett263-proffieOS7-style-library.html#Rotoscope
		OS7.14 v2.241p
		Single Style
		On Behavior: Blinking On-Off [Color: BaseColorArg]
		Off Behavior: Slow Pulse Off-On [Color: Match ON Color]

		Base Color: BaseColorArg (0)

		--Effects Included--
		Ignition Effect: Instant [Color: IgnitionColorArg]
		Retraction Effect: Instant [Color: RetractionColorArg]
		Lockup Effect: NoneLightning Block Effect: NoneDrag Effect:
		0: accentDragMulti0Shape - Begin: Wipe In - Style: Intensity Sparking Drag - End: Wipe Out
		[Color: DragColorArg]
		Melt Effect:
		0: accentMeltMulti0Shape - Begin: Wipe In - Style: Intensity Melt - End: Wipe Out
		[Color: StabColorArg]
		*/
		StylePtr<Layers<Blinking<RgbArg<BASE_COLOR_ARG,Rgb<0,255,0>>,Black,500,500>,LockupTrL<AlphaL<TransitionEffect<RandomPerLEDFlickerL<RgbArg<DRAG_COLOR_ARG,Rgb<255,255,255>>>,BrownNoiseFlickerL<RgbArg<DRAG_COLOR_ARG,Rgb<255,255,255>>,Int<300>>,TrExtend<4000,TrInstant>,TrFade<4000>,EFFECT_DRAG_BEGIN>,SmoothStep<Scale<TwistAngle<>,IntArg<DRAG_SIZE_ARG,31000>,Int<30000>>,Int<3000>>>,TrWipeIn<200>,TrWipe<200>,SaberBase::LOCKUP_DRAG,Int<1>>,LockupTrL<AlphaL<Stripes<2000,4000,Mix<TwistAngle<>,RgbArg<STAB_COLOR_ARG,Rgb<255,68,0>>,RotateColorsX<Int<3000>,RgbArg<STAB_COLOR_ARG,Rgb<255,68,0>>>>,Mix<Sin<Int<50>>,Black,Mix<TwistAngle<>,RgbArg<STAB_COLOR_ARG,Rgb<255,68,0>>,RotateColorsX<Int<3000>,RgbArg<STAB_COLOR_ARG,Rgb<255,68,0>>>>>,Mix<Int<4096>,Black,Mix<TwistAngle<>,RgbArg<STAB_COLOR_ARG,Rgb<255,68,0>>,RotateColorsX<Int<3000>,RgbArg<STAB_COLOR_ARG,Rgb<255,68,0>>>>>>,SmoothStep<Scale<TwistAngle<>,IntArg<MELT_SIZE_ARG,26000>,Int<30000>>,Int<3000>>>,TrConcat<TrExtend<4000,TrWipeIn<200>>,AlphaL<HumpFlicker<Mix<TwistAngle<>,RgbArg<STAB_COLOR_ARG,Rgb<255,68,0>>,RotateColorsX<Int<3000>,RgbArg<STAB_COLOR_ARG,Rgb<255,68,0>>>>,RotateColorsX<Int<3000>,Mix<TwistAngle<>,RgbArg<STAB_COLOR_ARG,Rgb<255,68,0>>,RotateColorsX<Int<3000>,RgbArg<STAB_COLOR_ARG,Rgb<255,68,0>>>>>,100>,SmoothStep<Scale<TwistAngle<>,IntArg<MELT_SIZE_ARG,26000>,Int<30000>>,Int<3000>>>,TrFade<4000>>,TrWipe<200>,SaberBase::LOCKUP_MELT,Int<1>>,InOutTrL<TrInstant,TrInstant,Pulsing<Black,RgbArg<BASE_COLOR_ARG,Rgb<0,255,0>>,8000>>>>(),


		//red: slow blink when idle, faster blink when saber is on, lockup turns off (blinks alternate with green)
		/* copyright Fett263 (Accent LED / PCB) OS7 Style
		https://www.fett263.com/fett263-proffieOS7-style-library.html#Rotoscope
		OS7.14 v2.241p
		Single Style
		On Behavior: Blinking On-Off [Color: BaseColorArg]
		Off Behavior: Slow Pulse Off-On [Color: Match ON Color]

		Base Color: BaseColorArg (0)

		--Effects Included--
		Ignition Effect: Instant [Color: IgnitionColorArg]
		Retraction Effect: Instant [Color: RetractionColorArg]
		Lockup Effect: NoneLightning Block Effect: NoneDrag Effect:
		0: accentDragMulti0Shape - Begin: Wipe In - Style: Intensity Sparking Drag - End: Wipe Out
		[Color: DragColorArg]
		Melt Effect:
		0: accentMeltMulti0Shape - Begin: Wipe In - Style: Intensity Melt - End: Wipe Out
		[Color: StabColorArg]
		*/
		StylePtr<Layers<Blinking<RgbArg<BASE_COLOR_ARG,Rgb<255,0,0>>,Black,500,500>,LockupTrL<AlphaL<TransitionEffect<RandomPerLEDFlickerL<RgbArg<DRAG_COLOR_ARG,Rgb<255,255,255>>>,BrownNoiseFlickerL<RgbArg<DRAG_COLOR_ARG,Rgb<255,255,255>>,Int<300>>,TrExtend<4000,TrInstant>,TrFade<4000>,EFFECT_DRAG_BEGIN>,SmoothStep<Scale<TwistAngle<>,IntArg<DRAG_SIZE_ARG,31000>,Int<30000>>,Int<3000>>>,TrWipeIn<200>,TrWipe<200>,SaberBase::LOCKUP_DRAG,Int<1>>,LockupTrL<AlphaL<Stripes<2000,4000,Mix<TwistAngle<>,RgbArg<STAB_COLOR_ARG,Rgb<255,68,0>>,RotateColorsX<Int<3000>,RgbArg<STAB_COLOR_ARG,Rgb<255,68,0>>>>,Mix<Sin<Int<50>>,Black,Mix<TwistAngle<>,RgbArg<STAB_COLOR_ARG,Rgb<255,68,0>>,RotateColorsX<Int<3000>,RgbArg<STAB_COLOR_ARG,Rgb<255,68,0>>>>>,Mix<Int<4096>,Black,Mix<TwistAngle<>,RgbArg<STAB_COLOR_ARG,Rgb<255,68,0>>,RotateColorsX<Int<3000>,RgbArg<STAB_COLOR_ARG,Rgb<255,68,0>>>>>>,SmoothStep<Scale<TwistAngle<>,IntArg<MELT_SIZE_ARG,26000>,Int<30000>>,Int<3000>>>,TrConcat<TrExtend<4000,TrWipeIn<200>>,AlphaL<HumpFlicker<Mix<TwistAngle<>,RgbArg<STAB_COLOR_ARG,Rgb<255,68,0>>,RotateColorsX<Int<3000>,RgbArg<STAB_COLOR_ARG,Rgb<255,68,0>>>>,RotateColorsX<Int<3000>,Mix<TwistAngle<>,RgbArg<STAB_COLOR_ARG,Rgb<255,68,0>>,RotateColorsX<Int<3000>,RgbArg<STAB_COLOR_ARG,Rgb<255,68,0>>>>>,100>,SmoothStep<Scale<TwistAngle<>,IntArg<MELT_SIZE_ARG,26000>,Int<30000>>,Int<3000>>>,TrFade<4000>>,TrWipe<200>,SaberBase::LOCKUP_MELT,Int<1>>,InOutTrL<TrInstant,TrInstant,Pulsing<Black,RgbArg<BASE_COLOR_ARG,Rgb<255,0,0>>,8000>>>>(),}
};

BladeConfig blades[] = {
 { 0, WS281XBladePtr<134, bladePin, Color8::GRB, PowerPINS<bladePowerPin2, bladePowerPin3> >(),

    WS281XBladePtr<2, blade4Pin, Color8::GRB, PowerPINS<bladePowerPin6> >(),

	WS281XBladePtr<2, blade3Pin, Color8::GRB, PowerPINS<bladePowerPin1> >(),

    WS281XBladePtr<1, blade3Pin, Color8::GRB, PowerPINS<bladePowerPin2, bladePowerPin3> >(),
    WS281XBladePtr<1, blade2Pin, Color8::GRB, PowerPINS<bladePowerPin2, bladePowerPin3> >(),
    CONFIGARRAY(presets) },
};
#endif

#ifdef CONFIG_BUTTONS
Button PowerButton(BUTTON_POWER, powerButtonPin, "pow");
Button AuxButton(BUTTON_AUX, auxPin, "aux");
#endif
