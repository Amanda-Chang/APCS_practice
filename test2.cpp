#include<iostream>
#include<algorithm>
using namespace std;
bool cmp(pair<int,int> a,pair<int,int> b){
  return a.first>b.second;
}
int main(){
  pair<int,int> p[5]={{3,6},{5,2},{7,4},{1,8},{9,0}};
  sort(p,p+5,cmp);
  for(int i=0;i<5;i++){
    cout<<p[i].first<<p[i].second<<endl;
  }
}