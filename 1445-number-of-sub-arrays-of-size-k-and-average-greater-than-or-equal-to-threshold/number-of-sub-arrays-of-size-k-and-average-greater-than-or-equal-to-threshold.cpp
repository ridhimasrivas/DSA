class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
      int low = 0;                       
        int high = k-1;
        int sum = 0;
        int count = 0;
    
        for(int i=0; i<k; i++){               
            sum += arr[i];
        }

        while(high<arr.size()){            
            if(sum>=threshold*k){
                count++;   
            }
            high++;
            low++;
            if(high<arr.size()){ 
                sum -= arr[low-1];
                sum += arr[high];
            }
            
        }
        return count;
    }
};