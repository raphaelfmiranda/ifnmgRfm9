cmake_minimum_required(VERSION 3.22)
project(raphaelfmiranda C)

set(CMAKE_C_STANDARD 11)

include_directories(algoritmoEprogramacaoEmC)

add_executable(raphaelfmiranda algoritmoEprogramacaoC/main.c algoritmoEprogramacaoCifElse/main.cpp)
