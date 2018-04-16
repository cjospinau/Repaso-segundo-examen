#include <iostream>
#include <cmath>
  
  using fptr = double(double);
  
  double f(double x);
     double regular(double xl, double xu, double eps, int nmax, fptr func);
  
 int main(void) {
   const double eps = 1.0e-8;
   int NMAX = 2;

  double xl = 12, xu = 18, xr=0;
   xr = regular(xl, xu, eps, NMAX, f);
   
   return 0;
 }
 
 double f(double x)
 {
   return (9.81*68.1/x)*(1-std::exp(-10*x/68.1)) - 40;
 }

double regular(double xl, double xu, double eps, int nmax, fptr func)
{
  std::cout.precision(16);
  std::cout.setf(std::ios::scientific);

  double g, xr;
  xr= xu - (f(xu)*(xl - xu))/(f(xl) - f(xu));
    g= f(xr);
    if (std::abs(g)>eps){
    if (f(xr)*f(xl)<0)
      {
  	xr= regular(xl,xr, eps, nmax, f);

      }
    else
      {
	xr= regular(xr, xu, eps, nmax, f);
		
	  }
   }
   
    std::cout << xr << std::endl;

  return xr;
}
