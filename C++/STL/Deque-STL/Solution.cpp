/*
Problem: https://www.hackerrank.com/challenges/deque-stl/problem
*/

#include <iostream>
#include <deque> 
using namespace std;

void printKMax(int arr[], int n, int k){
    
    deque<int> Asub(k);
    
    for(int i=0; i<k; i++)
    {
        // remove previous smaller elements
        while(!Asub.empty() && arr[i] >= arr[Asub.back()])
            Asub.pop_back();
                        
        Asub.push_back(i);
    }
        
    for (int j=k; j<n; j++)
    {
        // print the element at the front (largest element)
        cout << arr[Asub.front()] << " ";
        
        // remove elements no longer in the window
        while(!Asub.empty() && Asub.front() <= j-k)
            Asub.pop_front();
        
        // remove previous smaller elements
        while(!Asub.empty() && arr[j] >= arr[Asub.back()])
            Asub.pop_back();
        
        Asub.push_back(j);
    }
    
    cout << arr[Asub.front()] << endl;
}

int main(){
  
	int t;
	cin >> t;
	while(t>0) {
		int n,k;
    	cin >> n >> k;
    	int i;
    	int arr[n];
    	for(i=0;i<n;i++)
      		cin >> arr[i];
    	printKMax(arr, n, k);
    	t--;
  	}
  	return 0;
}
