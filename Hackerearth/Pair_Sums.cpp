
#include<bits/stdc++.h>
using namespace std;

int maxSubArraySum(vector<int> &arr){
  int res = arr[0];
  int maxEnding =  arr[0];
  for(int i=1;i<arr.size();i++){
    maxEnding = max(maxEnding+ arr[i],arr[i]);
    res = max(res,maxEnding);
  }
  return res;
}
int main(){
  vector<int> arr = {2,3,-8,7,-1,2,3};
  cout<<maxSubArraySum(arr);
  return 0;
}




// Brute force approach....
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//   int n,k;
//   cin>>n>>k;
//   vector<int> a(n);
//   for(int i=0;i<n;i++){
//     cin>>a[i];
//   }
//   bool b = false;
//   for(int i=0;i<n;i++){
//     for(int j=i;j<n;j++){
//       if(a[i]+a[j] == k){
//          b = true;
//       }
//     }
//   }
//   if(b){
//     cout<<"YES"<<endl;
//   }else{
//     cout<<"NO"<<endl;
//   }



// }
