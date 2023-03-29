#include <iostream>
#include "CPoints.h"
#include <iomanip>

CPoint<int> ReadPoint();

int main()
{
	CPoint<int> A = ReadPoint();
	CPoint<int> B = ReadPoint();
	CPoint<int> C = ReadPoint();
	std::cout << "A = " << A << " B = " << B << " C = " << C << '\n';
	int a = A.Distance(B);
	int b = B.Distance(C);
	int c = C.Distance(A);
	int P = a + b + c;
	double p = P * 0.5;
	double S = sqrt(p * (p - a) * (p - b) * (p - c));
	std::cout << "P = " << P << " S = " << S << '\n';

	std::cout << "Input the eps: ";
	double eps; std::cin >> eps;
	if (A.Distance(CPoint<int>()) <= eps) std::cout << A << " is special\n";
	if (B.Distance(CPoint<int>()) <= eps) std::cout << B << " is special\n";
	if (C.Distance(CPoint<int>()) <= eps) std::cout << C << " is special\n";
}

CPoint<int> ReadPoint()
{
	std::cout << "Input two integers: ";
	int x, y;
	std::cin >> x >> y;
	return CPoint<int>(x, y);
}