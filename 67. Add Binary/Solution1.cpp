#include <iostream>
#include <vector>
using namespace std;

class Solution {
  public:
  
  string addBinary(string a, string b) {
    int alen=a.length();
    int blen=b.length();
    string result="";
    int val=0;
    reverse(a.begin(),a.end());
    reverse(b.begin(),b.end());
    int i=0;
    while(i<alen||i<blen){
      if(i<alen) {val=val+a[i]-'0';}
      if(i<blen) {val=val+b[i]-'0';}
      int carry=val/2;
      val=val%2;
      result.push_back((char)(val+'0'));
      val=carry;
      i++;
    }
    if(val!=0){result.push_back('1');}
    reverse(result.begin(),result.end());
    return result;
  }
};
int main(){
  Solution s;
  string a="111";
  string b="1101";
  cout<<s.addBinary(a, b);
  return 0;
}
