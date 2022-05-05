class Solution {
public:
    void sortColors(vector<int>& nums) {
        int zero=0,one=0,two=0;
        for(auto n:nums){
            if(n==0)
                zero++;
            else if(n==1)
                one++;
            else
                two++;
        }
        nums.clear();
        nums.insert(nums.end(),zero,0);
        nums.insert(nums.end(),one,1);
        nums.insert(nums.end(),two,2);
    }
};
