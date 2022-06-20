#include<bits/stdc++.h>
using namespace std;
 
int main() {
    long long n, k; cin>>n>>k;
    long long a[n]; for (long long i=0; i<n; i++) cin>>a[i];
    long long count = 0;
    for (long long i=0; i<n; i++) {
        if (a[i]>0 and a[k-1]<=a[i]) count++;
    }
    cout<<count;
}
