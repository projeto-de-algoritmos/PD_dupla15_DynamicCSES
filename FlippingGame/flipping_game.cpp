#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, inp, count;
    vector<int> a;
    vector<int> one_count;
    cin >> n;

    for (int i = 0; i < n; ++i) {
        cin >> inp;
        a.push_back(inp);
    }

    if (n == 1){
        if (a[0] == 1){
            cout << 0;
        }else{
            cout << 1;
        }
    }else {
        for (int i = 0; i < n; i++) {
            for (int j = i; j < n; j++) {
                vector<int> temp = a;
                count = 0;

                for (int k = i; k <= j; k++) {
                    if (temp[k] == 0) {
                        temp[k] = 1;
                    } else if (temp[k] == 1) {
                        temp[k] = 0;
                    }
                }

                for (int k = 0; k < n; k++) {
                    if (temp[k] == 1) {
                        count++;
                    }
                }

                one_count.push_back(count);
            }
        }
        cout << *max_element (one_count.begin(), one_count.end());
    }
    return 0;
}
