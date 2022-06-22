class Solution
{
public:
    vector<int> nextGreaterElement(vector<int> &nums1, vector<int> &nums2)
    {
        unordered_map<int, int> mapping;
        stack<int> st;
        for (int i = nums2.size() - 1; i >= 0; i--)
        {
            while (!st.empty() && st.top() < nums2[i])
            {
                st.pop();
            }

            if (st.empty())
            {
                mapping[nums2[i]] = -1;
            }
            else
            {
                mapping[nums2[i]] = st.top();
            }

            st.push(nums2[i]);
        }

        vector<int> nge;
        for (auto x : nums1)
        {
            nge.push_back(mapping[x]);
        }

        return nge;
    }
};