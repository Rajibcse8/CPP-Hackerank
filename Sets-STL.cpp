#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;



 
   int main() {
      int n;
      set<int> st;
      cin >> n;
      for (int i=0; i<n; i++){
           int x, y;
           cin>>x>>y;
            switch (x){
             case 1:
                st.insert(y);
                break;
             case 2:
                st.erase(y);
                break;
             case 3:
                cout << (st.find(y) == st.end() ? "No" : "Yes") << endl;
                break;
    }
}  
        return 0;

}



