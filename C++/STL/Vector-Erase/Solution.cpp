/*
Problem: https://www.hackerrank.com/challenges/vector-erase/problem
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
    
    int x;
    cin >> x;
    v.erase(v.begin()+x-1);
    
    int a, b;
    cin >> a >> b;
    v.erase(v.begin() + a-1, v.begin() + b-1);
    cout << v.size() << endl;
    for ( vector<int>::iterator i = v.begin(); i != v.end(); i++)
        cout<<*i<<" ";
    return 0;
}
