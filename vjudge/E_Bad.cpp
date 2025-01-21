// #include "bits/stdc++.h" 
// using namespace std; 
// #define max(a, b) (a < b ? b : a) 
// #define min(a, b) ((a > b) ? b : a) 
// #define mod 1e9 + 7 
// #define FOR(a, c) for (int(a) = 0; (a) < (c); (a)++) 
// #define FORL(a, b, c) for (int(a) = (b); (a) <= (c); (a)++) 
// #define FORR(a, b, c) for (int(a) = (b); (a) >= (c); (a)--) 
// #define INF 1000000000000000003 
// typedef long long int ll; 
// typedef vector<int> vi; 
// typedef pair<int, int> pi; 
// #define F first 
// #define S second 
// #define PB push_back 
// #define POB pop_back 
// #define MP make_pair 
// int main() 
// { 
//     ios::sync_with_stdio(0); 
//     cin.tie(0); 
   
//     int n,m,k,loop;
//     cin>>n>>m>>k;
//     int a[n],b[m];
//     FOR(i,n){
//             cin>>a[i];
//     }
//     sort(a,a+n);
//     vi unique; 
//     FOR(i,n){
//         if(i==0||a[i] != a[i-1]){
//             unique.push_back(a[i]);
//         }
//     }
//     FOR(i,n){
//         cin>>b[i];
//     }
//     int c=0;
//     for(int j=0;j<m;j++){
//         for(int i=0;i<n;i++){
//     		if(b[j] == unique[i] || unique[i]+k == b[j] || unique[i]-k ==b[j] && unique[i] != unique[i-1]){

//     			c++;
//                 break;
//     		}
//     	}
//     }
//     cout<<c<<endl;
//     return 0; 
// } 




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
int main() 
{ 
    ios::sync_with_stdio(0); 
    cin.tie(0); 
    
        int n,m,k;
        cin>>n>>m>>k;

        vi a(n),b(m);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<m;i++){
            cin>>b[i];
        }
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());

        int i=0,j=0,c=0;
        while(i<n&&j<m){
            if(abs(a[i] - b[j])<=k){
                c++;
                i++;
                j++;
            }else if(b[j]<a[i]-k){
                j++;
            }else{
                i++;
            }
        }
        cout<<c<<"\n";
    
    return 0; 
} 
