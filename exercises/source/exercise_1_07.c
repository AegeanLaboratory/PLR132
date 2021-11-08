#include <stdio.h>

int main()
{
	
	int month;
	
	printf("Poio mina thes na deis (1-12)? ");
	scanf("%d", &month);
	
	switch(month){
		case 1:
			printf("O %dos minas einai o Ianouarios kai exei 31 meres.", month);
			break;
		case 2:
			printf("O %dos minas einai o Febrouarios kai exei 28 meres.", month);
			break;
		case 3:
			printf("O %dos minas einai o Martios kai exei 31 meres.", month);
			break;
		case 4:
			printf("O %dos minas einai o Aprilios kai exei 30 meres.", month);
			break;
		case 5:
			printf("O %dos minas einai o Maios kai exei 31 meres.", month);
			break;
		case 6:
			printf("O %dos minas einai o Iounios kai exei 30 meres.", month);
			break;
		case 7:
			printf("O %dos minas einai o Ioulios kai exei 31 meres.", month);
			break;
		case 8:
			printf("O %dos minas einai o Augoustos kai exei 31 meres.", month);
			break;
		case 9:
			printf("O %dos minas einai o Septemvrios kai exei 30 meres.", month);
			break;
		case 10:
			printf("O %dos minas einai o Oktovrios kai exei 31 meres.", month);
			break;
		case 11:
			printf("O %dos minas einai o Noemvrios kai exei 30 meres.", month);
			break;
		case 12:
			printf("O %dos minas einai o Dekemvrios kai exei 31 meres.", month);
			break;
		default:
			printf("Kati pige lathos!");
			break;
	}

	return 0;
}
