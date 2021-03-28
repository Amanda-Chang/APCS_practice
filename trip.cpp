#include<iostream>
#include<algorithm>
using namespace std;
int main(){
  int n=0;
  while(cin>>n){
    double e[n];
    double count=0;
    for(int t=0;t<n;t++){
      cin>>e[t];
      count+=e[t];//20 why is not 60
    }
    count=count/n;
    cout<<n<<endl;
    cout<<count<<endl;
    sort(e,e+n);
    cout<<e[n];
    cout<<abs(e[n]-count)<<endl;
  }
}
