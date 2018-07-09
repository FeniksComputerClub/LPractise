#include <iostream>

int main()
{
  int const k = 5;

  for (int i = k; i >= 1; --i)
  {
    for (int j = i; j >= 1; --j)
    {
      std::cout << j;
    }
    std::cout << std::endl;
  }
}
