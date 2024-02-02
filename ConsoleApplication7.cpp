//Problem #2 "operators"
#include <iostream>
using namespace std;
int main()
{
	int n;
	cout << "Enter any number: ";
	cin >> n;
	cout << " The sum of last 3 digits: " << (n % 10 + n % 100 + n % 1000);
}

