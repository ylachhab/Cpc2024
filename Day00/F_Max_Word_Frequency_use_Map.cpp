#include <iostream>
#include <map>

#define LL long long

using namespace std;

int main() {
    std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

    LL n;
    cin >> n;

    map<string, LL> mp;
    for (LL i = 0; i < n; i++)
    {
        string str;
        cin >> str;
        mp[str]++;
    }
    map<string, LL>::iterator it = mp.begin();
    string retKey = "";
    LL retValue = 0;
    while (it != mp.end())
    {
        if (it->second >= retValue) {
            retKey = it->first;
            retValue = it->second;
        }
        it++;
    }

    cout << retKey << " " << retValue << '\n';
}