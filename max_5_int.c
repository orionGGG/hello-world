#include<stdio.h>
int main(){
	int i,j,k,temp,a[5];
	for(i = 0; i < 5; i++){
		scanf("%d",&a[i]);
	}
	for(j = 0; j < 5; j++){
		for(i = j;i < 4; i++){
			if(a[j]>a[i+1]){
				temp = a[j];
				a[j] = a[i+1];
				a[i+1] = temp;
			}
		}
	}
	k=a[4]*10000+a[3]*1000+a[2]*100+a[1]*10+a[0];
	printf("%d",k);
}
