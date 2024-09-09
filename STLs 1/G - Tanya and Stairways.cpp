// #include <bits/stdc++.h>
// using namespace std;
//
// void iofile() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(nullptr);
//     cout.tie(nullptr);
//
// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif
// }
//
// int main()
// {
//     iofile();
//
//     int n, c=0;
//     cin >> n;
//
//     vector <int> v;
//     vector <int> v_2;
//
//     for (int i = 0; i < n; i++)
//     {
//         int x; cin >> x;
//         v.push_back(x);
//
//         if (v[i] == 1)
//         {
//             c++;
//
//             if (i != 0)
//             {
//                 v_2.push_back(v[i-1]);
//             }
//
//         }
//
//         if (i == n-1)
//         {
//             v_2.push_back(v[i]);
//         }
//
//
//     }
//     cout << c << '\n';
//
//     for (auto it:v_2)
//     {
//         cout << it << " ";
//     }
//
// }
//
// //2

#include <bits/stdc++.h>
using namespace std;

void iofile();

int main() {
    iofile();

    int n;
    cin >> n;

    vector<int> step;
    int pre = 0;

    for (int i = 0; i < n; ++i) {

        int curr; cin >> curr;

        if (curr == 1) {
            if (pre != 0) {
                step.push_back(pre);
            }
        }

        pre = curr;
    }

    step.push_back(pre);

    cout << step.size() << endl;
    for (int i = 0; i < step.size(); ++i) {
        cout << step[i] << " ";
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
