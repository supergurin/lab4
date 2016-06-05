#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


int main(int argc, char *argv[]){
	int mas[20], para=0, i;
	
	srand(time(0));
	
	for(i = 0; i < 10; i++){
		mas[i]=rand()%8;
		printf("%d ", mas[i]);
	}
	
	for(i = 0; i < 8; i++){
		if(mas[i]==mas[i+1])
		para++;
	}
	
   printf("\nNaideno %d par sosednih elementov: ", para);

	system("pause");
	return 0;
}
