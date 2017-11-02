// Assignment6.1-5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

int input(int a);
int hours_worked(int b);
int hourlyrate(int c);
int grosspay(int d, int e);
int overtime(int e);
int taxes(int f);
int benefits(int g);
int withholdings(int h, int i);

int main()
{

	int b = 0;
	int c = 0;
	cout << "your grosspay is: " << grosspay(hours_worked(b), hourlyrate(c));

	int a = 0;
	cout << "your overtime is:" << overtime(hourlyrate(c) * (1.5));

	int d = 0;
	cout << "your taxes are: " << taxes(grosspay(hours_worked(b), hourlyrate(c))* (6.0)) << endl;

	int e = 0;
	cout << "your benefits are: " << benefits((e) * (6.0)) << endl; 

	int g = 0;
	int f = 0;
	cout << "your withholdings are: " << withholdings(benefits(g), taxes(f));

	int h = 0;
	cout << "your net pay is: " << grosspay(h), withholdings(h);

	return 0;
}
int input(int a) {
	cin >> a;
	return a;
	
}
int hours_worked(int b) {
	cout << "enter hours worked:" << endl;
	cin >> b;
	return b;
}
int hourlyrate(int c) {
	cout << "enter your hourly rate:" << endl;
	cin >> c;
	return c;
}
int grosspay(int d, int e) {
	int grosspay;
	
	grosspay = d * e;	
	return grosspay;
}
int overtime(int e) {
	int overtime;

	overtime = e * 1.5;
	return overtime;
}
int taxes(int f) {
	int taxes;

	taxes = f * 6.0;
	return taxes;
}
int benefits(int g) {
	int benefits;

	benefits = g * 6.0;
	return benefits;
}
int withholdings(int h, int i) {
	int withholdings;

	withholdings = h + i;
	return withholdings;
}
int netpay(int j) {
	int netpay
}
