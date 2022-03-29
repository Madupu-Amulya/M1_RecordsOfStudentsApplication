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
void display_all_records()
{
    FILE *fp;
    struct Stu s;
    fp=fopen("MINI_PROJECT_IN_C.DAT","rb");
    printf("\n--------------------------------------------");
    printf("\t\t Records of all students\n\n");
    printf("\n--------------------------------------------");
    while(1)
    {
        fread(&s,sizeof(s),1,fp);
        if(feof(fp))
        {
            break;
        }
        printf("\nrollno:%d\t",s.rollno);
        printf("nm:%s\t",s.nm);
        printf("age:%d\t",s.age);
        printf("sum:%d\n",s.sum);
    }
    printf("\n--------------------------------------------");
    fclose(fp);
}
