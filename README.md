# Golang调用C++引导

## 简介

Golang的cgo模块可以直接调用C的程序，但是调用C++的部分会有些麻烦，这里综合了网上可以查到的各种方法做了个汇总，方便日后使用。

## 调用方法

```bash
git clone git@github.com:CJSHP/Golang_Call_Cpp.git
cd Golang_Call_Cpp
./build.sh
```

即可

## 简单介绍编译参数

1. CFLAGS/CXXFLAGS，分别表示C/C++的编译参数
2. LDFLAGS，表示链接选项，-L指示寻找链接文件的路径，-lstdc++表示链接C++库，-ltest是-l test，是链接libtest.so/.a的标志，优先使用.so。

## 注意事项

1. 注释必须紧跟着import "C"，不能有空行，否则会出现错误
2. 封装必须要用C风格，直接include c++文件会失效

后续继续补充。
