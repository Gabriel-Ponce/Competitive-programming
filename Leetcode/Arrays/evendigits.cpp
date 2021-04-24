#include <bits/stdc++.h>
#include <string>

using namespace std;

class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int sum = 0;
        for(int i = 0; i < nums.size(); i++) {

            string s = to_string(nums[i]);
            if (s.length() % 2 == 0) {
                sum++;
            }

        }
        return sum;
    }
};

int main() {

    Solution solution;
    vector<int> nums = {555,901,482,1771};
    cout << solution.findNumbers(nums);
    return 0;
}