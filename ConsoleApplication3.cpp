//Problem #1: Averages

#include <iostream>
using namespace std;
int main()
{
	double n1, n2, n3, n4, n5;
	cout << "Enter five numbers: ";
	cin >> n1 >> n2 >> n3 >> n4 >> n5;
	cout << "A) Their average is: " << (n1 + n2 + n3 + n4 + n5) / 5 << endl;
	cout << "B) The sum of the first 3 numbers divided by the sum of the last 2 numbers: " << (n1 + n2 + n3) / (n4 + n5) << endl;
	cout << "C) The average of the first 3 numbers divided by the average of the last 2 numbers: " << ((n1 + n2 + n3) / 3) / ((n4 + n5) / 2) << endl;
	cout << "D) The mathematical relationship between B and C is: multip by " << 2.0 / 3.0;
}

