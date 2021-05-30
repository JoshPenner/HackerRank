/*
Problem: https://www.hackerrank.com/challenges/c-tutorial-pointer/problem
*/

#include <stdio.h>
#include <cmath>

void update(int *a,int *b) {
    // Complete this function
    int aTemp, bTemp;
    aTemp = *a + *b;
    bTemp = std::abs(*a - *b);  
    *a = aTemp;
    *b = bTemp;  
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
