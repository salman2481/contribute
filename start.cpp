//This program does the basic arithmetic operation
//i.e. addition, multiplication and subtraction
#include <iostream>
using namespace std;
int main()
{
    int a, b, sum, sub, mul, div;
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
    cout << "Enter the two numbers you want to divide: ";
    cin >> a >> b;
    div = (a / b);
    cout << "The division of " << a << " and " << b << "are: " << div;
    system ("cls");
    return 0;
}
#pragma once
#include <iostream.>
using namespace std;
#define max 10
int main()
{
	int number [max]={1,2,3,4,5,6,7,8,9,10};
	int index;
//	cout.set(ios::right);
	for(index=0;index<max;index++)
	{
		cout<<endl<<"the elements of array element are.."<<endl;
		cout.width(10);
		cout <<(index +1)<<"is";
		cout<<number[index];	
	}
		cout <<endl<<endl;
	return 0;
}
