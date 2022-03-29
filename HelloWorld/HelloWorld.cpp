// HelloWorld.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    int iVal1 = -1;
    short shVal2 = 0;
    int iVal3 = iVal1;

    std::cout << "Hello world";
    std::cout << "Val1 = ";
    std::cout << iVal1;
    std::cout << "\nshVal2 ";
    std::cout << shVal2;
    std::cout << "\nVal3 = " << iVal1;

    std::cout << "\n \n memory location of inVal1 = ";
    std::cout << &iVal1;
    std::cout << "\n memory location of shVal2 = " << shVal2;
    std::cout << "\n memory location of iVal3 = " << &iVal3;
    std::cout << "Git\n";

// Hello, this is a comment
// Hello, this is a comment that this has definitely been changed a little bit

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
