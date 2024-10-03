#include<bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin>>n;

  for(;;){
    n ++;
    int a = (n / 1000);
    int b = (n / 100) % 10;
    int c = (n / 10) % 10;
    int e = n % 10;

    if(a != b && a !=c && a != e && b != c && b != e && c != e){
      break;
    }
  }
  cout<< n;
  return 0;
}