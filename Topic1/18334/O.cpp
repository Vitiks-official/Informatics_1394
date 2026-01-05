#include <iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n, k, x, y, one_pd, q, kv;
    cin >> n >> k >> x >> y;
    one_pd = (n / k) * x + (n - n / k) * y;
    cin >> q;
    for (int i = 0; i < q; ++i){
        cin >> kv;
        kv = (kv - 1) % one_pd;
        long long right = n, left = 0;
        while (right - left > 1){
            long long mid = (right + left) / 2;
            long long mid_cnt = (mid / k) * x + (mid - mid / k) * y;
            if (kv + 1 <= mid_cnt)
                right = mid;
            else
                left = mid;
        }
        cout << right << "\n";
    }
}
