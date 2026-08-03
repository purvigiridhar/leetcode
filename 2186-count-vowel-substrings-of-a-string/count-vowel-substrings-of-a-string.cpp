class Solution {
private:
    bool helper(char c)
    {
        return (c=='a' || c=='e' || c=='i' || c=='o' || c=='u');
    }
public:
    int countVowelSubstrings(string s) {
        int len = s.length();
        int total = 0;
        for(int i=0;i<len;++i)
        {
            std::unordered_set<char> seen_vowels;
            for(int j=i;j<len;++j)
            {
                if(!helper(s[j]))
                    break;
                else
                {
                    seen_vowels.insert(s[j]);
                }
                if(seen_vowels.size()==5)
                    ++total;
            }
        }
        return total;
    }
};