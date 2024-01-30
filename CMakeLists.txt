cmake_minimum_required(VERSION 3.27)
project(printf C)

set(CMAKE_C_STANDARD 11)

include_directories(.)

add_executable(printf
        test/main.c
        0-task.c
        1-task.c
        10-task.c
        11-task.c
        12-task.c
        13-task.c
        14-task.c
        2-task.c
        3-task.c
        4-task.c
        5-task.c
        6-task.c
        7-task.c
        8-task.c
        9-task.c
        _prinf.c
        _putchar.c
        main.h)
