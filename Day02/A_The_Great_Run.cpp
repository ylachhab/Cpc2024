#include <iostream>
#include <vector>
#include <algorithm>

#define LL long long

using namespace std;

void fillPrefixSum(vector<LL> arr, vector<LL> &pref, LL n)
{
    pref.push_back(arr[0]);
    for (int i = 1; i < n; i++)
        pref.push_back(pref[i - 1] + arr[i]);
}

int main() {
    std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

    LL t;
    cin >> t;
    for (LL i = 0; i < t; i++)
    {
        LL n, k;
        cin >> n >> k;
        vector<LL> vec;
        for (LL i = 0; i < n; i++)
        {
            LL a;
            cin >> a;
            vec.push_back(a);
        }
        vector<LL> pref;
        fillPrefixSum(vec, pref, n);
        LL prev = 0;
        if (k == n) {
            prev = pref[n - 1];
        }
        else {
            for (LL i = 0; i < vec.size() && k <= n; i++)
            {
                if (i == 0)
                    prev = pref[k - 1];
                if (i != 0 && pref[k - 1] - pref[i - 1] > prev) {
                    prev = pref[k - 1] - pref[i - 1];
                    k++;
                }
                else {
                    k++;
                }
            }
        }
        cout << prev << '\n';
    }
    
}