#include<stdio.h>
int main(){
	int a,b,temp;
	printf("������������������");
	scanf("%d %d",&a,&b);
	if(a>b){
	}
	else{
		temp=a;
		a=b;
		b=temp;
}
	for(int i=1;i<=a;i++){
		for(int j=1;j<=a;j++){
			if(i*a==j*b){
				i=a+1;
				printf("��󹫱���Ϊ%d",j*b);
			}
		}
	}
	return 0;
}
