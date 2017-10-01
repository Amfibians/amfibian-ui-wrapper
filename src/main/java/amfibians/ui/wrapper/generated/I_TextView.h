//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: ./amfibians/ui/wrapper/generated/I_TextView.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_AmfibiansUiWrapperGeneratedI_TextView")
#ifdef RESTRICT_AmfibiansUiWrapperGeneratedI_TextView
#define INCLUDE_ALL_AmfibiansUiWrapperGeneratedI_TextView 0
#else
#define INCLUDE_ALL_AmfibiansUiWrapperGeneratedI_TextView 1
#endif
#undef RESTRICT_AmfibiansUiWrapperGeneratedI_TextView

#if !defined (AmfibiansUiWrapperGeneratedI_TextView_) && (INCLUDE_ALL_AmfibiansUiWrapperGeneratedI_TextView || defined(INCLUDE_AmfibiansUiWrapperGeneratedI_TextView))
#define AmfibiansUiWrapperGeneratedI_TextView_

@class IOSCharArray;
@class IOSObjectArray;
@class JavaUtilArrayList;
@class JavaUtilLocale;
@protocol JavaLangCharSequence;

@protocol AmfibiansUiWrapperGeneratedI_TextView < JavaObject >

- (void)appendWithJavaLangCharSequence:(id<JavaLangCharSequence>)arg0
                               withInt:(jint)arg1
                               withInt:(jint)arg2;

- (void)appendWithJavaLangCharSequence:(id<JavaLangCharSequence>)arg0;

- (jint)length;

- (void)debugWithInt:(jint)arg0;

- (void)setErrorWithJavaLangCharSequence:(id<JavaLangCharSequence>)arg0;

- (id<JavaLangCharSequence>)getError;

- (id<JavaLangCharSequence>)getHint;

- (void)setHintWithJavaLangCharSequence:(id<JavaLangCharSequence>)arg0;

- (void)setHintWithInt:(jint)arg0;

- (void)setTextWithJavaLangCharSequence:(id<JavaLangCharSequence>)arg0;

- (void)setTextWithCharArray:(IOSCharArray *)arg0
                     withInt:(jint)arg1
                     withInt:(jint)arg2;

- (void)setTextWithInt:(jint)arg0;

- (void)setWidthWithInt:(jint)arg0;

- (void)setEmsWithInt:(jint)arg0;

- (void)setLinesWithInt:(jint)arg0;

- (id<JavaLangCharSequence>)getText;

- (void)setEnabledWithBoolean:(jboolean)arg0;

- (jint)getLineHeight;

- (jint)getCompoundPaddingTop;

- (jint)getCompoundPaddingBottom;

- (jint)getCompoundPaddingLeft;

- (jint)getCompoundPaddingRight;

- (jint)getCompoundPaddingStart;

- (jint)getCompoundPaddingEnd;

- (jint)getExtendedPaddingTop;

- (jint)getExtendedPaddingBottom;

- (jint)getTotalPaddingLeft;

- (jint)getTotalPaddingRight;

- (jint)getTotalPaddingStart;

- (jint)getTotalPaddingEnd;

- (jint)getTotalPaddingTop;

- (jint)getTotalPaddingBottom;

- (void)setCompoundDrawablesWithIntrinsicBoundsWithInt:(jint)arg0
                                               withInt:(jint)arg1
                                               withInt:(jint)arg2
                                               withInt:(jint)arg3;

- (void)setCompoundDrawablesRelativeWithIntrinsicBoundsWithInt:(jint)arg0
                                                       withInt:(jint)arg1
                                                       withInt:(jint)arg2
                                                       withInt:(jint)arg3;

- (void)setCompoundDrawablePaddingWithInt:(jint)arg0;

- (jint)getCompoundDrawablePadding;

- (void)setPaddingWithInt:(jint)arg0
                  withInt:(jint)arg1
                  withInt:(jint)arg2
                  withInt:(jint)arg3;

- (void)setPaddingRelativeWithInt:(jint)arg0
                          withInt:(jint)arg1
                          withInt:(jint)arg2
                          withInt:(jint)arg3;

- (jint)getAutoLinkMask;

- (void)setTextAppearanceWithInt:(jint)arg0;

- (JavaUtilLocale *)getTextLocale;

- (void)setTextLocaleWithJavaUtilLocale:(JavaUtilLocale *)arg0;

- (jfloat)getTextSize;

- (void)setTextSizeWithInt:(jint)arg0
                 withFloat:(jfloat)arg1;

- (void)setTextSizeWithFloat:(jfloat)arg0;

- (jfloat)getTextScaleX;

- (void)setTextScaleXWithFloat:(jfloat)arg0;

- (void)setElegantTextHeightWithBoolean:(jboolean)arg0;

- (jfloat)getLetterSpacing;

- (void)setLetterSpacingWithFloat:(jfloat)arg0;

- (NSString *)getFontFeatureSettings;

- (void)setBreakStrategyWithInt:(jint)arg0;

- (jint)getBreakStrategy;

- (void)setHyphenationFrequencyWithInt:(jint)arg0;

- (jint)getHyphenationFrequency;

- (void)setFontFeatureSettingsWithNSString:(NSString *)arg0;

- (void)setTextColorWithInt:(jint)arg0;

- (jint)getCurrentTextColor;

- (void)setHighlightColorWithInt:(jint)arg0;

- (jint)getHighlightColor;

- (void)setShowSoftInputOnFocusWithBoolean:(jboolean)arg0;

- (jboolean)getShowSoftInputOnFocus;

- (void)setShadowLayerWithFloat:(jfloat)arg0
                      withFloat:(jfloat)arg1
                      withFloat:(jfloat)arg2
                        withInt:(jint)arg3;

- (jfloat)getShadowRadius;

