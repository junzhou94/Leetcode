//
//  main.cpp
//  461. Hamming Distance
//  The Hamming distance between two integers is the number of positions at which the corresponding bits are different.
//  Given two integers x and y, calculate the Hamming distance.
//  Note: 0 ≤ x, y < 231.
//

#include <iostream>
using namespace std;
class Solution {
public:
  int hammingDistance(int x, int y) {
    int distance=0;
    int n=x^y;
    while(n!=0){
      n=n&(n-1);
      distance++;
    }
    return distance;
  }
};

int main(int argc, const char * argv[]) {
  Solution s;
  cout<<s.hammingDistance(1, 4);
  return 0;
}
