#include <iostream>

using namespace std;
typedef long long ll;


int main() {
	int n;
	cin>>n;
	cout<<0<<endl;
	for (ll i=2;i<=n;i++) {
		ll totalPositions = (i*i*(i*i-1))/2;
		ll attackingPositions = 4*(i-1)*(i-2);
		cout<<totalPositions - attackingPositions<<endl;
	}
}
