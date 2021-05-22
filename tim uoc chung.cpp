#include <stdio.h>
#include <math.h>
int main(){
	int a,b,i;
	printf("nhap so thu nhat: ",a);
	scanf("%d",&a);
	printf("nhap so thu hai: ",b);
	scanf("%d",&b);
	// tim uoc chung lon nhat cua a vs b
	if(a==0&&b==0){
		printf("ko co uoc chung lon nhat");
	}else{
		int c=a+b;
		if(a==0||b==0){
			printf("ucln bang %d",c);
		}else{
			for(i=1;i<=a&&i<=b;i++){
				if(a%i==0&&b%i==0){
				printf("%d va %d co uoc chung la %d \n",a,b,i);
					
				}
			}
			
		}
	}

	}
