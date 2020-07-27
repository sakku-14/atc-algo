#include <stdio.h>

#define N 1000
int main(void){
    int a[10], switched = 1, i = 0;
    scanf("%d %d %d %d %d %d", &a[0], &a[1], &a[2], &a[3], &a[4], &a[5]);

    while(switched != 0){
        switched = 0;
        while(i < 5){
            if(a[i]>a[i+1]){
                int aux = a[i+1];
                a[i+1] = a[i];
                a[i] = aux;
                switched++;
            }
            i++;
        }
        i = 0;
    }

    //checker
    // while(i < 6){
    //     printf("%d\n", a[i]);
    //     i++;
    // }

    printf("%d\n", a[3]);

    return 0;
}
