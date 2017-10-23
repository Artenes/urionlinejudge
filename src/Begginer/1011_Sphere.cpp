#include <iostream>
#include <math.h>
#include <cstdio>

using namespace std;

int main()
{

	int radius = 0;

	cin >> radius;

	double volume = (4.0/3.0) * 3.14159 * pow(radius, 3);

	printf("VOLUME = %.3f\n", volume);

	return 0;

}
