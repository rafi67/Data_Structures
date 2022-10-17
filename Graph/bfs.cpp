#include <bits/stdc++.h>

using namespace std;

const int N = 1e5+10;

vector<int>Adj[N];
int visited[N];
queue<int>Q;

void bfs(int s) {
    for(int i=0; i<N; ++i)
        visited[i] = 0;
    visited[s] = 1;
    Q.push(s);
    while(!Q.empty()) {
        int v = Q.front();
        Q.pop();
        cout << v << " ";
        for(int child:Adj[v])
            if(visited[child]==0) {
                visited[child] = 1;
                Q.push(child);
            }
    }
}

int main() {

    int node, edges, start;

    cin >> node >> edges >> start;

    for(int i=0; i<edges; ++i) {
        int x, y;
        cin >> x >> y;
        Adj[x].push_back(y);
        Adj[y].push_back(x);
    }

    bfs(start);

    cout << "\n";

    return 0;

}