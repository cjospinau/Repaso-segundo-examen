#include <iostream>
#include <vector>
#include <cmath>

void initialize(std::vector<double> & a);
void print(const std::vector<double> & a);
double average(const std::vector<double> & a);
double dstandard(const std::vector<double> & a, double p);

int main(void)
{
  const int N=10;
  std::vector<double> x(N);

  initialize(x);
  print(x);
  std::cout<< average(x)<< std::endl;
  double p = average(x);
  std::cout <<dstandard(x,p)<<std::endl;
  
  return 0;
}

void initialize(std::vector<double> & a)
{
  for (int ii=0; ii < a.size(); ++ii){
      a[ii]=ii*2;
    }
}

void print(const std::vector<double> & a)
{
  for(int ii=0; ii <a.size(); ++ii){
    std::cout<<a[ii]<<std::endl;
  }
  
}


double average(const std::vector<double> & a)
{
  double f;
  double sum=0.0;
  for(int ii=0; ii< a.size(); ++ii){
    sum+= a[ii];
  }
  f=sum/a.size();
  return f;
}

double dstandard(const std::vector<double> & a, double p)
{
  double sum=0;
  double d=1;
  double p1=p;
  for(int ii=0; ii< a.size(); ++ii){
    sum+=std::pow(a[ii]-p1,2);
  }
  d=sum/(a.size()-1);
  return d;
}
