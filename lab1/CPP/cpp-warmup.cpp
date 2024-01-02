#include <iostream>
using namespace std; //now we don't need to write 'std::' anymore. 

// int main() // 
// {
// int i = 0, j;
// cout << "before. \n" << "j: " << j << "\n" << "i: " << i << "\n"; // j:0, i:0

// j = ++i;
// j = i++;

// cout << "after. \n" << "j: " << j << "\n" << "i: " << i << "\n"; // after. j:1, i:2

// return 0;
// }

/// --- --- --- /// --- --- --- /// --- --- ---  /// --- --- ---  /// --- --- ---   

// int main() // b
// {
// int i = 42;
// string output = (i < 42) ? "a" : "b";
// cout << output << std::endl;

// return 0;
// }

/// --- --- --- /// --- --- --- /// --- --- ---  /// --- --- ---  /// --- --- ---   

// int main() // 10 10
// {
// int i;
// int& ri = i;
// i = 5;
// ri = 10;
// cout << i << " " << ri << std::endl;
// 
// return 0;
// }

/// --- --- --- /// --- --- --- /// --- --- ---  /// --- --- ---  /// --- --- ---   

// int main() // 1764
// {
// // how come its sooo long?
// // any easier way to power ?
// int i = 42; // i = 42
// int * j = &i; // j = i (42)
// *j = *j * *j; // 
// cout << *j << endl;
// }

/// --- --- --- /// --- --- --- /// --- --- ---  /// --- --- ---  /// --- --- ---   

// int main() {
//     int i[7] = {42,24,42,24,48,128,512};
//     // 42 = 24 - 24 
//     *(i+4) = i[5]-i[6];
//     cout << *(i+4) << endl;
    
//     return 0;
// }

// int main() {
//     int i[4] = {42, 24, 42, 24};
//     for (int j = 0; j < 4; j++) {
//         cout << i[j] << " ";
//     }
//     return 0;
// }

/// --- --- --- /// --- --- --- /// --- --- ---  /// --- --- ---  /// --- --- ---   

// assigns j to a integer, then before showing it to the public, resets it back to 0
// TODO: why void? 


// void reset(int &i) {
//     i = 0;
// }

// int j = 42;
// reset(j);
// cout << j << endl;



/// --- --- --- /// --- --- --- /// --- --- ---  /// --- --- ---  /// --- --- ---   

// create a vector containing integers
#include <iomanip>
#include <iostream>
#include <vector>
#include <cstdlib> 

using std::setprecision;



int main() {

  // initialize constant seed
  std::srand(99);

  // create a vector containing integers
  std::vector<double> vec;
  
  setprecision(10);
  // srand( (unsigned)time (NULL) );

  // fill vec with random number in [0, 99]
  for (auto i = 0; i < 5; i++){
    vec.push_back((double) rand()/RAND_MAX);
  }

  // display all elemenets of vec 
  for(int i = 1; i < vec.size(); ++i){
    std::cout << vec.at(i) << " ";
    std::cout << endl;
  }

  // size of the vec
  cout << "vector size: " << vec.size() << endl;

  cout << "element: ";
  for (auto &elem: vec){
      std::cout << elem << " ";
  }
  cout << endl;

}

/// --- --- --- /// --- --- --- /// --- --- ---  /// --- --- ---  /// --- --- ---   

// #include <cmath> // required for pow and M_PI
// #include <iostream>

// class Circle{
//     double radius;
    
//     /// ***BEGIN*** /// 
//     public:
//         Circle(double rad) {
//             radius = rad;
//         }
//     /// ***END*** /// 

//     double circumference(){
//         return 2*M_PI*radius;
//     }

// };

// int main(){
//   Circle circ(3);
//   std::cout << "Circumference: " << circ.circumference() << std::endl;
// //   std::cout << "Area: " << circ.area() << std::endl;
//   return 0;
// }

/// --- --- --- /// --- --- --- /// --- --- ---  /// --- --- ---  /// --- --- ---   