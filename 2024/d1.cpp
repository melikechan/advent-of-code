#include <algorithm>
#include <cmath>
#include <iostream>
#include <vector>

void solve()
{
    std::vector<int> first, second;

    int current_f, current_s;

    while ((std::cin >> current_f) && (std::cin >> current_s))
    {
        first.push_back(current_f);
        second.push_back(current_s);
    }

    std::sort(first.begin(), first.end());
    std::sort(second.begin(), second.end());

    long long ans = 0;

    for (int i = 0; i < std::min(first.size(), second.size()); i++)
    {
        ans += (std::llabs(first[i] - second[i]));
    }

    std::cout << ans;
}

int main(void)
{
    solve();
    return 0;
}