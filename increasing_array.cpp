#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
	int n;
	cin>>n;
	ll ans = 0, input, preMax;
	cin>>preMax;
	while(n-- > 1) {
		cin>>input;
		if (input < preMax) {
			ans += max(0*1ll, preMax-input);
			preMax = input+max(0*1ll, preMax-input);
		} else {
			preMax = input;
		}
	}
	cout<<ans;
}
