#include <iostream>
using namespace std;

int main() {
	//~~~~~~~~~~~Ďĺđâîĺ çŕäŕíčĺ~~~~~~~~~~~
	/*int a;
	int b;
	cin >> a;
	b = a / 100 + a / 10 % 10 + a % 10;
	cout << b; */


	//~~~~~~~~~~~Âňîđîĺ çŕäŕíčĺ~~~~~~~~~~~
	/*int H1;
	int M1;
	int S1;
	int H2;
	int M2;
	int S2;
	cin >> H1;
	cin >> M1;
	cin >> S1;
	cin >> H2;
	cin >> M2;
	cin >> S2;
	int Result1=H1*3600+M1*60+S1;
	int Result2=H2*3600+M2*60+S2;
	int otvet=Result2-Result1;
	cout << otvet;*/


	//~~~~~~~~~~~Ňđĺňüĺ çŕäŕíčĺ~~~~~~~~~~~
	/*int day;
	cin >> day;
	int month;
	cin >> month;
	int year;
	cin >> year;
	int a = (14 - month)/12;
	int y = year + 4800 - a;
	int m = month + 12 * a - 3;
	int JDN = day + ((153 * m + 2) / 5) + 365 * y + (y / 4) - (y / 100) + (y / 400) - 32045;
	cout << JDN;*/


	//~~~~~~~~~~~×ĺňâ¸đňîĺ çŕäŕíčĺ~~~~~~~~~~~
	/*int SS;
	cin >> SS;
	int H = SS / 3600;
	int M1 = (SS % 3600) / 60 /10;
	int M2 = (SS % 3600) / 60 % 10;
	int S1 = SS % 60 / 10;
	int S2 = SS % 60 % 10;
	cout << H << ":" << M1 << M2 << ":" << S1 << S2;*/


	//~~~~~~~~~~~Ď˙ňîĺ çŕäŕíčĺ~~~~~~~~~~~
	/*int N;
	cin >> N;
	int otvet = N + (2- (N % 2));
	cout << otvet;*/


	//~~~~~~~~~~~Řĺńňîĺ çŕäŕíčĺ~~~~~~~~~~~
	/*int a;
	double a1, a2, a3, a4,a5,a6,answer;
	cin >> a;
	
	a1 = a / 1000;
	a4 = a % 10;
	a2 = a / 100 % 10;
	a3 = a / 10 % 10;
	a5 = a1 - a4;
	a6 = a2 - a3;
	answer = a5+a6+1;
	cout << answer;*/


	//~~~~~~~~~~~Äîďîëüíčňĺëüíîĺ çŕäŕíčĺ~~~~~~~~~~~
	int h, a, b;
	cin >> h;
	cin >> a;
	cin >> b;
	cout << b -1 + ((h - a) / (a - b));

	double a1, a2, a3, a4;
	
	a1 = h - a;
	a2 = a - b;
	a3 = a1 / a2;
	a4 = 1 + a3;
	


	}
