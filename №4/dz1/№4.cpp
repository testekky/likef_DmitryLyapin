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
		cout << "����������� �� ����������";
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
			cout << "����������� �� ����������";
		}
	}
}
// ��� ����� ����������� �� ����� https://calc.by/math-calculators/area-triangle.html ;
// 1 ���� ������� �� ������������, ������� �������� 5 6 5. ������� ������������: S = 12; 
// 2 ���� ������� �� ������������, ������� �������� 10 6 8. ������� ������������: S = 24;
// 3 ���� ������� �� ������������, ������� �������� 12 13 5. ������� ������������: S = 30;