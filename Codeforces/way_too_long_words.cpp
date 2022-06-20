#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while (t--) {
        string s, ans;
        cin>>s;
        long long int length = s.size();
        if (length > 10) {
            ans+=s[0];
            ans+=to_string(length-2);
            ans+=s[s.size()-1];
            cout<<ans<<endl;
        }
        else cout<<s<<endl;
    }
}
