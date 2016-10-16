//https://www.hackerrank.com/challenges/c-tutorial-conditional-if-else

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
   int n;
   cin >> n;
   int nDict[10] = {1,2,3,4,5,6,7,8,9,10};
   string sDict[10] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "Greater than 9"};
   if (n < 10){
       cout << sDict[n-1];
   } else {
       cout << sDict[9];
   }
   return 0;
}