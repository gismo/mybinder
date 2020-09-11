#pragma once

// Set include paths for external subprojects
#pragma cling add_include_path("/home/jovyan/gismo/external")

// Set library paths for external subprojects
#pragma cling add_library_path("/home/jovyan/gismo/build/external")
#pragma cling add_library_path("/home/jovyan/gismo/build/external")

// Load external libraries
#pragma cling load("libgismo.so")

// Set include paths
#pragma cling add_include_path("/home/jovyan/gismo/src")
#pragma cling add_include_path("/home/jovyan/gismo/build/src")

// Include main header
#include "/home/jovyan/gismo/src/gismo.h"
