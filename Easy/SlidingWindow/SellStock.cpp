#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
	int maxProfit(vector<int> &prices)
	{

		int buy = INT_MAX;
		int profit = 0;

		for (int i = 0; i < prices.size(); i++)
		{
			if (prices[i] < buy)
			{
				buy = prices[i];
			}
			else
			{
 				int potentialProfit = prices[i] - buy;

 				if (potentialProfit > profit)
				{
					profit = potentialProfit;
				}
			}
		}

		if (profit > 0)
		{
			return profit;
		}
		else
		{
			return 0;
		}
	}
};

int main()
{
	vector<int> prices = {10,1,5,6,7,1};
	Solution s;
	cout << s.maxProfit(prices);
}

/*
int maxi=INT_MIN, mini=INT_MAX, profit=0;
		int half= prices.size()/2;

		for(int i=0; i<half; i++){
			mini = min(mini,prices[i]);
		}
		for (int j=half; j< prices.size(); j++)
		{
			maxi = max(maxi,prices[j]);
		}

		// cout<<maxi<<" ";
		// cout<<mini<<endl;
		profit = maxi-mini;
		if (profit > 0)
		{
			return profit;
		}
		else{
			return 0;
		}
*/