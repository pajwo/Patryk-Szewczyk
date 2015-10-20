#include <iostream>
#include <cmath>
#include <complex>
using namespace std;
int main()
{
	/*
	double a, b, c, e, f, g, Wx, Wy, W, x, y;
	cin >> a >> b >> c >> e >> f >> g;
	W = (a*f) - (b*e);
	Wx = (c*f) - (f*g);
	Wy = (a*g) - (c*e);
	x = (Wx / W);
	y = (Wy / W);
	if(W==0)
	{
		cout << "???";
	}
	cout <<"x= "<< x << endl;
	cout <<"y= "<<y;

	while (true) {}

	*/

	double a, b, c, d, x1, x2, x3;
	cin >> a >> b >> c;
	d = (b*b) - (4 * a*c);
	x1 = ((-b - sqrt(d))) / (2 * a);
	x2 = ((-b + sqrt(d))) / (2 * a);
	x3 = (-b / 2*a);

	if(d>0)
	{
		cout << "x1= " << x1;
		cout << "x2= " << x2;
	}

	if(d==0)
	{
		cout << "x= " << x3;
	}
	if (d < 0)
	{
		cout << "x1= " << -b / 2 * a<<"-"<< sqrt(d*-1) << "i" << endl;
		cout << "x1= " << -b / 2 * a<<"+"<< sqrt(d*-1) << "i";
	}



	while (true) {}



	return 0;
	
}
