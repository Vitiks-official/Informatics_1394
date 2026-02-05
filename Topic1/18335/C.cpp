#include <iostream>
#include <vector>
using namespace std;

vector <vector <int>> g;
vector <bool> used;
vector <int> con;

bool dfs(int v){
    if (used[v]) return false;
    used[v] = true;
    for (int to: g[v]){
        if (con[to] == -1 || dfs(con[to])){
            con[to] = v;
            return true;
        }
    }
    return false;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
    int empty_count = 0;
    vector <vector <int>> maze(n, vector <int> (m));
    for (int i = 0; i < n; ++i){
        for (int j = 0; j < m; ++j){
            cin >> maze[i][j];
            if (maze[i][j] == 0) ++empty_count;
        }
    }
    vector <pair <int, int>> hor;
    vector <pair <int, int>> ver;
    for (int i = 0; i < n; ++i){
        for (int j = 0; j < m - 1; ++j){
            if (maze[i][j] == 0 && maze[i][j + 1] == 0)
                hor.push_back({i, j});

        }
    }
    for (int i = 0; i < n - 1; ++i){
        for (int j = 0; j < m; ++j){
            if (maze[i][j] == 0 && maze[i + 1][j] == 0)
                ver.push_back({i, j});
        }
    }
    g.assign(hor.size(), vector <int>());
    for (int i = 0; i < hor.size(); ++i){
        for (int j = 0; j < ver.size(); ++j){
            int yH = hor[i].first;
            int xH = hor[i].second;
            int yV = ver[j].first;
            int xV = ver[j].second;
            bool mrg = false;
            if (yH == yV && xH == xV) mrg = true;
            if (yH == yV + 1 && xH == xV) mrg = true;
            if (yH == yV && xH + 1 == xV) mrg = true;
            if (yH == yV + 1 && xH + 1 == xV) mrg = true;
            if (mrg) g[i].push_back(j);
        }
    }
    con.assign(ver.size(), -1);
    int matching = 0;
    for (int i = 0; i < hor.size(); ++i){
        used.assign(hor.size(), false);
        if (dfs(i)) ++matching;
    }
    cout << empty_count - (hor.size() + ver.size() - matching) - 1;
}
