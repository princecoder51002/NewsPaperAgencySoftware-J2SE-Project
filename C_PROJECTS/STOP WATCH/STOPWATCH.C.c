/*C program to design a digital clock.*/
 
#include <stdio.h>
#include <time.h> //for sleep() function
#include <unistd.h>
#include <stdlib.h>
 
int main()
{
    int hour, minute, second;
     
    hour=minute=second=0;
 
    while(1) // this condition will always be true
    {
        // to clear output screen , we cant use 'clear' bcz it is not recognized as external/internal command
        system("cls");
         
        //print time in HH : MM : SS format
        printf("%02d : %02d : %02d ",hour,minute,second);
         
         //clear output buffer in gcc
        fflush(stdout);
         
         //increase second to start the stopwatch
        second++;
 
        //update hour, minute and second
        if(second==60){
            minute+=1;
            second=0;
        }
        if(minute==60){
            hour+=1;
            minute=0;
        }
        if(hour==24){
            hour=0;
            minute=0;
            second=0;
        }
         
        sleep(1);   //wait till 1 second
    }
 
    return 0;
}