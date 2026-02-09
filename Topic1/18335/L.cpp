#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n, ans = 10000000;
    cin >> n;
    vector <int> cbs(n);
    for (int i = 0; i < n; ++i)
        cin >> cbs[i];
    for (int i = 1; i <= 1000; ++i){
        int m = 0, l = 0;
        for (auto x: cbs){
            if (i > x)
                l += (i - x);
            else
                m += (x - i);
        }
        ans = min(ans, max(m, l));
    }
    cout << ans;
}
