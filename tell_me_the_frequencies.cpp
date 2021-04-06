// #include<iostream>//CE
// #include<algorithm>
// using namespace std;
// bool cmp(pair<int,int>a,pair<int,int>b){
//   if(p.first>0)return a.first<b.first;
//   else return a.second>b.second;
// }
// int main(){
//   string s;
//   cin>>s;
//   pair<int,int> p[256];
//   for(int i=0;i<256;i++){
//     p[i]={0,i};
//   }
//   for(int i=0;i<s.size();i++){
//     p[s[i]].first++;
//   }
//   sort(p,p+256,cmp);
//   for(int i:p){
//     if(i.first>0)cout<<i.second<<" "<<i.first<<endl;
//   }

// }