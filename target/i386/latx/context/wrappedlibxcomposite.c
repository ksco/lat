#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <dlfcn.h>

#include "wrappedlibs.h"

#include "wrapper.h"
#include "bridge.h"
#include "library_private.h"
#include "debug.h"

const char* libxcompositeName = "libXcomposite.so.1";
#define LIBNAME libxcomposite

#include "wrappedlib_init.h"

