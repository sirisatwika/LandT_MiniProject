#include "calc.h"
int main(){
    operations();
    char ch;
    while(1){
        printf("\n");
        scanf("%c",&ch);
        switch(ch){
            case '+':
                add();
                break;
            case '-':
                sub();
                break;
            case '*':
                mul();
                break;
            case '/':
                divi();
                break;
            case '?':
                mod();
                break;
            case '!':
                fact();
                break;
            case 'p':
                powe();
                break;
            case '^':
                xor();
                break;
            case '>':
                max();
                break;
            case '<':
                min();
                break;
            /*case 'P':
                permutation();
                break;
            case 'C':
                combination();
                break;*/
            case 'e':
                exit(0);
                break;
            default :
                operations();
        }
    }

}
void operations(){
    printf("\nWelcome to C calculator displaying the available option \n\n");
    printf("Enter + symbol for Addition \n");
    printf("Enter - symbol for Subtraction \n");
    printf("Enter * symbol for Multiplication \n");
    printf("Enter / symbol for Division \n");
    printf("Enter ? symbol for Modulus\n");
    printf("Enter p symbol for Power \n");
    printf("Enter ! symbol for Factorial\n");
    printf("Enter ^ symbol for XOR \n");
    printf("Enter > symbol for Max num \n");
    printf("Enter < symbol for Min num\n");
    printf("Enter P symbol for Max num \n");
    printf("Enter C symbol for Min num\n");
    printf("Enter e if you want to exit\n");
}
void add(){
    int n, sum = 0, k=0, num;
    printf("\nEnter the number of elements you want to add:");
    scanf("%d",&n);
    printf("Please enter %d numbers one by one: \n",n);
    while(k<n){
        scanf("%d",&num);
        sum +=num;
        k=k+1;
    }
    printf("Sum of %d numbers = %d \n",n,sum);
}
void sub(){
    int a, b, c = 0;
    printf("\nPlease enter first number  : ");
    scanf("%d", &a);
    printf("Please enter second number : ");
    scanf("%d", &b);
    c = a - b;
    printf("\nDiffrence of the number is = %d\n",c);
}
void mul(){
    int a, b, mul=0;
    printf("\nPlease enter first number : ");
    scanf("%d", &a);
    printf("Please enter second number : ");
    scanf("%d", &b);
    mul=a*b;
    printf("\nMultiplication of entered numbers = %d\n",mul);
}
void divi(){
    int a, b, d=0;
    printf("\nPlease enter first number : ");
    scanf("%d", &a);
    printf("Please enter second number : ");
    scanf("%d", &b);
    d=a/b;
    printf("\nDivision of entered numbers = %d\n",d);
}
void mod(){
    int a, b, d=0;
    printf("\nPlease enter first number : ");
    scanf("%d", &a);
    printf("Please enter second number : ");
    scanf("%d", &b);
    d=a%b;
    printf("\nModulus of entered numbers = %d\n",d);
}
void powe(){
    double a,num, p;
    printf("\nEnter two numbers to find the power \n");
    scanf("%lf",&a);
    printf("power : ");
    scanf("%lf",&num);
    p =pow(a,num);
    printf("\n%lf to the power %lf = %lf \n",a,num,p);
}
int fact(){
    int i,fact=1,num;
    printf("\nEnter a number to find factorial : ");
    scanf("%d",&num);
    if (num<0){
        printf("\nPlease enter a positive number to find factorial and try again. \n");
        return 1;
    }
    for(i=1;i<=num;i++)
    fact=fact*i;
    printf("\n");
    printf("Factorial of entered number %d is:%d\n",num,fact);
    return 0;
}
void xor(){
    int a,b,c;
    printf("\nPlease enter first number   : ");
    scanf("%d", &a);
    printf("Please enter second number  : ");
    scanf("%d", &b);
    c = a ^ b;
    printf("\nXOR of entered numbers = %d\n",c); 
}
void max(){
    int a,b,c;
    printf("\nPlease enter first number   : ");
    scanf("%d", &a);
    printf("Please enter second number  : ");
    scanf("%d", &b);
    if(a > b){
        c = a;
    }else{
        c = b;
    }
    printf("\nMax of entered numbers = %d\n",c); 
}
void min(){
    int a,b,c;
    printf("\nPlease enter first number   : ");
    scanf("%d", &a);
    printf("Please enter second number  : ");
    scanf("%d", &b);
    if(a > b){
        c = b;
    }else{
        c = a;
    }
    printf("\nMin of entered numbers = %d\n",c); 
}
/*void permutation(){
    int n,r;
    printf("Enter the value of n : \n");
    scanf("%d",&n);
    printf("Enter the value of r : \n");
    scanf("%d",&r);
    if(n < r){
        printf("Wrong inputs please provide the correct input.\n");
        permutation();
    }
    int res = fact(n)/fact(n-r);
    printf("The nPr value is %d = ", res);
}
void combination(){
    int n,r;
    printf("Enter the value of n : \n");
    scanf("%d",&n);
    printf("Enter the value of r : \n");
    scanf("%d",&r);
    if(n < r){
        printf("Wrong inputs please provide the correct input.\n");
        combination();
    }
    int res = fact(n)/(fact(n-r) * fact(r));
    printf("The nCr value is %d = ", res);
}*/

