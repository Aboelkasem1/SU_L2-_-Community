#include <bits/stdc++.h>
using namespace std;

#define ll long long

void iofile();

int main()
{
    iofile();

    int t;
    cin >> t;

    stack <ll> s;

    while (t--) {

        int s_based;
        cin >> s_based;

        if (s_based == 1) {

            long long n;
            cin >> n;
            s.push(n);

        } else if (s_based == 2) {

            if (!s.empty()) {
                s.pop();
            }

        } else if (s_based == 3) {

            if (!s.empty()) {

                cout << s.top() << "\n";

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
