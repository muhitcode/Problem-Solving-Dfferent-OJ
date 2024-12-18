#include<bits/stdc++.h>
using namespace std;

#define max(a, b) (a<b?b:a)
#define min(a, b) ((a>b)?b:a)
#define mod 1e9+7
#define FOR(a,c) for(int(a) =0;(a) < (c);(a)++)
#define FORL(a,b,c) for(int(a) =(b); (a) <= (c);(a)++)
#define FORR(a,b,c) for(int(a) = (b); (a) >= (c);(a)--)
#define INF 1000000000000000003
typedef long long int ll;
typedef vector<int> vi;
typedef pair<int, int> pi;
#define F first
#define S second
#define PB push_back
#define POP pop_back
#define POP pop_back
#define MP make_pair



// my code wrong answer.. but algorith is correct.

// int main(){
//   ios::sync_with_stdio(0);
//   cin.tie(0);
//   int T;
//   cin>>T;
//   while(T--) {
//     int N;
//     cin>>N;
//     vi v(N);
//     vi re;
//     for(int i=0;i<N;i++){
//       cin>>v[i];
//     }
//     FOR(i,N){
//       if(v[i-1]>v[i]){
//         re.push_back(v[i]);
//         re.push_back(v[i]);
//       }else
//         re.push_back(v[i]);
//     }
//     cout<<re.size()<<endl;
//     for(int i:re){
//       cout<<i<<" ";
//     }cout<<endl;

    
//   }
//   return 0;
// }

// The correct code...

int main()
{
  int q;
  cin >> q;
  while (q--)
  {
    int n;
    cin >> n;
    vector<int> a;
    for (int i = 0; i < n; ++i)
    {
      int x;
      cin >> x;
      if (i && a.back() > x)// because the i start with 1 not zero.
      {
        a.push_back(1);
      }
      a.push_back(x);
    }
    cout << a.size() << "\n";
    for (int el : a)
      cout << el << " ";
    cout << "\n";
  }
  return 0;
}