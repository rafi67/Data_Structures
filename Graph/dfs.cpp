#include <bits/stdc++.h>
#define N 15

using namespace std;

vector<int>Adj[N];
int vis[N];

void dfs(int u) {
    vis[u] = 1;
    for(int v:Adj[u])
        if(vis[v]==0)
            dfs(v);
    vis[u] = 2;
}

int main() {
    
    for(int i=0; i<N; ++i)
        vis[i] = 0;

    int node, edges;

    cin >> node >> edges;

    for(int i=0; i<edges; ++i) {
        int x, y;
        cin >> x >> y;
        Adj[x].push_back(y);
        Adj[y].push_back(x);
    }
    
    dfs(1);

    for(int i=1; i<=node; ++i)
        if(vis[i]==2)
            cout << i << " ";
    cout << "\n";

    return 0;

}