#include<iostream>
#include"points.h"
#include <iomanip>
using namespace std;
int main() {
	CPoint<int> A=read_point();
	CPoint<int>  B = read_point();
	CPoint<int> C = read_point();
	cout << "A = " << A << "\n" << "B = " << B << "\n" << "c = " << C << "\n";
	int a = A.distance(B);
	int b = B.distance(C);
	int c =C.distance(A);
	int P = a + b + c;
	double p = P * 0.5;
	double S = sqrt(p * (p - a) * (p - b) * (p - c));


	return 0;
}