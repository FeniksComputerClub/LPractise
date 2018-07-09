#include <iostream>

int main()
{
  bool found = false;
  for (int i = 999; !found && i >= 100; --i)
  {
    int a = i % 10; 
    int b = i / 100; 
    int c = i / 10; 
    int d = c % 10;
    int p = 1000 * i + a * 100 +  d * 10 + b;

    for (int u = 100; u <= 999; ++u)
      if (p % u == 0 && p / u <= 999)
      {
	std::cout << p << std::endl;
	found = true;
	break;
      }
    
  }
}
