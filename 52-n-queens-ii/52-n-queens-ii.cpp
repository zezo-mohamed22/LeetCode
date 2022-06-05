class Solution {
public:
    vector<bool>vis,vis_right,vis_left; 
    int n = 8, mx = 0;
    int cnt = 0 ; 
void print_Nqueens(int r)
{
    if (r == n)
    {
        cnt++; 
        return;
    }
    for (int i = 0; i < n; i++)
    {
        if (!vis[i] && !vis_left[i + r] && !vis_right[n + r - i])
        {
            vis_right[n + r - i] = vis[i] = vis_left[i + r] = 1; // mark
            print_Nqueens(r + 1);
            vis_right[n + r - i] = vis[i] = vis_left[i + r] = 0;
        }
    }
}
    int totalNQueens(int x) {
            n=x;
    vis=vis_right=vis_left=vector<bool>(2*22+1);
    print_Nqueens(0);

        return cnt;
    }
};