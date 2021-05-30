/*
Problem: https://www.hackerrank.com/challenges/overload-operators/problem
*/

Complex operator+(Complex lhs, const Complex& rhs)
{
    lhs.a += rhs.a;
    lhs.b += rhs.b;
    return lhs;
}

ostream& operator<<(ostream& os, const Complex& obj)
{
    os << obj.a << "+i" << obj.b;
    return os;
}

