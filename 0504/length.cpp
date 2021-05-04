#include<iostream>
#include <stdio.h>

using namespace std;
int main(){
  int x[10000000];
  memset(x,0,sizeof(x));
  int a,cnt=0;
  cin>>a;
  for(int i=0;i<a;i++){
    int b,c;
    cin>>b>>c;
    for(int j=0;j<=c;j++){
      x[j]++;
    }
  }
  for(int i=0;i<sizeof(x);i++){
    if(x[i]!=0){
      cnt++;
    }
  }
  cout<<cnt;
}