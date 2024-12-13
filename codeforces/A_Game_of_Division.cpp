#include<bits/stdc++.h>
using namespace std;
const int N = 1e7+10;

int main(){
  int t;
  cin>>t;
  while(t--){
    int n, k;
    cin>>n>>k;
    vector<int> array(n);
    vector<int> precomputation(N);
    for(int i=0;i<n;i++){
      cin>>array[i];
    }
    bool iszero =true;
    for(int i=0;i<array.size();i++){
      for(int j=0;j<array.size();j++){
        if((array[i]-array[j])%k ==0){
          precomputation[i]++;
          iszero =false;
        }
      }
      if(iszero==false){
        iszero = true;
      }
      else
        precomputation[i] = 0;
    }
    int maximumAccur=INT_MIN;
    int thei =0;
    for(int i=0;i<N;i++){
      if(precomputation[i] == 0){
        cout<<"NO"<<endl;
        break;
      }
      if(precomputation[i]>maximumAccur){
        maximumAccur = precomputation[i];
        thei = i;
      }
    }
    if(thei!=0){
      cout<<"YES"<<endl;
      cout<<thei<<endl;
    }


  }
  return 0;
}