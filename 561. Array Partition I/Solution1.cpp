#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
  int arrayPairSum(vector<int>& nums) {
    int n=nums.size();
    sort(nums.begin(),nums.end());
    int sum=0;
    for(int i=0;i<n;i=i+2){
      sum=sum+nums[i];
    }
    return sum;
  }
};

int main()
{
  vector<int> a={1,3,2,4};
  Solution s;
  cout<<s.arrayPairSum(a);
  return 0;
}


