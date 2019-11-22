#include <stdio.h>
#include <stdlib.h>
const int size = 4;
const int M[][4] = {
{2,3,1,1},
{1,2,3,1},
{1,1,2,3},
{3,1,1,2}

};
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

void MixColumns(int arr[][size]){

	int i,j,k,value;

	for(i = 0;i < size;i++)
	{
		for(j = 0;j < size;j++)
		{
			value = 0;
			for(k = 0;k < size;k++)
			{

			value += M[j][k] * arr[k][i];
			//printf("%d * %d \n",M[j][k],arr[k][i]);
			}
		printf("%d ",value);
		}
	//exit(1);
	}


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

	MixColumns(arr);
	return 0;

}
