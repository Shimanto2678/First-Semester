#include <bits/stdc++.h>
using namespace std;

int main() {

  int t;
  cin >> t;

  for(int i = 0; i < t; i++)
  {
      int n;
      cin >> n;

      int a[n];

      for(int j = 0; j < n; j++)
      {
          cin >> a[j];
      }

      sort(a, a + n, greater<int>());

      int cnt = 0;

      for(int k = 0; k < n; k++)
      {
          if(a[k] == a[k+1] && k + 1 != n - 1)
          {
              swap(a[k+1], a[k+2]);
              cnt++;
          }
          else if(a[k] == a[k-1] && k - 1 != 0)
          {
              swap(a[k], a[k-1]);
              cnt++;
          }
      }

      if(cnt == 0)
      {
          for(int p = 0; p < n; p++)
          {
              cout << a[p] << " ";
          }
          cout << "\n";
      }
      else
      {
          cout << "-1" << endl;
      }
  }
}