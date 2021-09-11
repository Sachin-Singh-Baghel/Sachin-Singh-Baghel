#include <stdio.h>
#include <string.h>
int randomnumber;
char userinput[15];


int main(){



    srand(time(NULL));   
    randomnumber = rand()%10;
    printf("\nred");
    printf("\ngreen");
    printf("\nblue\n");
    gets(userinput);


    int isred = strcmp(userinput ,"red");

    int isgreen = strcmp(userinput ,"green");
    
    int isblue = strcmp(userinput ,"blue");



   if ( isgreen == 0)
    {
        if (randomnumber == 1 || randomnumber == 3 || randomnumber == 7 || randomnumber == 9)
        {
            printf("you  won the match");
        }
        else{
            printf("you loss");
        }
        
    }
   else if ( isred == 0)
    {
        if (randomnumber == 2 || randomnumber == 4 || randomnumber == 6 || randomnumber == 8)
        {
            printf("you won the match");
        }
        else{
            printf("you loss");
        }
        
    }
    else
    {
        if (randomnumber == 5 || randomnumber == 0 )
        {
            printf("you won the match ");
            
        }
        else{
            printf("you loss");
        }
        
        
    }

    printf("\n number is : %d" , randomnumber);

    return 0;
}