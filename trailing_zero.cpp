#include <iostream>
using namespace std;

typedef long long ll;
int main() {
    int n;
    cin>>n;
    ll k = 5;
    ll ans = 0;
    while(n/k > 0) {
        ans+=(n/k);
        k *=5;
    }
    cout<<ans<<endl;
}
