/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class OADTextListStyle, NSMutableArray, OADTextBodyProperties;



@interface OADTextBody : NSObject 
{
    OADTextBodyProperties *mProperties;
    NSMutableArray *mParagraphs;
    OADTextListStyle *mTextListStyle;
}


- (id)init;
- (void)dealloc;
- (BOOL)isEmpty;
- (id)findFirstTextRunOfClass:(Class)arg1;
- (void)addParagraphsFromTextBody:(id)arg1;
- (id)addParagraph;
- (id)textListStyle;
- (void)setProperties:(id)arg1;
- (void)removeAllParagraphs;
- (id)overrideTextListStyle;
- (void)applyTextListStyle:(id)arg1;
- (void)removeTrailingNewlines;
- (void)flattenProperties;
- (void)removeUnnecessaryOverrides;
- (void)setParentTextListStyle:(id)arg1;
- (NSUInteger)paragraphCount;
- (id)paragraphAtIndex:(NSUInteger)arg1;
- (id)plainText;
- (id)properties;

@end