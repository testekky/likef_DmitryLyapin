#include <iostream>
#include <math.h>
#include <stdio.h>
using namespace std;
int main()
{
	float x, y, s, p;
	int n;
	setlocale(LC_ALL, "Russian");
	cout << "���������� ������ �� ������. \n������� �������� ������: \n�������� ������ (���.) -> ";
	cin >> x;
	cout <<"���� ������(����) -> ";
	cin >> n;
	cout <<"���������� ������ (% �������) -> ";
	cin >> y;
	p = ((x * y) / 100.0) / 365.0;
	s = round(p*n*100)/100;
	printf("%s%.2f", "�����: ", s);
	printf("\n%s%.2f", "����� �� ��������� ����� ������: ", s+x);
	
	
	
}