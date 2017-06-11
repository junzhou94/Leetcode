# 461. Hamming Distance
## Problem：
The Hamming distance between two integers is the number of positions at which the corresponding bits are different.
Given two integers x and y, calculate the Hamming distance.
Note:
0 ≤ x, y < 231.
Example:
Input: x = 1, y = 4
Output: 2

Explanation:

1   (0 0 0 1)

4   (0 1 0 0)

## Key：
1.the last bit is 1→odd  the last bit is 0→even;

   use while loop to divide them by 2

2.use XOR and count it by n&(n-1)

   (n=x^y)
