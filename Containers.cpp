#include <iostream>
#include <array>
#include <string>
#include <vector>
#include <list>

template<typename T>
void print(T const& container)
{
  for (typename T::const_iterator k = container.begin(); k != container.end(); ++k)
  {
    std::cout << *k << std::endl;	// Dereference the iterator.
  }
}

int main()
{
  std::array<std::string, 10> lmao = { "abc", "def", "ghi", "jkl", "mno", "pqr", "stu", "vwx", "yz", "012" };
  std::vector<std::string> tyr = { "kaas", "ham", "ei" };
  std::string s = { 'a', 'b', 'c', 'd' };
  std::list<int> uil = { 1, 2, 3, 4, 5, 6 }; 

  tyr.push_back("zout");

  for (int k = 0; k < lmao.size(); ++k)
  {
    std::cout << lmao[k] << std::endl;
  }

  for (int k = 0; k < tyr.size(); ++k)
  {
    std::cout << tyr[k] << std::endl;
  }

  for (int k = 0; k < s.size(); ++k)
  {
    std::cout << s[k] << std::endl;
  }

  for (std::list<int>::iterator k = uil.begin(); k != uil.end(); ++k)
  {
    std::cout << *k << std::endl;	// Dereference the iterator.
  }
  
  std::cout << '\n';

  print(tyr);
  print(s);

  std::cout << '\n';

  std::cout << lmao.size() << std::endl;
  std::cout << tyr.size() << std::endl;
  std::cout << s.size() << std::endl;
  
  
  std::cout << lmao[1] << std::endl;
  std::cout << tyr[1] << std::endl;
  std::cout << s[1] << std::endl;
}

