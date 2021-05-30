/*
Problem: https://www.hackerrank.com/challenges/cpp-maps/problem
*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;


int main() {
    int Q;
    cin >> Q;
    map<string,int>m;
    for (int i=0; i<Q; i++)
    {
        int type, Y;
        string X;
        cin >> type >> X;
        map<string,int>::iterator itr=m.find(X);
        switch(type){
            case 1:
                cin >> Y;
                if(itr == m.end())
                    m.insert(make_pair(X,Y));
                else
                    m[X] = m[X] + Y;
                break;
            case 2:
                m.erase(X);
                break;
            case 3:
                cout << m[X] << endl;
                break;
        }
    } 
    return 0;
}