class Solution {
public:
    int pivotIndex(vector<int>& nums) {
      int sum = 0;
      int leftsum = 0;
      int rightsum = 0;
      for(int i=0; i<nums.size();i++){
          sum+=nums[i];
      }  
      for(int i=0; i<nums.size();i++){
          sum-=nums[i];      //right sum
          if(sum==leftsum){
              return i;
          }
          leftsum+=nums[i];
      }
      return -1;
    }
};