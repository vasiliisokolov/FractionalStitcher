#include <iostream>
#include <string>

int main()
{
    std::string integer, fractional, result;
    double transformation;
    std::cout << "Enter integer part of number: \n";
    std::cin >> integer;
    std::cout << "Enter fractional part of number: \n";
    std::cin >> fractional;
    result = integer + '.' + fractional;
    transformation = std::stod(result);
    std::cout << transformation;
    
}