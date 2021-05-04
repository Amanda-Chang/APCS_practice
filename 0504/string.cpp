#include<iostream>
using namespace std;
int main(){
  string s;
  int k;
  cin>>k>>s;
  int cnt[s.size()];
  for(int i=0;i<s.size();i++){
    if('A'<s[i]&&s[i]<'Z'){
      cnt[i]=0;
    }else if('a'<s[i]&&s[i]<'z'){
      cnt[i]=1;
    }
  }
  int l=0;
  bool b=0;
  for(int i=0;i<s.size();i++){
    for(int j=i;j<k;j++){
      if(s[j]==s[j+1]){
        b=1;
      }else{
        b=0;
        break;
      }
      if(b){
        l+=k;
      }
    }
    cout<<l;
  }
}