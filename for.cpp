#include <iostream>
#include <string>
using namespace std;

int main() {
	//~~~~~~~~~~Çàäàíèå ïåðâîå~~~~~~~~~~
	/*int n;
	int otvet=0;
	cin >> n;
	for (int i = 100; i <= 999; ++i)
	{
	if (( i % 10 + i / 100 + i % 100 / 10) == n)
	{
	otvet += 1;
	}
	}
	cout << otvet << endl;*/



	//~~~~~~~~~~Çàäàíèå âòîðîå~~~~~~~~~~
	/*string line;
	getline(cin, line);
	int size = line.size();
	for (int i = 1; i <= size + 4; ++i)
	{
	if (i == 1 || i == size + 4)
	{
	cout << '+';
	}
	else
	{
	cout << "-";
	}
	}
	cout << endl;
	cout << endl;
	for (int i = 1; i <= 5; ++i)
	{
	if (i == 1 || i == 5)
	{
	cout << "|";
	}
	if (i == 3)
	{
	cout <<line;
	}
	if (i==4 || i == 2)
	{
	cout <<" ";
	}
	}
	cout << endl;
	cout << endl;
	for (int i = 1; i <= size + 4; ++i)
	{
	if (i == 1 || i == size + 4)
	{
	cout << '+';
	}
	else
	{
	cout << "-";
	}
	}*/



	//~~~~~~~~~~Çàäàíèå òðåòüå~~~~~~~~~~
	/*int n;
	cin >> n;
	for (int i=1; i <= n; ++i)
	{
	for (int j=1; j <= n; ++j)
	{
	if(i % 2 !=0 && j % 2 !=0)
	{
	cout << "#";
	}
	if(i % 2 !=0 && j % 2 ==0)
	{
	cout << ".";
	}
	if (i % 2 != 1 && j % 2 != 0)
	{
	cout << ".";
	}
	if (i % 2 != 1 && j % 2 != 0)
	{
	cout << "#";
	}
	}
	cout << endl;
	}*/



	//~~~~~~~~~~Çàäàíèå ÷åòâåðòîå~~~~~~~~~~
	/*int n;
	cin >> n;
	int q = n + 1;

	for (int i = 1; i <= n; ++i)
	{
		for (int j = 1; j <= (n - i); ++j)
		{
			cout << " ";
		}
		for (int j = 1; j <= (i + i - 1); ++j)
		{
			cout << "#";
		}
		cout << endl;
	}

	for (int i = n-1; i>0; --i)
	{
		for (int j = 0; j <n-i; ++j)
		{
			cout << " ";
		}
		for (int j = 1 ; j<=(i+i-1) ; ++j)
		{
			cout << "#";
		}
			
		cout << endl;
	}
*/



	//~~~~~~~~~~Задание пятое(дополнительное)~~~~~~~~~~
	int n;
	cin >> n;
	

	for (int i = 1; i < q; ++i)
	{

	}

}
