/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class WDText;



@interface WMSectionContentMapper : CMMapper 
{
    WDText *wdText;
}


- (id)paragraphAtIndex:(NSInteger)arg1;
- (void)updateTextFrameState:(id)arg1 atIndex:(NSInteger)arg2;
- (void)mapTextFrameAt:(id)arg1 withState:(id)arg2;
- (void)mapTextFrameStyleTo:(id)arg1 withState:(id)arg2;
- (id)initWithWDText:(id)arg1 parent:(id)arg2;
- (void)mapAt:(id)arg1 withState:(id)arg2;

@end