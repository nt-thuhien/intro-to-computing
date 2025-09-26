#include <iostream>
using namespace std;
int main()
{
int grade = 0;
cout << "\nPlease enter a grade: ";
cin >> grade;
if(grade < 0 || grade > 100)
cout << " The grade is not valid\n";
return 0;
}