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

void delete_a_record()
{
    FILE *fp,*fp1;
    struct Stu s;
    int id,found=0;
    fp=fopen("MINI_PROJECT_IN_C.DAT","rb");
    fp1=fopen("temp.dat","wb");
    printf("\nEnter student roll no you want to Delete:");
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
        }
        else
        {
            fwrite(&s,sizeof(s),1,fp1);
        }
        }
        fclose(fp);
        fclose(fp1);
        if(found==0)
        {
            printf("Sorry No Record Found\n\n");
        }
        else
        {
            fp=fopen("MINI_PROJECT_IN_C.DAT","wb");
            fp1=fopen("temp.dat","rb");
        while(1)
        {
            fread(&s,sizeof(s),1,fp1);
            if(feof(fp1))
            {
                break;
            }
            fwrite(&s,sizeof(s),1,fp);
        }
    }
    fclose(fp);
    fclose(fp1);
}
