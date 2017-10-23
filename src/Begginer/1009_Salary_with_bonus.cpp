#include <iostream>
#include <string>
#include <cstdio>

using namespace std;

int main ()
{

	string firstName = "";
	double salary = 0.00;
	double totalSoldValue = 0.00;

	cin >> firstName;

	cin >> salary;

	cin >> totalSoldValue;

	double finalSalary = salary + (totalSoldValue * 0.15);

	printf("TOTAL = R$ %.2f\n", finalSalary);

	return 0;

}
