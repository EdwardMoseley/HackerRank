#include <iostream>
#include <string>
using namespace std;

int main() {
   //grab the strings
   string a, b;
   cin >> a; cin >> b;
   
   //grab sizes
   int aSize = a.size();
   int bSize = b.size();
   
   //print sizes
   printf("%d %d\n", aSize, bSize);
   cout << a+b;
   cout << "\n";
   
   int i = 1;//declare counter
   //probably the worst way possible
   while (i < aSize){
       if (i == 1){
           cout << b[0];
       }
   cout << a[i];
   ++i;
   }
   //reset counter and add a space
   i = 1;
   cout << " ";
   while (i < bSize){
       if (i == 1){
           cout << a[0];
       }
   cout << b[i];
   i++;
   }
   return 0;
}