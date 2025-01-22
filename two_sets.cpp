#include<iostream>
#include <set>
#include <vector>
using namespace std;

typedef  long long ll;


int main() {
	ll n, sum = 0;
	cin>>n;
	sum = (n*(n+1))/2;
	if (sum%2 == 1) {
		cout<<"NO";
	} else {
		ll need = sum/2;
		vector<ll>v1;
		set<ll> used;
		for (int i=n; i>=1; i--) {
			if (need - i >= 0) {
				v1.push_back(i);
				used.insert(i);
				need -= i;
			}
		}

		cout<<"YES"<<'\n';
		cout<<v1.size()<<'\n';
		for (auto i: v1) {
			cout<<i<<" ";
		}
		cout<<n - v1.size()<<'\n';
		for(int i=1;i<n;i++) {
			if (!used.count(i)) {
				cout<<i<<" ";
			}
		}

	}
}

// 1 2 3 4 5 6 7 8
