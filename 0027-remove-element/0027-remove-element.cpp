class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k = 0;
        for(int i = 0; i< nums.size(); i++){
            if(nums[i] != val){
                nums[k] = nums[i];
                k++;
            }
        }
        for(int i=k; i< nums.size(); i++){
            nums[i] = 0;
        }
        return k;
    }
};