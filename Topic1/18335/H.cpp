#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n, cnt = 0;
    cin >> n;
    vector <int> nums(n);
    for (int i = 0; i < n; ++i)
        cin >> nums[i];
    for (int i = 0; i < n; ++i){
        for (int j = i + 1; j < n; ++j){
            for (int k = j + 1; k < n; ++k){
                if (nums[i] + nums[j] > nums[k] &&
                    nums[j] + nums[k] > nums[i] &&
                    nums[k] + nums[i] > nums[j])
                    cnt++;
            }
        }
    }
    cout << cnt;
}
