// Author: Kanishk Singhal(20110091)
// Description: Using Recursion with memo

#include <iostream>

using namespace std;

unsigned long long int fib(int n, unsigned long long int m[], int chk[])
{
    if(chk[n] == 1) return m[n];
    else
    {
        unsigned long long int x = fib(n-1, m, chk) + fib(n-2,m,chk);
        chk[n] = 1;
        m[n] = x;
        return x;
    }
}

int main()
{
    int N = 100;
    unsigned long long int m[N]; // memoization
    int chk[100]; // To define fib value for ith index is not calculated
    
	for (int i = 0; i < N; i++) chk[i] = 0;
	
	chk[0] = 1;
	chk[1] = 1;
    m[0] = 1;
	m[1] = 1;
    
	for(int i = 0; i<N; i++) cout << fib(i, m, chk) << endl; 
    
    return 0;
}
