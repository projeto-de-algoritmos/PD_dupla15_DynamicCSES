#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, k, inp, sum = 0;
    vector<int> h;
    vector<int> result;

    cin >> n >> k;

    for (int i = 0; i < n; ++i) {
        cin >> inp;
        h.push_back(inp);
    }

    for (int i = 0; i < k; ++i) {
        sum += h[i];
    }
    result.push_back(sum);

    for (int i = 1; i <= n - k; ++i) {
        sum -= h[i-1];
        sum += h[i+k-1];

        result.push_back(sum);
    }

    auto index =  min_element(result.begin(), result.end());
    cout << distance(result.begin(), index) + 1;
    return 0;
}