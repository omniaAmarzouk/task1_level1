//Problem #1: operatores "is it even"
#include <iostream>
using namespace std;
int main()
{
	bool even;
	int n;
	cout << "Enter any number: ";
	cin >> n;
	even = n % 2;
	cout << "Number is even? by %2: " << !even << endl;
	even = n / 2.0 - n / 2;
	cout << "Number is even? by /2 : " << !even << endl;
	even = n % 10;
	cout << "Number is even? by %10(number must be >= 10): " << !even;
}

