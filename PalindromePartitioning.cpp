class Solution
{
public:
    bool isPalindrome(string s, int start, int end)
    {
        while (start <= end)
        {
            if (s[start++] != s[end--])
            {
                return false;
            }
        }
        return true;
    }

    void func(int ind, string s, vector<vector<string>> &res, vector<string> partitions)
    {
        if (ind == s.size())
        {
            res.push_back(partitions);
        }

        for (int i = ind; i < s.size(); i++)
        {
            if (isPalindrome(s, ind, i))
            {
                partitions.push_back(s.substr(ind, i - ind + 1));
                func(i + 1, s, res, partitions);
                partitions.pop_back();
            }
        }
    }

    vector<vector<string>> partition(string s)
    {
        vector<vector<string>> res;
        vector<string> partitions;
        func(0, s, res, partitions);
        return res;
    }
};