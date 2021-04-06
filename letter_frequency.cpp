// #include<iostream>//WA
// #include<map>
// #include<cstring>
// using namespace std;
// int main(){
//   int a,mx;
//   cin>>a;
//   while(a--){
//     string s;
//     getline(cin,s);
//     map<char,int> mp;
//     for(int i=0;i<s.size();i++){
//       if(s[i]>='a'&&s[i]<='z'){
//         mp[s[i]]++;
//         mx=max(mx,mp[s[i]]);
//       }else if(s[i]>='A'&&s[i]<='Z'){
//         s[i]+='a'-'A';
//         mp[s[i]]++;
//         mx=max(mx,mp[s[i]]);
//       }
//     }
//     for(auto i:mp){
//       if(mx==i.second)cout<<i.first;
//     }
//     cout<<endl;
//   }
// }