#include<stdio.h>

//define the user defined function of Add()

int sum_digit(int x, int y){
    return x+y;
}

int main(){
    int a , b ,sum;

    //addin inputs
    printf("Enter First Number: ");
    scanf("%d", &a);
    printf("Enter the second Number: ");
    scanf("%d", &b);

    // calling the out function
sum= sum_digit(a,b);

// dispaly the output

printf("sum of two numbers is: %d", sum );

return 0;

}