cmake_minimum_required(VERSION 3.20)
project(printf C)

set(CMAKE_C_STANDARD 11)

include_directories(.)

add_executable(printf
        _printf.c
        handle_c.c
        handle_d.c
        handle_format.c
        handle_i.c
        handle_number.c
        handle_percent.c
        handle_s.c
        main.c
        main.h)
