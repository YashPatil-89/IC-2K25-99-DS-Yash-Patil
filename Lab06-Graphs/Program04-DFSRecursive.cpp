#include <iostream>
#include <vector>
using namespace std;

vector<int> adj[20];
bool visited[20] = {};

void DFS(int x) {
    visited[x] = true;
    cout << x << " ";

    for (int v : adj[x]) {
        if (!visited[v])
            DFS(v);
    }
}

int main() {
    int n, e, u, v, start;
    cin >> n >> e;

    for (int i = 0; i < e; i++) {
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    cin >> start;
    DFS(start);
}
