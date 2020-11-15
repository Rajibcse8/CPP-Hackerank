 #include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
     
   vector<int>myv;

   int n,data;
   cin>>n;
   for(int i=0;i<n;i++){
       cin>>data;
       myv.push_back(data);
   }
   sort(myv.begin(),myv.end());
   for(int i=0;i<n;i++)
       cout<<myv[i]<<" ";
   return 0;
}
 
 
 
