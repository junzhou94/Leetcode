#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
  vector<string> findWords(vector<string>& words) {
    int wordsize=words.size();
    bool flag=true;
    vector<string> result;
    vector<char> first={'Q','W','E','R','T','Y','U','I','O','P','q','w','e','r','t','y','u','i','o','p'};
    vector<char> second={'A','S','D','F','G','H','J','K','L','a','s','d','f','g','h','j','k','l'};
    vector<char> third={'Z','X','C','V','B','N','M','z','x','c','v','b','n','m'};
    for(int i=0;i<wordsize;i++){
      for(int j=0;j<words[i].size();j++){
        if(find(first.begin(),first.end(),words[i][j])==first.end()) {flag=false;break;}
      }
      if (flag==true){result.push_back(words[i]);continue;}
      flag=true;
      for(int j=0;j<words[i].size();j++){
        if(find(second.begin(),second.end(),words[i][j])==second.end()) {flag=false;break;}
      }
      if (flag==true){result.push_back(words[i]);continue;}
      flag=true;
      for(int j=0;j<words[i].size();j++){
        if(find(third.begin(),third.end(),words[i][j])==third.end()) {flag=false;break;}
      }
      if (flag==true){result.push_back(words[i]);continue;}
      flag=true;
    }
    return result;
    
  }
};
int main(){
  Solution s;
  vector<string> words={"Hello", "Alaska", "Dad", "Peace"};
  vector<string> result=s.findWords(words);
  for(int i=0;i<result.size();i++){
    cout<<result[i]<<endl;
  }
  return 0;
}
