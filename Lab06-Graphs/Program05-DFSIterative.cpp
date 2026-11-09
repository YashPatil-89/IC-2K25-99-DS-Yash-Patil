#include <iostream>
#include <vector>
#include <stack>
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

    stack<int> s;
    s.push(start);

    while (!s.empty()) {
        int x = s.top();
        s.pop();

        if (!visited[x]) {
            visited[x] = true;
            cout << x << " ";

            for (int v : adj[x])
                if (!visited[v])
                    s.push(v);
        }
    }
}
