#include <bits/stdc++.h>
using namespace std;


int main() {
    int n;
    cin>>n;
    set<int> uniqueSet;
    for (int i=0;i<n;i++) {
        int x;
        cin>>x;
        uniqueSet.insert(x);
    }
    cout<<uniqueSet.size();
}
