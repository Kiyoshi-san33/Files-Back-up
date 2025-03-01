#include <bits/stdc++.h>
using namespace std;

int main() {
    int m, n, Q;
    cin >> m >> n >> Q;

    vector<vector<int>> matrix(m, vector<int>(n));
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }

    while (Q--) {
        int i, j;
        cin >> i >> j;
        cout << matrix[i - 1][j - 1] << endl;
    }

    return 0;
}