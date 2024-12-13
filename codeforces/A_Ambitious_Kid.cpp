//My implementation doesn't work.

// #include<bits/stdc++.h>
// using namespace std;


// int minimum(int arr[],int n){
//   int min =INT_MAX;
//   for (int i = 0; i < n; i++)
//   {
//     if(abs(arr[i])<min){
//       min = arr[i];
//     }
//     if(arr[i] == 0){
//       return 0;
//     }
//   }
//   return min;
// }
// int main(){
//   int n;
//   cin>>n;
//   int arr[n];
//   for(int i=0;i<n;i++){
//     cin>>arr[i];
//   }
//   cout<<abs(minimum(arr,n))<<endl;
//   return 0;
// }

// Actual answer
#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++)
    cin >> arr[i];
  int ops = 1e9;
  for (int i = 0; i < n; i++)
    ops = min(ops, abs(arr[i] - 0));
  cout << ops << endl;
  return 0;
}