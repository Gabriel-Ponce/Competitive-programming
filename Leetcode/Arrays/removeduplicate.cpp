#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        vector<int> rnums;
        for(int i = 0; i < nums.size(); i++) {

            if (i == 0) {
                rnums.push_back(nums[i]);
            }
            else {
                if (nums[i] != rnums[i-1]) {
                    rnums.push_back(nums[i]);
                }
            }

        }
        nums = rnums;
        return rnums.size();
    }
};

int main() {

    Solution solution;

    vector<int> nums = {1,1,2};
    int dups = solution.removeDuplicates(nums);

    cout << dups << endl;

    for(int i =0; i < dups; i++) {

    cout << nums[i] << " ";

    }


    return 0;
}