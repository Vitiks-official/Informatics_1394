#include <iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long a, b, c, d, x = 1, s = 0;
    cin >> a >> b >> c >> d;
    while (x * x <= b){
        long long y_p_min = (c + 1) / 2 - x, y_p_max = d / 2 - x;
        long long y_s_min = (a + x - 1) / x, y_s_max = b / x;
        if (max({x, y_p_min, y_s_min}) <= min(y_p_max, y_s_max)){
            s += (min(y_p_max, y_s_max) - max({x, y_p_min, y_s_min}) + 1);
        }
        ++x;
    }
    cout << s;

}
