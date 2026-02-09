#include <iostream>
#include <string>
using namespace std;

int main(){
    string pos1, pos2;
    string letters = "abcdefgh";
    cin >> pos1 >> pos2;
    int x1 = letters.find(pos1[0]), y1 = pos1[1] - '0' - 1;
    int x2 = letters.find(pos2[0]), y2 = pos2[1] - '0' - 1;
    if (y1 >= y2)
        cout << "NO";
    else {
        while (y1 < y2){
            if (x1 <= x2)
                x1++;
            else
                x1--;
            y1++;
        }
        if (x1 != x2)
            cout << "NO";
        else
            cout << "YES";
    }
}
