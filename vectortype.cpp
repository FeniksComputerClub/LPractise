#include <iostream>

struct Vector3d
{
  double x;
  char y;
  char y2;
  double z;
};

int main()
{
   Vector3d vector3d;
   Vector3d* begin = &vector3d;
   double* xp = &vector3d.x;
   char* yp = &vector3d.y;
   char* y2p = &vector3d.y2;
   double* zp = &vector3d.z;
   std::cout << (xp - begin) << std::endl;
   std::cout << (yp - begin) << std::endl;
   std::cout << (y2p - begin) << std::endl;
   std::cout << (zp - begin) << std::endl;
}
