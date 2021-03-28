#include<iostream>
using namespace std;
int main(){
  int a=0;
  cin>>a;
  int a1,a2=0;
  int len=0;
  while(a>0){
    len++;
    a/=10;
  }
  int b[len];
  for(int i=0;i<len;i++){
    if((b[i]%2)!=0)a1+=b[i];
    if((b[i]%2)==0)a2+=b[i];
  }
  cout<<abs(a1-a2);
}
