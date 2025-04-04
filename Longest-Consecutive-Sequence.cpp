class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
         if (nums.empty()) return 0;
        
        map<int, int> mpp;
        for(int i = 0; i<nums.size(); i++){
            mpp[nums[i]] = i;
        }
        
        auto it = mpp.begin();
        int start = it->first;   
        it++;
        int ans = 1, cnt = 1;
        while(it != mpp.end()){
            if(it->first == start+1){
                cnt++;
            }

            else{
                cnt = 1;
            }
            ans = max(cnt, ans);
            start = it->first;
            it++;
        }
        return ans;  
    }
};
 
