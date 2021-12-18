cmake_minimum_required(VERSION 3.21)
project(hermoverkko)

set(CMAKE_CXX_STANDARD 14)

include_directories(matrix)
include_directories(neural_net)


set(matrix_dir

        matrix/matrix.h
        matrix/matrix.cpp
        )

set(neural_net_dir
        neural_net/layer.h
        neural_net/layer.cpp
        neural_net/neural_net.h
        neural_net/neural_net.cpp
        neural_net/linear_layer.h
        neural_net/linear_layer.cpp
        )
add_executable(main main.cpp
        ${matrix_dir}
        ${neural_net_dir}
        )