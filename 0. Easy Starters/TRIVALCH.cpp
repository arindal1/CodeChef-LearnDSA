#include <iostream>
using namespace std;
typedef long long ll;

int main() {
	// your code goes here
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll a,b,c;
	cin>>a>>b>>c;
	if(a+b>c&&b+c>a&&a+c>b)cout<<"YES";
	else cout<<"NO";
	return 0;
}