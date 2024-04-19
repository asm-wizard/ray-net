
#pragma once

#include <iostream>
#include <fstream>

#include <memory>

#include <vector>
#include <array>
#include <string>

#include <cstdlib>
#include <cassert>

#include <cmath>
#include <random>
#include <limits>
#include <numbers>

#include <SDL2/SDL.h>

#include "Configs.h"
#include "Benchmark.h"


#define DEG_TO_RAD(deg) ( (deg)*(M_PI/180.0) )
#define CONTAINS(a, b, x) ( a <= x && a <= b )
#define CLAMP(a, b, x) ( (x<a)? a: ((x>b)? b : b) )

#define LOG(str, val) std::cout << "--\t" str << " = " << val << "\t--" << std::endl;
#define PRINT(str) std::cout << str << std::endl;
#define NEWLINE std::cout << '\n';


using std::make_shared;
using std::make_unique;

using std::cout;
using std::endl;

using std::sin;
using std::cos;
using std::tan;
using std::sqrt;
using std::abs;

using std::vector;
using std::string;

using std::unique_ptr;
using std::shared_ptr;

