rm -rf *.o *.a
g++ -c main.cpp -o test.o -std=c++11
ar rcs libtest.a test.o
rm -rf *.o
go run main.go tool.go
# uncomment line 5 or line 7 to run
go test tool_test.go tool.go helper.go
rm -rf *.a
