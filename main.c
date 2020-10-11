#include <stdio.h>

int main() {
    int num = 0;
    printf("请输入10进制数字:");
    scanf("%d",&num);
    int temp = 0,i = 1,sang,yu;
    while(1){
        sang = num/2;
        yu = num%2;
        temp = yu*i+temp;
        i = i*10;
        num = sang;
        if(num<2){
            temp = num*i+temp;
            printf("%d",temp);
            break;
        }
    }
    return 0;
}
