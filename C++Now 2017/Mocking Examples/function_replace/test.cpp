#include <stdlib.h>

struct C {
  virtual int x() = 0;
};

int func(void*) {
  return 42;
}

struct X {
  int (**funcs)(void*);
};

int main() {
  X* x = (X*)malloc(sizeof(X));
  x->funcs = (int(**)(void*))malloc(sizeof(int(*)(void*)));
  x->funcs[0] = &func;
  C* c = reinterpret_cast<C*>(x);
  return c->x();
}

