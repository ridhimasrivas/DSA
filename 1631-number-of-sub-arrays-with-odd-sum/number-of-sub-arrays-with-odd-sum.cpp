class Solution {
public:
    int numOfSubarrays(vector<int>& arr) {
        int n=arr.size();
        long long total=((long long)n*(n+1)/2);
        //int total=(n/2)*(n+1);
        unordered_map<int,int>mpp;
        mpp[0]++;
        int sum=0;
        int k=2;
        long long ans=0;
        //int ans=0;
        for(int i=0;i<n;i++){
            sum+=arr[i];
            int rem=(((sum%k)+k)%k);
            if(mpp.find(rem)!=mpp.end()){
                ans+=mpp[rem];
            }
            mpp[rem]++;
        }
        const int mod=1e9+7;
        return (total-ans)%mod;
    }
};