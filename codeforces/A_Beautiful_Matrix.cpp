#include<bits/stdc++.h>
using namespace std;

int main(){
  int arr;
  int row_no, col_no;
  for(int i=1;i<=5;i++){
    for(int j=1;j<=5;j++){
      cin>>arr;
      if(arr == 1){
        cout<<abs(3-i)+abs(3-j)<<endl;
      }
    }
  }

  return 0;
}