#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]){
	int mas[10], k = 0, i, j;
	
	srand(time(0));
	
	for(i = 0; i < 10; i++){
		mas[i] = rand()%100;
		printf("%d ", mas[i]);
	}
	
	for(i = 0; i < 10-1; i++){
		for(j = i + 1; j < 10; j++){
			if(mas[i] == mas[j]) 
			k++;
		}
	}
	
	if(k > 0) 
	printf("\n\nEst %d par", k);
	else 
	printf("\n\nNet pari\n");
   
   
   system("pause");
   return 0;
}
