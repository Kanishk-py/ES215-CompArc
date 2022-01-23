// Author: Kanishk Singhal(20110091)
// Description: Using loops

#include <iostream>

using namespace std;

int main()
{
    unsigned long long int x = 0;
    unsigned long long int y = 1;
	unsigned long long int temp;
	
    for(int i = 0; i<100; i++)
	{
		temp = y;
		cout << x + y << endl;
		y = x + y;
		x = temp;
	}
	// Some number at end exceed the range of unsigned long long int

    return 0;
}
