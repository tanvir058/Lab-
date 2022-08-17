#include <stdio.h>
int main(){
    char ch;
    int a, b, result;
    printf("Select a oparator to calculate:");
    scanf("%c", &ch);
    printf("Enter two Number to calculate:");
    scanf("%d %d", &a, &b);

    switch(ch){
        case '+':
            result = a + b;
            break;
        case '-':
            result = a - b;
            break;
        case '*':
            result = a * b;
            break;
        case '/':
            result = a / b;
            break;
    }
    printf("Result = %d", result);
    return 0;
}
