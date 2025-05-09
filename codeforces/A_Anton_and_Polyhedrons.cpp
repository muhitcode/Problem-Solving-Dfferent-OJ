#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
int main(){
  int n,c=0;cin>>n;
  for(int i=0;i<n;i++){
    string s;
    cin>>s;
    if (s == "Tetrahedron"){
      c+=4;
    }
    else if (s == "Cube"){
      c+=6;
    }
    else if (s == "Octahedron"){
      c+=8;
    }else if(s=="Dodecahedron"){
      c+=12;
    }else if(s=="Icosahedron"){
      c+=20;
    }
  }
  cout<<c<<endl;
  return 0;
}