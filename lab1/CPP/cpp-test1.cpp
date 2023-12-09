#include <iostream>
#include <iomanip>
#include <cmath> // required for pow and M_PI
#include <stdio.h>
#include <stdlib.h>

using namespace std; //now we don't need to write 'std::' anymore. 



long long long_long_i() {
    int i = M_PI; 
    cout << "long_long_i. " << "size " << sizeof (i) << ".  value: " << i << endl;
}

long long_i() {
    long i = M_PI; 
    cout << "long_i. " << "size " << sizeof (i) << ".  value: " << i << endl;
}

int int_i() {
    int i = M_PI; 
    cout << "int. " << "size " << sizeof (i) << ".  value: " << i << endl;
}

float float_i() {
    float i = M_PI; 
    cout << "float. " << "size " << sizeof (i) << ".  value: " << i << endl;
}

double double_i() {
    double i = M_PI; 
    cout << "double. " << "size " << sizeof (i) << ".  value: " << i << endl;
}

int main()
{
cout << setprecision(45);
float_i();
double_i();
int_i();
long_i();
long_long_i();
}