#include <iostream>
#include <math.h>
#include <stdio.h>
using namespace std;
int main()
{
	float x, y, s, p;
	int n;
	setlocale(LC_ALL, "Russian");
	cout << "Вычисление дохода по вкладу. \nВведите исходные данные: \nВеличина вклада (руб.) -> ";
	cin >> x;
	cout <<"Срок вклада(дней) -> ";
	cin >> n;
	cout <<"Процентная ставка (% годовых) -> ";
	cin >> y;
	p = ((x * y) / 100.0) / 365.0;
	s = round(p*n*100)/100;
	printf("%s%.2f", "Доход: ", s);
	printf("\n%s%.2f", "Сумма по окончанию срока вклада: ", s+x);
	
	
	
}