#include <bits/stdc++.h>
using namespace std;

#define ll long long

void iofile();

int main() {
    //iofile();

    int n, d;
    cin >> n >> d;

    vector<ll> v(n);

    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }


    d = d % n;

    
    vector<ll> rotated_arr(v.begin() + d, v.end());
    rotated_arr.insert(rotated_arr.end(), v.begin(), v.begin() + d);

    for (int i = 0; i < n; i++) {
        cout << rotated_arr[i];

        if (i != n-1)
        {
            cout << " ";
        }
        
    }
    cout << "\n";
}

void iofile() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}