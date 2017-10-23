#include <iostream>
#include <cstdio>

using namespace std;

int main ()
{

	int productOneCode, productOneUnits = 0;
	float productOnePrice = 0.00;

	int productTwoCode, productTwoUnits = 0;
	float productTwoPrice = 0.00;

	scanf("%d %d %f", &productOneCode, &productOneUnits, &productOnePrice);

	scanf("%d %d %f", &productTwoCode, &productTwoUnits, &productTwoPrice);

	float totalToPay = (productOnePrice * productOneUnits) + (productTwoPrice * productTwoUnits);

	printf("VALOR A PAGAR: R$ %.2f\n", totalToPay);

	return 0;

}
