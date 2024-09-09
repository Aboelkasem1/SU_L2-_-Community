#include <bits/stdc++.h>
using namespace std;

void iofile();

int main() {
    iofile();

    int n, m;
    cin >> n >> m;

    deque <int> v(n+1);
    deque <int> id;

    for (int i = 1; i <= n; i++) {
        cin >> v[i]; // v = 0 -3 -3 -2 -2 -1 -1
        id.push_back(i); //id =
    }

    int l_child = 0;

    while (!id.empty()) {
        int i = id.front(); // 1 2 3 4 5 6
        id.pop_front();

        v[i] -= m; //m=4

        if (v[i] > 0) {
            id.push_back(i); //  =>
        }

        l_child = i;
    }


    cout << l_child << endl;

    return 0;
}

//==================

void iofile() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}
