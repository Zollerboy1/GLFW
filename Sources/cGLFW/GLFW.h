#if defined(WIN32) || defined(_WIN32) || defined(__WIN32__) || defined(__NT__)
    #define GLFW_EXPOSE_NATIVE_WIN32
#elif __APPLE__
    #include <TargetConditionals.h>
    #if TARGET_IPHONE_SIMULATOR || TARGET_OS_IPHONE
        #error "iOS is currently not supported!"
    #elif TARGET_OS_MAC
        #define GLFW_EXPOSE_NATIVE_COCOA
    #else
        #error "Unknown Apple platform!"
    #endif
#elif __linux__
    #error "Linux is currently not supported!"
#elif __unix__
    #error "Unix platforms other than macOS are currently not supported!"
#elif defined(_POSIX_VERSION)
    #error "Posix platforms are currently not supported!"
#else
    #error "Unknown compiler!"
#endif

#include <GLFW/glfw3.h>
#include <GLFW/glfw3native.h>
