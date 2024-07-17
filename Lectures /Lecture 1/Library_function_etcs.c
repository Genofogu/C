// library function

// like printf

#include <stdio.h>
int main(){
    char a;
    a = 'r';
    printf("%c\n",a);


// for using string

 char b[] = "ram";         
    printf("%s\n",b);        //using array to store string



// how to receive input from user

int z;
scanf("%d", &z);   //& called "address of" 
printf("the value you write is", z);



// escape sequance cahracters

char ch;
ch = '\n';     //Represent a line
ch = '\t';     //Represent a tab space
ch = '\"';     //Represent "
ch = '\\';     //Represent \


 return 0;
}
