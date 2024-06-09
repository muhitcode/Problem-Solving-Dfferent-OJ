#include<bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin>>n;
  string str;
  int x=0;
  for(int i=1;i<=n;i++)
  {
    cin>>str;
    if(str=="X++" || str=="++X"){
      x++;
    }else if(str=="X--" || str=="--X"){
      x--;
    }
  }
  cout<<x<<endl;
  return 0;
}

 