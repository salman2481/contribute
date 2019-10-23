//This program does the basic arithmetic operation
//i.e. addition and subtraction
#include <iostream>
using namespace std;
int main()
{
    int a, b, sum, sub;
    cout << "Enter the two numbers you want to add: ";
    cin >> a >> b;
    sum = (a + b);
    cout << "The addition of " << a << " and " << b << "are: " << sum;
    system ("cls"),
    cout << "Enter the two numbers you want to subtract: ";
    cin >> a >> b;
    sub = (a - b);
    cout << "The subtraction of " << a << " and " << b << "are: " << sub;

    return 0;
}
#pragma once
