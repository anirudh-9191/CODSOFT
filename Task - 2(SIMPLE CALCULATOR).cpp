#include <iostream>
using namespace std;
int main()
{
    cout << "Choose The Operation" << endl;
    cout << "1.Addition\n"
         << "2.Subtraction\n"
         << "3.Multiplication\n"
         << "4.Division\n";
    int option;
    cout << "Enter Your Choice: " << endl;
    cin >> option;
    double a, b;
    cout << "Enter Two Numbers: " << endl;
    cin >> a >> b;
    switch (option)
    {
    case 1:
        cout << "Result = " << a + b;
        break;
    case 2:
        cout << "Result = " << a - b;
        break;
    case 3:
        cout << "Result = " << a * b;
        break;
    case 4:
        cout << "Result = " << a / b;
        break;
    default:
        cout << "Result = "
             << "Not Valid";
    }
}