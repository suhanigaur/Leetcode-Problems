class Solution {
public:
int rev(int i){
        int sum=0;
        while(i!=0){
            sum+=(i%10);
            i/=10;
            if(i!=0)sum*=10;
        }return sum;
    }
    int countNicePairs(vector<int>& nums) {
        unordered_map<long long,long long>count;

        long long cnt=0;

        for(int i=0;i<nums.size();i++){
        nums[i]=(nums[i]-rev(nums[i]));
        count[nums[i]]++;}

        for(auto it:count){
            if(it.second>=2)cnt+=((it.second*(it.second-1))/2);
        }
        
        return cnt%1000000007;
    }
};