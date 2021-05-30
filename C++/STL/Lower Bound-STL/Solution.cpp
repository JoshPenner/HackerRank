/*
Problem: https://www.hackerrank.com/challenges/cpp-lower-bound/problem
*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int N;
    cin >> N;
    vector<int> v;
    for (int i = 0; i < N; i++)
    {
        int num;
        cin >> num;
        v.push_back(num);
    }  
    
    int Q;
    cin >>Q;
    
    for(int i = 0; i < Q; i++)
    {
        int q;
        cin >> q;
        vector<int>::iterator low = lower_bound(v.begin(), v.end(), q);
        if (*low ==q)
            cout << "Yes " << (low - v.begin()+1) << endl;
        else
            cout << "No " << (low - v.begin()+1) << endl;
    }
    
    return 0;
}
