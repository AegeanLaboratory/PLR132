#include <stdio.h>

#define ONOMA "Onomatepwnymo"
#define USER_NAME "ctxxxxx"

int leapYear(int etos);
int calcDay(int day, int month, int year);
void printInfo();
void dispDay(int mera, int minas, int etos, int x);
void dispChar(int num, char ch);

int main()
{
	int H, M, E, X;
	printInfo();
	do
	{
  		printf("Dose imerominia:");
		scanf("%d-%d-%d",&H,&M,&E);
		if (H==0) break;
		X = calcDay(H, M, E);
		dispDay(H, M, E, X);
	} while (H!=0);
	return 0;
}

void printInfo()
{
	printf("\n");
	dispChar(46, '#');
	printf(ONOMA);
	printf("\n");
	printf(USER_NAME);
	printf("\n");
	dispChar(46, '-');
}

int leapYear(int etos)
{
	if ((etos%4==0 && etos%100!=0) || etos%400==0)
		return 1;
    else
		return 0;
}

int calcDay(int day, int month, int year)
{
	int D;
	int A=365*(year-1);
	int B1=(year-1)/4;
	int B2=-(year-1)/100;
	int B3=(year-1)/400;
	int C=(367*month-362)/12;
	if (month<=2)
        D=0;
    else if (month>2 && leapYear(year))
		D=-1;
    else
		D=-2;
    int S=A+B1+B2+B3+C+D+day;
	return S%7;
}

void dispDay(int mera, int minas, int etos, int x)
{
    if (x==0) printf("Stis %d/%d/%d i imera einai Kyriaki\n",mera,minas,etos);
    else if (x==1) printf("Stis %d/%d/%d i imera einai Deytera\n",mera,minas,etos);
    else if (x==2) printf("Stis %d/%d/%d i imera einai Triti\n",mera,minas,etos);
    else if (x==3) printf("Stis %d/%d/%d i imera einai Tetarti\n",mera,minas,etos);
    else if (x==4) printf("Stis %d/%d/%d i imera einai Pempti\n",mera,minas,etos);
    else if (x==5) printf("Stis %d/%d/%d i imera einai Paraskeyi\n",mera,minas,etos);
    else printf("Stis %d/%d/%d i imera einai Savato\n",mera,minas,etos);
    dispChar(53, '=');
}

void dispChar(int num, char ch)
{
    int i;
    for(i = 0; i < num; i++)
        putchar(ch);
        putchar('\n');
}
