#include <iostream>
#include <stack>

using namespace std;

int main() {
    std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

    long long t;
    cin >> t;

    stack<long long> stack;
    for (long long i = 0; i < t; i++)
    {
        int p;
        cin >> p;
        if (p == 1) {
            long long nbr;
            cin >> nbr;
            stack.push(nbr);
        }
        else if (p == 2) {
            if (!stack.empty())
                stack.pop();
        }
        else {
            if (!stack.empty())
                cout << stack.top() << '\n';
            else
                cout << "Empty!" << '\n';
        }
    }
}