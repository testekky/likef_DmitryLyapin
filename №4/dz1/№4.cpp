#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	float a, b, c,p,s;
	cin >> a >> b >> c;
	if ((a<0)||(b<0)||(c<0))
	{
		cout << "Треугольник не существует";
	}
	else
	{
		if ((a + b > c) && (b + c > a) && (a + c > b))
		{
			p = (a + b + c) / 2;
			s = sqrt(p * (p - a) * (p - b)*(p - c));
			cout << "S = " << s;
		}
		else
		{
			cout << "Треугольник не существует";
		}
	}
}
// Все тесты проводились на сайте https://calc.by/math-calculators/area-triangle.html ;
// 1 тест проведён на треугольнике, стороны которого 5 6 5. Площадь треугольника: S = 12; 
// 2 тест проведён на треугольнике, стороны которого 10 6 8. Площадь треугольника: S = 24;
// 3 тест проведён на треугольнике, стороны которого 12 13 5. Площадь треугольника: S = 30;