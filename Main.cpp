#include <iostream>
#include "Extention.hpp"
using namespace std;
using namespace ext;

const int Zadanie1 = 20;
int main() {
	setlocale(LC_ALL, "Rus");
	/*~~~~~~~~~~������� ������~~~~~~~~~~

	�������� ������ ��� �������� 10-�� ������������� ���������
		int arr[10];
	�������� ����������� ������ ��� �������� 20-�� ������������ ���������
		float arr[Zadanie1];
	�������� ������ ��� �������� 2-� ���������� ���������
		char arr[2];
	����� ���� ������ ����������� ��������� �������:
	int data[6] = { 2, 4, 8, 16, 32, 64 };
	����� ������ ����� ������ ������?
		6
	������ ������ ���� �� ������
		�������������
	���� ����� ������� ������� � �������� 0?
		2
	���� ����� ������� ������� � �������� 3?
		16
	����� ������ � �������� 8?
		2
	����� ������ � �������� 32?
		4
	��������� ������� �������� ������� �������� 1.
		data[0]=1;
	������� �������� ���������� �������� � �������.
		data[5]=data[5]*3;
	�������� �������� ������� �� ����� ����� ������.
		for(int i = 0; i<=5 ; ++i)
		{
		cout << data[i] << " ";
		}
	�������� ������ ��� �������� 5-�� �������� ������ ���� � ������������������ ��� � ������� ������ �������������
		double arr[5] = {};
	�������� ����������� ������ �� �����.
		for(int i = 0; i<5 ; ++i)
		{
		cout << arr[i] << " ";
		}
	����� �� �� ��������� ������ ������� ��� ��� ��������?
		���
	���� �����, �� ���������������� ���.		
	����� ������ �������� ��������� �������:
	int data[5] = { 1, 2 }
	����� ������ ������� �������?
		5
	���� ����� ������� � �������� 1? ���� ����� ������� � �������� 2?
		2	0
	��������� ������ � ������� ��������.
	�������� ��� �������� ������� �� �����.
	����� ������ �������� ��������� �������:
	const char alpha[3] = { 'a', 'b', 'c' }
	����� ������ ������� �������?
		3
	���� ����� ������� � �������� 0? ���� ����� ������ � �������� 'c'
		a	2
	��������� �� ��������� ���������:
	alpha[0];
		��
	alpha[3];
		���, ������� �� ������� �������
	alpha[1] = 'd';
		���, ������ �����������
	alpha[1] = 'b';
		���, ������ �����������
	�������� ��� �������� ������� �� �����.
	*/



	//~~~~~~~~~~������� ������~~~~~~~~~~
	/*int arr[20];

	for (int i = 0; i < 20; ++i)
	{
		arr[i] = i+1;
		cout << arr[i] << " ";
	}
	cout << endl;

	for (int i = 1; i < 21; ++i)
	{
		arr[i-1] = i*2 ;
		cout << arr[i-1] << " ";
	}
	cout << endl;
	arr[0] = 1;
	cout << endl;
	for (int i = 1; i < 20; ++i)
	{
		arr[i] = arr[i-1]*2;
		
	}
	for (int i = 0; i <= 15; i=i+5)
	{
		for (int j = 0; j <= 4; ++j)
		{
			cout << arr[i + j] << " " ;
		}
		cout << endl;
	}
	cout << endl;


	for (int i = 1; i < 20; i=i+2)
	{
		arr[i] = 0;
	}
	for (int i = 0; i <= 15; i = i + 5)
	{
		for (int j = 0; j <= 4; ++j)
		{
			cout << arr[i + j] << " ";
		}
		cout << endl;
	}*/



	//~~~~~~~~~~������� ������~~~~~~~~~~
	int arr[10];
	int max=-11;
	for (int i = 0; i < 10; ++i)
	{
		arr[i] = ext::GetRandomValue(-10, 10);
		cout << arr[i] << " ";
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	cout << endl;
	int i = 0;
	while (arr[i] < max)
	{
		++i;
	}
	cout << arr[i] << " " << i << endl;
	cout << endl;
	cout << endl;

	int a[100];
	int summa = 0;
	int q = 0 ;
	int b = 0;
	int c = 0;

	for (int i = 0; i < 100; ++i)
	{
		a[i] = GetRandomValue(-100, 100);		
		summa += a[i];
		if (a[i] == 0)
		{
			b += 1;
		}
		else if (a[i] < 0)
		{
			q += 1;
		}
		else
		{
			c += 1;
		}
	}
	
	cout << "����� - " << summa << "  ���������� ���������: " << endl;
	cout << "1) ������ ����: " << q << endl;
	cout << "2) ������ ����: " << b << endl;
	cout << "3) ������� ����: " << c << endl;




}