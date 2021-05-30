/*
Problem: https://www.hackerrank.com/challenges/c-tutorial-stringstream/problem
*/

#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
	// Complete this function
    vector<int> intVec;
    int intTemp;
    char ch;
    stringstream ss;
    ss << str;
    do {
        ss >> intTemp;
        intVec.push_back(intTemp);
    } while (ss >> ch);
    return intVec;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}
