#include <cmath> // required for pow and M_PI
#include <iostream>

// GCircle: Global  
// PCircle: Personal

class GCircle{
  
  double radius;
  
  public:
    
    GCircle(double r) {
      radius = r;
    }
    
    double circumference(){
      return 2*M_PI*radius;
    }
    
    double area(){
      return M_PI*std::pow(radius,2);
    }
};

int main(){
  GCircle PCircle(3);
  std::cout << "Circumference: " << PCircle.circumference() << std::endl;
  std::cout << "Area: " << PCircle.area() << std::endl;
  return 0;
} 