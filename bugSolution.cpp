#include <iostream>

int main() {
  int* ptr = nullptr;
  if (ptr != nullptr) {
    *ptr = 10; // Dereferencing only if ptr is not null
  } else {
    std::cerr << "Error: Pointer is null" << std::endl;
  }
  return 0;
}