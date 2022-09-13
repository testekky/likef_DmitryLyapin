#include <iostream>
using namespace std;
int main()
{
	float x, y;
	cin >> x >> y;
    if ((((x * x + y * y)) >= 1 && (x * x + y * y) <= 4) && !(x < 0 && y < 0))
    {
        cout << true;
    }
    else
    {
        cout << false;
    }
}