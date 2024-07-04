#include<bits/stdc++.h>
using namespace std;

int main(){
  int t,y,i,c;
  cin>>t;

  while(t--){
    cin>>y;
    if((y%4 == 0 && y%100 !=0) || y%400 == 0)
    {
      cout<<"It is a leap year."<<endl;
    }else
    {
      for(i=y+1;i<=7000;i++)
      {
        if((i%4 == 0 && i%100 !=0) || i%400 == 0)
        {
          c=i;
          break;
        }
      }
      cout<<"Not a leap year."<<" Suggested: "<<i<<endl;
    }
  }

  return 0;
}