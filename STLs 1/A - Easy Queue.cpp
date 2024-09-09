#include <bits/stdc++.h>
using namespace std;

#define ll long long

void iofile();

int main()
{
    iofile();

    int t;
    cin >> t;

    queue<long long> q;

    while (t--) {

        int q_based;
        cin >> q_based;

        if (q_based == 1) {

            long long n;
            cin >> n;
            q.push(n);

        } else if (q_based == 2) {

            if (!q.empty()) {
                q.pop();
            }

        } else if (q_based == 3) {

            if (!q.empty()) {

                cout << q.front() << "\n";

            } else {

                cout << "Empty!\n";

            }

        }
    }
}


void iofile() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin), freopen("output.txt", "w", stdout);
#endif
}
