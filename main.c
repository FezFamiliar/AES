#include <stdio.h>

const int size = 4;

void PrintArray(int m[][size]);

void ShiftRows(int arr[][size]){

	int i,j,k,aux;
	for(j = 0;j < 4;j++)
		for(k = 0;k < j;k++){
			aux = arr[j][0];
			for(i = 0;i < size - 1;i++) arr[j][i] = arr[j][i + 1];
			arr[j][i] = aux;
		}

	PrintArray(arr);
}

void PrintArray(int m[][size]){

	for(int i = 0;i < size;i++){
		for(int j = 0;j < size;j++) printf("%d ",m[i][j]);
	printf("\n");
	}
}

int main(){

	int arr[][4] = {
	{0,1,2,3},
	{4,5,6,7},
	{8,9,10,11},
	{12,13,14,15}
	};

	printf("The matrix before the rotation: \n");
	PrintArray(arr);
	printf("\nThe array after the rotation: \n");
	ShiftRows(arr);
	return 0;

}
