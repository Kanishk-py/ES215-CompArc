#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N = 100;
    vector<unsigned long long int> m; // memoization

    m.push_back(1);
    m.push_back(1);
	
    cout<< m[0] << endl;
    cout<< m[1] << endl;

    for(int i = 2; i<N; i++){
		m.push_back(m[i-1]+m[i-2]);
		cout << m[i] << endl;
    }
    return 0;
}
