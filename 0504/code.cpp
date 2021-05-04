#include<iostream>
#include<map>
using namespace std;
int main(){
  map<string,char>mp;
  mp["1010"]='A';
  mp["0111"]='B';
  mp["0010"]='C';
  mp["1101"]='D';
  mp["1000"]='E';
  mp["1100"]='F';
  int n;
  cin>>n;
  string s[n];
  for(int i=0;i<n;i++){
    for(int j=0;j<4;j++){
      char c;
      cin>>c;
      s[i]+=c;
    }
  }
  for(int i=0;i<n;i++){
    cout<<mp[s[i]];
  }
  cout<<endl;
}