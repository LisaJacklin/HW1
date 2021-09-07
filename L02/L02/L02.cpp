// L02.cpp 
// Lisa Jacklin
// CS 201
// 9/1/2021
// L02 creates several pop ups that interact with the user
//

int number;

#include <iostream>
using std::cout;
using std::endl;
using std::cin;

int main()
{
    cout << "Please insert a number\n";
    cin >> number;
    number = number + 1;

    cout << " the square of your number plus one is:\n";
    cout << number * number;


}

