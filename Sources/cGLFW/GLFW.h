#include <GLFW/glfw3.h>

#ifdef GLFW_RESIZE_NESW_CURSOR
#define _GLFW_RESIZE_NESW_CURSOR true
#else
#define _GLFW_RESIZE_NESW_CURSOR false
#endif

#ifdef GLFW_MOUSE_PASSTHROUGH
#define _GLFW_MOUSE_PASSTHROUGH true
#else
#define _GLFW_MOUSE_PASSTHROUGH false
#endif
