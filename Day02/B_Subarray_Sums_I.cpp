#include <iostream>
#include <vector>
#include <algorithm>
 
#define LL long long
 
using namespace std;
 
int main() {
    std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);
 
    LL n, x;
    cin >> n >> x;
    vector<LL> vec;
    LL count = 0;
    for (LL i = 0; i < n; i++)
    {
        LL a;
        cin >> a;
        vec.push_back(a);
    }
    LL sum = 0;
    LL start = 0;
    for (LL i = 0; i < n; i++)
    {
        sum += vec[i];
        while (sum > x && start <= i) {
            sum -= vec[start];
            start++;
        }
        if (sum == x)
            count++;
    }
    cout << count << '\n';
}
