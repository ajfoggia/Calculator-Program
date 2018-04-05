//
// Created by alex on 3/21/18.
//

#ifndef CALCULATORPROG_CALCHEADER_H
#define CALCULATORPROG_CALCHEADER_H

#include <iostream>
#include <cmath> //Needed for sqrt() function to be recognized.
using namespace std;

class Calc
{
    public:

        void ShowMainMenu();  //Function that displays the user menu.

        int Addition(int a, int b);  //Function that performs the addition of two integers.

        int Subtraction(int a, int b); //Function that performs the subtraction of two integers.

        int Multiplication(int a, int b);  //Function that performs the multiplication of two integers.

        float Division(float a, float b);  //Function that performs the division of two floating point numbers.

        int Modulus(int a, int b);  //Function that performs the modulus of two POSITIVE integers.

        bool isPrime(int a);  //Function that finds out if a number is prime or not.

        bool isEven(int a);  //Function that finds out if a number is even or not.

        bool isOdd(int a);  //Function that finds out if a number is odd or not.
};

#endif //CALCULATORPROG_CALCHEADER_H
