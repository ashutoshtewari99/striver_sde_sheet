#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool check(vector<int> arr, int cows, int dis, int n)
    {
        int lastPlacedCow = arr[0];
        int countCows = 1;

        for (int i = 1; i < n; i++)
        {
            if (arr[i] - lastPlacedCow >= dis)
            {
                countCows++;
                lastPlacedCow = arr[i];
            }
            if (countCows >= cows)
            {
                return true;
            }
        }

        return false;
    }

    int aggresiveCows(vector<int> arr, int n, int cows)
    {
        sort(arr.begin(), arr.end());
        int low = arr[0];
        int res = 0;
        int high = arr[n - 1] - arr[0];

        while (low <= high)
        {
            int mid = low + high >> 1; // x>>y = x/2^y
            bool y = check(arr, cows, mid, n);

            if (y == true)
            {
                res = mid;
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }
        return res;
    }
} ob;

int main()
{
    vector<int> v;
    int cows;
    int n;
    cout << "\nEnter the number of empty stalls: ";
    cin >> n;
    cout << "\nEnter the number of cows: ";
    cin >> cows;
    cout << "\nEnter the positions of stalls that are empty: " << endl;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        v.push_back(val);
    }

    int ans = ob.aggresiveCows(v, n, cows);
    cout << "\nThe largest minimum distance is: " << ans << endl;
    return 0;
}