#pragma once
#include<iostream>

template<typename TNum>
class CPoint
{
	TNum x, y;
public:
	CPoint(TNum a,TNum b)  :x(a), y(b) {}
	CPoint() : x(0), y(0){}
	TNum getX() const { return x; }
	TNum getY() const { return y; }
	void print_on(std::ostream& out) const
	{
		out << '(' << x << ";" << y << ')';
	}
	TNum distance(const CPoint& p);
	CPoint operator+(const CPoint& p) const
	{
		return CPoint(this->x + p.x, this->y + p.y);

	}
	CPoint operator-(const CPoint& p) const
	{
		return CPoint(this->x - p.x, this->y - p.y);

	}
	
};

template<typename TNum>
inline TNum CPoint<TNum>::distance(const CPoint& p)
{
	return TNum();
}

template<typename TNum>
std::ostream& operator<<(std::ostream& out, const CPoint<TNum> A)
{

	A.print_on(out) ;
	return out;
}
template<typename TNum>
 CPoint <TNum> operator*(const CPoint<TNum>& p, TNum n) {
	 return CPoint <TNum>(p.getX * n, p.getY * n);

}

