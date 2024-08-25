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

    LL n, q;
    cin >> n >> q;
    vector<LL> vec;
    for (LL i = 0; i < n; i++)
    {
        LL x;
        cin >> x;
        vec.push_back(x);
    }
    vector<LL> pref;
    fillPrefixSum(vec, pref, n);
    for (LL i = 0; i < q; i++)
    {
        LL a, b;
        cin >> a >> b;
        if (a == 1)
            cout <<  pref[b - 1]<< '\n';
        else
            cout <<  pref[b - 1]  - pref[a - 2]<< '\n';
    }
    
}