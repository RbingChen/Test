#include <stdio.h>

int main() {
    // insert code here...
    printf("Hello, World.....!\n");
    
    int i = 10;
    for(;i>=0;i--){
        printf("%x \n",i);
        
    }
    int sum = 0;
    i=1;
    for(;i<=100;i++){
        sum = sum+i;
    }
    printf("%d \n",sum);
    return 0;
}