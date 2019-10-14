#include<stdio.h>
int main(){
	int a,b,k,temp;
	printf("请输入两个正整数：");
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
				k=j;
			}
		}
	}
	if(k*b==a*b){
		printf("这两个数互质");
	}
	else{
		printf("这两个数不互质");
	}
		return 0;
}
