#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int vybor(int* mas);
int zn(int*mas, int i);
/* run this program using the console pauser or add your own getch, system("pause") or input loop */


int main(int argc, char *argv[]) {
	int mas[10], i, obrat[10];
	
	srand(time(0));
	
	for(i = 0; i < 10; i++){
		mas[i] = rand()%100;
		if(zn(mas, i))
		printf("%d ", mas[i]);
	}
	
	vybor(mas);
   
	printf("\nRosstavlen metodom pryamogo vibora: \n");
	for(i = 0; i < 10; i++)
	printf("%d ", mas[i]);
	
	for(i = 0; i < 10; i++)
	obrat[i] = mas[10-(i+1)];
	
	printf("\nObratnii massiv: \n");
   
	for(i = 0; i < 10; i++)
	printf("%d ", obrat[i]);
      
      
	system("pause");
	return 0;
}

int vybor(int* mas){
	int i, f, i_m, m, j;
		for(i = 0; i < 10-1; i++){
		f = 0;
		i_m = i;
		m = mas[i];
		for(j = i + 1; j < 10; j++){
			if(mas[j] < m ){
				m = mas[j];
				i_m = j;
				f = 1;
			}
		}
		if(f){
			mas[i_m] = mas[i];
			mas[i] = m ;
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
