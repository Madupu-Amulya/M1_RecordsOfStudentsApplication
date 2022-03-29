#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

struct Stu
{
    int age,rollno,math,phy,chm,sum;
    char nm[10];
    float avg;
};
void record()
{
    FILE *fp;
    struct Stu s;
    int id,found=0;
    fp=fopen("MINI_PROJECT_IN_C.DAT","rb");
    printf("\nEnter the student roll no:");
    scanf("%d",&id);
    while(1)
    {
        fread(&s,sizeof(s),1,fp);
        if(feof(fp))
        {
            break;
        }
        if(s.rollno==id)
        {
            found=1;
              printf("\n--------------------------------------------");
            printf("\t\t Student Record of %d\n\n",s.rollno);
             printf("\n--------------------------------------------");
            printf("rollno:%d\t",s.rollno);
            printf("nm:%s\t",s.nm);
            printf("age:%d\t",s.age);
            printf("sum:%d\n",s.sum);
              printf("\n--------------------------------------------");
        }
    }
        if(found==0)
        {
            printf("\nRecord not found!");
        }
    fclose(fp);
}
