#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define nl "\n"
#define pi pair<int,int>
#define vpi vector<pair<int,int>>
#define sp char(1<<5)
int main(){
    int t;cin>>t;
    while(t--){
        ll n,c;
        cin>>n>>c;
        list<int> a;
        for(int i=0;i<n;i++)
            {
                int x;cin>>x;
                a.push_back(x);
            }
        ll ans = 0;
        ll m = a.front();
        for(int i=0;i<n;i++)
        {
            if ((a.front() * (pow(2, i))) > (a.back() * (pow(2, i))) && ((a.front() * (pow(2, i))) != c)&& ((a.front()*pow(2,i)>c)))
            {
                m = pow(2,i)*a.back();
                a.pop_back();
            }
                else
                {
                    m = pow(2, i) * a.front();
                    a.pop_front();
                }
        //    cout<<m<<sp;
           if(m>c){
            ans++;
           }
        }
        cout<<ans<<nl;
    }
    return 0;
}