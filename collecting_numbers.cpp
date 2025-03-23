#include <bits/stdc++.h>
using namespace std;


int main() {
    int n;
    cin>>n;
    int ans = 0, prev = -1, cnt = 0;
    for (int i=0;i<n;i++) {
        int x;
        cin>>x;
        if (x >= prev) {
            cnt++;
            ans = max(ans, cnt);
        } else {
            cnt = 1;
        }
        prev = x;
    }



    return ans;
}
