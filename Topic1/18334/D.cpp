#include <iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int m, n, i, j, c;
    cin >> m >> n >> i >> j >> c;
    if (n % 2 == 1 && m % 2 == 1){
        if (i % 2 == j % 2){
            if (c)
                cout << "white";
            else
                cout << "black";
        } else {
            if (c)
                cout << "black";
            else
                cout << "white";
        }
    } else
        cout << "equal";
}
