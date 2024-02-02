//student grades

#include <iostream>
using namespace std;
int main()
{
    string name1,name2;
    int id1, id2,grade1,grade2;
   
    cout << "Enter the students 1 name: ";
    cin >> name1;
    cout<<"His id: ";
    cin >> id1;
    cout << "His math grade: ";
    cin >> grade1;
    cout << "Enter the student 2 name: ";
    cin >> name2;
    cout << "His id: ";
    cin >> id2;
    cout << "His math grade: ";
    cin >> grade2;
    cout << "Students grade in math exam\n";
    cout << name1 << " (with id " << id1 << " ) got grade: " << grade1 << endl;
    cout << name2 << " (with id " << id2 << " ) got grade: " << grade2 << endl;
    cout << "Average grade is : " << (grade1 + grade2) / 2;
}


