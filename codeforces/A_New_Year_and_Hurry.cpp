#include "bits/stdc++.h"
using namespace std;
#define max(a, b) (a < b ? b : a)
#define min(a, b) ((a > b) ? b : a)
#define mod 1e9 + 7
#define FOR(a, c) for (int(a) = 0; (a) < (c); (a)++)
#define FORL(a, b, c) for (int(a) = (b); (a) <= (c); (a)++)
#define FORR(a, b, c) for (int(a) = (b); (a) >= (c); (a)--)
#define INF 1000000000000000003
typedef long long int ll;
typedef vector<int> vi;
typedef pair<int, int> pi;
#define F first
#define S second
#define PB push_back
#define POB pop_back
#define MP make_pair
#define nl endl
#define sp " "
int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  int n, k;
  cin >> n >> k;
  int a[n + 1];
  a[0] = 0;
  for (int i = 1; i <= n; i++)
  {
    a[i] = i;
    a[i] = 5 * i;
  }
  int c = 0;
  int check = k;
  for (int i = 1; i <= n; i++)
  {
    if (check <= 240)
    {
      check += a[i];
      if (check > 240)
        break;
      c++;
    }
  }
  cout << c << endl;
}

// #include<bits/stdc++.h>

// using namespace std;

// int main(){
//     int n,k;
//     cin>>n>>k;
//     int arr[n+1];
//     arr[0]=0;
//     for(int i=1;i<=n;i++){
//         arr[i]=i;
//         arr[i]=arr[i]*5;
//     }
//     int count=0;
//     int check=k;
//     for(int i=1;i<=n;i++){
//         if(check<=240){
//             check+=arr[i];
//             if(check>240){
//                 break;
//             }
//             count++;
//         }
//     }
//     cout<<count<<"\n";
//     return 0;
// }