#include <stdio.h>

int main()
{
    int number,digit_1,digit_2;
    printf("Dwse mou enan arithmo apo to 0 ews to 99: ");
    scanf("%d", &number);

    digit_1=number/10;
    digit_2=number%10;

    printf("\nO arithmos %d olografws grafete ws eksis: ", number);

    if(number>=10 && number<=12)
    {
        switch(number)
        {
            case 10: printf("deka"); break;    
            case 11: printf("enteka"); break; 
            case 12: printf("dwdeka"); break;
        }
    }
    else
    {
        switch(digit_1)
        {
            case 1: printf("deka"); break;
            case 2: printf("eikosi"); break;
            case 3: printf("trianta"); break;  
            case 4: printf("saranta"); break;   
            case 5: printf("peninta"); break;   
            case 6: printf("exinta"); break;   
            case 7: printf("evdominta"); break;
            case 8: printf("ogdonta"); break;
            case 9: printf("eneninta"); break;
        }

        switch(digit_2)
        {
            case 0: printf("miden"); break;
            case 1: printf("ena"); break;    
            case 2: printf("duo"); break;    
            case 3: printf("tria"); break;
            case 4: printf("tessera"); break;
            case 5: printf("pente"); break;
            case 6: printf("exi"); break;
            case 7: printf("efta"); break;
            case 8: printf("oxto"); break;
            case 9: printf("ennia"); break;
        }      	
    }
    return 0;
}
