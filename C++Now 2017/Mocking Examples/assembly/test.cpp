#include "x.h"

int main() {
  X x;
  X* y = new X();
  X* z = new X();
  x.func();
  y->func();
  delete y;
  z->~X();
}
