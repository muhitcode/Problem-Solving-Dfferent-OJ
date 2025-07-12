#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
int main(){
  int t;
  cin>>t;
  while(t--){
    long long a,b,x,y;
    cin>>a>>b>>x>>y;
    if(a==b){//ok
      cout<<"0"<<endl;
    }
    else if(a<b){//1 3
      int sum=0;
      for(int i=a;i<b;i++){ // 1-> 3 
        if(i%2==1){ // a%2==1 -> 1000 
          sum+=x;
        }else{
          sum+=min(x,y);
        }
      }
      cout<<sum<<endl;
    }
    else{
      if((a%2==1) && b==a-1)// cheking xor.For one incremented value
        cout<<y<<endl;
      else
        cout<<"-1"<<endl;
    }
  }
  //lsdjfljsaj
  return 0;
}