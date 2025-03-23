#include<bits/stdc++.h>
using namespace std;


int main() {
    int n, maxWeight;
    cin>>n>>maxWeight;
    int arr[n];
    for (int i=0;i<n;i++) {
        cin>>arr[i];
    }

    sort(arr, arr+n);

    int left = 0, right = n-1, ans = 0;

    while (left < right) {
        if (arr[left]+arr[right]>maxWeight) {
            ans++;
            right--;
        } else {
            ans++;
            left++;
            right--;
        }
    }
    if (left == right && arr[left] <= maxWeight) ans++;
    cout<<ans<<endl;
}
