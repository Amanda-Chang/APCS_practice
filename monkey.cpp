#include<iostream>
#include<cstring>
#include<map>
using namespace std;
int main(){
  map<int,int> mp;
  int mn,mx;
  string a;
  cin>>a;
  for(int i=0;i<265;i++){
    mp[i]=i;
  }
  for(int i;i<a.size();i++){
    mp[a[i]]++;
  }
  for(int k;k<265;k++){
    if(mp[k]>0){
      mn=min(mn,mp[k]);
      mx=max(mx,mp[k]);
    }
  }
  if(mx-mn){//質數怎麼判斷
    cout<<"Lucky Word"<<endl;
    cout<<mx-mn;
  }else{
    cout<<"No Answer"<<endl;
    cout<<0;
  }
  
}
