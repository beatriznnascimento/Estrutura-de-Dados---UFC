#include <iostream>
#include <cmath>
#include <iomanip>

int main(){

    float a, b, c;

    std::cin >> a >> b >> c;

    float p = (a + b + c)/2;
    
    float area = sqrt(p*(p-a)*(p-b)*(p-c));

    std::cout << std::fixed << std::setprecision(2) << area; 

}