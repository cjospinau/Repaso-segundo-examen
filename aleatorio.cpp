#include <iostream>
#include <random>


int main()
{
  int seed = 10;
  std::mt19937 gen(seed);
  std::weibull_distribution<>dis(1.0,2.0);
  for(int n = 0; n < 10000; ++n) {

    std::cout << dis(gen) << std::endl;
  }

  std::cout << "\n";
}
  
