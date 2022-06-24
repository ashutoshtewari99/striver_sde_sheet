class StockSpanner
{
    vector<int> prices;
    vector<int> prevGreater;
    int index;

public:
    StockSpanner()
    {
        index = -1;
    }

    int next(int price)
    {
        prices.push_back(price);
        index++;

        if (index == 0)
        {
            prevGreater.push_back(-1);
        }
        else
        {
            if (prices[index - 1] > prices[index])
            {
                prevGreater.push_back(index - 1);
            }
            else
            {
                int j = prevGreater[index - 1];

                while (j != -1 && prices[j] <= price)
                {
                    j = prevGreater[j];
                }
                prevGreater.push_back(j);
            }
        }

        return index - prevGreater[index];
    }
};