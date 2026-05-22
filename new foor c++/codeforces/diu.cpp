// Shimanto
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<int> both, two, three, other;

        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;

            if (x % 6 == 0) both.push_back(x);
            else if (x % 2 == 0) two.push_back(x);
            else if (x % 3 == 0) three.push_back(x);
            else other.push_back(x);
        }

       
        vector<int> ans;

       
        ans.insert(ans.end(), both.begin(), both.end());
        ans.insert(ans.end(), two.begin(), two.end());
        ans.insert(ans.end(), other.begin(), other.end());
        ans.insert(ans.end(), three.begin(), three.end());

        for (int x : ans) cout << x << " ";
        cout << "\n";
    }
}