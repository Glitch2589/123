#include <stdio.h>

main(){
	int min,q,s;
	int x,y,m,n,w,z;
	int A[100][100],B[100][100],i,j,k;
	printf("input size of matrix A(row*column): ");
	scanf("%d%d",&y,&x);
	for(i=0;i<x;i++){
		for(j=0;j<y;j++){
			printf("input [%d][%d] of A: ",i,j);
			scanf("%d",&A[i][j]);
		}
	}
/*	printf("input size of maxtrix B: ");
	scanf("%d%d",&m,&n);
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("input [%d][%d] of B: ",i,j);
			scanf("%d",&B[i][j]);
		}
	}*/
	/*
	for(i=0;i<x;i++){
		for(j=0;j<y;j++){
			k=A[i][j];
			for(w=i;w<x;w++){
				for(z=j;z<y;z++){
					if(i%2==0&&A[i][j]<A[w][j]){
						A[i][j]=A[w][i];
						A[w][i]=k;	
					}
				}
			}
		}
	}
	*/
	for(i=0;i<n;i++)
        for(j=0;j<n;j++)
        {
            min=A[i][j];
            for(k=i;k<n;k++)
            {
                for(w=j;w<n;w++)
                if(A[k][w]<min)
                {
                    min=A[k][w];
                    z=s;
                    q=w;
                }
                w=0;
            }
            k=A[i][j];
            A[i][j]=min;
            A[z][q]=k;
        }
	for(i=0;i<x;i++){
		printf("\n");
		for(j=0;j<y;j++){
			printf("%d ",A[i][j]);
		}
		
	}
	
	
	/*   6c   */
}
