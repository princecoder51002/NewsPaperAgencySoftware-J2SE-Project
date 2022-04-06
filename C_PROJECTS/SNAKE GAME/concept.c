// functions about we have to know {kbhit(),rand()}

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    // while(1)
    // {
    //     if(kbhit())
    //     {
    //     char ch=getch();
    //     printf("character=%c", ch);
    //     break;
    //     }
    //     // printf("hello");

    // }

    //------------------------------------------------

    int a = rand() % 20;
    printf("%d", a);
    return 0;
}

// Explnation:-

// 1.kbhit()--------------------------
// it is declared in <conio.h>
// then we will make an infinite loop , which execites infinite time and we want that it will not execute infinitely, so make this possible
// we will use khbit() function. this khbit() function will return 0(false) until we hit any key on keyboard , so we will use this to return
// a non zero number and with the help of break statement we will end this infinite loop and also this function is used to check which key is
// entered by a user.

//2.rand()-----------------------------
// it is a function which generally generates a very large random number but we will make it modulus by 20 , so that it will give a integer
// that will be <20 bcz modulus returns remainder always