#include <iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    if (n % 2)
        cout << n * (n - 1);
    else
        cout << n * (n - 2);

}
