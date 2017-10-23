#include <iostream>
#include <cstdio>

using namespace std;

int main()
{

	int employeeNumber, workedHours = 0;
	double hourCost = 0.0;

	cin >> employeeNumber;

	cin >> workedHours;

	cin >> hourCost;

	printf("NUMBER = %d\n", employeeNumber);
	printf("SALARY = U$ %.2f\n", workedHours * hourCost);

	return 0;

}
