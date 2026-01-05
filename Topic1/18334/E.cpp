#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int a, b;
    cin >> a >> b;
    cout << max((a + a % 2) / 2, (b + b % 2) / 2) << " " << min(a, b);
}
