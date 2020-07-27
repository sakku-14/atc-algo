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
