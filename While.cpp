#include <iostream>
using namespace std;


int main()
{ //~~~~~~~~~~Задание первое~~~~~~~~~~
	/*int n;
	int max=0;
	int min=-1;
	cin >> n;
	max = n;
	min = n;
	while (n != 0)
	{
		cin >> n;  
		if (max < n)
		{
			max = n;
		}
		if (min > n && n!=0)
		{
			min = n;
		}
	}

	cout << min << " " << max << endl;*/



	//~~~~~~~~~~Задание второе~~~~~~~~~~
	/*int n;
	int max;
	int otvet;
	cin >> n;
	max = n;
	otvet = 1;
	while (n != 0)
	{
		cin >> n;
		if (n == max)
		{
			++otvet;
		}

		if (n > max)
		{			
			otvet = 1;
			max = n;		
		}
		
	}

	cout << otvet << endl;*/



	//~~~~~~~~~~Задание третье~~~~~~~~~~
	//int n;
	//cin >> n;
	//int d=0;
	//int i = 0;
	//int z=1;
	//int q = n;

	//while (n / 10 != 0)
	//{
	//	++z;
	//	n = n / 10;
	//	
	//	/*d = d + ((n % 10) * (pow(10,i)));
	//	n = n / 10;
	//	++i;*/
	//}

	//for (int i = 1; i <= z; ++i)
	//{
	//	d = d + ((q / (pow(10,z-i)) ) * (pow(10,i-1)));

	//	q = q % pow(10,z-i); <------------------------------ Error(i don't know why)
	//	
	//}



	//~~~~~~~~~~Задание четвертое~~~~~~~~~~
	/*int n;
	cin >> n;
	int i = 1;
	while (pow(2, i) <= n)
	{
		++i;
	}
	cout << pow(2,i) << endl;
*/



	//~~~~~~~~~~Задание пятое~~~~~~~~~~
	/*int n;
	cin >> n;
	
	int q=0;
	int w=1;
	int e;
	int hh = n;

	while(n>=1)
	{
		if (n % 2 == 1)
		{
			q = q + w;
		}
		else
		{
			w = q + w;
		}
		--n;
	}
	if (hh % 2 == 0  )
	{
		cout << q;
		}
	else
	{
		cout << w;
	}*/
	


	//~~~~~~~~~~Задание шестое~~~~~~~~~~
	int n;	
	cin >> n;
	int q, w, e;
	q = n;
	w = n;
	e = n;
	int otvet=0;
	int i = 4;
	while (n != 0)
	{


		if (i % 3 == 2)
		{
			w = n;
			if (w > q || w > e)
			{
				++otvet;
			}
			
		}
		if (i % 3 == 0)
		{
			e = n;
			if (e > q || e > w)
			{
				++otvet;
			}
			
		}
		if (i % 3 == 1)
		{
			q = n;
			if (q > w || q > e)
			{
				++otvet;
			}
			
		}
		++i;
		cin >> n;
	}
	cout << otvet;

}
	

	
	