#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    int start = 0, end = n - 1;
    while(start < end) {
        if(arr[start] != arr[end]) {
            cout << "NO\n";
            return 0;
        }
        start++;
        end--;
    }

    cout << "YES\n";
    return 0;
}
