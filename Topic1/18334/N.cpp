#include <iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    if (n % 3 == 0)
        cout << 1 + (n - 6) / 3 << " " << 2 + (n - 6) / 3 << " " << 3 + (n - 6) / 3;
    else if (n % 3 == 1)
        cout << 1 + (n - 7) / 3 << " " << 2 + (n - 7) / 3 << " " << 4 + (n - 7) / 3;
    else
        cout << 1 + (n - 8) / 3 << " " << 3 + (n - 8) / 3 << " " << 4 + (n - 8) / 3;
}
