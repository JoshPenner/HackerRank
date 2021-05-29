/*
Problem: https://www.hackerrank.com/challenges/2d-array/problem
C++
*/

#include <bits/stdc++.h>

using namespace std;

// Complete the hourglassSum function below.
int hourglassSum(vector<vector<int>> arr) 
{
    vector<int> sumVector;
    
    for (unsigned i=0; i<4; i++)
    {
        for (unsigned j=0; j<4; j++)
        {
            int a = arr[i][j];
            int b = arr[i][j+1];
            int c = arr[i][j+2];
            int d = arr[i+1][j+1];
            int e = arr[i+2][j];
            int f = arr[i+2][j+1];
            int g = arr[i+2][j+2];
            sumVector.push_back(a+b+c+d+e+f+g);
        }
    }
    
    int max = *max_element(sumVector.begin(), sumVector.end());
    return max;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    vector<vector<int>> arr(6);
    for (int i = 0; i < 6; i++) {
        arr[i].resize(6);

        for (int j = 0; j < 6; j++) {
            cin >> arr[i][j];
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    int result = hourglassSum(arr);

    fout << result << "\n";

    fout.close();

    return 0;
}
