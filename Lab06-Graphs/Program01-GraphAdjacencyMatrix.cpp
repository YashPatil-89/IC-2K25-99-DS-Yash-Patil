#include <iostream>
using namespace std;

int main() {
    int n, e, u, v;
    cout << "Enter vertices and edges: ";
    cin >> n >> e;

    int a[20][20] = {};

    for (int i = 0; i < e; i++) {
        cin >> u >> v;
        a[u][v] = 1;
        a[v][u] = 1;
    }

    cout << "Adjacency Matrix:\n";

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            cout << a[i][j] << " ";
        cout << endl;
    }
}
