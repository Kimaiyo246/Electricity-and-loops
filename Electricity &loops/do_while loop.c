//A program of do_while loop
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

do {
printf("%d\n" ,start);
start++;
}
while (start<=stop);
return 0;
}