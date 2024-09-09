#include <bits/stdc++.h>
using namespace std;

void iofile();

int main() {
    iofile();

    int t;
    cin >> t;
    cin.ignore();

    while (t--) {
        string s;
        getline(cin, s);

        stack<char> st;
        bool valid = true;

        for (char it : s) {
            if (it == '(' || it == '[') {
                st.push(it);
            } else if (it == ')' || it == ']') {
                if (st.empty()) {
                    valid = false;
                    break;
                }
                else {
                    if ((it == ')' && st.top() == '(') || (it == ']' && st.top() == '[')) {
                        st.pop();
                    } else {
                        valid = false;
                        break;
                    }
                }
            }
        }

        if (valid && st.empty()) {
            cout << "Yes" << "\n";
        } else {
            cout << "No" << "\n";
        }
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
