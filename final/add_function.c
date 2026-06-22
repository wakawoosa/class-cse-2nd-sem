#include <stdio.h>

float sum(float x,float y){
    return x+y;
}
float sub(float x, float y){
    return x-y;
}
float mul(float x, float y){
    return x*y;
}
float divi( float x, float y){
    return x/y;
}

int main(){
    float x,y;
    char z;
    printf("Enter value for a = ");
    scanf("%f", &x);
    printf("\nEnter value for b = ");
    scanf("%f", &y);
    printf("\nenter operation(+,-,*,/): ");
    scanf(" %c", &z);
    if(z == '+'){
        printf("%f", sum(x,y));
    }
    else if(z == '-'){
        printf("%f", sub(x,y));
    }
    else if(z == '*'){
        printf("%f", mul(x,y));
    }
    else if(z == '/'){
        printf("%f", divi(x,y));
    }
    else{
        printf("Invalid operator\n");
    }
    return 0;    
}