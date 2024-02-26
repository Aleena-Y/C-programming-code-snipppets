#include <stdio.h>
#include <math.h>
int main(){
    int square,rectangle,n,side,l,br,a,b,c,r;
    float triangle, circle,s;
    printf("enter the shape you want to calculate the area of:\n1)square\n2)rectangle\n3)triangle\n4)circle\nenter a number:");
    scanf("%d",&n);
    if (n==1){
        printf("enter the side of the square:");
        scanf("%d",&side);
        square = side*side;
        printf("the area of the square is: %d",square);
    }
    else if(n==2){
        printf("enter the length and breadth of the rectangle:");
        scanf("%d %d",&l,&br);
        rectangle = l*br;
        printf("the area of the rectangle is:%d",rectangle);
    }
    else if(n==3){
        printf("enter the length of the three sides:");
        scanf("%d %d %d",&a,&b,&c);
        s = (a+b+c)/2;
        triangle = sqrt(s*(s-a)*(s-b)*(s-c));
        printf("the area of the triangle is: %f",triangle);
    }
    else if (n==4){
        printf("enter the radius of the circle:");
        scanf("%d",&r);
        circle = 3.14*r*r;
        printf("the area of the circle is:%f",circle);
    }
    else{
        printf("enter appropriate value");
    }
    return 0;
}
