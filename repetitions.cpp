#include<bits/stdc++.h>
using namespace std;

int main() {
	string dnaSequence;
	cin>>dnaSequence;
	char dnachar = '\0';
	int ans = 1, mx = 1;
	for (auto ch : dnaSequence) {
		if (ch == dnachar) {
			ans++;
			mx = max(mx, ans);
		} else {
			ans = 1;
			dnachar = ch;
		}
	}
	cout<<mx;
}
