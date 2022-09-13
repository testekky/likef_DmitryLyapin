#include "pt4.h"
#include <math.h>
using namespace std;

void Solve()
{
    Task("One34");
	int i = 1, N, x = 0, a;
	pt >> N;
	a = N;
	while (i < 6)
	{
		x += (N % 10) * pow(10, 5 - i);
		N /= 10;
		i++;
	}
	if (a == x) {
		pt << true;
	}
	else {
		pt << false;
	}
	
}