- (jfloat)getShadowDx;

- (jfloat)getShadowDy;

- (jint)getShadowColor;

- (void)setAutoLinkMaskWithInt:(jint)arg0;

- (void)setLinksClickableWithBoolean:(jboolean)arg0;

- (jboolean)getLinksClickable;

- (void)setHintTextColorWithInt:(jint)arg0;

- (jint)getCurrentHintTextColor;

- (void)setLinkTextColorWithInt:(jint)arg0;

- (void)setGravityWithInt:(jint)arg0;

- (jint)getGravity;

- (jint)getPaintFlags;

- (void)setPaintFlagsWithInt:(jint)arg0;

- (void)setHorizontallyScrollingWithBoolean:(jboolean)arg0;

- (void)setMinLinesWithInt:(jint)arg0;

- (jint)getMinLines;

- (void)setMinHeightWithInt:(jint)arg0;

- (jint)getMinHeight;

- (void)setMaxLinesWithInt:(jint)arg0;

- (jint)getMaxLines;

- (void)setMaxHeightWithInt:(jint)arg0;

- (jint)getMaxHeight;

- (void)setHeightWithInt:(jint)arg0;

- (void)setMinEmsWithInt:(jint)arg0;

- (jint)getMinEms;

- (void)setMinWidthWithInt:(jint)arg0;

- (jint)getMinWidth;

- (void)setMaxEmsWithInt:(jint)arg0;

- (jint)getMaxEms;

- (void)setMaxWidthWithInt:(jint)arg0;

- (jint)getMaxWidth;

- (void)setLineSpacingWithFloat:(jfloat)arg0
                      withFloat:(jfloat)arg1;

- (jfloat)getLineSpacingMultiplier;

- (jfloat)getLineSpacingExtra;

- (void)drawableHotspotChangedWithFloat:(jfloat)arg0
                              withFloat:(jfloat)arg1;

- (void)setFreezesTextWithBoolean:(jboolean)arg0;

- (jboolean)getFreezesText;

- (void)setTextKeepStateWithJavaLangCharSequence:(id<JavaLangCharSequence>)arg0;

- (void)setInputTypeWithInt:(jint)arg0;

- (void)setRawInputTypeWithInt:(jint)arg0;

- (jint)getInputType;

- (void)setImeOptionsWithInt:(jint)arg0;

- (jint)getImeOptions;

- (void)setImeActionLabelWithJavaLangCharSequence:(id<JavaLangCharSequence>)arg0
                                          withInt:(jint)arg1;

- (id<JavaLangCharSequence>)getImeActionLabel;

- (jint)getImeActionId;

- (void)onEditorActionWithInt:(jint)arg0;

- (void)setPrivateImeOptionsWithNSString:(NSString *)arg0;

- (NSString *)getPrivateImeOptions;

- (void)setFiltersWithAndroidTextInputFilterArray:(IOSObjectArray *)arg0;

- (jboolean)onPreDraw;

- (void)onScreenStateChangedWithInt:(jint)arg0;

- (void)jumpDrawablesToCurrentState;

- (jboolean)hasOverlappingRendering;

- (jboolean)isTextSelectable;

- (void)setTextIsSelectableWithBoolean:(jboolean)arg0;

- (jint)getLineCount;

- (jint)getBaseline;

- (jboolean)onCheckIsTextEditor;

- (void)beginBatchEdit;

- (void)endBatchEdit;

- (void)onBeginBatchEdit;

- (void)onEndBatchEdit;

- (void)setIncludeFontPaddingWithBoolean:(jboolean)arg0;

- (jboolean)getIncludeFontPadding;

- (jboolean)bringPointIntoViewWithInt:(jint)arg0;

- (jboolean)moveCursorToVisibleOffset;

- (void)computeScroll;

- (jint)getSelectionStart;

- (jint)getSelectionEnd;

- (jboolean)hasSelection;

- (void)setSingleLineWithBoolean:(jboolean)arg0;

- (void)setSingleLine;

- (void)setAllCapsWithBoolean:(jboolean)arg0;

- (void)setMarqueeRepeatLimitWithInt:(jint)arg0;

- (jint)getMarqueeRepeatLimit;

- (void)setSelectAllOnFocusWithBoolean:(jboolean)arg0;

- (void)setCursorVisibleWithBoolean:(jboolean)arg0;

- (jboolean)isCursorVisible;

- (void)onStartTemporaryDetach;

- (void)onFinishTemporaryDetach;

- (void)onWindowFocusChangedWithBoolean:(jboolean)arg0;

- (void)clearComposingText;

- (void)setSelectedWithBoolean:(jboolean)arg0;

- (jboolean)didTouchFocusSelect;

- (void)cancelLongPress;

- (void)findViewsWithTextWithJavaUtilArrayList:(JavaUtilArrayList *)arg0
                      withJavaLangCharSequence:(id<JavaLangCharSequence>)arg1
                                       withInt:(jint)arg2;

- (id<JavaLangCharSequence>)getAccessibilityClassName;

- (jboolean)isInputMethodTarget;

- (jboolean)onTextContextMenuItemWithInt:(jint)arg0;

- (jboolean)performLongClick;

- (jboolean)isSuggestionsEnabled;

- (jint)getOffsetForPositionWithFloat:(jfloat)arg0
                            withFloat:(jfloat)arg1;

- (void)onRtlPropertiesChangedWithInt:(jint)arg0;

@end

J2OBJC_EMPTY_STATIC_INIT(AmfibiansUiWrapperGeneratedI_TextView)

J2OBJC_TYPE_LITERAL_HEADER(AmfibiansUiWrapperGeneratedI_TextView)

#endif

#pragma pop_macro("INCLUDE_ALL_AmfibiansUiWrapperGeneratedI_TextView")
