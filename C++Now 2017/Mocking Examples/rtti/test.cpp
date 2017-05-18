#include <stdio.h>
#include <typeinfo>
struct T {
    virtual ~T() {}
};
struct U : T {};
struct V : U, T {};

int main() {
  printf("int: %s\n", typeid(typeid(int)).name());
  printf("T: %s\n", typeid(typeid(T)).name());
  printf("U: %s\n", typeid(typeid(U)).name());
  printf("V: %s\n", typeid(typeid(V)).name());
  printf("3: %s\n", typeid(typeid(typeid(V))).name());
}

