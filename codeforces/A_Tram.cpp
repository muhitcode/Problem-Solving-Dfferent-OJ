#include<bits/stdc++.h>
using namespace std;

int main(){
 int n;
 cin>>n;
 int max =0;
 int curr = 0;
 for(int i=0;i<n;i++){
    int a,b;
    cin>>a>>b;
    curr = curr - a + b;
    if(curr > max){
      max = curr;
    }
 }
 cout<<max<<endl;

  return 0;
}