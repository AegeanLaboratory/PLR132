#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp;

    int age;
    float b,y;
    char onom[30],code[10];

    fp=fopen("info.txt","w");

    fputs("Yoda\n",fp);
    fputs("CT20000\n",fp);
    fprintf(fp,"19\n85 1.82");

    fclose(fp);

    fp=fopen("info.txt","r");

    fgets(onom,30,fp);
    fgets(code,10,fp);
    fscanf(fp,"%d %f %f",&age,&b,&y);
    printf("%s\n",onom);
    printf("%s\n",code);
    printf("%d\n%f %f\n",age,b,y);

    fclose(fp);
    return 0;
}
