#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--)
    {
        solve();int n;
        cin>>n;
        vector<ll> a(n);
        for(ll i=0;i<n;i++) cin>>a[i];
        sort(a.begin(),a.end());
        cout<<a[(n-1)/2]<<"\n"; 
        return 0;
}
