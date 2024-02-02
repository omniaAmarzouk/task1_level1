//Problem #2: Fractional Part


#include <iostream>
using namespace std;
int main()
{
	double a, b;
	cout << "Enter two real numbers: ";
	cin >> a >> b;
	cout << "the fraction part result by dividing two numbers is: " << (a / b) - (int)(a / b);
}

