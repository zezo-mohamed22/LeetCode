public class Solution
{
    public int NumSubarraysWithSum(int[] numbers, int goal)
    {
        Dictionary<int, int> sumfreq = [];
        int cursum = 0, ans = 0;

        for (int i = 0; i < numbers.Length; i++)
        {
            cursum += numbers[i];
            if (cursum == goal)
            {
                ans++;
            }
            if (sumfreq.TryGetValue(cursum - goal, out int counter))
            {
                ans += counter;
            }
            if (sumfreq.TryGetValue(cursum, out int freq))
            {
                sumfreq[cursum] = freq + 1;
            }
            else
            {
                sumfreq[cursum] = 1;
            }
        }
        return ans;
    }
}