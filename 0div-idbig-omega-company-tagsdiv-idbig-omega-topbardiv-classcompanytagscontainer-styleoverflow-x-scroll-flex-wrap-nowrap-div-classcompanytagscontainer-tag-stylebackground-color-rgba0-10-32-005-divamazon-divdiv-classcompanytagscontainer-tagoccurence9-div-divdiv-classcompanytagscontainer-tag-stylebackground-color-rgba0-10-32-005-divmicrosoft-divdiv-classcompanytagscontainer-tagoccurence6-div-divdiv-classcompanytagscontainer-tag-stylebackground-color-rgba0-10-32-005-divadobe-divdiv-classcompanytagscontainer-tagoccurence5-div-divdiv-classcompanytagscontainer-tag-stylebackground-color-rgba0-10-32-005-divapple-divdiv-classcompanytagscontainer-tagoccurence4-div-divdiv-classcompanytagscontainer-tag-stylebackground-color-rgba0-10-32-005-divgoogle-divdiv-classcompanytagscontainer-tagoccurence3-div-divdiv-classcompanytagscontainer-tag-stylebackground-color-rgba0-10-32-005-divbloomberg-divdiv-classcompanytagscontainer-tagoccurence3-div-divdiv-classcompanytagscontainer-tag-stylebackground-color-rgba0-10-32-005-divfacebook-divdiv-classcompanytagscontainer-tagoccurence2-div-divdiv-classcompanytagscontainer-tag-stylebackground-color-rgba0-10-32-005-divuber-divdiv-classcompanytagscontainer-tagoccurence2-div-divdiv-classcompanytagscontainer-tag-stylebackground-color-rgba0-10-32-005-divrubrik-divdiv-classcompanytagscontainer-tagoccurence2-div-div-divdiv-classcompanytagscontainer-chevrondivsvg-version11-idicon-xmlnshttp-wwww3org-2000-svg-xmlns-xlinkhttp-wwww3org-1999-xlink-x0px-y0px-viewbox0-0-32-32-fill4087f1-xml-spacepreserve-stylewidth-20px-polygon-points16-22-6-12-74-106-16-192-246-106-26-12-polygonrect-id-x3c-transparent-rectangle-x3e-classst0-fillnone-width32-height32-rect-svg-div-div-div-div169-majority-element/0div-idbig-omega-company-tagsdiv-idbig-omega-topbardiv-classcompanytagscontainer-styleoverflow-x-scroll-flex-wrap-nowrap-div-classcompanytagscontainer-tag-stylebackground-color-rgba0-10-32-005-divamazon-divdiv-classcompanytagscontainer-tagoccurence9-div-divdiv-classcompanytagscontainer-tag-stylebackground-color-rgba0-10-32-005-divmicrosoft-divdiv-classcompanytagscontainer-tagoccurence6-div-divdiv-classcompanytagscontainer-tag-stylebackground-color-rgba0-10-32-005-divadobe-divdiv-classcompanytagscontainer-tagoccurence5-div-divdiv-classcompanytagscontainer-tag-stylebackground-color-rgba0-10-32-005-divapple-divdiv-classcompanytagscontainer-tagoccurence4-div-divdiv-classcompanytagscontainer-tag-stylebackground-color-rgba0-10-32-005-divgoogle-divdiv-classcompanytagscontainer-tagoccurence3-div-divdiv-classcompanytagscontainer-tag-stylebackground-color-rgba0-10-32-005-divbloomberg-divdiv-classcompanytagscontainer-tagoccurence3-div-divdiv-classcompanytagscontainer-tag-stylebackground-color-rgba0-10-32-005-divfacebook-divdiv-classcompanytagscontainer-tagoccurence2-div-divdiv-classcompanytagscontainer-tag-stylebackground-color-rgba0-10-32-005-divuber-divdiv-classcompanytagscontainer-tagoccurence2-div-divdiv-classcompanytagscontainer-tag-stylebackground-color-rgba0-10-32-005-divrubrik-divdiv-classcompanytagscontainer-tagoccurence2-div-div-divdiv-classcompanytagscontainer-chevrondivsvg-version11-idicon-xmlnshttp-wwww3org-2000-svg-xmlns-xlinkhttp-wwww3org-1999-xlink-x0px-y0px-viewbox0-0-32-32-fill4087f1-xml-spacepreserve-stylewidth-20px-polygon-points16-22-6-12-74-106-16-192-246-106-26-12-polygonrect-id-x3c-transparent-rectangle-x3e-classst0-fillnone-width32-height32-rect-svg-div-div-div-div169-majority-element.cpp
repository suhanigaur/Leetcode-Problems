class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int>umap;
        int i,temp=0,flag;
    for(i=0;i<nums.size();i++){
        umap[nums[i]]++;
        }
    for(i=0;i<nums.size();i++){
        if(umap[nums[i]]>=temp){
        temp=umap[nums[i]];
        flag=nums[i];}
    }
    return flag;
    }
};