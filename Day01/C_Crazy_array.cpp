#include <iostream>
#include <vector>
#include <algorithm>

#define LL long long

using namespace std;

int main() {
    std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

    LL n;
    cin >> n;
    vector<LL> vec;
    LL res = 0;
    for (LL i = 0; i < n; i++)
    {
        LL x;
        cin >> x;
        if (!vec.empty()) {
            LL ret = vec[vec.size() - 1] - x;
            if (ret > 0) {
                res += ret;
                vec.push_back(x + ret);
            }
            else
                vec.push_back(x);
        }
        else {
            vec.push_back(x);
        }
    }
    cout << res << '\n';
}