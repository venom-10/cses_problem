#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
int main() {
	ll n, sum = 0;
	cin>>n;
	sum = n*(n+1)/2;
	for (ll i=0;i<n-1;i++) {
		ll num;
		cin>>num;
		sum-=num;
	}
	cout<<sum;
}
