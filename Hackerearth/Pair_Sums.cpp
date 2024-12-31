#include<bits/stdc++.h>
using namespace std;
#define max(a, b) (a<b?b:a)
#define min(a, b) ((a>b)?b:a)
#define mod 1e9+7
#define for(a,c) for(int(a) =0;(a) < (c);(a)++)
#define forl(a,b,c) for(int(a) =(b); (a) <= (c);(a)++)
#define forr(a,b,c) for(int(a) = (b); (a) >= (c);(a)--)
#define INF 1000000000000000003
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pi;
#define F first
#define S second
#define PB push_back
#define POP pop_back
#define POP pop_back
#define MP make_pair



int ar[1000002];
main(){
  int n,sum;
  cin>>n>>sum;
  for(int i=0;i<=1000001;i++)
    ar[i]=0;
  for(int i=1;i<=n;i++){
    int a;
    cin>>a;
    ar[a]++;
  }
  int left = 0; int right = 1000001;
  bool ans = false;
  while(left<right){
    if(ar[left] == 0||ar[right]==0){//balancing the zero's
      while(ar[left] ==0)
        left++;
      while(ar[right] == 0)
        right--;
    }
    if(left+right == sum && left!=right){
      ans = true;break;
    }else if(left + right>sum)
      right--;
    else if(left + right<sum)
      left++;
  }
  if(left+right==sum && left==right)
    ans = true;
  if(ans)
    cout<<"YES";
  else
    cout<<"NO";

}


// Brute force approach....
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {

//   int n, k;
//   cin >> n >> k;
//   vector<int> v(n);
//   for (int i = 0; i < n; i++)
//   {

//     cin >> v[i];
//   }
//   vector<int> hs(n);
//   for (int i = 1; i < n; i++)
//   {
//     hs[i] = v[i] + v[i - 1];
//   }
//   bool f = 0;
//   for (int i = 0; i < n; i++)
//   {
//     if (hs[i] == k)
//     {
//       f = 1;
//       break;
//     }
//   }
//   if (f)
//   {
//     cout << "YES" << endl;
//   }
//   else
//   {
//     cout << "YES" << endl;
//   }
// }