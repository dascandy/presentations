#include <typeinfo>
#include <iostream>

struct T {
    virtual ~T() {}
};

T* f(const char* name);

int main(int, char** argv) {
  T* myObject = f(argv[1]);
  std::cout << typeid(*myObject).name() << "\n";
}


