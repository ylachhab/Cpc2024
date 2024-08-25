#include <iostream>

#define  LL long long

using namespace std;

int main() {
    std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

    LL n, h;
    cin >> n >> h;

    LL count = 0;
    for (LL i = 0; i < n; i++)
    {
        LL a;
        cin >> a;
        if (a <= h)
            count += 1;
        else
            count += 2;
    }
    cout << count << '\n';
}