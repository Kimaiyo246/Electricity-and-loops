//A for_loop program 
#include <stdio.h>
int main() {
//Declaring variables 
int i;
int start;
int stop;
//Entering  variables 
printf("Enter start point:");
scanf("%d" ,&start);

printf("Enter stop point:");
scanf("%d" ,&stop);

for (i = start; i <= stop;i++)
printf("%d\n" ,i);

return 0;
}