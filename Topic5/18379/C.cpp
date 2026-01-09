#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n, k, a;
    cin >> n >> k;
    vector <int> nums(n);
    for (int i = 0; i < n; ++i)
        cin >> nums[i];
    for (int i = 0; i < k; ++i){
        cin >> a;
        int right = n, left = 0;
        while (right - left > 1){
            int mid = (right + left) / 2;
            if (nums[mid] > a)
                right = mid;
            else
                left = mid;
        }
        if (nums[left] == a)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}
