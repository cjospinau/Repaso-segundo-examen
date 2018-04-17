#include <iostream>
#include <cmath>

int fibonacci(int x0, int x1, int N);

int main()
{
  fibonacci(0,1,15);
  return 0;
}

int fibonacci(int x0, int x1, int N)
{
  int xn;
  
  N=N-1;
  xn = x0 + x1;
      std::cout << xn << "\n";
     if(N>=0){
      
       // x0 = fibonacci(x0,x1,N) -  x0;
       x1=fibonacci(x1,xn,N);
       
     }
     else{
       return xn;
      }
     
      
     }
