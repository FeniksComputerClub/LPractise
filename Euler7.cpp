#include <iostream>
#include <cstdint>

bool is_prime(uint64_t k)
{
  for (uint64_t h = 2; h < k; ++h)
  {
    if (k % h == 0)
      return false;
  }
  return true;
}

int main()
{
  int n = 1000001;
  int t = 0;

  for (uint64_t k = 2; t <= n; ++k)
  {
    if (is_prime(k))
    {
      ++t;
     // if (++t == n)
	std::cout << k << std::endl; 
    }
  }

}
