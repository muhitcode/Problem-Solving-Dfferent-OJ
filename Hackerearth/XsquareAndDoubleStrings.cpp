#include<bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin>>t;
  while(t--){
    string s;
    cin>>s;
    int arr[26];
    for(int i=0;i<26;i++){
      arr[i] =0;
    }
    for(int i=0;i<s.size();i++){
      arr[s[i] - 'a']++;
    }
    int f =0;
    for(int i=0;i<26;i++){
      if(arr[i]>1){
        f=1;
        break;
      }
    }
    if(f==1){
      cout<<"Yes"<<endl;
    }else{
      cout<<"No"<<endl;
    }
  }

  return 0;
}