#include <iostream>
#include <vector>
#include <algorithm> 

using namespace std;

int main() {
    std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

    long long n;
    cin >> n;
    vector<int> arr1;

    for (size_t i = 0; i < n; i++)
    {
        long long nbr;
        cin >> nbr;
        arr1.push_back(nbr);
    }


    long long m;
    cin >> m;
    vector<int> arr2;

    for (size_t i = 0; i < m; i++)
    {
        long long nbr;
        cin >> nbr;
        arr2.push_back(nbr);
    }

    vector<int> ret;
    for (size_t i = 0; i < arr1.size(); i++)
    {
        if (find(arr2.begin(), arr2.end(), arr1[i]) == arr2.end())
            ret.push_back(arr1[i]);
    }

    cout << ret.size() << '\n';
    for (size_t i = 0; i < ret.size(); i++)
    {
        cout << ret[i] << ' ';
    }
    cout << '\n';
}