/*
Problem: https://www.hackerrank.com/challenges/c-class-templates/problem
*/

// class template
template <class T>
class AddElements
{
    T numElem1;
    public: 
        AddElements (T arg) {numElem1 = arg;}
        T add(T numElem2)
        {
            return numElem1 + numElem2;
        }
};

// class template specialization
template<>
class AddElements <string>
{
    string strElem1;
    public:
        AddElements (string arg) {strElem1 = arg;}
        string concatenate(string strElem2)
        {
            return strElem1.append(strElem2);
        }
};


