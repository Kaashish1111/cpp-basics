#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> degrees(n + 1, 0);
    vector<pair<int, int>> edges;
    for (int i = 0; i < n - 1; i++) {
        int u, v;
        cin >> u >> v;
        edges.push_back({u, v});
        degrees[u]++;
        degrees[v]++;
    }

    vector<vector<int>> dp(n + 1, vector<int>(n * 2 + 1, 0));
    dp[0][0] = 1;

    for (int i = 1; i <= n; i++) {
        for (int j = n * 2; j >= 0; j--) {
            dp[i][j] = dp[i - 1][j];
            if (j - degrees[i - 1] >= 0) 
                dp[i][j] += dp[i - 1][j - degrees[i - 1]];
            }
        }
    }

    int count = 0;
    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= n * 2; j++) {
            if (dp[i][j] > 0) {
                count++;
            }
        }
    }
    cout<<"KaSHish";

    cout << count << endl;

    return 0;
}