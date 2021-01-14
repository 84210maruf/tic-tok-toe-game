#include<conio.h>
#include<stdio.h>


void check(char,char);

char a[9]={'1','2','3','4','5','6','7','8','9'};


void gamename()
{
    printf("\n\t\t        TIC TOC TOE GAME    \n\t\t    .......................");

}
void show()
{
    printf("\n\n\t\t\t|----|----|----|");
      printf("\n\t\t\t| %c  | %c  | %c  |",a[0],a[1],a[2]);
      printf("\n\t\t\t|----|----|----|");
      printf("\n\t\t\t| %c  | %c  | %c  |",a[3],a[4],a[5]);
      printf("\n\t\t\t|----|----|----|");
      printf("\n\t\t\t| %c  | %c  | %c  |",a[6],a[7],a[8]);
      printf("\n\t\t\t|----|----|----|\n");
}
void player_symble()
{
    printf("\nPlaayer 1 Symble :X:");
    printf("\nPlayer 2 Symble :Y:\n");

}
void start()
{
    char ch;
    printf("\nEnter who will start the game: player 1 OR player 2: \n");
    scanf("%c",&ch);
}
void play()
{
    char p,s;
    printf("\nEnter the potision AND Symble :\n");

    fflush(stdin);
    scanf("%c",&p);
    fflush(stdin);
    scanf("%c",&s);
    check(p,s);

}

void check(char P,char S)
{
    int i;
    for(i=0;i<=8;i++)
    {
        if(a[i]==P)
        {
            a[i]=S;
        }
    }
}

int end()
{
    if((a[0]=='x'&&a[1]=='x'&&a[2]=='x')||
       (a[0]=='x'&&a[3]=='x'&&a[6]=='x')||
       (a[0]=='x'&&a[4]=='x'&&a[9]=='x'))
       return 100;

    else if((a[0]=='y'&&a[1]=='y'&&a[2]=='y')||
       (a[0]=='y'&&a[3]=='y'&&a[6]=='y')||
       (a[0]=='y'&&a[4]=='y'&&a[9]=='y'))
        return 200;

    else if(a[1]=='x'&&a[4]=='x'&&a[7]=='x')
        return 100;
    else if(a[1]=='y'&&a[4]=='y'&&a[7]=='y')
        return 200;

    else if(a[2]=='x'&&a[5]=='x'&&a[8]=='x')
        return 100;
    else if(a[2]=='y'&&a[5]=='y'&&a[8]=='y')
        return 200;

    else if((a[2]=='x'&&a[5]=='x'&&a[8]=='x')||(a[2]=='x'&&a[4]=='x'&&a[6]=='x'))
        return 100;
    else if((a[2]=='y'&&a[5]=='y'&&a[8]=='y')||(a[2]=='y'&&a[4]=='y'&&a[6]=='y'))
        return 200;

    else if((a[3]=='x'&&a[4]=='x'&&a[5]=='x')||(a[6]=='x'&&a[7]=='x'&&a[8]=='x'))
        return 100;
    else if((a[3]=='x'&&a[4]=='x'&&a[5]=='x')||(a[6]=='x'&&a[7]=='x'&&a[8]=='x'))
        return 200;


        return 300;

}


int main()
{
    int w,i=0;
    char ch;

lebel2:
    //system("clr");
    gamename();
    show();
    player_symble();
    start();
    play();

lebel:
    //system("clr");
    show();
    play();
    w=end();
    //show();
    if(w==100)
        printf("\n\n\t\t''''PLAYER 1 WON THE GAME''''");
    else if(w==200)
        printf("\n\n\t\t''''PLAYER 2 WON THE GAME''''");
        else
            goto lebel;

    printf("\n\nDo You Want Play Again\n\nEnter 'y' for YES\nEnter 'n' for NO");
    fflush(stdin);
    scanf("%c",&ch);
    if(ch=='y'||ch=='Y')
    {
         for(i=0;i<=8;i++)
        {
            a[i]=i+1;
        }

        goto lebel2;
    }
   getch();

}
