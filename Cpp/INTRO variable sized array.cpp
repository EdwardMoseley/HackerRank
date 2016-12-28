#include <iostream>

using namespace std;
int main(){
    int n, q;
    /*
    *scan in:
    *n array entries
    *q quaries
    * format: %d %d
    */

    scanf("%d %d\n", &n, &q);//n is size of array or arrays, q is # of quaries

    int **arr = new int *[n]; //int** arr is a pointer of pointers of size n   

    for (int i = 0; i < n; ++i){//loop through lines of input to populate array  
        int k; //Always initialize variables in the narrowest scope possible!
        scanf("%d", &k);//grab k, the number of ints in the line
        arr[i] = new int[k];//create a 2nd dimension at entry i of size k
        for (int j = 0; j < k; ++j){
            scanf("%d", &arr[i][j]);//populate array
        }
    }

    for (int i = 0; i < q; ++i){
        int iHat, jHat = 0;
        scanf("%d %d\n", &iHat, &jHat); //scan for query coordinates
        printf("%d\n", arr[iHat][jHat]); //print results of query
    }

return 0;
}