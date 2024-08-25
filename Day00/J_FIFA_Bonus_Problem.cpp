#include <iostream>
#include <string>

#define LL long long

using namespace std;

int main() {
    std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

    LL n, k;
    cin >> n >> k;

    LL res = 2022 + int(n / k);
    cout << res << '\n';
}