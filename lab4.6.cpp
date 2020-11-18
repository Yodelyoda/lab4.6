#include <iostream>
#include <cmath>
using namespace std;
int main() {
	double  j, P1, P2;
	int i;
	P1 = 1;
	i = 1;
	while (i <= 20)
	{
		P2 = 1;
		j = 1;
		while (j <= 40 - i)
		{
			P2 += (sqrt(abs(tan(i)))) / (i + pow(j, 2));
			j++;
		}
		P1 *= P2;
		i++;
	}
	cout << P1 << endl;
	P1 = 1;
	i = 1;
	do
	{
		P2 = 1;
		j = 1;
		do
		{
			P2 += (sqrt(abs(tan(i)))) / (i + pow(j, 2));
			j++;
		} while (j <= 40 - i);
		P1 *= P2;
		i++;
	} while (i <= 20);
	cout << P1 << endl;
	P1 = 1;
	for (i = 1; i <= 20; i++)
	{
		P2 = 1;
		for (j = 1; j <= 40-i; j++)
		{
			P2 += (sqrt(abs(tan(i)))) / (i + pow(j, 2));
		}
		P1 *= P2;
	}
	cout << P1 << endl;
	P1 = 1;
	for (i = 20; i >= 1; i--)
	{
		P2 = 1;
		for (j = 40-i; j >= 1; j--)
		{
			P2 += (sqrt(abs(tan(i)))) / (i + pow(j, 2));
		}
		P1 *= P2;
	}
	cout << P1 << endl;
	return 0;
}
