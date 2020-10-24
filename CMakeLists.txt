cmake_minimum_required(VERSION 3.17)
project(LetMeC C)

set(CMAKE_C_STANDARD 99)

add_executable(LetMeC src/math/oddeven.c src/array/variadic.c src/main.c src/array/variadic.h src/math/oddeven.h src/struct/struct.c src/struct/struct.h src/memory/dereference.c src/memory/dereference.h src/struct/dog.c src/struct/dog.h src/array/ArrayList.c src/array/ArrayList.h)