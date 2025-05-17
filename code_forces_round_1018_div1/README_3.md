C. Wonderful City
time limit per test
2 seconds
memory limit per test
256 megabytes

You are the proud leader of a city in Ancient Berland. There are n2
buildings arranged in a grid of n rows and n columns. The height of the building in row i and column j is hi,j

.

The city is beautiful if no two adjacent by side buildings have the same height. In other words, it must satisfy the following:

    There does not exist a position (i,j)

(1≤i≤n, 1≤j≤n−1) such that hi,j=hi,j+1
.
There does not exist a position (i,j)
(1≤i≤n−1, 1≤j≤n) such that hi,j=hi+1,j

    . 

There are n
workers at company A, and n

workers at company B. Each worker can be hired at most once.

It costs ai
coins to hire worker i at company A. After hiring, worker i

will:

    Increase the heights of all buildings in row i

by 1. In other words, increase hi,1,hi,2,…,hi,n by 1

    . 

It costs bj
coins to hire worker j at company B. After hiring, worker j

will:

    Increase the heights of all buildings in column j

by 1. In other words, increase h1,j,h2,j,…,hn,j by 1

    . 

Find the minimum number of coins needed to make the city beautiful, or report that it is impossible.
Input

Each test contains multiple test cases. The first line contains the number of test cases t
(1≤t≤100

). The description of the test cases follows.

The first line of each test case contains a single integer n
(2≤n≤1000

) — the size of the grid.

The i
-th of the next n lines of each test case contains n integers hi,1,hi,2,…,hi,n (1≤hi,j≤109) — the heights of the buildings in row i

.

The next line of each test case contains n
integers a1,a2,…,an (1≤ai≤109

) — the costs of hiring the workers at company A.

The next line of each test case contains n
integers b1,b2,…,bn (1≤bj≤109

) — the costs of hiring the workers at company B.

It is guaranteed that the sum of n
over all test cases does not exceed 1000

.
Output

For each test case, output a single integer — the minimum number of coins needed, or −1
if it is impossible.