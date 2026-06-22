class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> mpp;
        vector<int> result(2,-1);
        for(int i=0;i<nums.size();i++){
            int val= target-nums[i];
            if(mpp.find(val)!= mpp.end()){
                result[0]= mpp[val];
                result[1]= i;
            }
            mpp[nums[i]]=i;
        }
        return result;
    }
};
