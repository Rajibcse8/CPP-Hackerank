#include <iostream>
#include <cstdio>

using namespace std;

int max_of_four(int a,int b,int c,int d){
    int mac;
      mac=a>b? mac=a:mac=b;
      mac=mac>c? mac=mac:mac=c;
      mac=mac>d? mac=mac:mac=d;
    return mac;
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    return 0;
}
