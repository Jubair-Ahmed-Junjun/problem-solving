#include <stdio.h>   // header files
#include <stdlib.h>
int disc;
char s='A',a='B',d='C';
int hanoi(int,char,char,char);   // prototype
int main()   // main function
{
    printf("\n This is a simple program for the tower of Hanoi");

    printf("\n Enter the no. of discs you wanna move from ---->Source:A  to Destination:C\n");

    scanf("%d",&disc); // taking input as no. of disc

    hanoi(disc,s,a,d);  // calling of function
    return 0;
}

int hanoi(int disc,char s,char a,char d)  // function definition
{
    if(disc==1)
    {
        printf("\n move disc %d from %c to %c", disc,s,d);
        return 0;
    }
    hanoi(disc-1,s,d,a); // function called again called recursion
    printf("\n Move Disc %d From %c to %c",disc,s,d);
    hanoi(disc-1,a,s,d);  // function called again called recursion
    return 0;
} // end of function definition
