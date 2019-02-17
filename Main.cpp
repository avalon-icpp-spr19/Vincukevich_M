#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "");

	//~~~~~~~~~~Задание первое~~~~~~~~~~
	/*int a, b, c;
	cin >> a;
	cin >> b;
	cin >> c;

	bool otvet = ((a + b) > c && (a+c)>b && (b+c)>a );

	if (otvet)
	{
		cout << "Этот треугольник существует" << endl;
	}
	else
	{
		cout << "Этот трегольник не существует" << endl;
	}*/


	//~~~~~~~~~~Задание второе~~~~~~~~~~
	/*int money;
	cin >> money;
	int otvet;

	if (money > 20 || money < 10)
	{
		otvet = money % 10;
	}
	else
	{
		otvet = 6;
	}


	switch (otvet)
	{
		case 1:
			cout << "рубль" << endl;
			break;
		case 2:
		case 3:
		case 4:
			cout << "рубля" << endl;
			break;
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 0:
			cout << "рублей" << endl;
			break;
	}*/


	//~~~~~~~~~~Задание тетье~~~~~~~~~~
	// исходные данные, вводятся с клавиатуры.
	// true это 1, false это 0
	/*bool enemyInFront;
	bool isBoss;
	int robotHealth;

	bool shouldFire = true;
	cin >> enemyInFront;
	cin >> isBoss;
	cin >> robotHealth;

	if (enemyInFront && isBoss && robotHealth > 50)
	{
		shouldFire = true;
	}
	else if (enemyInFront && isBoss == false)
	{
		shouldFire = true;
	}
	else
	{
		shouldFire = false;
	}

	if (shouldFire)
	{
		cout << "Fire" << endl;
	}*/


	//~~~~~~~~~~Задание четвертое~~~~~~~~~~
	/*int a, b, c, otvet;
	cin >> a;
	cin >> b;
	cin >> c;

	if (a > b)
	{
		if (a > c) otvet = c;
		else otvet = a;
	}
	else
	{
		if (b > c) otvet = c;
		else otvet = b;
	}

	cout << otvet << endl;
*/


//~~~~~~~~~~Задание пятое~~~~~~~~~~
	int day, month, year;
	cin >> day;
	cin >> month;
	cin >> year;


	bool IsLeapYear = (year % 400 == 0
		|| (year % 100 != 0 && year % 4 == 0));
	bool IsMinMonth = ((month % 2 == 0 && month <= 8) || (month % 2 == 1 && month > 8 && month < 13));
	bool IsMaxMonth = ((month % 2 == 1 && month <= 8) || (month % 2 == 0 && month > 8 && month < 13));
	bool otvet;

	if (day <= 31 && IsMaxMonth)
	{
		otvet = true;
	}
	else if (day <= 30 && IsMinMonth && month !=2)
	{
		otvet = true;
	}
	else if (day <= 29 && month == 2 && IsLeapYear)
	{
		otvet = true;
	}	
	else
	{
		otvet = false;
	}



	if (otvet)
	{
		cout << "true";
	}
	else
	{
		cout << "false";
	}


}
