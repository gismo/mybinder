#pragma once

// Set include paths for external subprojects
#pragma cling add_include_path("/home/jovyan/gismo/external")

// Set library paths for external subprojects
#pragma cling add_library_path("/home/jovyan/gismo/build/external")
#pragma cling add_library_path("/home/jovyan/gismo/build/external/Eigen")
#pragma cling add_library_path("/home/jovyan/gismo/build/external/gzstream")
#pragma cling add_library_path("/home/jovyan/gismo/build/external/onurbs")
#pragma cling add_library_path("/home/jovyan/gismo/build/external/rapidxml")
#pragma cling add_library_path("/home/jovyan/gismo/build/external/tclap")
#pragma cling add_library_path("/home/jovyan/gismo/build/external/unsupported/Eigen")
#pragma cling add_library_path("/home/jovyan/gismo/build/external/zlib")

// Set include paths for G+Smo
#pragma cling add_include_path("/home/jovyan/gismo/src")
#pragma cling add_include_path("/home/jovyan/gismo/build/gsCore")

// Set library paths for G+Smo
#pragma cling add_library_path("/home/jovyan/gismo/build/lib")

// Load external libraries
#pragma cling load("libgismo.so")

// Include main header
#include "/home/jovyan/gismo/src/gismo.h"
