package main

//#cgo LDFLAGS: -lstdc++ -L./ -ltest
//#include "bridge.h"
import "C"
import (
	"testing"

	"github.com/stretchr/testify/assert"
)

func testTool(t *testing.T) {
	tool := newObject()
	assert.NotEqual(t, tool, nil)
	tool.print()
	test()
	free(tool)
}
