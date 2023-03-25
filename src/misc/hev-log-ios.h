#ifndef __HEV_LOG_IOS_H__
#define __HEV_LOG_IOS_H__

extern void myNSLog (const char *message);

// void debug(const char *format, ...) __attribute__((format(printf, 1, 2)));

// #if defined(__APPLE__) || defined(__MACH__)

// #include "hev-log-ios.h"

// #include <TargetConditionals.h>
// // #if TARGET_OS_IOS
// #import <Foundation/Foundation.h>

// void debug(const char *format, ...) {
//   va_list args;
//   va_start(args, format);
//   NSLog(@"%@",
//         [[NSString alloc] initWithFormat:[NSString stringWithUTF8String:format]
//                                arguments:args]);
//   va_end(args);
// }

// // #endif

// #endif

#endif
