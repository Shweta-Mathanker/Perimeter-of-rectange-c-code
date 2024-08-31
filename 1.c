#include<stdio.h>
int main(){
    int h,w;
    printf("enter width and height:");
    scanf("%i %i",&h,&w);
    printf("perimeter of rectangle is: %i",2*(h+w));
    return 0;
}