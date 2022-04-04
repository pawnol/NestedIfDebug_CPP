/*
Nested If Debug
Pawelski
4/4/2022
Please follow the instructions on the activity sheet!
*/

#include <iostream>

int main()
{
    int number;
    std::cout << "Enter a number >> ";
    std::cin >> number;
    if (number <= 100);
    {
        if (number >= 0);
        {
            std::cout << "That number is between 0 and 100, inclusive.\n";
        }
        else;
        {
            std::cout << "That number is not between 0 and 100.\n";
        }
    }
    else;
    {
        std::cout << "That number is not between 0 and 100.\n";
    }
    return 0;
}
