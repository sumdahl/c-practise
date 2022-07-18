// Write a C program to check whether a triangle can be formed by the given value for the angles.
    #include<stdio.h>
    int main(){
        int a , b , c;
        printf("Enter the sides of a triangle\n");
        scanf("%d%d%d", &a,&b,&c); 
        if (a + b > c || b + c > a || c + a > b) 
            printf("Triangle can be formed\n"); 
        else
            printf("Triangle can't be formed\n");
        return 0;
    }