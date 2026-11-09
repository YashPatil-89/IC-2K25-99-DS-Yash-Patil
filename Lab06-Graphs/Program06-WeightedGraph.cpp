#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, e, u, v, w;
    cin >> n >> e;

    vector<pair<int, int>> adj[20];

    for (int i = 0; i < e; i++) {
        cin >> u >> v >> w;
        adj[u].push_back({v, w});
        adj[v].push_back({u, w});
    }

    for (int i = 0; i < n; i++) {
        cout << i << " -> ";

        for (auto x : adj[i])
            cout << "(" << x.first << "," << x.second << ") ";

        cout << endl;
    }
}
