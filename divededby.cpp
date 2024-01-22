#include <stdio.h>

int checkNumbers(int N1,int N2){
    int i,R , sum = 0;
    R = N1 / N2;

    for(i = 1; i < R; i++){
        if(R%i == 0){
            sum++;
        }
    }
    if(sum == 1){
        printf("true");
        printf("\n");
        printf("%d",R);
    }
    else{

        printf("false");
        printf("\n");
        printf("%d",R);
    }
}
int main() {
   int number1,number2;
   printf("please enter the number1 : ");
   scanf("%d",&number1);
   printf("please enter the number2 : ");
   scanf("%d",&number2);
   
   checkNumbers(number1,number2);

    return 0;
}
