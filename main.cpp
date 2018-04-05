//Alex Foggia
//A simple calculator program that performs operations such as:
// +,-,*,/,%, determining if a number is prime, as well as even or odd.
#include "CalcHeader.h"
#include "CalcImplem.cpp"  //Used for access to all functions for calculator.
using namespace std;

int main()
{
    Calc menu, calculator;
    int first_number = 0, second_number = 0, answer = 0;  //Variables that hold the first and second number entered by the user. As well as the answer.
    float dividend = 0.0, divisor = 0.0, div_answer = 0.0;  //Variables that hold the dividend and the divisor for the division case. As well as the answer.
    bool prime_answer = false, odd_even_answer = false;  //Boolean variables used for the answers to whether a number is prime or not as well as odd or even.
    int user_choice;  //Variable that holds the user's menu choice.

    cout << "Welcome to the Poison Spider's calculator!\n";
    cout << "Please select one of the listed operations below that you wish to perform:\n";
    menu.ShowMainMenu();
    cin >> user_choice;
    while (user_choice)
    {
        switch (user_choice)
        {
            case 1:
            {
                first_number = 0;
                second_number = 0;
                answer = 0;

                cout << "Addition was selected...\n";
                cout << "Please enter in the first number to be added: ";
                cin >> first_number;
                cout << "Now enter in the second number to be added: ";
                cin >> second_number;
                answer = calculator.Addition(first_number, second_number);
                cout << "\nYour result is:\n";
                cout << first_number << " + " << second_number << " = " << answer;
                cout << "\n\nPlease select your next operation. (9. To display the menu again)\n";
                break;
            }
            case 2:
            {
                first_number = 0;
                second_number = 0;
                answer = 0;

                cout << "Subtraction was selected...\n";
                cout << "Please enter in the first number to be subtracted: ";
                cin >> first_number;
                cout << "Now enter in the second number to be subtracted: ";
                cin >> second_number;
                answer = calculator.Subtraction(first_number, second_number);
                cout << "\nYour result is:\n";
                cout << first_number << " - " << second_number << " = " << answer;
                cout << "\n\nPlease select your next operation. (9. To display the menu again)\n";
                break;
            }
            case 3:
            {
                first_number = 0;
                second_number = 0;
                answer = 0;

                cout << "Multiplication was selected...\n";
                cout << "Please enter in the first number to be multiplied: ";
                cin >> first_number;
                cout << "Now enter in the second number to be multiplied: ";
                cin >> second_number;
                answer = calculator.Multiplication(first_number, second_number);
                cout << "\nYour result is:\n";
                cout << first_number << " x " << second_number << " = " << answer;
                cout << "\n\nPlease select your next operation. (9. To display the menu again)\n";
                break;
            }
            case 4:
            {
                dividend = 0.0;
                divisor = 0.0;
                div_answer = 0.0;

                cout << "Division was selected...\n";
                cout << "Please enter in the dividend (numerator): ";
                cin >> dividend;
                cout << "Now enter in the divisor (denominator): ";
                cin >> divisor;
                div_answer = calculator.Division(dividend, divisor);
                cout << "\nYour result is:\n";
                cout << dividend << " / " << divisor << " = " << div_answer;
                cout << "\n\nPlease select your next operation. (9. To display the menu again)\n";
                break;
            }
            case 5:
            {
                first_number = 0;
                second_number = 0;
                answer = 0;

                cout << "Modulus was selected...\n";
                cout << "Please enter in the dividend (numerator): ";
                cin >> first_number;
                cout << "Now enter in the divisor (denominator): ";
                cin >> second_number;
                answer = calculator.Modulus(first_number, second_number);
                cout << "\nYour result is:\n";
                cout << first_number << " mod " << second_number << " = " << answer;
                cout << "\n\nPlease select your next operation. (9. To display the menu again)\n";
                break;
            }
            case 6:
            {
                first_number = 0;
                prime_answer = false;

                cout << "Please enter in the number you wish to know is prime or not: ";
                cin >> first_number;
                prime_answer = calculator.isPrime(first_number);
                cout << "\nYour result is:\n";
                if(prime_answer == true)
                {
                    cout << first_number << " is prime.";
                }
                else
                {
                    cout << first_number << " is not prime.";
                }
                cout << "\n\nPlease select your next operation. (9. To display the menu again)\n";
                break;
            }
            case 7:
            {
                first_number = 0;
                odd_even_answer = false;

                cout << "Please enter in the number you wish to know is even or not: ";
                cin >> first_number;
                odd_even_answer = calculator.isEven(first_number);
                cout << "\nYour result is:\n";
                if(odd_even_answer == true)
                {
                    cout << first_number << " is even.";
                }
                else
                {
                    cout << first_number << " is not even.";
                }
                cout << "\n\nPlease select your next operation. (9. To display the menu again)\n";
                break;
            }
            case 8:
            {
                first_number = 0;
                odd_even_answer = false;

                cout << "Please enter in the number you wish to know is odd or not: ";
                cin >> first_number;
                odd_even_answer = calculator.isOdd(first_number);
                cout << "\nYour result is:\n";
                if(odd_even_answer == true)
                {
                    cout << first_number << " is odd.";
                }
                else
                {
                    cout << first_number << " is not odd.";
                }
                cout << "\n\nPlease select your next operation. (9. To display the menu again)\n";
                break;
            }
            case 9:
            {
                menu.ShowMainMenu();
                break;
            }
            case 10:
            {
                cout << "Have a nice day!\n";
                cout << "Good Bye!\n";
                return 0;
            }
            default:
            {
                cout << "----------------------------------------------------------------------------\n";
                cout << "----------------------------------------------------------------------------\n";
                cout << "----------------------------------------------------------------------------\n";
                cout << "Whoops, that input is not valid!\n";
                cout << "Please enter another input:\n";
                cout << "----------------------------------------------------------------------------\n";
                cout << "----------------------------------------------------------------------------\n";
                cout << "----------------------------------------------------------------------------\n";
                menu.ShowMainMenu();
            }
        }

        cin >> user_choice;
    }

    cout << "Invalid input.\n";
    cout << "Exiting Program......\n";

    return 0;
}