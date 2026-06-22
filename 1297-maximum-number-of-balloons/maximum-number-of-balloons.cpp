class Solution {
public:
    int maxNumberOfBalloons(string text) {
        unordered_map<char ,int>mp;
        for( char str:text)
        {
            if(str=='b'||str=='a'||str=='l'||str=='o'||str=='n')
            mp[str]++;
        }
        int b = mp['b'];
        int a = mp['a'];
        int l = mp['l'] / 2;
        int o = mp['o'] / 2;
        int n = mp['n'];
        return min({b, a, l, o, n});

    }
};