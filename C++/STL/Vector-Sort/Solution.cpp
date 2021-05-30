/*
Problem: https://www.hackerrank.com/challenges/vector-sort/problem
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
    sort(v.begin(), v.end());
    for (int i = 0; i < N; i++)
    {
        cout << v[i] << " ";
    }
    
    return 0;
}
