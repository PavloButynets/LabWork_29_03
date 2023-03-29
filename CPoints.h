#pragma once
#include <iostream>

template <typename TNum>
class CPoint {
    TNum x, y;
public:
    CPoint() {
        x = 0;
        y = 0;
    }
    CPoint(TNum a, TNum b) {
        x = a;;
        y = b;
    }
    TNum GetX() const {
        return x;
    }
    TNum GetY() const {
        return y;
    }
    void PrintOn(std::ostream& out) const {
        out << '(' << x << "; " << y << ')';

    }
    double Distance(const CPoint& p);

    CPoint operator+(const CPoint& p) const {
        return Cpoint(this->x + p.x, this->y + p.y);
    }
    CPoint operator-(const CPoint& p) const {
        return Cpoint(this->x - p.x, this->y - p.y);
    }
    
};

template<typename TNum>
inline double CPoint<TNum>::Distance(const CPoint& p)
{
    return sqrt(pow(x - p.x, 2) + pow(y - p.y, 2));
}

template<typename TNum>
std::ostream& operator<<(std::ostream& out, const CPoint<TNum>& A) {
    A.PrintOn(out);
    return out;
}

template<typename TNum>
CPoint<TNum> operator*(const CPoint<TNum>& p, TNum n) {
    return CPoint<TNum>(p.GetX * n, p.GetY * n);
}

template <typename T> 
class NamePoint : public CPoint<T>
{
private:
    char name;
public:
    NamePoint(T a, T b, char n) : CPoint<T>(x, y), name(n) {};
};