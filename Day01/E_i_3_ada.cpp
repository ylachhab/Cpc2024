#include <iostream>
#include <vector>
#include <algorithm>

#define LL long long

using namespace std;

int main() {
    std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

    string n;
    cin >> n;
    LL count = 1;
    LL ret = 1;
    for (LL i = 0; i < n.length(); i++)
    {
        if ( i + 1 < n.length() &&  n[i] == n[i + 1])
            count++;
        else
            count = 1;
        ret = max(ret, count);
    }
    cout << ret << '\n';
}