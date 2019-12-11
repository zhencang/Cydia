/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/EBFont.h>
#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/XXUnknownSuperclass.h>


__attribute__((visibility("hidden")))
@interface EBFont : XXUnknownSuperclass {
}
+ (id)edFontFromXlFont:(XlFont *)xlFont edResources:(id)resources;	// 0xdb8a1
+ (id)edFontFromXlDXfFont:(XlDXfFont *)xlDXfFont edResources:(id)resources;	// 0x10ece9
@end

@interface EBFont (Private)
+ (int)convertXlScriptEnumToED:(int)ed;	// 0xdc2ad
+ (int)convertXlUnderlineEnumToED:(int)ed;	// 0xdc2dd
+ (int)convertEDScriptEnumToXl:(int)xl;	// 0x25b4f9
+ (int)convertEDUnderlineEnumToXl:(int)xl;	// 0x25b509
@end