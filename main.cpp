#include<iostream>
#include"points.h"
#include <iomanip>
using namespace std;

CPoint<int> read_point()
{
	std::cout << "Input two integers: ";
	int x, y;
	std::cin >> x >> y;
	return CPoint <int>(x, y);
}

int main() {
	CPoint<int> A=read_point();
	CPoint<int>  B = read_point();
	CPoint<int> C = read_point();
	cout << "A = " << A << "\n" << "B = " << B << "\n" << "c = " << C << "\n";
	int a = A.distance(B);
	int b = B.distance(C);
	double c =C.distance(A);
	double P = a + b + c;
	double p = P * 0.5;
	double S = sqrt(p * (p - a) * (p - b) * (p - c));


	return 0;
}
