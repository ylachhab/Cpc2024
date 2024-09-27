#include <iostream>
#include <vector>
#include <map>
#include <vector>
#include <algorithm>
// #include <bits/stdc++.h>
 
#define LL long long
 
using namespace std;
 
int main() {
    std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

    LL n, k;
    cin >> n >> k;
    vector<LL> vec;
    for (LL i = 0; i < n; i++)
    {
        LL x;
        cin >> x; 
        vec.push_back(x);
    }

    for (LL i = 0; i < n; i++)
    {
        vector<LL> ret;
        if (k + i <= n) {
            for (LL j = i; j < k + i && j < n; j++)
            {
                ret.push_back(vec[j]);
            }
            sort(ret.begin(), ret.end());
            cout << ret[k / 2] << ' ';
        }
        // map<LL, LL> ret;
        // for (LL j = i; j < k + i && j < n; j++)
        // {
        //     ret[vec[j]]++;
        // }
         
        // std::map<LL, LL>::size_type size = ret.size();
        // std::map<LL, LL>::size_type middleIndex = ret.size() / 2;
        // std::map<LL, LL>::iterator it = ret.begin();
        // for (std::map<LL, LL>::size_type i = 0; i < middleIndex; ++i) {
        //     ++it;
        // }
        // cout << it->first << " ";
    }
    cout << '\n';
} 