#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {


    int i, j, k, m, n, medio = 0;

    scanf("%d",&n);

    while(m != n){

        scanf("%d %d %d",&i,&j,&k);


        if((i < j && i > k) || (i > j && i < k) || (i == j && i == k) || (i == j && i < k) || (i == k && i < j)){
            medio = i;
        }
        else if( (j < i && j > k) || (j > i && j < k) || (j == k && j < i)){
            medio = j;
        }
        else{
            medio = k;
        }
        printf("Case %d: %d\n", m + 1, medio);

        m++;
    }

    return 0;
}
