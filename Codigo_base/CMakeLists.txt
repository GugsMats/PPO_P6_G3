cmake_minimum_required(VERSION 3.20)
project(Projeto)

set(CMAKE_CXX_STANDARD 20)

# Adiciona os teus ficheiros .cpp aqui à medida que os criares.
# Exemplo: quando criares User.cpp e Msg.cpp, a linha fica:
#   add_executable(Projeto main.cpp User.cpp Msg.cpp)
#
# Para a Parte C (sockets), adiciona também:
#   ../Codigo\ Sockets\ II/Linux/NetworkSocket.cpp
# e inclui o diretório:
#   include_directories(../Codigo\ Sockets\ II/Linux)

add_executable(Projeto main.cpp
        User.cpp
        User.h
        Msg.cpp
        Msg.h
        EmailMsg.cpp
        EmailMsg.h
        MobileMsg.cpp
        MobileMsg.h)
