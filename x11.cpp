#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int bubble(int* mas);
int zn(int*mas, int i);
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {    
    int mas[10], i, j;
    
	srand(time(0));
	
	for(i = 0; i < 10; i++){
		mas[i]=rand()%100;
		if(zn(mas, i))
      printf("%d ", mas[i]);
   }
   
	bubble(mas);

	printf("\n\nRosstavlen metodom pyzurka:\n");
	
   for(i = 0; i < 10; i++)
      printf("%d ", mas[i]);

	system("pause");
	return 0;
}

int bubble(int* mas){
	int m, i, j;
	for (i = 10 -1; i >= 0; i--){
		for (j = 0; j < i; j++){
			if (mas[j] > mas[j+1]){
				int m = mas[j];
				mas[j] = mas[j+1];
				mas[j+1] = m;
			}
		}
	}
}

int zn(int*mas, int i){
	int h;
	for (h=0; h < i; h++){
		if (mas[i] == mas[h])
		return 0;
	}
	return 1;
}
