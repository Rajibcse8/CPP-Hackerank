#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
	
    stringstream Stringstrm(str);  
    vector<int> onlyint;
    char ch;
    int value;
    while(Stringstrm >> value) {      
     onlyint.push_back(value);
     Stringstrm >> ch;           
}

return onlyint;


}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}
