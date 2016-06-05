#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i, d = 0, v = 0;
	int mas [20];
	
	srand(time(0));
	
	for (i = 0; i < 20; i++){
		mas[i] = rand()%30 - 10;
		printf("\tmas[%d] = %d\n", i, mas[i]);
	}
	
	for (i = 0; i < 20; i++){
		if(mas[i] > 0)
		d++;
		
		if(mas[i] < 0)
		v++;
	}
	
	printf("Kolichestvo dodatnih: %d\n", d);
	printf("Kolichestvo vid'emnuh: %d\n", v);
	
	system("pause");
	return 0;
}
