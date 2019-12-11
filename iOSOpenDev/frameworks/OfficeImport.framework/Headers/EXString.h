/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/EXString.h>
#import <OfficeImport/XXUnknownSuperclass.h>


__attribute__((visibility("hidden")))
@interface EXString : XXUnknownSuperclass {
}
+ (id)edTextFromXmlStringElement:(xmlNode *)xmlStringElement;	// 0x1a4e45
+ (id)edStringWithRunsFromXmlStringElement:(xmlNode *)xmlStringElement state:(id)state;	// 0x1a54a1
+ (id)edStringWithRunsFromXmlDivElement:(xmlNode *)xmlDivElement state:(id)state;	// 0x254ce5
+ (id)readStringWithAsciiCodeFromXmlStringElement:(xmlNode *)xmlStringElement;	// 0x1a4ead
@end

@interface EXString (Private)
+ (void)parseStringWithAsciiCode:(id)asciiCode;	// 0x1a4f41
+ (void)buildEDString:(id)string fromChildrenOfNode:(xmlNode *)node edFont:(id)font keepWhitespace:(bool)whitespace state:(id)state;	// 0x254f81
+ (void)buildEDString:(id)string fromNode:(xmlNode *)node edFont:(id)font keepWhitespace:(bool)whitespace state:(id)state;	// 0x255081
+ (void)buildEDString:(id)string fromText:(id)text edFont:(id)font keepWhitespace:(bool)whitespace state:(id)state;	// 0x254d41
+ (id)cleanupWhitespace:(id)whitespace;	// 0x254ed9
@end