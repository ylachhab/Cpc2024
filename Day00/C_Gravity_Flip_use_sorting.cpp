#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> arr;
    for (size_t i = 0; i < n; i++)
    {
        int nbr;
        cin >> nbr;
        arr.push_back(nbr);
    }
    sort(arr.begin(), arr.end());
    for (auto x : arr)
        cout << x << " ";
    cout << '\n';
}