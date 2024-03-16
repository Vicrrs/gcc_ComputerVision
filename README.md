# gcc_ComputerVision
using opencv in gcc

```bash
g++ code.cpp `pkg-config --cflags --libs opencv4` -o code
./code
```

* Compilando com cmake (supondo que esta na raiz)
```shell
mkdir -p build 
cd build
cmake ..
make
```
