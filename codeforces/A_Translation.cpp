#include<bits/stdc++.h>
using namespace std;

int main(){
  string str1, str2;
  cin>> str1 >> str2;

  int n = str1.length();

  bool a = 0;

  int s = 0;
  int e = n-1;
  while (s<e){
    int temp = str1[s];
    str1[s] = str1[e];
    str1[e] = temp;

    s++;
    e--;
  }

  for(int i = 0; i<n; i++){
    if(str1[i] != str2[i]){
      a = 1;
      break;
    }
  }
  int m = str2.length();
  if(a || m>n)
    cout<<"NO"<<endl;
  else
    cout<<"YES"<<endl;; 

  return 0;
}