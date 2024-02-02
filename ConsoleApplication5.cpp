//Problem #3: operatores
#include <iostream>
using namespace std;
int main()
{
	int a, b;
	cout << "Enter two numbers: ";
	cin >> a >> b;
	cout << "The reminder is: " << a - (a / b) * b;
}

