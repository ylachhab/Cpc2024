#include <iostream>
#include <string>

#define LL long long

using namespace std;

int main() {
    std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

    string ss;
    cin >> ss;
    LL A = 0;
    LL B = 0;
    LL res = 0;
    for (LL i = 0; i < ss.length(); i++)
    {
        if (ss[i] == 'A')
        {
            A += int(ss[i + 1]) - 48;
            i++;
        }
        else if (ss[i] == 'B') {
            B += int(ss[i + 1]) - 48;
            i++;
        }
    
        if (res == 0 && A == 10 && B == 10) {
            res = 1;
        }
        if (res == 1 && A - B == 2) {
            cout << "A\n";
            return (0);
        }
        if (res == 1 && A - B == -2) {
            cout << "B\n";
            return (0);
        }
    }

    if (A > B) {
        cout << "A\n";
    }
    else if (A < B) {
        cout << "B\n";
    }
}
