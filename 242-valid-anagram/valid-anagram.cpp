class Solution {
public:
    bool isAnagram(string s, string t) {
        int S = s.size(), T = t.size();
        if(S!=T)    return false;
        unordered_map<char,int>hashmap_S;
        unordered_map<char,int>hashmap_T;
        for(int i=0;i<S;i++)
        {
            hashmap_S[s[i]]++;
            hashmap_T[t[i]]++;
        }
        return hashmap_S==hashmap_T;
    }
};