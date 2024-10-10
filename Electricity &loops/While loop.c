//A program of while loop
#include <stdio.h>
int main() {
//Declaring variables
int start;
int stop;
//Entering variables 
printf("Enter start point:");
scanf("%d" ,&start);

printf("Enter stop point:");
scanf("%d" ,&stop);

while (start<=stop){
printf("%d\n" ,start);
start++;
}
return 0;
}