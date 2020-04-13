#include <iostream>
#include "add.h"

using namespace std;

int main()
{
	float af = 34.57, bf = 47.12, cf = 5.123;
	double ad = 7.00095, bd = 7.0054;
	cout << add(50, 15, 105) << endl;
	cout << add(35, 65, 105, 10) << endl;
	cout << add(af, bf, cf) << endl;
	cout << add(ad, bd) << endl;
	return 0;
}
