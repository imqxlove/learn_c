#include<stdio.h>
#define ROW 3
#define COL 3

int matrixA[ROW][COL]={0};
int matrixB[ROW][COL]={0};

int main(void)
{
	//init matrixA
	int i,j;
	printf("Enter matrixA: \n");
	for(i=0;i<ROW;i++){
		for(j=0;j<COL;j++){
			scanf("%d",&matrixA[i][j]);
		}
	}

	//switch
	for(i=0;i<ROW;i++){
		for(j=0;j<COL;j++){
			matrixB[i][j]=matrixA[j][i];
		}
	}

	//print matrixA and matrixB
	printf("MatrixA: \n");
	for(i=0;i<ROW;i++){
		for(j=0;j<COL;j++){
			printf("%2d",matrixA[i][j]);
		}
		printf("\n");
	}
	
	//print matrixB
	printf("MatrixB: \n");
	for(i=0;i<ROW;i++){
		for(j=0;j<COL;j++){
			printf("%2d",matrixB[i][j]);
		}
		printf("\n");
	}

	return 0;
}
