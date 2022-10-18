#include <bits/stdc++.h>

using namespace std;

const int N = 1e5+10;

vector<int>Adj[N];
int visited[N];

bool dfs(int s, int parent) {
    bool isLoopExists = false;
    visited[s] = 1;
    for(int child:Adj[s]) {
        if(visited[child] && child==parent)
            continue;
        if(visited[child])
            return true;
        isLoopExists |= dfs(child, s);
    }
    return isLoopExists;
}

int main() {

    for(int i=0; i<N; ++i)
        visited[i] = 0;

    int node, edges, cnt = 0;

    cin >> node >> edges;

    for(int i=0; i<edges; ++i) {
        int x, y;
        cin >> x >> y;
        Adj[x].push_back(y);
        Adj[y].push_back(x);
    }

    for(int i=1; i<=node; ++i) {
        if(visited[i])
            continue;
        if(dfs(i, 0))
            ++cnt;
    }

    cout << cnt << "\n";

    return 0;

}