#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void poshyk(int *mas, int ch);
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int mas[20];
	int i, ch;
	
	srand(time(0));
	
	for (i = 0; i < 20; i++){
		mas[i] = rand()%100;
		printf("\tmas[%d] = %d\n", i, mas[i]);
	}
	
	printf("Vvedite chislo:");
	scanf("%d", &ch);
	
	printf("Vashe chislo e v takuh elementah:");
	poshyk(mas, ch);
	
	return 0;
}

void poshyk(int *mas, int ch){
	int i;
	
	for(i = 0; i < 20; i++){
		if(mas[i] == ch)
		printf("%d, ", i);
	}
}
