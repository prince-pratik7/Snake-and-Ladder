#include <stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<time.h>
 
 
int dice;
int checkPosition();
int Position, newPosition, above;
int choice;
 
 
 
 
main()
{
      srand(time(NULL));
             
      printf("Would you like to:\n    1)Read the rules\n    2)Play the game\n\n");
      scanf("%d", &choice);
       
      if (choice==1){printf("\nThe rules are simple: \n   You press enter to roll the die\n   You are then told which space you have landed on\n   If you land on a snake you will move down the board\n   If you land on a ladder then you will move up it\n   In order to win you must land on 64 exactly\n   If you go over 64 then your imaginary piece will be moved backwards for the remainder of your dice roll\n\n Good Luck\n\n");}
      if (choice==1,2){
       
       
      printf("\nWelcome to Snakes and Ladders.\n");
      printf("\n64  63  62  61  60  59  58  57         1=Start           27=Ladder to 37\n");
      printf("49  50  51  52  53  54  55  56         4=Ladder to 35    34=Snake  to 20\n");
      printf("48  47  46  45  44  43  42  41         7=Ladder to 23    42=Snake  to 11\n");
      printf("33  34  35  36  37  38  39  40         9=Snake  to 5     46=Ladder to 53\n");
      printf("32  31  30  29  28  27  26  25        14=Ladder to 43    49=Snake  to 32\n");
      printf("17  18  19  20  21  22  23  24        17=Snake  to 13    63=Snake  to 2\n");
      printf("16  15  14  13  12  11  10   9        21=Snake  to 3     64=End\n");
      printf(" 1   2   3   4   5   6   7   8        24=Ladder to 58\n");                       
 
 
 
 
 
 
do
{
      printf("\n\nPlease press enter to roll\n\n");
      dice = toupper( getche() );
      dice=((rand()%6)+1);
      printf("\nYou have rolled a %d.\n", dice);
 
 
      Position+=dice;
       
      if(Position >64)
           {above = (Position-64);
           Position = (64 - above);}  
 
 
       
      printf("\nYou have landed on space %d.\n", Position);
 
 
       
      checkPosition();
       
      if (Position<newPosition)
         {printf("\nWell done, you have landed on a ladder. You are now on space %d.", newPosition);}
       
      if (Position>newPosition)
         {printf("\nUnlucky, you have landed on a snake. You are now on space %d.", newPosition);}
       
      Position = newPosition;
       
    
} while(Position<64);
      
     printf("Congratulations, you have won!!!");
     }
            
getch();
return 0;
}
 
 
checkPosition()
{    
     switch(Position)
{
         case 4:
              return newPosition = 35;
              break;
                              
         case 7:
              return newPosition = 23;
              break;
          
         case 9:
              return newPosition =5;
              break;
               
         case 14:
              return newPosition =43;
              break;
               
         case 17:
              return newPosition =13;
              break;
               
         case 21:
              return newPosition =3;
              break;
               
         case 24:
              return newPosition =58;
              break;
               
         case 27:
              return newPosition =37;
              break;
               
         case 34:
              return newPosition =20;
              break;
               
         case 42:
              return newPosition =11;
              break;
               
         case 46:
              return newPosition =53;
              break;
               
         case 49:
              return newPosition =32;
              break;
               
         case 63:
              return newPosition =2;
              break;
               
         default:
                return newPosition = Position;
                 }
 
 
}
