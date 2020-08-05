#include <algorithm>
#include <iostream>
#include <numeric>
#include <string>
#include <vector>

#include "bridge.h"

void test() {
  std::cout << "Across the Great Wall we can reach every corner in the world."
            << std::endl;
}

void print(void* vector) {
  if (vector == nullptr) return;
  std::vector<int>* vec = static_cast<std::vector<int>*>(vector);
  for (auto x : *vec) std::cout << x << ',';
  std::cout << std::endl;
}

void* newObject() {
  std::vector<int>* vec = new std::vector<int>();
  (*vec).clear();
  (*vec).resize(10);
  std::iota(std::begin(*vec), std::end(*vec), 0);
  return (void*)(vec);
}

void freeObject(void* vec) {
  if (vec != nullptr) {
    delete (std::vector<int>*)vec;
    vec = nullptr;
  }
}