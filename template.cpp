#include <iostream>
#include <cmath>
template <class T>


T maximo(T a, T b, T c)
{
  T max = a;
  if(b > max){
    max = b;
  }
  if(c > max){
    max = c;
  }

  return max;
  std::cout << max << std::endl;
}

int main()
{
  int i=3, j=1, k=2;
  double f=-3.0, g=1.0, h=2.0;
  float z=-3.0f, x=1.0f, y=-2.0;
  
  std::cout << maximo(i, j ,k) << std::endl;
  std::cout << maximo(f, g, h) << std::endl;
  std::cout << maximo(z, x, y) << std::endl;
}
