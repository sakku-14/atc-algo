#include <stdio.h>



int main(void){
    int num, times;
    scanf("%d %d", &num, &times);

    int map[num][num], ff[num], counter=0, i=0, j=0, k=0;

    while(i < num){
        while(j < num){
            map[i][j] = 0;
            // printf("%d ", map[i][j]);
            j++;
        }
        // printf("\n");
        j=0;
        i++;
    }
    i=0;

    int order, a, b;
    while(i < times){                   //order=1の時の処理
        scanf("%d %d", &order, &a);
        if(order == 1)scanf("%d", &b);
        if(order == 1){
            map[a-1][b-1] = 1;

        } else if(order == 2){          //order=2の時の処理
            while(j < num){
                if(map[j][a-1] == 1){
                    map[a-1][j] = 1;
                }
                j++;
            }
            j=0;

        } else {                        //order=3の時の処理
            while(k < num){
                if(map[a-1][k] == 1){
                    // printf("a-1:%d k:%d\n", a-1, k);
                    while(j < num){
                        if(map[k][j] == 1){
                            ff[counter] = j;
                            counter++;
                            // map[a-1][j] = 1;
                            // printf("a-1:%d j:%d k:%d\n", a-1,j,k);      //checker
                        }
                        j++;
                    }
                    j=0;
                }
                k++;
            }
            k=0;

            while(counter > 0){
                if(ff[counter-1] == a-1){

                }else{
                    map[a-1][ff[counter-1]] = 1;
                }
                counter--;
            }
            counter=0;

        }
        i++;
    }
    i=0;

    //checker from
    while(i < num){
        while(j < num){
            if(map[i][j] == 0){
                printf("N");
            } else {
                printf("Y");
            }
            // printf("%d ", map[i][j]);
            j++;
        }
        printf("\n");
        j=0;
        i++;
    }
    i=0;
    //checker to



    return 0;
}
