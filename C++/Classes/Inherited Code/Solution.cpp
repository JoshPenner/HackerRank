/*
Problem: https://www.hackerrank.com/challenges/inherited-code/problem
*/

class BadLengthException 
{
    private:
        int _num;
    public:
        BadLengthException(int num)
        {
            _num = num;
        }
        int what()
        {
            return _num;
        }
};

