#include <iostream>
using namespace std;

void ZadaniePervoe(int n)
{
	for (int i = 1; i <= n; ++i)
	{
		cout << pow(i, 3) << " ";
	}
}

int ZadanieVtoroe(int n, int a)
{
	return 3.14 * (pow(n, 2)) * a;
}

int min(int a, int b)
{
	if (a < b)
	{
		return a;
	}
	else
	{
		return b;
	}
}

int min4(int a, int b, int c, int d)
{
	int q, w;
	
	if (a < b)
	{
		q = a;
	}
	else
	{
		q = b;
	}

	if (c < d)
	{
		w = c;
	}
	else
	{
		w = d;
	}
	if (q < w)
	{
		return q;
	}	
	else
	{
		return w;
	}
}

int main() {
	//~~~~~~~~~~Задание Первое~~~~~~~~~~
	/*int n;
	cin >> n;
	
	ZadaniePervoe(n);*/


	//~~~~~~~~~~Задание Второе~~~~~~~~~~
	/*int rad;
	int h,otvet;
	cin >> rad >> h;
	otvet=ZadanieVtoroe(rad, h);
	*/


	//~~~~~~~~~~Задание Второе~~~~~~~~~~
	int a, b, c, d;
	cin >> a >> b;
	cout << min(a, b) << endl;
	cin >> a >> b >> c >> d;
	cout << min4(a, b, c, d) << endl;

}