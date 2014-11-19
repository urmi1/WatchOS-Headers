//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UISlider.h"

#import "PUICCrownInputSequencerDelegate.h"

@class CAShapeLayer, NSString, NSTimer, PUICCrownInputSequencer, UIImage, _PUICSliderButtonSnapshot;

@interface PUICSlider : UISlider <PUICCrownInputSequencerDelegate>
{
    long long _style;
    long long _touchTarget;
    PUICCrownInputSequencer *_crownInputSequencer;
    NSTimer *_longPressTimer;
    struct CGRect _currentTrackLayoutBounds;
    float _stepValue;
    float _disabledValue;
    _Bool _isEnabled;
    CAShapeLayer *_crownGlowLayer;
    UIImage *_thumbImage;
    UIImage *_emptyThumbImage;
    _PUICSliderButtonSnapshot *_maxSnapshot;
    _PUICSliderButtonSnapshot *_minSnapshot;
    _Bool _shouldAutomaticallAdjustValueOnTouch;
    _Bool _shouldFadeAccessoryImages;
    float _pillHighlightedGlowOpacity;
    id <PUICSliderDelegate> _delegate;
    unsigned long long _numberOfSteps;
}

@property(nonatomic) float pillHighlightedGlowOpacity; // @synthesize pillHighlightedGlowOpacity=_pillHighlightedGlowOpacity;
@property(nonatomic) _Bool shouldFadeAccessoryImages; // @synthesize shouldFadeAccessoryImages=_shouldFadeAccessoryImages;
@property(nonatomic) _Bool shouldAutomaticallAdjustValueOnTouch; // @synthesize shouldAutomaticallAdjustValueOnTouch=_shouldAutomaticallAdjustValueOnTouch;
@property(nonatomic) unsigned long long numberOfSteps; // @synthesize numberOfSteps=_numberOfSteps;
@property(nonatomic) id <PUICSliderDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)_emptyThumbImage;
- (id)_thumbImage;
- (long long)_touchTargetFromTouches:(id)arg1;
- (void)_updateCrownGlowLayer;
- (void)_updateTrackViews;
- (void)_cancelTouch;
- (void)_animateUnpressView:(id)arg1 withSnapshot:(id)arg2;
- (void)_animatePressView:(id)arg1 withSnapshot:(id)arg2;
- (void)_longPressTimer:(id)arg1;
- (void)_fadeAccessoryImagesForValue:(float)arg1 animated:(_Bool)arg2;
- (void)_setValue:(float)arg1 animated:(_Bool)arg2 sendAction:(_Bool)arg3;
- (void)crownInputSequencerIdleDidChange:(id)arg1;
- (void)crownInputSequencerOffsetDidChange:(id)arg1;
- (void)_wheelChangedWithEvent:(id)arg1;
- (_Bool)canBecomeFirstResponder;
@property(readonly, nonatomic) double cornerRadius;
- (void)sliderDidFinishAnimatingFromValue:(float)arg1 toValue:(float)arg2;
- (void)setMaximumValue:(float)arg1;
- (void)setMinimumValue:(float)arg1;
- (void)setThumbImage:(id)arg1 forState:(unsigned long long)arg2;
- (struct CGRect)maximumValueImageRectForBounds:(struct CGRect)arg1;
- (struct CGRect)minimumValueImageRectForBounds:(struct CGRect)arg1;
- (struct CGRect)trackRectForBounds:(struct CGRect)arg1;
- (struct CGRect)thumbRectForBounds:(struct CGRect)arg1 trackRect:(struct CGRect)arg2 value:(float)arg3;
- (void)setValue:(float)arg1 animated:(_Bool)arg2;
- (void)_updateAppearanceForEnabled:(_Bool)arg1;
- (_Bool)isEnabled;
- (void)setEnabled:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setEnabled:(_Bool)arg1;
- (void)tintColorDidChange;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (id)initWithSliderStyle:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
