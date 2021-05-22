#include <stdio.h>
#include <math.h>
int main(){
	int a,b,i;
	printf("nhap so thu nhat: ",a);
	scanf("%d",&a);
	printf("nhap so thu hai: ",b);
	scanf("%d",&b);
	// tim boi chung lon nhat cua a va b
	if(a==0||b==0){
		printf("boi chung bang 0");
	}else{
		for(i=1;i<=a*b;i++){
			if(i%a==0&&i%b==0){
	printf("boi chung lon nhat cua %d va %d la: %d \n",a,b,i);break;}
	}
}
	}

