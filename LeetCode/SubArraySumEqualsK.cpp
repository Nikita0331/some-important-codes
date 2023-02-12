class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        int c=0;
        map<int,int> m;
        m[k]=1;
        int sum=0;
        for(int x :nums){
            sum+=x;
            c+=m[sum];
            m[sum+k]++;
        }
        return c;
       
    }
};