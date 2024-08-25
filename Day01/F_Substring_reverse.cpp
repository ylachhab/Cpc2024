#include <iostream>
#include <vector>
#include <algorithm>

#define LL long long

using namespace std;

int main() {
    std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

    string str;
    cin >> str;

    LL i, j;
    cin >> i >> j;
    for (i ; i < j; i++)
    {
        char c = str[i - 1];
        str[i  - 1] = str[j - 1];
        str[j - 1] = c;
        j--;
    }
    
    cout << str << '\n';
}