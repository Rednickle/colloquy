#import "MVChatPluginManager.h"

COLLOQUY_EXPORT
@interface JVFScriptPluginLoader : NSObject <MVChatPlugin> {
	MVChatPluginManager *_manager;
	BOOL _fscriptInstalled;
}
- (void) loadPluginNamed:(NSString *) name;
@end
