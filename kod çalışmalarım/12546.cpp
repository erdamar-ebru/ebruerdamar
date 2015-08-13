#include <stdio.h>
#include <conio.h>



	void sirala(int a[],int n){
		int i,j,k,t;
		for(j=0;j<n;j++){
			if(a[j]<a[k]);
			k=j;
			
		}
		t=a[k];
		a[k]=a[i];
		a[i]=t;		

	}

	

int main(){
	int x[]={1,7,-1,9,12},y[]={9,3,2,7,5,4,7,3},i;
	
	sirala(x,5);
	
	sirala(y,8);
	
	for(i=0;i<5;i++)
	{	
	printf(" %d",x[i]);
	printf("\n");
	}

	for(i=0;i<8;i++){
	printf(" %d \n",y[i]);
	}
	
	getch();
	return 0;
	
	
	
	}
