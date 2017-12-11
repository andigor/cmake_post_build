#include "func.h"

#include <iostream>
#include <fstream>

int main()
{
  std::ifstream s("data.res");
  if (!s.good()) {
    int* a = reinterpret_cast<int*>(1);
    delete a;
  }

  func();
  return 0;
}

