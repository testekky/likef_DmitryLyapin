#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int i = 1, x = 0, a, N;
	cin >> N;
	a = N;
	while (i < 6) 
	{
		x += (N % 10) * pow(10, 5 - i);
		N /= 10;
		i++;
	}
	if (a == x)
	{
		cout << true;
	}
	else
	{
		cout << false;
	}
}