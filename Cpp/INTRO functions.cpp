#include <iostream>
#include <cstdio>
using namespace std;

int max_of_four(int a, int b, int c, int d){
    int tmp = 0;
    int arr[4] = {a,b,c,d};
    int count = 0;
    while (count < 4){
        if (arr[count] > tmp){
            tmp = arr[count];
            count = count + 1;
        } else {
            count = count + 1;
        }
    }
    return tmp;
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    return 0;
}