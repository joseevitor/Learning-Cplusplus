#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int num1, num2, result;
    char op; // operation
    float div;



    cout << "Type the first number!";
    cin >> num1;
    cout << "Type the second number!";
    cin >> num2;
    cout << "type the operation: ";
    cin >> op;

    switch(op)
    {
    case '+':
        result = num1 +num2;
        cout << "Sum: " << result << endl;
        break;
    case '-':
        result = num1 - num2;
        cout << "Subtraction: " << result << endl;
        break;
    case '*':
        result = num1 * num2;
        cout << "Multiplication: " << result << endl;
        break;
    case '/':
        if(num2 != 0)
        {
            div = (float)num1 / num2;
            cout << "Division: " << result << endl;
        }
        else
        {
            cout << "Division by zero!" << endl;
        }
        result = num1 / num2;
        cout << "Division: " << result << endl;
        break;

    default:
        cout << "Operation non-existent! Try again" << endl;
        break;
    }



    return 0;
}
