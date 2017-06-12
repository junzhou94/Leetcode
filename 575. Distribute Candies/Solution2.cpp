#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

class Solution {
public:
  int distributeCandies(vector<int>& candies) {
    int ncandies=candies.size();
    unordered_set<int> candyset(candies.begin(),candies.end());
    int nset=candyset.size();
    return nset>=ncandies/2 ?  ncandies/2:nset;
  }
};
int main(){
  Solution s;
  vector<int> candies={1,1,2,3};
  cout<<s.distributeCandies(candies);
  return 0;
}


