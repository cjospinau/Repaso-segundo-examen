#include <iostream>
#include <cmath>

using fptr = double(double);
double f(double x);
double df(double x);

double Newton(double x0, fptr f, fptr df, double eps);

int main()
  
{
  const double eps = 1.0e-7; 

  Newton(0.1, f ,df, eps);
  return 0;
}

double f(double x)
{
  double y = std::pow(x,3) + 1;
  return y;
}

double df(double x)
{
  double y = 3*std::pow(x,2);
  return y; }

double Newton(double x0, fptr f, fptr df, double eps)
{
  
  double g = f(x0);
  double dg = f(x0);
  double xi;

  xi = x0 - f(x0)/df(x0);

  if(std::abs(f(xi)) > eps){
    xi =  Newton(xi, f, df, eps);
 
  }
  else{
    std::cout << xi << std::endl;}
  return xi;
  
}
