#include <iostream>
#include <vector> 
#include <random>
#include <iomanip>
using std::vector;



int main(){
  vector<int> ivec;
  std::random_device rd;  // a seed source for the random number engine
  std::mt19937 gen(rd()); // mersenne_twister_engine seeded with rd()
  std::uniform_int_distribution<> distrib(0, 10);

  // append to vector 
  for (int i=0; i!=100; ++i)
    ivec.push_back(distrib(gen)); // append sequential integers to v2

  // print all elements of the vector
  for (int i=0; i!=100; ++i)
    std::cout<<ivec[i]<<". "; 

  std::cout<<"\n";
}
