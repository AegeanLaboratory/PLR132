#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp;

    int i;
    float b1,b2,b3,b4;
    char onom[30];

    fp=fopen("apot.txt","r");

    while(!feof(fp))
    {
        fgets(onom,30,fp);
        printf("%s",onom);
        fscanf(fp,"%f %f %f %f ",&b1,&b2,&b3,&b4);
        printf("%f %f %f %f\n",b1,b2,b3,b4);
    }
    fclose(fp);

    return 0;
}
