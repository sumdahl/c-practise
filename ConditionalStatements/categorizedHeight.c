#include<stdio.h>
int main(){
    int height;
    printf("Enter the height in centimeter\n");
    scanf("%d", &height);
    if (height < 150)
        printf("The person is Dwarf");
    if(height >= 150 && height < 165)
        printf("The person has average height");
    if(height >= 165)
        printf("The person is tall");
    return 0;
}