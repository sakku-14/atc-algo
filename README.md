第一回　アルゴ　A問題

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define N 10

int main(void){
    char str[N];
    int container = 0, ans, n = 0;
    
    scanf("%s", str);
    while(str[n] != '\0'){
        if(str[n]-'0' >= 0 && str[n]-'0' <= 9 ){
            container = 10 * container + (str[n] - '0');
        } else {
            printf("error\n");
            exit(0);
        }
        n++;
    }
    ans = container * 2;
    
    printf("%d\n", ans);
    
    return 0;
}

B問題
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
