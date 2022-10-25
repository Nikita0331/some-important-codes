// Longest Common Subsequence
#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
int dp[105][105];

int longest_commom_subsequence(int i,int j,string s1,string s2){
    if(i<=0||j<=0){                                  // Base condition
        return 0;
    }
    if(dp[i][j]!=-1){                               // if already solved the case directly return the solution
        return dp[i][j];
    }

    int ans=0;

    ans = max(ans,longest_commom_subsequence(i-1,j,s1,s2));                
    ans = max(ans,longest_commom_subsequence(i,j-1,s1,s2));
    ans = max(ans,longest_commom_subsequence(i-1,j-1,s1,s2)+ (s1[i-1]==s2[j-1])) ;

    return dp[i][j]=ans;

}
int main(){
    memset(dp,-1,sizeof(dp));                    // initializing dp value by -1
    int t;
    cin>>t;
    while(t--){
        string test_case1,test_case2;
        cin>>test_case1>>test_case2;

        cout<<longest_commom_subsequence(test_case1.length(),test_case2.length(),test_case1,test_case2);
    }
}

// Time complexity : O(n*m)
// n and m are length of strings
