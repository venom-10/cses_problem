#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin>>n>>m;
    int prices[n], customerPrices[m];
    map<int, int> mp;
    for (int i=0;i<n;i++) {
        cin>>prices[i];
        mp[prices[i]]++;
    }
    sort(prices, prices+n);
    vector<int> ans;
    for (int j=0;j<m;j++) {
        cin>>customerPrices[j];
        auto it = mp.upper_bound(customerPrices[j]);
        if (it == mp.begin()) {
            ans.push_back(-1);
        } else {
            it--;
            ans.push_back(it->first);
            mp[it->first]--;
            if (mp[it->first] == 0) {
                mp.erase(it);
            }
        }
    }
    for (auto i: ans) {
        cout<<i<<'\n';
    }
}
