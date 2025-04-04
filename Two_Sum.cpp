class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> res;
        unordered_map<int, int> mpp;
        for(int i = 0; i<nums.size(); i++){
            mpp[nums[i]] = i;
        }
        for(int i = 0; i<nums.size(); i++){
            int remaining = target - nums[i];
            if(mpp.find(remaining) != mpp.end() && mpp[remaining] != i){
                res.push_back(i);
                res.push_back(mpp[remaining]);
                return res;
            }
        }
        return {};
    }
};
