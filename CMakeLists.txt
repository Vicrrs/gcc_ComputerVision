cmake_minimum_required(VERSION 3.0)
project(ComputerVisionTest)

# Definir a versão padrão do C++ para usar
set(CMAKE_CXX_STANDARD 11)

# Encontrar o pacote OpenCV instalado no sistema
find_package(OpenCV REQUIRED)

# Definir o arquivo(s) fonte do seu projeto
set(SOURCE_FILES src/main.cpp src/teste_opencv.cpp) # Adicione mais arquivos conforme necessário

# Definir o executável do seu projeto
add_executable(SeuProjetoTestes ${SOURCE_FILES})

# Linkar o executável com as bibliotecas do OpenCV
target_link_libraries(SeuProjetoTestes ${OpenCV_LIBS})
