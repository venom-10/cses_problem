#include<iostream>
using namespace std;

typedef  long long ll;

 ll solve(int r, int c) {
	ll ans;
	if (r >= c) {
		if (r%2 == 0) {
			ans = r*r - c + 1;
		} else {
			ans = (r-1)*(r-1) + c;
		}
	} else {
		if (c%2 == 1) {
			ans = c*c - r + 1;
		} else {
			ans = (c-1)*(c-1) + r;
		}
	}
	return ans;
}

int main() {
	int t;
	cin>>t;
	while(t--) {
		int r, c;
		cin>>r>>c;
		cout<<solve(r, c)<<endl;
	}
}

