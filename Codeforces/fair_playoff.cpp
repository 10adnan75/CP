#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ll t,s1,s2,s3,s4,max1,max2,min1,min2; cin>>t;
    while (t--) {
        cin>>s1>>s2>>s3>>s4;
        s1>s2 ? max1 = s1 : max1 = s2;
        s3>s4 ? max2 = s3 : max2 = s4;
        s1>s2 ? min1 = s2 : min1 = s1;
        s3>s4 ? min2 = s4 : min2 = s3;
        if (max1 < min2 or max2 < min1) cout<<"NO\n";
        else cout<<"YES\n";
    }
}
