#include <stdio.h>
#include <math.h>
int main(){
	int n,s;
	s=1;//s la tong cac uoc cua n
	printf("Nhap so n: ");
	scanf("%d",&n);
	int x=0;// bien dem cac lan chia het cho uoc 
	for(int i=1;i<=n;i++){
		if(n%i==0){
			s=s+i;
			x++;
			printf("cac uoc cua %d la %d \n",n,i);
	}
		}			printf("tong uoc la %d",s);
		
	}

