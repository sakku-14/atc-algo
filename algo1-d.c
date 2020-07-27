#include <stdio.h>
int main(void){
    int num;
    scanf("%d", &num);

    int container[num], counter[num], i=0;
    while(i < num){
        counter[i] = 0;
        i++;
    }
    i=0;

    while(i < num){
        scanf("%d", &container[i]);
        // printf("%d\n", container[i]);       //checker
        counter[container[i]-1]++;
        i++;
    }
    i=0;

    int y=0,x=0;
    while(i < num){
        if(counter[i] == 0)x = i+1;
        if(counter[i] == 2)y = i+1;
        i++;
    }
    if(x==0 && y==0){
        printf("Correct\n");
    } else{
        printf("%d %d\n", y, x);
    }


    return 0;

}
