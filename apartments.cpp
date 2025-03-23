#include<bits/stdc++.h>
using namespace std;



int main() {
    int n, m, k;
    cin>>n>>m>>k;
    vector<int> applicants(n), apartments(m);

    for (int i=0;i<n;i++) {
        int x;
        cin>>x;
        applicants[i] = x;
    }

    for (int j=0;j<m;j++) {
        int y;
        cin>>y;
        apartments[j] = y;
    }

    sort(applicants.begin(), applicants.end());
    sort(apartments.begin(), apartments.end());
    int i=0, j=0, ans = 0;
    while(i<n && j<m) {
        if (applicants[i]-k <= apartments[j] && apartments[j] <= applicants[i]+k) {
            ++ans;
            ++i;
            ++j;
        } else if (applicants[i]>apartments[j]) {
            j++;
        } else i++;
    }
    cout<<ans<<endl;
}
