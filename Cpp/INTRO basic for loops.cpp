#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    
    int a,b;
    scanf("%d %d", &a, &b);

    string sDict[10] = {"one\n", "two\n", "three\n", "four\n", "five\n", "six\n", "seven\n", "eight\n", "nine\n"};
    
    for (int i = a; i <= b; i++){
        if (i < 10){
            cout << sDict[i-1];
        } else if (i % 2 == 0){
            cout << "even\n";            
        } else {
            cout << "odd\n";
        }
    }
    return 0;  
}