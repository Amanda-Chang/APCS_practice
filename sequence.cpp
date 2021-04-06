// #include<iostream>//WA
// #include<set>
// using namespace std;
// int main(){
//   int a,ca=1;
//   bool flag=true;
//   while(cin>>a){
//     int b[a];
//   for(int i=0;i<a;i++){
//     cin>>b[i];
//   }
//   set<int> s;
//   for(int i=0;i<a;i++){
//     for(int j=i;j<a;j++){
//       int tmp=b[i]+b[j];
//       if(s.count(tmp)){
//         flag=false;
//         break;
//       }
//       s.insert(tmp);
//     }
//   }
//     cout<<"Case #"<<ca++;
//     if(flag)cout<<": It is a B2-Sequence.\n\n";
//     else cout<<": It is not a B2-Sequence.\n\n";
//   }
// }