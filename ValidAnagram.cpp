class Solution {
public:
    bool isAnagram(string s, string t) 
    {
        if(s.length()!=t.length())
            return false;
        
        vector<int>sf(26,0); 
        vector<int>tf(26,0); 
        
        for(auto c:s) sf[c-'a']++; 
        for(auto c:t) tf[c-'a']++;
//c-'a' calculates the alphabets's position from a to z
        
        for(int i=0;i<26;i++)
        {
            if(sf[i]!=0)
            {
                if(sf[i]!=tf[i])
                    return false;
            }
        }
        return true;
    }
};