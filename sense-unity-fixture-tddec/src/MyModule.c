#include "MyModule.h"

int value = 0;

void MyModule_Create()
{
  value = 1;
}

int MyModule_Value()
{
  return value;
}
