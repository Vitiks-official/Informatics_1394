#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;
    vector <string> v(n), ans(n);
    for (int i = 0; i < n; ++i)
        cin >> v[i];
    for (int i = 0; i < n; ++i)
        cin >> ans[i];
    int k = 0;
    for (int i = 0; i < n; ++i){
        for (int j = 0; j < m; ++j){
            if (v[i][j] == ans[i][j])
                k++;
        }
    }
    cout << k;
}
