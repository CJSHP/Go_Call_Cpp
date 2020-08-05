#include <stdlib.h>

#ifdef __cplusplus
extern "C" {
#endif
// expose C++ interface as C style
void test();

void print(void* vector);

void* newObject();

void freeObject(void* vector);

#ifdef __cplusplus
}
#endif