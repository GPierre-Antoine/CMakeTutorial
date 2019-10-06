
cmake_minimum_required(VERSION 3.14)

add_library(MathFunctions mysqrt.cxx MathFunctions.h)

install (TARGETS MathFunctions DESTINATION bin)
install (FILES MathFunctions.h DESTINATION include)