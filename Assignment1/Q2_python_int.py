import random
import timeit

N = 512
mat1 = [[0]*N]*N
for i in range(N):
    for j in range(N):
        mat1[i][j] = random.randint(1,100)

mat2 = [[0]*N]*N
for m in range(N):
    for n in range(N):
        mat2[m][n] = random.randint(1,100)

mat3 = [[0]*N]*N

start = timeit.default_timer()
for p in range(N):
    for q in range(N):
        for r in range(N):
            mat3[p][q] = mat1[p][r]*mat2[r][q]
stop = timeit.default_timer()
    
for s in range(N):
    print()
    for t in range(N):
        print(mat3[s][t] , end = " ")

print()
print('Time: ', stop - start)  