#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <unistd.h> // for sleep function

int width=20, height=20; // global decleration bcz we want them in many functions
int x,y,fruitx,fruity; // position of snake and fruit
int score;
int gameover;
int flag;
int tailx[100], taily[100]; // these arrays will use for motion snake when it eats fruit and increase in length and we will implement it in makelogic() function
int counttail=0; // when snake eats fruit it will increase
int main()
{
    int m, n;
    void draw();
    void setup();
    void input();
    void makelogic();
    setup(); // dont repeat this function because we will set value once  
    while(!gameover){ // this while loop is used bcz we want to make this happen until the game is finished and we use gameover here bcz if gameover is 0 in starting and it will end when gameover will become 1
    draw();
    input(); // we will call it after draw bcz we want moves after draw 
    makelogic();

    for(m=0;m<8000;m++) // these for loops are used for making motion of snake slow
    {
        for(n=0;n<10000;n++)
        {

        }
    }
    }
    return 0;
}

void draw() // for making boundary
{
    int i,j,k;
    system("cls"); // it will use to clear the screen when this draw function is called
    for(i=0;i<height;i++)
    {
       for(j=0;j<width;j++)
       {
           if(i==0||i==height-1||j==0||j==width-1)
           {
           printf("*");
           }
           else{
            if(i==x&&j==y)// here we have to generate snake and fruit position bcz this is a blank area
           printf("0");
           else if(i==fruitx&&j==fruity)
           printf("@");
           else 
           {
               int m=0;
               for(k=0;k<counttail;k++) // for coordinates of snake
               {
                   if(i==tailx[k]&&j==taily[k])
                   {
                       printf("o");
                       m=1;
                   }
               }
               if(m==0)
               printf(" ");

           }
           }   
       }
       printf("\n");
    }
    printf("SCORE=%d", score);
} // end of draw function

void setup() // for setup of game 
{
    gameover=0; //when game will be draw , we will make it 1
    // initial coordinates of snake
    x=width/2;
    y=height/2;
    // for generating fruit position we will use rand using stdlib.h
    label1: 
    fruitx=rand()%20;
    if(fruitx==0) // if fruitx==0 then it will be present on boundary but we dont want it so we will use label1 and goto statement so that when it is 0 , it will again generate a random no.
    goto label1;

    label2: 
    fruity=rand()%20;
    if(fruity==0) // if fruitx==0 then it will be present on boundary but we dont want it so we will use label1 and goto statement so that when it is 0 , it will again generate a random no.
    goto label2;

    score=0;
}

void input()
{
    if(kbhit()) // when a key is pressed
    {
        switch(getch()) // reading and setting of key
        {
            case 'a':
            flag=1;
            break;
            case 's':
            flag=2;
            break;
            case 'w':
            flag=3;
            break;
            case 'd':
            flag=4;
            break;
            case 'x':
            gameover=1; // it is for end the game
            break;
        }
    }
}

void makelogic()
{
    sleep(0.50); // this function is used for delay in speed for snake
    int i;
    int prevx=tailx[0];
    int prevy=taily[0];
    int prev2x, prev2y;
    tailx[0]=x;
    taily[0]=y;

    for(i=1;i<counttail;i++)
    {
       prev2x=tailx[i];
       prev2y=taily[i];
       tailx[i]=prevx;
       taily[i]=prevy;
       prevx=prev2x;
       prevy=prev2y;
    }
      switch(flag)
      {
          case 1:
          y--;
          break;
          case 2:
          x++;
          break;
          case 3:
          x--;
          break;
          case 4:
          y++;
          break;
          default:
          break;
      }
      if(x<0||x>width||y<0||y>height)
          gameover=1;
      for(i=0;i<counttail;i++)
          {
              if(x==tailx[i]&&y==taily[i])
              {
                  gameover=1;
              }
          }
      if(x==fruitx&&y==fruity)
      {
          label3: 
          fruitx=rand()%20;
          if(fruitx==0) // if fruitx==0 then it will be present on boundary but we dont want it so we will use label1 and goto statement so that when it is 0 , it will again generate a random no.
          goto label3;

          label4: 
          fruity=rand()%20;
          if(fruity==0) // if fruitx==0 then it will be present on boundary but we dont want it so we will use label1 and goto statement so that when it is 0 , it will again generate a random no.
          goto label4;

          score+=10;
          counttail++;
      }
}