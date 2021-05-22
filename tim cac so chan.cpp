#include <stdio.h>
int main(){
	int n,s;
	s=0;
	printf("nhap so n: \n");
	scanf("%d",&n);
	if(n<=0){
		printf("%d ko phai so nguyen duong \n",n);
		return 0;
	}else{
	
	for (int i=1;i<n;i++){
		if(i%2==0){
			s++;
		printf("cac so chan la be hon %d la %d\n",n,i);
		
}

	} 		printf(" \n co %d so chan \n",s);
}
	}

