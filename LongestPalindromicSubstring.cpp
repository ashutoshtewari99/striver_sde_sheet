#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int checkPalindrome(string s, int p1, int p2, int &startCurr, int &endCurr)
    {
        int count = 0;
        if (p1 == p2)
        {
            count++;
            p1--;
            p2++;
        }

        while (p1 >= 0 || p2 < s.length())
        {
            if (s[p1] != s[p2])
            {
                startCurr = p1 + 1;
                endCurr = p2 - 1;
                return count;
            }
            else
            {
                p1--;
                p2++;
                count += 2;
            }
        }

        startCurr = p1 + 1;
        endCurr = p2 - 1;
        return count;
    }

    string longestPalindrome(string s)
    {
        int startCurr = -1;
        int endCurr = -1;
        int len = 0;
        int startFin = -1;
        int endFin = -1;

        for (int i = 0; i < s.length(); i++)
        {
            int x = checkPalindrome(s, i, i, startCurr, endCurr);

            if (x > len)
            {
                len = x;
                startFin = startCurr;
                endFin = endCurr;
            }

            int y = checkPalindrome(s, i, i + 1, startCurr, endCurr);

            if (y > len)
            {
                len = y;
                startFin = startCurr;
                endFin = endCurr;
            }
        }

        return s.substr(startFin, endFin - startFin + 1);
    }
}bb;

int main()
{
    string s=bb.longestPalindrome("cbbd");
    cout<<s;
 return 0;
}