#include <bits/stdc++.h>
using namespace std;
int main() {
    int T;
    cin>>T;
    while(T--){
    int n,p;
    cin>>n;
    vector<int> days(n+1);
    cin>>p;
    for(int i=0;i<p;i++){
        int x;
        cin>>x;
        for(int j=x;j<=n;j+=x)
            days[j] = 1;
    }
    int res=0;
    for(int i=1;i<=n;i++){
        if(days[i]==1 && (i%7!=0 && i%7!=6)) res++;
    }
    cout<<res<<endl;
    }
    return 0;
}
