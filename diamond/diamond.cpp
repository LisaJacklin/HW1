// diamond.cpp 
// Lisa Jacklin
// CS 201
// 9/6/2021
//

#include <iostream>

int number;
//use for one direction of the diamond
int i; 
//used for the other direction
int j;


int main()
{
    // gives the number to make the diamond's thickest line
	std::cout << "Please enter a possitive integer: ";
		std::cin >> number;
	//diamond number printed
	std::cout << "the number given was ";
	std::cout << number;
    std::cout << "\n";
    
    //provides a space between the lines of #
    //from the top of the diamon to the center line
    int space = number - 1;

    //j places spaces between characters and lines
    //i places # whenever j<= i
    for (  i = 0; i < number; i++)
    {
     
        for (  j = 0; j < space; j++)
            std::cout << " ";

        for (  j = 0; j <= i; j++)
            std::cout << "# ";

        std::cout << "\n";
        space--;
    }

    //from the center line, to the bottom of the diamond
    space = 0;
    for (  i = number; i > 0; i--)
    {
  
        for (  j = 0; j < space; j++)
            std::cout << " ";


        for (  j = 0; j < i; j++)
            std::cout << "# ";

        std::cout << "\n";
        space++;


    }
}

