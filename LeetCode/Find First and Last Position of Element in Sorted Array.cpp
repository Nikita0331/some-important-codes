class Solution {
public:
int fs(vector<int>& arr, int n, int k) {
        int l=0,h=n-1;
        int res=-1;
        while(l<=h){
            int mid=l+(h-l)/2;
            if(arr[mid]==k){
                res=mid;
                h=mid-1;
            } 
            else if(arr[mid]<k){
                l=mid+1;
            }
            else{
                h=mid-1;
            }
        }
        return res;
    }
int ls(vector<int>& arr,int n,int k)
{
    int l=0,h=n-1;
        int res=-1;
        while(l<=h){
            int mid=l+(h-l)/2;
            if(arr[mid]==k){
                res=mid;
                l=mid+1;
            } 
            else if(arr[mid]<k){
                l=mid+1;
            }
            else{
                h=mid-1;
            }
        }
        return res;
}
    vector<int> searchRange(vector<int>& nums, int target) {
        int k=fs(nums,nums.size(),target);
        int n=ls(nums,nums.size(),target);
        return {k,n};
    }
};

