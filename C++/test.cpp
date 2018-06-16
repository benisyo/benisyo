#include <stdio.h>

class Test
{
public:
  Test() {
    printf("Hello, World! C++");
  }
};

int main (int argc, char *args[])
{
  Test test;
  return 0;
}  