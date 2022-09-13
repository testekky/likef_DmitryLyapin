#include "pt4.h"
using namespace std;

void Solve()
{
    Task("TheOne1");
    float x, y;
    pt >> x >> y;
    if ((((x * x + y * y)) >= 1 && (x * x + y * y) <= 4) && !(x < 0 && y < 0))
    {
        pt << true;
    }
    else
    {
        pt << false;
    }  
}
