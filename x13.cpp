#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int mas [10];
	int i, a = 0;
	
	srand(time(0));
	
	for (i=0; i < 10; i++){
		mas [i] = rand()%60 - 30;
		if(mas[i]%3 == 0){
			a = a + mas[i];
		}
		printf("\tmas[%d] = %d\n", i, mas[i]);		
	}
	printf("\ta = %d\n", a);
	
	system("pause");
	return 0;
}
