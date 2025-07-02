#include<algorithm>
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> hshset;
        int n=nums.size();
        int sum=0;
        for(int i=0;i<n-1;i++){
            set<int> range;
            for(int j=i+1;j<n;j++){
                int third=-(nums[i]+nums[j]);
                if(range.find(third)!=range.end()){
                    vector<int> temp={nums[i],nums[j],third};
                    sort(temp.begin(),temp.end());
                    hshset.push_back(temp);
                }
                range.insert(nums[j]);
            }
        }
        return hshset;   
    }
};