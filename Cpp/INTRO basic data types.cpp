// https://www.hackerrank.com/challenges/c-tutorial-basic-data-types

#include <iostream>
#include <cstdio>
using namespace std;
int main() {
    int n;
    long ld;
    long long ll;
    char ch;
    float f;
    double d;
    
    scanf("%d %ld %lld %c %f %lf", &n, &ld, &ll, &ch, &f, &d);
    printf("%d\n%ld\n%lld\n%c\n%f\n%lf", n, ld, ll, ch, f, d);
    return 0;
}