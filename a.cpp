#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> my_array;
        vector<int> frq(n);
        for(int i = 0; i < n; i++) {
            int a;
            cin >> a;
            my_array.push_back(a);
        }
        frq[0] = n;
        frq[n - 1] = n;
        for(int i = 1; i < n - 1; i++) 
            frq[i] = (frq[i - 1] - i) + n - i;
        int ans = (n* (n + 1) * (2 * n +1) / 6 + n * (n + 1) / 2) / 2;

        for (int i = 0; i < n; i++)
            if (my_array[i] == 0)
                ans += frq[i];
        cout << ans << '\n';
    }
    return 0;
}