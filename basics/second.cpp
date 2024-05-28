#include <iostream>
#include <vector>
#include <cstring>

using namespace std;

int countUniquePairs(int N, vector<pair<int, int>>& edges) {
    vector<int> degree(N + 1, 0);

    // Calculate the degree of each vertex
    for (auto& edge : edges) {
        int A = edge.first;
        int B = edge.second;
        degree[A]++;
        degree[B]++;
    }

    // Find the maximum possible degree sum
    int maxDegreeSum = 0;
    for (int i = 1; i <= N; ++i) {
        maxDegreeSum += degree[i];
    }

    // DP table
    vector<vector<int>> dp(N + 1, vector<int>(maxDegreeSum + 1, 0));
    dp[0][0] = 1; // Base case

    // Fill the DP table
    for (int i = 1; i <= N; ++i) {
        for (int x = N; x >= 1; --x) {
            for (int y = maxDegreeSum; y >= degree[i]; --y) {
                if (dp[x - 1][y - degree[i]] > 0) {
                    dp[x][y] += dp[x - 1][y - degree[i]];
                }
            }
        }
    }

    // Count the unique pairs (X, Y)
    int uniquePairs = 0;
    for (int x = 0; x <= N; ++x) {
        for (int y = 0; y <= maxDegreeSum; ++y) {
            if (dp[x][y] > 0) {
                uniquePairs++;
            }
        }
    }

    return uniquePairs;
}

int main() {
    int N;
    cin >> N;

    vector<pair<int, int>> edges(N - 1);
    for (int i = 0; i < N - 1; ++i) {
        cin >> edges[i].first >> edges[i].second;
    }

    int result = countUniquePairs(N, edges);
    cout << result << endl;

    return 0;
}