import random
import timeit

N = 32
mat1 = [[0]*N]*N
for i in range(N):
    for j in range(N):
        mat1[i][j] = random.uniform(1,100)

mat2 = [[0]*N]*N
for x in range(N):
    for y in range(N):
        mat2[x][y] = random.uniform(1,100)

mat3 = [[0]*N]*N

# Using Timeit to measure time for meat portions
start = timeit.default_timer()
for p in range(N):
    for q in range(N):
        for r in range(N):
            mat3[p][q] = mat1[p][r]*mat2[r][q]
stop = timeit.default_timer()
    
for a in range(N):
    print()
    for b in range(N):
        print(mat3[a][b] , end = " ")

print()
print('Time: ', stop - start)  