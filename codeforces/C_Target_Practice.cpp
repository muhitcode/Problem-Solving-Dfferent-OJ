#include<bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin>>t;
  while(t--){
    char arr[10][10];
    for(int i=0;i<10;i++){
      for(int j=0;j<10;j++){
        cin>>arr[i][j];
      }
    }
    int sum =0;
    for(int i=0;i<10;i++){
      for(int j=0;j<10;j++){
        
        if(arr[i][j] == 'X'){
          sum += min({i,9-i,j,9-j}) + 1;
        }
      }
    }
      cout<<sum<<endl;
  }
  return 0;
}