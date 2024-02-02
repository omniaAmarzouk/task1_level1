//Problem #2 "operators"
#include <iostream>
using namespace std;
int main()
{
	int n;
	cout << "Enter any number: ";
	cin >> n;
	int l1, l2, l3;
        l1 = n % 10;
        n /= 10;
        l2 = n % 10;
        n /= 10;
        l3 = n % 10;
        cout << " The sum of last 3 digits: " << (l1 + l2 + l3);
}

