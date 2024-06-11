#include<bits/stdc++.h>
using namespace std;

int main(){
  int x;
  cin>>x;
  if(x%4==0 ||(x%100 != 0 && x%400 == 0)){
    cout<<"TRUE"<<endl;
  }else{
    cout<<"FALSE"<<endl;
  }
  return 0;
}