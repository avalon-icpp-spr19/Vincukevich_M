#include <iostream>
#include "Header.h"
#include <cmath>

using namespace std;
using namespace ext;

struct Point
{
	float x;
	float y;
};



int main() {
	/*~~~~~~~~~~«адание первое~~~~~~~~~~*/
	Point q = {2.4 , 2.5};
	Point w;
	cin >> w.x >> w.y;

	cout << q.x  << " "<< q.y << " " << w.x << " " << w.y << " " << endl;

	cout << endl;

	Point X1;
	cin >> X1.x >> X1.y;
	int rad;
	cin >> rad;

	X1.x = abs(X1.x);
	X1.y = abs(X1.y);

	if (rad - (sqrt((pow(X1.x , 2)) + (pow(X1.y, 2)))) >= 0)
	{
		cout << "принадлежит" << endl;
	}
	else
	{
		cout << " не принадлежит" << endl;
	}
	
}