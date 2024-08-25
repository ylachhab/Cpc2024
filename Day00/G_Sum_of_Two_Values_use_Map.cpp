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
    map<LL, LL> m;
    for (LL i = 0; i < n; i++) {
        LL a;
        cin >> a;
        if (m.find(x - a) != m.end()) {
            cout << m[x - a] + 1 << " " << i + 1 << endl;
            return 0;
        }
        m[a] = i;
    }
    cout << "IMPOSSIBLE" << endl;
    return 0;
}