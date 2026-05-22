// SS Shimanto

#include <bits/stdc++.h>
using namespace std;
#define lli long long int
#define sorta(a,n) sort(a, a + n)
#define sortd(a,n) sort(a, a + n, greater<int>());
#define sortveca(v) sort(v.begin(),v.end())
#define sortvecd(v) sort(v.rbegin(),rend())
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define le(i,a,b) for(int i =a;i<=b;i++)
#define vd(vec) vector<ll>vec;
#define vin(v,j) v.push_back(j)
#define ls(i,a,b) for(int i=a;i<b;i++)
#define vprint(v) for(int j=0; j< v.size(); j++) { cout<< v[j]<<" ";}
#define tcase int n; cin>>n; for(int q=0; q<n; q++)
#define tarray int n; cin>>n; int arr[n];    for(int q=0 ; q<n; q++){cin>>arr[q];}
 
 
void copymain() {

  string s;
  cin>>s;
  
    string last = "";
    ls(j,0,s.size())
    {   char m;
          m=s[j];

           m = tolower(m);
   if(m == 'a' || m == 'e' || m=='i'|| m=='o'||m=='u'||m=='y')
   {
      continue;
   }
   else
   {
       last+='.';
       last+=m;
   }

    }

    cout<<last;
     
         

}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
   	copymain();
    
 
 return 0;
}