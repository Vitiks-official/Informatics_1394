#include <iostream>
#include <vector>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int max1, max2, n;
    cin >> n;
    vector <int> v(n);
    for (int i = 0; i < n; ++i)
        cin >> v[i];
    max1 = max(v[0], v[1]), max2 = min(v[0], v[1]);
    cout << max2 << " ";
    for (int i = 1; i < n - 1; ++i){
        if (v[i + 1] >= max1){
            max2 = max1;
            max1 = v[i + 1];
        } else if (v[i + 1] >= max2)
            max2 = v[i + 1];
        cout << max2 << " ";
    }
}
