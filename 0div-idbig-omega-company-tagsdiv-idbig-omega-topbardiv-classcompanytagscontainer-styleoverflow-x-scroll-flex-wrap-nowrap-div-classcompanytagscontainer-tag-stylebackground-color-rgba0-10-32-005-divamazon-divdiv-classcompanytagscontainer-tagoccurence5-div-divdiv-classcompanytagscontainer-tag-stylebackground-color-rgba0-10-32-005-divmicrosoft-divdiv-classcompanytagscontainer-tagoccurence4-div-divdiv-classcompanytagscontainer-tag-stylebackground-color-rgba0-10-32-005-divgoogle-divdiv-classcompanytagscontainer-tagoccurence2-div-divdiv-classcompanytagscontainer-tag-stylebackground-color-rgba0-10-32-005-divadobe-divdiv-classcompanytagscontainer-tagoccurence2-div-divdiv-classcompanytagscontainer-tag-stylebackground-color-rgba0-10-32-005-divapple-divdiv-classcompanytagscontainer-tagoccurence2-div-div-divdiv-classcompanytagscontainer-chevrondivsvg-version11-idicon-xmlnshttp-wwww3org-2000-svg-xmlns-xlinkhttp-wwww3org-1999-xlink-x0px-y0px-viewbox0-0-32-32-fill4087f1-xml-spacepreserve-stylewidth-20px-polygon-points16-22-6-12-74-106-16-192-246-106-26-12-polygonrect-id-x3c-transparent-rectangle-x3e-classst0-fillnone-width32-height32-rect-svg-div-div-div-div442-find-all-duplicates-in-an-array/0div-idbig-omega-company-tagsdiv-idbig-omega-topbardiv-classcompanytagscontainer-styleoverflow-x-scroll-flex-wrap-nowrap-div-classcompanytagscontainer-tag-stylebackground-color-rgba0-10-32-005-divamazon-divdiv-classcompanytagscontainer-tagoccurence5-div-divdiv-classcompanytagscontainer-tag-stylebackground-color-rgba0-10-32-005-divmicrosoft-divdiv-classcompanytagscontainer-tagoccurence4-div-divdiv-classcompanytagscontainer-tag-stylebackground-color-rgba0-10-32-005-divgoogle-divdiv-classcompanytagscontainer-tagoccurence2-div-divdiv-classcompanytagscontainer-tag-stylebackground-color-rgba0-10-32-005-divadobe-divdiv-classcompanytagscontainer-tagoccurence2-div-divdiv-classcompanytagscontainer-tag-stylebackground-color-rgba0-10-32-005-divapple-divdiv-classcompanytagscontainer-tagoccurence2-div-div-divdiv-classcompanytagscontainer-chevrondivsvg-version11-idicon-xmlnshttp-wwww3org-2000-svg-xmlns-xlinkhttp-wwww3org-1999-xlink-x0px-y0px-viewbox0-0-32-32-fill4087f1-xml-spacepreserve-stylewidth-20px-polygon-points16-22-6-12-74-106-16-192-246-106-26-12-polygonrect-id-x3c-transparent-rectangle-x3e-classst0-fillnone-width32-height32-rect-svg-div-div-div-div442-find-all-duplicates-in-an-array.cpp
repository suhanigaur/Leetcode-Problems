class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        int i;
        unordered_map<int,int>count;
        vector<int>arr;
        for(i=0;i<nums.size();i++){
            count[nums[i]]++;
        }
        sort(nums.begin(),nums.end());
        for(i=0;i<nums.size()-1;i++){
            if(nums[i]==nums[i+1])
            nums[i]=-1;
        }
        for(i=0;i<nums.size();i++){
            if(count[nums[i]]==2)
            arr.push_back(nums[i]);
        }return arr;
    }
};
