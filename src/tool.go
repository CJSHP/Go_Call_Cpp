package main

//#cgo LDFLAGS: -lstdc++ -L./ -ltest
//#include "bridge.h"
import "C"
import "unsafe"

// Tool 包含一个C风格指针
type Tool struct {
	cPtr unsafe.Pointer
}

func newObject() *Tool {
	return &Tool{cPtr: C.newObject()}
}

func (t *Tool) print() {
	C.print(t.cPtr)
}

func free(t *Tool) {
	C.freeObject(t.cPtr)
	t = nil
}

func test() {
	C.test()
}
