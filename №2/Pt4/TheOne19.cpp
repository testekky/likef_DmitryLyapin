#include "pt4.h"
using namespace std;

void Solve()
{
    Task("TheOne19");
    int n;
    float x;
    pt >> n >> x;
    switch (n) 
    {
        case 1:
            pt << x / 10.0;
            break;
        case 2:
            pt << x * 1000.0;
            break;
        case 3:
            pt << x;
            break;
        case 4:
            pt << x / 1000.0;
            break;
        case 5:
            pt << x / 100.0;
            break;


    }
}
