#include <stdio.h>

int checkNumbers(int N1){
    int i , sum = 0;
    

    for(i = 1; i < N1; i++){
        if(N1%i == 0){
            sum++;
        }
    }
    if(sum == 1){
        printf("true");
        printf("\n");
        printf("%d",N1);
    }
    else{

        printf("false");
        printf("\n");
        printf("%d",N1);
    }
}
int main() {
   int number1;
   printf("please enter the number1 : ");
   scanf("%d",&number1);
   
   checkNumbers(number1);

    return 0;
} 
