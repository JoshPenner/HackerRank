/*
Problem: https://www.hackerrank.com/challenges/rectangle-area/problem
*/

class Rectangle
{
    public:
        int _width, _height;
        void display()
        {
            cout << _width << " " << _height << endl;
        }
};

class RectangleArea : public Rectangle
{
    public:
        void read_input()
        {
            cin >> _width >> _height;
        }
        void display()
        {
            cout << _width * _height << endl;
        }
};

