#include <iostream>
#include <map>
#include <algorithm>

#define LL long long

using namespace std;

int main() {
    std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

    LL n, x;
    cin >> n >> x;

    map<LL, LL> mp;
    for (LL i = 0; i < n; i++)
    {
        LL nbr;
        cin >> nbr;
        mp[nbr] = i;
    }

    map<LL, LL>::iterator it = mp.begin();

    while(1) {
        LL ret = x - it->first;
        if (ret > 0) {
            auto it1 = find(mp.begin(), mp.end(), ret);
            if ( it1 != mp.end()) {
                cout << it->second << " " << it1->second << '\n';
                break;
            }
        }
    }

}