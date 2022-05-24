class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int num;
        for(int i=0;i<nums.size();i++){ 
            int n=nums[abs(nums[i])];
            if(n<0){
                num=nums[i];
                break;
            }
            nums[abs(nums[i])]=-nums[abs(nums[i])];
        }
        for(int i=0;i<nums.size();i++)
            cout<<nums[i];
        return abs(num);
    }
};
