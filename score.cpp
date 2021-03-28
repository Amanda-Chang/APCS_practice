// #include<iostream>
// #include<algorithm>
// using namespace std;
// int main(){
//   int h;
//   cin>>h;
//   int n[h];
//   for(int i=0;i<h;i++){
//     cin>>n[i];
//   }
//   sort(n,n+h);
//   for(int i=0;i<h;i++){
//     cout<<n[i]<<" ";
    
//   }cout<<endl;
//   int a1,a2;
//   if(n[h-1]>=60&&n[0]<60){
//     for(int i=0;i<h;i++){
//       if(n[i]<60){
//         continue;
//       }else{
//         cout<<n[i-1]<<endl;
//         cout<<n[i];
//         break;
//       }
//     }
//   }else if(n[0]>=60){
//     cout<<"best case\n"<<n[0];
//   }else{
//     cout<<n[h-1]<<"\nworst case\n";
// }
// }