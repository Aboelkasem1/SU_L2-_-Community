#include <bits/stdc++.h>
using namespace std;

void iofile();

int main() {
    iofile();

    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    vector<int> neg, pos, set3;


    bool neg_check = false;
    for (int i = 0; i < n; ++i) {
        if (arr[i] < 0) {
            neg.push_back(arr[i]);
            arr.erase(arr.begin() + i);
            neg_check = true;
            break;
        }
    }


    bool pos_check = false;
    for (int i = 0; i < arr.size(); ++i) {
        if (arr[i] > 0) {
            pos.push_back(arr[i]);
            arr.erase(arr.begin() + i);
            pos_check = true;
            break;
        }
    }

    if (!pos_check) {
        int negCount = 0;
        for (int i = 0; i < arr.size() && negCount < 2; ++i) {
            if (arr[i] < 0) {
                pos.push_back(arr[i]);
                arr.erase(arr.begin() + i);
                i--;
                negCount++;
            }
        }
    }


    bool zer_check = false;
    for (int i = 0; i < arr.size(); ++i) {
        if (arr[i] == 0) {
            set3.push_back(arr[i]);
            arr.erase(arr.begin() + i);
            zer_check = true;
            break;
        }
    }


    for (int i = 0; i < arr.size(); ++i) {
        if (arr[i] == 0) {
            set3.push_back(arr[i]);
        } else if (arr[i] > 0) {
            pos.push_back(arr[i]);
        } else {
            set3.push_back(arr[i]);
        }
    }


    cout << neg.size() << " ";
    for (int num : neg) cout << num << " ";
    cout << endl;

    cout << pos.size() << " ";
    for (int num : pos) cout << num << " ";
    cout << endl;

    cout << set3.size() << " ";
    for (int num : set3) cout << num << " ";
    cout << endl;

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
