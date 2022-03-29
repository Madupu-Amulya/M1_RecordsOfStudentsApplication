#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
void changepassword_check()
{
    FILE *fp;
    int i;
    char ch[6],c[6],count=0;
    fp=fopen("password.txt","w");
    printf("\nenter new passowrd with 6 character");
    scanf("%s",ch);
    printf("\nre-enter password");
    scanf("%s",c);
    for(i=0;i<6;i++)
    {
        if(ch[i]==c[i])
        count++;
    }
    if(count==6)
    {
        fprintf(fp,"%s",ch);
        printf("\npassword successfully changed");
    }
    else
    {
        printf("\nnot matching");
        changepassword_check();
    }
    fclose(fp);
}


