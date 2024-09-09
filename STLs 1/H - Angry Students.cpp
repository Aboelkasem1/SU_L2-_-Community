#include <bits/stdc++.h>
using namespace std;

void iofile();

int main() {
    iofile();

    int t;
    cin >> t;

    while (t--) {
        int k;
        cin >> k;
        string s;
        cin >> s;

        int max_time = 0;
        int current_time = 0;
        bool has_angry = false;

        for (int i = 0; i < k; ++i) {
            if (s[i] == 'A') {
                has_angry = true;
                current_time = 0;
            } else {
                if (has_angry) {
                    current_time++;
                    max_time = max(max_time, current_time);
                }
            }
        }

        cout << max_time << endl;
    }

    return 0;
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
