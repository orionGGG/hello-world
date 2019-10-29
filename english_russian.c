//home_work 
#include<stdio.h>
int main(){
	int a,b,c,d,i;
	printf("输入旅行社总人数");
	scanf("%d",&a);
	printf("输入会英语的人数");
	scanf("%d",&b);
	printf("输入会俄语的人数");
	scanf("%d",&c);
	printf("输入两样都不会的人数");
	scanf("%d",&d);
	i = b + c + d - a;
	if(i >= 0){
		printf("两样都会的人有%d",i);
	}
	else{
		printf("输入数据有误，无法计算");
	}
} 
