#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int> vec = {1,2,3,4,5,6,7,8};
  int index=0;
   for(int &m : vec)
   {   if(index >= vec.size() / 2)
       {
        break;
       }
       swap(m,vec[vec.size()- 1 - index]);

      

       index++;
   }


   for(int x : vec)
   {
     cout << x ;
   }


}