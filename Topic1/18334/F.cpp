#include <iostream>
#include <string>
using namespace std;

int main(){
    int n, m;
    string line;
    cin >> n >> m >> line;
    if (line == "freeze"){
        if (n < m)
            cout << n;
        else
            cout << m;
    } else if (line == "heat"){
        if (n > m)
            cout << n;
        else
            cout << m;
    } else if (line == "auto"){
        cout << m;
    } else if (line == "fan"){
        cout << n;
    }
}
