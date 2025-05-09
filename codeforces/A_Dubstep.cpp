// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long
// #define vi vector<int>
// int main(){
//   string s,m;
//   cin>>s;
//   for(int i=0;i<s.size();i++){
//     if(s[i]=='W' && s[i+1]=='U' && s[i+2]=='B'){
//       i+=2;
//       cout<<" ";
//     }else{
//       cout<<s[i];
//     }
//   }
//   return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long
// #define vi vector<int>
// int main(){
//   string s;
//   cin>>s;
//   string x = regex_replace(s,regex("WUB")," ");
//   cout<<x<<endl;
//   return 0;
// }

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
int a;
int main(){
  string s;
  cin>>s;
  a = s.find("WUB");
  while(a!=-1){
    s.replace(a,3," ");
    a=s.find("WUB");
  }
  cout<<s;
  return 0;
}