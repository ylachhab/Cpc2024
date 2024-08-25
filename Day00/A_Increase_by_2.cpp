/*
The sequence of integers is given. Increase each its non-negative element by
2
2.
Input
The first line contains the number of elements
𝑛

(
𝑛
≤
100
)
n (n≤100). The second line contains the sequence of integers, with each element not exceeding
100
100 in absolute value.
Output
Print
𝑛
n integers in a single line --- the new elements of the sequence, in their original order.
Example
Inputcopy	Outputcopy
4
1 2 3 -4
3 4 5 -4


*/



#include <iostream>


using namespace std;

int main() {
    std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

    int n;
    cin >> n;
    for (long long i = 0; i < n; i++)
    {
        long long b;
        cin >> b;
        if (b >= 0)
            cout << b + 2 << ' ';
        else {
            cout << b << ' ';
        }
    }
    cout << '\n';
}