#include <iostream>
#include <string>
#include <cctype>
#include <algorithm>
using namespace std;

int main(){
    string s1, s2, s3;
    cin >> s1 >> s2 >> s3;
    if (isalpha(s3[0]))
        swap(s1, s3);
    else if (isalpha(s2[0]))
        swap(s1, s2);
    if (s2.find('.') == string::npos)
        swap(s2, s3);
    cout << s1 << "\n" << s2 << "\n" << s3;
}
