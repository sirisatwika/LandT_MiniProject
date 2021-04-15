#include "calc.h"
int main(){
    operations();
    char ch;
    while(1){
        printf("\n");
        scanf("%c",&ch);
        switch(ch){
            int a,b,n,r;
            case '+':
                printf("Enter the first number to be added : \n");
                scanf("%d",&a);
                printf("Enter the first number to be added : \n");
                scanf("%d",&b);
                int ansadd = add(a,b);
                printf("sum of numbers is %d: \n",ansadd);
                break;
            case '-':
                printf("Enter the first number : \n");
                scanf("%d",&a);
                printf("Enter the second number : \n");
                scanf("%d",&b);
                int anssub = sub(a,b);
                printf("Difference of numbers is %d: \n",anssub);
                break;
            case '*':
                printf("Enter the first number : \n");
                scanf("%d",&a);
                printf("Enter the second number : \n");
                scanf("%d",&b);
                int ansmul = mul(a,b);
                printf("Product of numbers is %d: \n",ansmul);
                break;
            case '/':
                printf("Enter the first number : \n");
                scanf("%d",&a);
                printf("Enter the second number : \n");
                scanf("%d",&b);
                int ansdiv = divi(a,b);
                printf("Division of numbers is %d: \n",ansdiv);
                break;
            case 'm':
                printf("Enter the first number : \n");
                scanf("%d",&a);
                printf("Enter the second number : \n");
                scanf("%d",&b);
                int ansmod = mod(a,b);
                printf("Mod of numbers is %d: \n",ansmod);
                break;
            case '!':
                printf("Enter the a number : \n");
                scanf("%d",&a);
                int ansfact = fact(a);
                printf("Factorial of number is %d: \n",ansfact);
                break;
            case 'p':
                printf("Enter the first number : \n");
                scanf("%d",&a);
                printf("Enter the second number : \n");
                scanf("%d",&b);
                int anspow = powe(a,b);
                printf("power of number is %d: \n",anspow);
                break;
            case '^':
                printf("Enter the first number : \n");
                scanf("%d",&a);
                printf("Enter the second number : \n");
                scanf("%d",&b);
                int ansxor = xorop(a,b);
                printf("Xor of numbers is %d: \n",ansxor);
                break;
            case '>':
                printf("Enter the first number : \n");
                scanf("%d",&a);
                printf("Enter the second number : \n");
                scanf("%d",&b);
                int ansmax = max(a,b);
                printf("Max of numbers is %d: \n",ansmax);
                break;
            case '<':
                printf("Enter the first number : \n");
                scanf("%d",&a);
                printf("Enter the second number : \n");
                scanf("%d",&b);
                int ansmin = min(a,b);
                printf("Min of numbers is %d: \n",ansmin);
                break;
            case 'P':
                printf("Enter the first number : \n");
                scanf("%d",&n);
                printf("Enter the second number : \n");
                scanf("%d",&r);
                if(n < r){
                    printf("Wrong inputs please provide the correct input.\n");
                    //operations();
                }
                int ansper = permutation(n,r);
                printf("Permuatation of numbers is %d: \n",ansper);
                break;
            case 'C':
                printf("Enter the first number : \n");
                scanf("%d",&n);
                printf("Enter the second number : \n");
                scanf("%d",&r);
                if(n < r){
                    printf("Wrong inputs please provide the correct input.\n");
                    //operations();
                }else{
                int anscom = combination(n,r);
                printf("Combination of numbers is %d: \n",anscom);
                
                }
                break;
            case 'e':
                exit(0);
                break;
            default:
                operations();
                break;
               }
        }
}
void operations(){
    printf("\nWelcome to C calculator displaying the available option \n\n");
    printf("Enter + symbol for Addition \n");
    printf("Enter - symbol for Subtraction \n");
    printf("Enter * symbol for Multiplication \n");
    printf("Enter / symbol for Division \n");
    printf("Enter m symbol for Modulus\n");
    printf("Enter p symbol for Power \n");
    printf("Enter ! symbol for Factorial\n");
    printf("Enter ^ symbol for XOR \n");
    printf("Enter > symbol for Max num \n");
    printf("Enter < symbol for Min num\n");
    printf("Enter P symbol for Max num \n");
    printf("Enter C symbol for Min num\n");
    printf("Enter e if you want to exit\n");
}
int add(int a, int b){
    int sum = 0;
    sum = a + b;
    return sum;
}
int sub(int a, int b){
    int  c = 0;
    c = a - b;
    return c;
}
int mul(int a,int b){
    int ans = 0;
    ans = a*b;
    return ans;
}
int divi(int a,int b){
    int c = 0;
    c = a/b;
    return c;
}
int mod(int a,int b){
    int c = 0;
    c = a%b;
    return c;
}
int powe(int a,int b){
    int c;
    c = pow(a,b);
    return c;
}
int fact(int a){
    int i,fact=1;
    for(i = 1;i <= a;i++){
        fact = fact*i;
    }
    return fact;
}
int xorop(int a,int b){
    int c =0;
    c =  a ^ b;
    return c;
}
int max(int a,int b){
    int c;
    if(a > b){
        c = a;
    }else{
        c = b;
    }
    return c;
}
int min(int a,int b){
     int c;
    if(a > b){
        c = b;
    }else{
        c = a;
    }
    return c;
}
int permutation(int n,int r){
    int res = fact(n)/fact(n-r);
    return res;
}
int combination(int n,int r){
    int res = fact(n)/(fact(n-r) * fact(r));
    return res;
}

