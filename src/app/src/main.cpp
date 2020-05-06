#include "calculator.hpp"
#include <iostream>
int main()
{
    int num1 = 10;
    int num2 = 5;

    int addVal = myAdd(num1,num2);
    int subVal = mySub(num1,num2);

    std::cout<<addVal<<std::endl;
    std::cout<<subVal<<std::endl;
}