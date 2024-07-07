class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> mpp;
        int n = nums.size();
        for(int i = 0 ; i<n ; i++)
            {
                int num = nums[i];
                int neededmore = target - num;
                if (mpp.find(neededmore) != mpp.end())
                    {return{mpp[neededmore],i};}
                mpp[num] = i;
            }
        return{-1 , -1};
    }
};