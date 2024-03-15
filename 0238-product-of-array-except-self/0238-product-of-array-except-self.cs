public class Solution
{
    public int[] ProductExceptSelf(int[] nums)
    {
        int[] pref = new int[nums.Length];
        int[] suff = new int[nums.Length];
        int[] arr = new int[nums.Length];

        int val = 1;
        for (int i = 0; i < pref.Length; i++)
        {
            pref[i] = val * nums[i];
            val *= nums[i];
        }
        val = 1;
        for (int i = nums.Length - 1; i >= 0; i--)
        {
            suff[i] = val * nums[i];
            val *= nums[i];
        }
        for (int i = 0; i < nums.Length; i++)
        {
            if (i == 0)
            {
                    arr[i] = suff[i+1];
            }
            else if (i == nums.Length - 1) 
            {
                    arr[i] = pref[i-1];
            }
            else
            {
                arr[i] = pref[i - 1] * suff[i + 1];
            }
        }
        return arr;
    }
}