#include <iostream>
#include <string>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m, k, ms = -1;
    string win_name, name;
    cin >> n >> m;
    for (int i = 0; i < n; ++i){
        cin >> name;
        int s = 0;
        for (int j = 0; j < m; ++j){
            cin >> k;
            s += k;
        }
        if (ms == -1 || s <= ms){
            win_name = name;
            ms = s;
        }
    }
    cout << win_name;
}
