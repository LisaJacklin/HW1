// greatest.cpp
// Lisa Jacklin
// CS 201
// 9/9/2021
// 
//

#include <iostream>
using std::cin;

int number;

int main()
{
    number = 1;
  

    while (number != 0) {
        std::cout << " Enter a Sequence of positive integers.To end, enter zero: \n";
        std::cin >> number;

        if (number >0 ){
        std::cout << "Enter a positive integer ( 0 to end): ";
        std::cout << number;
        std::cout << "\n";
        }

        if (number < 0) {
            std::cout << "Please insert a positive integer: ";
                std::cin >> number;
        }

    }
    while (number = 0) {
        std::cout << "The largest integer entered is: ";
        std::cout << number;
    }
   
}

