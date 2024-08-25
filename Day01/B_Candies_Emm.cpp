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
        LL n;
        cin >> n;
        LL pair, unpair;
        pair = unpair = 0;
        for (LL i = 0; i < n; i++)
        {
            LL a;
            cin >> a;
            if (a % 2 == 0)
                pair += a;
            else
                unpair += a;
        }
        if (pair > unpair)
            cout << "YES\n";
        else
            cout << "NO\n";
        
    }
    
}