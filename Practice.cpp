#include <iostream>

int main()
{
  int k = 5;
  int l = 1;
  for (int p = 1; p <= k; ++p)
  {
    l = l * p;
    std::cout << l << std::endl;
  }

  std::cout << k << "! = " << l << std::endl;
}
