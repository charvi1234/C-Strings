/*
Input: path[] = "GLGLGLG"
Output: Given sequence of moves is circular 

Input: path[] = "GLLG"
Output: Given sequence of moves is circular 
*/
#include<stdio.h>
void main()
{
    char path[10000];
    scanf("%s",path);
    int north=0,east=1,south=2,west=3;
    int dir=north;
    int x=0,y=0,i;
    for(i=0;path[i]!='\0';i++)
    {
        char move=path[i];
        if(move=='r')
        {
            dir=(dir+1)%4;
        }
        else if(move=='l')
        {
            dir=(dir+3)%4;
        }
        else if(move=='g')
        {
            if(dir==north)
                y++;
            else if(dir==south)
                y--;
            else if(dir==east)
                x++;
            else if(dir==west)
                x--;
        }
    }
    if(x==0&&y==0)
        printf("yes path is cyclic");
    else
        printf("no path is not cyclic");
}
