#include <iostream>
#include <vector>
#include <cstdint>

int main()
{
  int const n = 20000000;
  std::vector<bool> v(n, false);
  int t = 1;
  int i = 0;
  while (i < n)
  {
    while (v[i])
      ++i;
    ++t;
    uint64_t p = 2 * i + 3;
    if (t == 100001)
      std::cout << p << std::endl;
    int j = i;
    while ((j += p) < n)
      v[j] = true;
    ++i;
  }
}
