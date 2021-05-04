#include<iostream>
using namespace std;
int main(){
  int n;
  cin>>n;
  char arr[n][n];
  char arr2[n][n];
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      cin>>arr[i][j];
    }
  }
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      arr2[i][j]='0';
    }
  }
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      if(arr[i][j]=='*'){
        for(int a=0;a<n;a++){
          arr2[a][j]='*';
          arr2[i][a]='*';
        }
        
      }
    }
  }
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      cout<<arr2[i][j];
    }
    cout<<endl;
  }
}