#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
	double pi=0.0, term=0.0;
	int n, sign=1;
	for (n=1;;n++)
	{
		term = sign*(1.0 / (2 * n - 1));
		if (fabs(term) < 1e-6)
		{
		break;
		}
		else
		{
			sign = -sign;
		}
		pi = pi + term;
	}
	pi = pi * 4;
	printf("%10.8f", pi);
	system("pause");
	return 0;
}
