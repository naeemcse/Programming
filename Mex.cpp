//ALHAMDULILLAH
//Solved by Najmul Islam Naeem
#define   ll            long long int
#define   nn           ll n;cin>>n
#define   ss            string s;cin>>s
#define   vs            vector<string>v(n)
#define   vi            vector<ll>v(n)
#define   vl            vector<ll>
#define   cinv          for(ll i=0;i<n;i++) cin>>v[i];
#define   coutv         for(ll i=0;i<n;i++)cout<<v[i]<<" ";cout<<endl;
#define   srt(v)        sort(v.begin(),v.end());
#define   rvs(v)        reverse(v.begin(),v.end());
#define   gsrt(v)       sort(v.begin(), v.end(), greater<ll>());
#define   cina          for(ll i=0;i<n;i++) cin>>a[i];
#define  couta          for(ll i=0;i<n;i++) cout<<a[i]<<" ";cout<<endl;
#define   srta          sort(a,a+n);
#define   gsrta         sort(a,a+n,greater<ll>());
#define  yes            cout<<"YES"<<endl;
#define  no             cout<<"NO"<<endl;
#define   fr            for(ll i=0;i<n;i++)
#define  nl             cout<<"\n";

#include<bits/stdc++.h>
using namespace std;

ll findmex(vector<ll> v, ll n)
{
    unordered_set<ll> s;
    for(ll i=0; i<n+2; i++)
    {
        s.insert(i);
    }
    for(auto val:v) if (s.find(val)!=s.end()) s.erase(val);
    return *min_element(s.begin(),s.end());
}

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        nn ;
        vi ;
        cinv;
        ll mex = findmex(v, n);
        cout<<mex<<endl;








    }
}




