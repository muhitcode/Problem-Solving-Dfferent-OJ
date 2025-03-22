// // nesting of map and sets.

#include<bits/stdc++.h>
using namespace std;

// int main(){

//   // map<pair<int,int>, int> m;


//   // compare element of a set..

//   set<int> p1 = {1,2,3};
//   set<int> p2 = {2,3};
//   cout<<(p1<p2);

//   map<pair<string,string>, vector<int>> m;
//   set<pair<int,int>> st;
//   int n;
//   cin>>n;
//   for(int i=0;i<n;i++){
//     string fn, ln;
//     int ct;
//     cin>> fn>>ln>>ct;
//     for(int j =0;j<ct;j++){
//       int x;
//       cin>>x;
//       m[{fn, ln}].push_back(x);
//     }

//   }

//   for(auto &pr :m){
//     auto &full_name = pr.first;
//     auto &list = pr.second;
//     cout<<full_name.first<<" "<<full_name.second<<endl;
//     cout<<list.size()<<endl;
//     for(auto &element:list){
//       cout<<element<<" ";
//     }cout<<endl;
//   }


// }

// problem the Monk and class Marks hackerearth.

int main(){
  map<int,set<string>> marks_map;

  int n;cin>>n;
  for(int i=0;i<n;i++){
    int marks;
    string name;
    cin>>name>>marks;
    marks_map[marks].insert(name);
  }

  

  
}
