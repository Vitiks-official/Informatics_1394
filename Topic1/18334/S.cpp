#include <iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n;
    cin >> n;
    if (n == 0)
        cout << "Yes\n1 1";
    else if (n == 1 || n == 4)
        cout << "No";
    else if (n % 2)
        cout << "Yes\n" << (n + 1) / 2 << " " << (n - 1) / 2;
    else if (n % 4 == 0)
        cout << "Yes\n" << (n / 4 + 1) << " " << (n / 4 - 1);
    else
        cout << "No";
}
