#include <iostream>
using namespace std;

int main()
{
    int n;
    double x;
    cin >> n >> x;
    switch (n)
    {
    case 1:
        cout << x / 10.0;
        break;
    case 2:
        cout << x * 1000.0;
        break;
    case 3:
        cout << x;
        break;
    case 4:
        cout << x / 1000.0;
        break;
    case 5:
        cout << x / 100.0;
        break;
    }
}
