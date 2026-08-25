#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--)
    {
        int n,x;
        cin >> n >> x;
        int ans = 0;
        int prev = 0;
        for(int i=0; i<n; i++)
        {
            int now;
            cin >> now;
            int gap = now - prev;
            if(gap > ans)
            {
                ans = gap;
            }
            prev = now;
        }
        int lst = x - prev;
        if(lst * 2 > ans)
        {
            ans = lst * 2;
        }
        cout << ans << endl;
    }
    return 0;
}