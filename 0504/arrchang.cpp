#include<iostream>
using namespace std;
int main(){
  int r,c,m;
  cin>>r>>c>>m;
  int x[10][10];
  int k[m];
  for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
      cin>>x[i][j];
    }
  }
  for(int i=0;i<m;i++){
    cin>>k[i];
  }
  for(int i=0;i<m;i++){
    if(k[i]==0){
      for(int k=0;k<r/2;k++){
        for(int j=0;j<c/2;j++){
          int tmp=x[k][j];
          x[k][j]=x[j][r-1-k];
          x[r-1-j][k]=tmp;
        }
      }
    }
    if(k[i]==1){
      for(int k=0;k<r/2;k++){
        for(int j=0;j<c/2;j++){
          int tmp=x[k][j];
          x[k][j]=x[r-1-k][c-1-j];
          x[r-1-k][c-1-j]=tmp;
        }
      }
    }
  }
  for(int i=0;i<10;i++){
    for(int j=0;j<10;j++){
      if(x[i][j]!=0){
        cout<<x[i][j];
      }
    }
    cout<<endl;
  }
}