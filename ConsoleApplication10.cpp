//Years!

#include <iostream>
using namespace std;
int main()
{
    
    int day;
    cout << "Enter your age in days: ";
    cin >> day;
    int year, month;
    year = day / 360;
    day %= 360;
    month = day / 30;
    day %= 30;
    cout << year << " " << month << " " << day;
}


