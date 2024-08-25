#include <iostream>
#include <vector>
#include <algorithm>

#define LL long long

using namespace std;

int main() {
    std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

    LL t;
    cin >> t;
    for (LL i = 0; i < t; i++)
    {
        LL n, k;
        cin >> n >> k;
        bool flag = false;
        for (LL i = 0; i < n; i++)
        {
            LL a;
            cin >> a;
            if (a == k && !flag) {
                flag = true;
                cout << "YES\n";
            }
        }
        if (!flag)
            cout << "NO\n";
    }
}