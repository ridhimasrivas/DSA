class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        unordered_map<int ,int>map;
        vector<int>temp=arr;
        sort(temp.begin(),temp.end());
        int rank=1;
        for(int  x:temp)
        {
            if(map.find(x)==map.end())
            map[x]=rank++;
        }
        for (int i = 0; i < arr.size(); i++) {
            arr[i] = map[arr[i]];
        }

        return arr;
    }
};