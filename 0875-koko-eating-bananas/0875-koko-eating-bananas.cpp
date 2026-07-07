class Solution {
public:

    long long fun(vector<int> &piles, int n, int speed)
    {
        long long hours = 0;

        for(int i = 0; i < n; i++)
        {
            hours += (piles[i] + speed - 1) / speed;   
        }

        return hours;
    }

    int minEatingSpeed(vector<int>& piles, int h) {

        int low = 1;
        int high = *max_element(piles.begin(), piles.end());
        int res = high;
        int n = piles.size();

        while(low <= high)
        {
            int guess = low + (high - low) / 2;

            long long hours = fun(piles, n, guess);

            if(hours > h)
            {
                low = guess + 1;
            }
            else
            {
                res = guess;
                high = guess - 1;
            }
        }

        return res;
    }
};