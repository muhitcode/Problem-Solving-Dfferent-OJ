#include<bits/stdc++.h>
using namespace std;

int main(){
int t;
cin>>t;
int ar[t];
for (int i = 0; i < t; i++)
{
  cin>>ar[i];
}
for (int i = 0; i < t; i++)
{
  if(ar[i] > 0){
    ar[i] = 1;
  }
  if(ar[i] < 0){
    ar[i] = 2;
  }
}
for (int i = 0; i < t; i++)
{
  cout<<ar[i]<<" ";
}



  return 0;
}