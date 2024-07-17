//Question
/*Write a c program to calculate area of rectangle:
a. Using hard coded inputs.
b. USing input supplied by he user.*/



#include <stdio.h>

int main(){
  // Using hard coded inputs
  int len = 4;
  int width = 2;
  printf("The are of this rectangle is %d \n", len*width );


  // USing input supplied by he user
  int a,b;
  printf("Enter the length\n");
  scanf("%d",&a);
  printf("Enter the Width\n");
  scanf("%d",&b);
  printf("the area of rectangle is %d", a*b);

  return 0;
}
