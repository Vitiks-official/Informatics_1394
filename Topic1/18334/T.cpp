#include <iostream>
#include <vector>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long n, k, p = 0, dif = -1;
    cin >> n;
    vector <long long> v(n);
    cin >> v[0];
    for (int i = 1; i < n; ++i){
        cin >> k;
        v[i] = v[i - 1] + k;
    }
    for (int i = 0; i < n - 1; ++i){
        if (dif == -1 || dif > abs(v[n - 1] - 2 * v[i])){
            dif = abs(v[n - 1] - 2 * v[i]);
            p = i + 1;
        }
    }
    cout << p;
}
