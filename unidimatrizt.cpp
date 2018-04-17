#include <iostream>

const int W = 4;
const int H = 3;

int main(void)
{

  double A[H*W] = {0.0};
  double AT[W*H] = {0.0};
  for(int ii = 0; ii < H; ++ii) {
    for(int jj = 0; jj < W; ++jj) {

     A[ii*W + jj] = (ii*W + jj);
    }
  }
  for(int ii = 0; ii < H ; ++ii){
    for(int jj = 0; jj < W; ++jj){
      AT[jj*H + ii] = A[ii*W + jj];
    }
  }
 
  for(int ii = 0; ii < H; ++ii) {
    for(int jj = 0; jj < W; ++jj) {
      std::cout << A[ii*W + jj] << "\t";
    }
    std::cout << "\n";
   }
    std::cout << "\n";
   
    for(int ii = 0; ii < W; ++ii) {
      for(int jj = 0; jj < H; ++jj) {
    std::cout <<  AT[ii*H + jj] << "\t";
      }
      std::cout << "\n";
    }

    return 0;
}
