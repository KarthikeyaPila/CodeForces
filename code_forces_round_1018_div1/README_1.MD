A. Wonderful Sticks
time limit per test
1 second
memory limit per test
256 megabytes

You are the proud owner of n
sticks. Each stick has an integer length from 1 to n

. The lengths of the sticks are distinct.

You want to arrange the sticks in a row. There is a string s
of length n−1

that describes the requirements of the arrangement.

Specifically, for each i
from 1 to n−1

:

    If si=<

, then the length of the stick at position i+1
must be smaller than all sticks before it;
If si=>
, then the length of the stick at position i+1

    must be larger than all sticks before it.

Find any valid arrangement of sticks. We can show that an answer always exists.
Input

Each test contains multiple test cases. The first line contains the number of test cases t
(1≤t≤500

). The description of the test cases follows.

The first line of each test case contains a single integer n
(2≤n≤100

) — the number of sticks.

The second line of each test case contains a single string s
of length n−1 consisting of characters < and >

 — describing the requirements of the arrangement.
Output

For each test case, output n
integers a1,a2,…,an (1≤ai≤n, the ai are distinct) — the lengths of the sticks in order. If there are multiple solutions, print any of them.