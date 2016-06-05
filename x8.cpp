#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


int main(int argc, char *argv[]) {
	int mas[20];
	int i, k = 0, d = 1;
	
	srand(time(0));
	
	for(i = 0; i < 20; i++){
		mas[i] = rand()%26;
		printf("\tmas[%d] = %d\n", i, mas[i]);
	}
	
	for (i = 0; i < 20; i++){
		if((i%2 == 0) && (mas[i] > 0)){
			d = d * mas[i];
			k++;
		}
	}
	printf("Proizvedenie = %d\n", d);
	printf("Kolichestvo chetnuh chisel: %d\n", k);
	
	system("pause");
	return 0;
}
