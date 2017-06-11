#include <iostream>

using namespace std;

class Solution {
public:
  
  string reverseWords(string s) {
    for(int i=0;i<s.length();i++){
      if(s[i]!=' '){             //do when it's not a space
        int j=i;
        for(;s[j]!=' '&&j<s.length();j++){}
        reverse(s.begin()+i,s.begin()+j);
        i=j;
      }
    }
    return s;
  }
};
int main()
{
  Solution s;
  cout<<s.reverseWords("hello world");
  return 0;
}


