// Author: Kanishk Singhal(20110091)
// Description: Using Recursion

#include <iostream>

using namespace std;

unsigned long long int fib(int n)
{
    if(n == 0 || n == 1) return 1;
    else return fib(n-1) + fib(n-2);
}

int main()
{
    for(int i = 0; i<100; i++) cout << fib(i) << endl;
	// Some number at end exceed the range of unsigned long long int

    return 0;
}
