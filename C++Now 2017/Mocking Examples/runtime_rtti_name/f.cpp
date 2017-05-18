#include <typeinfo>
#include <cstdlib>
#include <cstdio>
#include <cstring>

struct T {
  virtual ~T() {}
};

struct rttiinfo {
  void* type;
  const char* name;
  void* base;
};

T* f(const char* name) {
  static rttiinfo rti;
  void** vt = new void*[10];
  static T object;
  memcpy(&rti, ((void***)&object)[0][-1], sizeof(rttiinfo));
  *(void**)&object = &vt[1];
  vt[0] = &rti;
  rti.name = name;
  return &object;
}

