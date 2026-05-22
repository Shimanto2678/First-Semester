#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> vec1, vec2, vec3;

    for(int i = 1; i <= n; i++) {
        int k;
        cin >> k;

        if(k == 1)
        { vec1.push_back(i);}
        else if(k == 2)
        { vec2.push_back(i);}
        else if(k == 3) 
        {vec3.push_back(i);}
    }

    int ma = min({vec1.size(), vec2.size(), vec3.size()});

    cout << ma << endl;

    for(int i = 0; i < ma; i++) {
        cout << vec1[i] << " " 
             << vec2[i] << " " 
             << vec3[i] << endl;
    }
}