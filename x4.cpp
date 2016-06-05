#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a[20], b[20], i, j;
	
	srand(time(0));
	
	for (i = 0; i < 20; i++){
		a[i] = rand()%40;
		printf("\tmas[%d] = %d\n", i, a[i]);
	}
	
	printf("\n\n");
	
	for (i = 0; i < 20; i++){
		b[i] = rand()%40;
		printf("\tmas [%d] = %d\n", i, b[i]);
	}

	printf("\nPeresechenie massivov:\n\n");
	for(i = 0; i < 20; i++){
		for(j = 0; j < 20; j++){
			if(a[i]==b[j]){
				printf("\tmas[%d] = %d\n", i, a[i]);
				break;
			}
		}
	}

	system("pause");
	return 0;
}
