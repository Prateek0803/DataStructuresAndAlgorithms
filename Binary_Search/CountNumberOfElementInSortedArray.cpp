class Solution{
int bs1(int arr[],int n,int x){
    int ans = -1,low=0,high = n-1;
    while(low <= high){
        int mid = low+(high-low)/2;
        if(arr[mid] == x){
            ans = mid;
            high = mid-1;
        }
        else if(arr[mid] > x){
            high = mid-1;
        }
        else{
            low = mid+1;
        }
    }
    return ans;
}


int bs2(int arr[],int n,int x){
    int ans = -1,low=0,high = n-1;
    while(low <= high){
        int mid = low+(high-low)/2;
        if(arr[mid] == x){
            ans = mid;
            low = mid+1;
        }
        else if(arr[mid] > x){
            high = mid-1;
        }
        else{
            low = mid+1;
        }
    }
    return ans;
}




public: 
    /* if x is present in arr[] then returns the count
        of occurrences of x, otherwise returns 0. */
    int count(int arr[], int n, int x) {
        int ans1 = bs1(arr,n,x);
        int ans2 = bs2(arr,n,x);
        if(ans1 + ans2 <0){
            return 0;
        }
        if(ans1 == ans2){
            return 1;
        }
        
        return ans2-ans1+1;
    }
};