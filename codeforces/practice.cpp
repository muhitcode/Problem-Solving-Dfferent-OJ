#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define nl "\n"
#define pi pair<int, int>
#define vpi vector<pair<int, int>>
#define sp char(1 << 5)
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, c;
        cin >> n >> c;
        vi a(n);
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            a.push_back(x);
        }
        ll ans = 0;
        ll m = a.front();
        ll l = 0,h =n-1;
        for(int i=0;i<n;i++){
            if(a[l]*pow(2,i)>a[h]*pow(2,i) && a[l]*pow(2,i) > c){
                if(a[h]*pow(2,i)>c)
                    ans++;
                h--;
                if(l==h) break;
            }else{
                if(a[l]*pow(2,i)>c)
                    ans++;
                l++;
                if(l==h) break;
            }
        }
        cout << ans << nl;
    }
    return 0;
}