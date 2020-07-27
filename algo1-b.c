#include <stdio.h>
int main(void){
    int num, i = 1;
    scanf("%d", &num);

    int container[num];

    scanf("%d", &container[0]);

    while(i < num){
        scanf("%d", &container[i]);
        if(container[i-1] == container[i]){
            printf("stay\n");
        } else if(container[i-1] >= container[i]){
            printf("down %d\n", container[i-1]-container[i]);
        } else {
            printf("up %d\n", container[i]-container[i-1]);
        }

        i++;
    }
    i = 0;

    return 0;
}
