#include <iostream>

using namespace std;
    int main(){

        int n, q;

        /*
        *scan in:
        *n array entries
        *q quaries
        */

        int arr[100000][100000] = {-1}; //initialize an array, larger than 10^5

        scanf("%d %d\n", &n, &q); //n is size of array, q is # of quaries

        for (int i = 0; i < n; ++i){ //loop through lines of input to populate array
        int c, y = 0; //initialize to zero at the start of each line
            while((c = getchar()) != '\n'){ //readline
                if(c != ' '){ //pass spaces
                    arr[i][y] = c; //place integer into array
                    ++y;
                }
            }
        }

        for (int i = 0; i < q; ++i){
            int iHat, jHat = 0;
            scanf("%d %d\n", &iHat, &jHat); //scan for coordinates
            printf("%d\n", arr[iHat][jHat]); //Segmentation fault occurs here, why?
        }
        return 0;
    }