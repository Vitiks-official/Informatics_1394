#include <iostream>
using namespace std;

int main(){
    long long n;
    cin >> n;
    if (n % 6)
        cout << n / 6 + 7 - n % 6 << " " << n * 6;
    else
        cout << n / 6 << " " << n * 6;
}
