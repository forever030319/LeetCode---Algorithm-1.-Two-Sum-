class Solution {
public:
    vector<int> twoSum(vector<int> &nums, int target){
        int length = nums.size();
        vector<int> result(2);
        int i=0, j;
        for(i=0;i<length-1;i++){
            for(j=i+1;j<length;j++){
                if(nums[i]+nums[j]==target){
                    result[0]=i;
                    result[1]=j;
                    break;
                }
            }
        }
        return result;
    }
};
