class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>ans;
    unordered_map<int,int>ele_index_map;
    for(int i=0;i<nums.size();i++){
        int remaining_target = target-nums[i];
        if(ele_index_map.find(remaining_target)!=ele_index_map.end()){
            ans.push_back(i);
            int j = ele_index_map[remaining_target];
            ans.push_back(j);
            return ans;
        }
        else{
            ele_index_map.insert(make_pair(nums[i],i));
        }
    }
        return ans;
    }
};