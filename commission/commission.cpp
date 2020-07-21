#include <iostream>
using namespace std;
int main()
{
	string name;
	float salary, sale, commission;
	cout << "Enter Name  : ";
	cin >> name;
	cout << "Enter Salary  : ";
	cin >> salary;
	cout << " Enter Sale :   ";
	cin >> sale;
	cout << " Enter Commission Percent :";
	cin >> commission;
	cout << "\n\n";
	cout << " You name = " << name << endl;
	cout << " Total Reevenue " << salary + (sale * (commission / 100)) << "Bath" << endl;

}