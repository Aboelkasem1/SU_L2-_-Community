#include <bits/stdc++.h>
using namespace std;

void iofile();


int main() {

    iofile();

    int q;
    cin >> q;
    
    deque<int> dq;
    bool rev = false;

    while (q--) {

        string com; cin >> com;

        if (com == "back") {

            if (dq.empty()) {

                cout << "No job for Ada?" << endl;
            } else {

                if (rev) {

                    cout << dq.front() << endl;
                    dq.pop_front();

                } else {

                    cout << dq.back() << endl;
                    dq.pop_back();
                }
            }
        } else if (com == "front") {

            if (dq.empty()) {

                cout << "No job for Ada?" << endl;

            } else {

                if (rev) {

                    cout << dq.back() << endl;
                    dq.pop_back();

                } else {

                    cout << dq.front() << endl;
                    dq.pop_front();
                }
            }
        } else if (com == "reverse") {

            rev = !rev;

        } else if (com == "push_back") {

            int n; cin >> n;

            if (rev) {

                dq.push_front(n);

            } else {

                dq.push_back(n);
            }
        } else if (com == "toFront") {

            int n; cin >> n;

            if (rev) {

                dq.push_back(n);

            } else {

                dq.push_front(n);

            }
        }
    }
    
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