#include <bits/stdc++.h>

using namespace std;

int minimumLoss(vector<long long> prices)
{
    int n = prices.size();

    vector<pair<long long, int>> priceWithYear;

    for (int i = 0; i < n; ++i)
    {
        priceWithYear.push_back({prices[i], i});
    }

    sort(priceWithYear.begin(), priceWithYear.end());

    long long minLoss = LLONG_MAX;

    for (int i = 1; i < n; ++i)
    {
        long long currentPrice = priceWithYear[i].first;

        long long previousPrice = priceWithYear[i - 1].first;

        int currentYear = priceWithYear[i].second;

        int previousYear = priceWithYear[i - 1].second;

        if (currentYear < previousYear)
        {

            long long loss = currentPrice - previousPrice;

            minLoss = min(minLoss, loss);
        }
    }

    return minLoss;
}

int main()
{
    int n;
    cin >> n;

    vector<long long> prices(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> prices[i];
    }

    cout << minimumLoss(prices) << endl;

    return 0;
}
