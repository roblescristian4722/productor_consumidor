cmake_minimum_required(VERSION 3.0)
set(CMAKE_CXX_STANDARD 11)
project(productorConsumidor)

# Nombre del proyecto y versión (la versión corresponde al número de programa
# a entregar para la materia)
project(${CMAKE_PROJECT_NAME} VERSION 5.0)

# Incluye el directorio de headers
include_directories(headers)

set(THREADS_PREFER_PTHREAD_FLAG ON)
find_package(Threads REQUIRED)

set(SOURCE  src/main.cpp
            src/controller.cpp
            src/cursor.cpp
            src/entityManager.cpp
            src/kbhitLinux.cpp
)


# Añandir el ejecutable
add_executable(${CMAKE_PROJECT_NAME} ${SOURCE})
target_link_libraries(${CMAKE_PROJECT_NAME} PRIVATE Threads::Threads)
