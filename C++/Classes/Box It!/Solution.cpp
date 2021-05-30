/*
Problem: https://www.hackerrank.com/challenges/box-it/problem
*/

class Box
{
    private:
        int _l;
        int _b;
        int _h;
    public:
        Box()
        {
            _l = 0;
            _b = 0;
            _h = 0;
        }
        Box(int l,int b,int h)
        {
            _l = l;
            _b = b;
            _h = h;
        }
        Box(Box& otherBox)
        {
            _l = otherBox.getLength();
            _b = otherBox.getBreadth();
            _h = otherBox.getHeight();
        }
        
        int getLength()
        {
            return _l;
        }
        
        int getBreadth()
        {
            return _b;
        }
        
        int getHeight()
        {
            return _h;
        }
        
        long long CalculateVolume()
        {
            return (long long) _l * (long long)_b * (long long)_h;
        }
        
        bool operator<(Box& b)
        {
            if(_l < b.getLength())
                return true;
            else if (_b < b.getBreadth() && _l == b.getLength())
                return true;
            else if (_h < b.getHeight() && _b == b.getBreadth() && _l == b.getLength())
                return true;
            else
                return false;
        }
        
        friend ostream& operator<<(ostream& out, Box& B)
        {
            out << B.getLength() << " " << B.getBreadth() << " " << B.getHeight();
            return out;
        }
};

