#include <iostream>
using namespace std;
int main()
{
	int c;
	
	double i, v, g;
	cout << "enter your country";
	cout << "egypt : 1";
	cout << "USA : 2";
	cout << "british :3";
	cin >> c;
	switch (c)
	{
	case 1:
		i = 150;
		v = 240;
		g = 5.5;

		break;
	case 2 :
		i = 120;
		v = 240;
		g = 4;
		break;
	case 3 :
		i = 122;
		v = 220;
		g = 6;
		break;

	default:
		break;
	}
	int s;
	double isc, voc, imax, pmax, nos, vmax, noct, tm, h, w, mc, ta;
	cout << "what is your solar cell would you use" << endl << "Dc : 1" << endl <<   2 << "" ;
	cout << "";
	cout << "";
	cin >> s;
	switch (s)
	{
	case 1:

		isc = 9.1;
		voc = 45.8;
		imax = 8.63;
		pmax = 1000;
		nos = 72;
		vmax = 37.1;
		noct = 44;
		tm = 25;
		h = 1.956;
		w = 982;
		mc = 320;
		break;

	case 2:

		isc = 902;
		voc = 37;
		imax = 8.31;
		pmax = 30.05;
		nos = 60;
		vmax = 30.12;
		noct = 46;
		tm = 25;
		h = 1;
		w = 1.6;
		mc = 30.12;
		break;

	}
	double pc;
	cout << "enter your power capacity";
	cin >> pc;
	cout << "enter the temperature degree";
	cin >> ta;
	double n, ns, np;
	n = pc / mc;
	ns = v / vmax;
	np = i / imax;
	cout << "totalmodules =" << n << endl << "series modules = " << ns << endl << "parrallel modules =" << np;
	double ni, nv;
	ni = isc*g;
	double tc;
	tc = (noct - 20)*g / .8 + ta;
	double j , a ;
	j = -0.0023*nos;
	nv = j*(tc - tm) + v;
	double ff;
	ff = mc / isc*voc;
	np = ff*nv*ni;
	a = np*h*ns*w;
	cout << "your maximum power equals .." << np;
	cout << "your need of section area " << a;

}