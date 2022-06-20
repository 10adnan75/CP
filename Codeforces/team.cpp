#include <iostream>
using namespace std;

int main() {
    int t,k=0;
    cin>>t;
    while (t--) {
        int x,y,z,c=0;
        cin>>x>>y>>z;
        if(x==1) c++;
        if(y==1) c++;
        if(z==1) c++;
        if(c>=2) k++;
    }
    cout<<k<<"\n";
}
