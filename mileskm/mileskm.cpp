// mileskm.cpp 
//Lisa Jacklin
// CS 201
// 9/8/2021
// 
// 
// 
// keep in mind that 1 mile is 1.609 km

#include <iostream>

int miles;
int km;

int main()
{
    std::cout << "Please insert how many miles to be converted: \n";
    std::cin >> miles;

    km = miles * 1.609;

    std::cout << miles;
    std::cout << "  mile(s) is equal to: ";
    std::cout << km;
    std::cout << "km (s) \n";
}
