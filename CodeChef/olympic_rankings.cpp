#include <iostream>
using namespace std;
#define long long int

int main() {
	// your code goes here
	int t, g1, s1, b1, g2, s2, b2; cin>>t;
	while (t--) {
	    cin>>g1>>s1>>b1>>g2>>s2>>b2;
	    (g1+s1+b1) > (g2+s2+b2) ? cout<<"1\n" : cout<<"2\n";
	}
	return 0;
}
