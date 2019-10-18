#include "pch.h"
#include "tetragon.h"
#include <iostream>

using std::cout;

bool tetragon::TetragonOrNot(double distAB, double distBC, double distCD, double distAD)
{
	if ((distAB < distBC + distCD + distAD) && (distBC < distAB + distCD + distAD) && (distCD < distAB + distBC + distAD) && (distAD < distAB + distBC + distCD)) {
		cout << "\nTetragon created";
		return true;
	}
	else {
		cout << "\nThis is not Tetragon";
		return false;
	}
}

void tetragon::check(double distAB, double distBC, double distCD, double distAD, double area)
{
	bool rectangle = false;
	if ((distAB == distCD) && (distBC == distAD)) {
		cout << "\nThis is parallelogram";
		if (area == distAB * distBC) {
			cout << "\n...\nThis is rectangle";
			rectangle = true;
			if (area == distAB * distAB) {
				cout << "\n...\nThis is square";
			}
		}
		if (!rectangle) {
			if ((distAB == distBC) && (distCD == distAD)) {
				cout << "\n...\nThis is rhombus";
			}
		}
	}
	else {
		double hAB_trapezoid = 2 * area / (distAB + distCD);
		double hBC_trapezoid = 2 * area / (distBC + distAD);
		if ((area == ((distAB + distCD) / 2) * hAB_trapezoid) || (area == ((distBC + distAD) / 2) * hBC_trapezoid)) {
			cout << "\nThis is trapezoid";
		}
	}
}

tetragon::tetragon()
{
	create_point(_a);
	create_point(_b);
	create_point(_c);
	create_point(_d);

	_ab = distTo(_a, _b);
	_bc = distTo(_b, _c);
	_cd = distTo(_c, _d);
	_ad = distTo(_a, _d);
	_TetrOrNot = TetragonOrNot(_ab, _bc, _cd, _ad);
	if (_TetrOrNot) {
		_P = perimetr(_ab, _bc, _cd, _ad);
		cout << "\nP = " << _P;
		_S = area(_ab, _bc, _cd, _ad);
		cout << "\nS = " << _S;
		check(_ab, _bc, _cd, _ad, _S);
	}
	

}


tetragon::~tetragon()
{
}
