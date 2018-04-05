//
// Created by alex on 3/21/18.
//
#include "CalcHeader.h"
using namespace std;

void Calc::ShowMainMenu() //Function that displays the user menu.
{
    cout << "1. Addition\n";
    cout << "2. Subtraction\n";
    cout << "3. Multiplication\n";
    cout << "4. Division\n";
    cout << "5. Modulus\n";
    cout << "6. Is the number prime?\n";
    cout << "7. Is the number even?\n";
    cout << "8. Is the number odd?\n";
    cout << "9. To display this menu again.\n";
    cout << "10. To end the program.\n";
}

int Calc::Addition(int a, int b) //Function that performs the addition of two integers.
{
    int add_result;  //Variable that holds the result of the addition.

    add_result = a + b;  //Addition operation is performed.

    return add_result;  //Result is returned.
}

int Calc::Subtraction(int a, int b) //Function that performs the subtraction of two integers.
{
    int sub_result;  //Variable that holds the result of the subtraction.

    sub_result = a - b;  //Subtraction operation is performed.

    return sub_result;  //Result is returned.
}

int Calc::Multiplication(int a, int b) //Function that performs the multiplication of two integers.
{
    int multi_result;  //Variable that holds the result of the multiplication.

    multi_result = a*b;  //Multiplication operation is performed.

    return multi_result;  //Result is returned.
}

float Calc::Division(float a, float b) //Function that performs the division of two floating point numbers.
{
    float div_result;  //Variable that holds the result of the division.

    div_result = (a/b);  //Division operation is performed.

    return div_result;  //Result is returned.
}

int Calc::Modulus(int a, int b) //Function that performs the modulus of two POSITIVE integers.
{
    int mod_result;  //Variable that holds the result of the modulus.

    mod_result = (a % b);  //Modulus operation is performed.

    return mod_result;  //Result is returned.
}

bool Calc::isPrime(int a) //Function that finds out if a number is prime or not.
{
    int upper_bound = sqrt(a);  //Variable that holds the upper bound on the numbers needing to be checked against the given number.

    if (a < 2)  //If the given number is 0 or 1 then it is not prime.
        return false;
    if (a == 2)  //If the given number is 2, it is prime.
        return true;

    if(!(a % 2))  //This helps eliminate all even divisors.
        return false;

    for(int i = 3; i <= upper_bound; i += 2)  //For loop that checks every odd divisor up until the bound is reached.
    {
        if (!(a % i))  //If any of the factors divide perfectly into the given number, the given number is not prime.
            return false;
    }

    return true;  //Otherwise, if we get to this point the given number must be prime.
}

bool Calc::isEven(int a) //Function that finds out if a number is even or not.
{
    if (a % 2 == 0)  //If the given number divides perfectly by 2, it is even.
    {
        return true;
    }

    return false;  //Otherwise, it is not even.
}

bool Calc::isOdd(int a) //Function that finds out if a number is odd or not.
{
    if (a % 2 == 0)  //If the given number divides perfectly by 2, it is not odd.
    {
        return false;
    }

    return true;  //Otherwise, it is odd.
}