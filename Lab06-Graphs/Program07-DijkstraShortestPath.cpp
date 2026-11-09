#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main() {
    int n, e, u, v, w, start;
    cin >> n >> e;

    vector<pair<int, int>> adj[20];

    for (int i = 0; i < e; i++) {
        cin >> u >> v >> w;
        adj[u].push_back({v, w});
        adj[v].push_back({u, w});
    }

    cin >> start;

    vector<int> dist(n, 999999);
    priority_queue<pair<int, int>,
        vector<pair<int, int>>,
        greater<pair<int, int>>> pq;

    dist[start] = 0;
    pq.push({0, start});

    while (!pq.empty()) {
        int d = pq.top().first;
        int x = pq.top().second;
        pq.pop();

        if (d > dist[x]) continue;

        for (auto p : adj[x]) {
            int v = p.first;
            int w = p.second;

            if (dist[x] + w < dist[v]) {
                dist[v] = dist[x] + w;
                pq.push({dist[v], v});
            }
        }
    }

    for (int i = 0; i < n; i++)
        cout << start << " to " << i << " = " << dist[i] << endl;
}
