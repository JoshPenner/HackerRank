/*
Problem: https://www.hackerrank.com/challenges/c-tutorial-strings/problem
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
	// Complete the program
    string a, b, aPrime, bPrime;
    cin >> a >> b;
    int aLen = a.size();
    int bLen = b.size();
    aPrime = a;
    aPrime[0] = b[0];
    bPrime = b;
    bPrime[0] = a[0];
    cout << aLen << " " << bLen << endl;
    cout << a << b << endl;
    cout << aPrime << " " << bPrime;
    return 0;
}
