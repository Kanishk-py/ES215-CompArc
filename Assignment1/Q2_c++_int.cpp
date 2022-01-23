#include <iostream>
#include <time.h>

using namespace std;



int main()
{

    int N = 512;
    unsigned long long int mat1[N][N], mat2[N][N], mat3[N][N];

    for(int i = 0; i<N; i++){
    	for(int j = 0; j<N; j++){
    		mat1[i][j] = rand();
    		mat2[i][j] = rand();
    	}
    }

    for(int i = 0; i < N; i++) for(int j = 0; j < N; j++) mat3[i][j]=0;

	// Using TimeSpec to measure time for meat portions
    struct timespec ts;
    char buff[100];

    timespec_get(&ts, TIME_UTC);
    unsigned long long  int start = ts.tv_nsec;

    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            for(int k = 0; k < N; k++) mat3[i][j] += mat1[i][k] * mat2[k][j];
        }
    }

    timespec_get(&ts, TIME_UTC);
    unsigned long long int end = ts.tv_nsec;
    strftime(buff, sizeof buff, "%D %T", gmtime(&ts.tv_sec));
    
    cout << "\nProduct- \n";
    for(int i = 0; i < N; i++){
    	for(int j = 0; j < N; j++){
        cout << " " << mat3[i][j];
        if(j == N-1) cout << endl;
    	}
    }

    cout << "Time Elapsed: " << end - start << " nsec" << endl;

    return 0;
}
