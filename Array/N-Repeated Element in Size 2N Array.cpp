class Solution {
public:
    int repeatedNTimes(vector<int>& A) {
        unordered_map<int,int>m;
        
        for(auto x:A){
            m[x]++;
        }
        
        int ans=0;
        for(auto elem:m){
            if(elem.second >= A.size()/2 )
            {
                ans = elem.first;
            }
        }
        return ans;
    }
};