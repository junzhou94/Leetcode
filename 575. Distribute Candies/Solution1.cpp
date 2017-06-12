#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

class Solution {
public:
  int distributeCandies(vector<int>& candies) {
    unordered_map<int,int> number;
    int n=candies.size();
    int kind=0;
    int candyperson=n/2;
    for(int i=0;i<n;i++){
      if(number.find(candies[i])==number.end()){kind++;}
      number[candies[i]]++;
    }
    if(kind>=candyperson) return candyperson;
    else return kind;
  }
};
int main(){
  Solution s;
  vector<int> candies={1,1,2,3};
  cout<<s.distributeCandies(candies);
  return 0;
}


