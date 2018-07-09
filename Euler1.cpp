#include <iostream>

int main()
{
  int s = 0;
  int a = 3;
  int b = 5;
  int c = 999;
  for (int i = 1; i <= c; ++i)
  {
    if (i % a == 0 || i % b == 0)
    {
      std::cout << i << std::endl;
      s += i;
    }
  }
  std::cout << s << std::endl;
}
