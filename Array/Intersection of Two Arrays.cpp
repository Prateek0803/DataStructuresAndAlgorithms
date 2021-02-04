class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        
        unordered_set<int>s(nums1.begin(),nums1.end());
        unordered_set<int>res;
        for(int x:nums2){
            if(s.find(x)!= s.end())
            {
                res.insert(x);
            }
        }
        vector<int>ans;
        
        for(int e:res)
        {
            ans.push_back(e);
        }
        
        return ans;
    }
};