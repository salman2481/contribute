//This program does the basic arithmetic operation
//i.e. addition, multiplication and subtraction
#include <iostream>
using namespace std;
int main()
{
    int a, b, sum, sub, mul;
    cout << "Enter the two numbers you want to add: ";
    cin >> a >> b;
    sum = (a + b);
    cout << "The addition of " << a << " and " << b << "are: " << sum;
    system ("cls");
    cout << "Enter the two numbers you want to subtract: ";
    cin >> a >> b;
    sub = (a - b);
    cout << "The subtraction of " << a << " and " << b << "are: " << sub;
    system ("cls");
    cout << "Enter the two numbers you want to multiply: ";
    cin >> a >> b;
    mul = (a * b);
    cout << "The multiplication of " << a << " and " << b << "are: " << mul;
    system ("cls");
    return 0;
}
#pragma once
