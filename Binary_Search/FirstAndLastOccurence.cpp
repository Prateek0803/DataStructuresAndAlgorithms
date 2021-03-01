class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
       if(nums.empty())
        {
            return {-1,-1};
        }
        int low=0,high=nums.size()-1,start=-1,end=-1;
        if(nums[0]==target)
        {
            start=0;
        }
        if(nums[nums.size()-1]==target)
        {
            end=nums.size()-1;
        }
        if(start==-1)
        {
            while(low<=high)
            {
                int mid=low+(high-low)/2;
                if(mid>0 && nums[mid]==target && nums[mid-1]!=target)
                {
                    start=mid;
                    break;
                }
                if(nums[mid]>=target)
                {
                    high=mid-1;
                }
                else
                {
                    low=mid+1;
                }
            }
        }
        if(end==-1)
        {
            low=0,high=nums.size()-1;
            while(low<=high)
            {
                int mid=low+(high-low)/2;
                if(mid<nums.size()-1 && nums[mid]==target && nums[mid+1]!=target)
                {
                    end=mid;
                    break;
                }
                if(nums[mid]<=target)
                {
                    low=mid+1;
                }
                else
                {
                    high=mid-1;
                }
            }
        }
        return {start,end};
    }
};