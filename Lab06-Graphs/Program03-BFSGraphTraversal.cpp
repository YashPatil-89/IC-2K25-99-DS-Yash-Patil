#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main() {
    int n, e, u, v, start;
    cin >> n >> e;

    vector<int> adj[20];
    bool visited[20] = {};

    for (int i = 0; i < e; i++) {
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    cin >> start;

    queue<int> q;
    q.push(start);
    visited[start] = true;

    while (!q.empty()) {
        int x = q.front();
        q.pop();

        cout << x << " ";

        for (int v : adj[x]) {
            if (!visited[v]) {
                visited[v] = true;
                q.push(v);
            }
        }
    }
}
