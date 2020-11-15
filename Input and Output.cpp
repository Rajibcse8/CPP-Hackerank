#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
  int N,sum=0;
    for(int i=1;i<=3;i++)
    {
        scanf("%d",&N);
        sum+=N;
    }
    printf("%d",sum);
    return 0;
}
