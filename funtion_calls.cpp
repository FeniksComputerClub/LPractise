#include <iostream>

void f()
{
  std::cout << "You called f()\n";
}

void f(int)
{
  std::cout << "You called f(int)\n";
}

void f(unsigned short, double)
{
  std::cout << "You called f(unsigned short, double)\n";
}

void f(unsigned long, double)
{
  std::cout << "You called f(unsigned long, double)\n";
}

int main()
{
  int n = 42;
  unsigned short k = 5;
  double l = 3.6;
  unsigned long g = 345;

  // 1. Call function f without arguments.
  f();

  // 2. Call function f with one argument of type int.
  f(n);

  // 3. Call function f with two arguments: an unsigned short and a double.
  f(k, l);

  // 4. Call function f with two arguments: an unsigned long and a double.
  f(g, l);
}
