#include <iostream>
#include "Extention.hpp"
using namespace std;

int main() {
//~~~~~~~~~~«адание первое~~~~~~~~~~
	/*int val = 10;	
	cout << &val << endl;
	int *rtp = &val;
	cout << *rtp << endl;

	unsigned int a = 5U;
	cout << sizeof(a) << endl;
	double b = 0.8;
	cout << sizeof(b) << endl;
	const float f = 0.5F;
	cout << sizeof(f) << endl;
	const long long ll = 123LL;
	cout << sizeof(ll) << endl;

	unsigned int *ptr = &a;
	*ptr = *ptr + 1;
	double *trp = &b;
	*trp = *trp * 2;
	const float *qwe = &f;
	cout << *qwe * 2 << endl;
	const long long *ewq = &ll;
	cout << *ewq % 10 << endl;
*/

	//~~~~~~~~~~«адание второе~~~~~~~~~~
	int t[4] = { 8,4,2,1 }; // объ€вл€ем
	int *p1 = t + 2, *p2 = p1 - 1; // p1 = 2 так как мы прибавили к нулевому индексу 2  ; p2 = 4 отн€ли от 2 индекса один 
	p1++; // p1 будет равно 1,так как мы 3 элементу прибавили ещЄ оидн и на 4 месте стоит "1"
	cout << *p1 - t[p1 - p2] << endl; // выведет -1, так как *p1 =1 , а t[p1-p2] = t[4-2] значит ответ будет 1-2=-1

	int data[] = { 1,2,3,4,5 };
	int *ptr = data;
	int summa=0;
	for (int i = 0; i < 5; ++i)
	{
		cout << *ptr << endl;
		*ptr = *ptr * 2;
		summa += *ptr;
		++ptr;		
	}
	cout << summa;
}