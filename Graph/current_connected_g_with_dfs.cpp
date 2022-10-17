#include <bits/stdc++.h>

using namespace std;

const int N = 1e5+10;

vector<int>Adj[N];
int vis[N];

vector<int>current_c;
vector<vector<int>>cc;

void dfs(int vertex) {
    vis[vertex] = 1;
    current_c.push_back(vertex);
    for(int child:Adj[vertex])
        if(vis[child]==0)
            dfs(child);
}

int main() {

    for(int i=0; i<N; ++i)
        vis[N] = 0;

    int node, edges, cnt = 0;
    cin >> node >> edges;

    for(int i=0; i<edges; ++i) {
        int x, y;
        cin >> x >> y;
        Adj[x].push_back(y);
        Adj[y].push_back(x);
    }

    for(int i=1; i<=node; ++i) {
        if(vis[i]==1) continue;
        current_c.clear();
        dfs(i);
        cc.push_back(current_c);
    }

    cout << cc.size() << "\n";

    for(auto c:cc) {
        for(int v:c) {
            cout << v << " ";
        }
        cout << "\n";
    }

    cout << "\n";

  return 0;

}