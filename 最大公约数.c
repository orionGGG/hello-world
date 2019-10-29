#include<stdio.h>
int main(){
	int T,i,j,m,n,temp;
	scanf("%d",&T);
	for(i = 0; i < T; i++){
		scanf("%d %d",&m,&n);
		if(m>n){
			m=temp;
			m=n;
			n=temp;
		}
		for(j = 1; j<=m; j++){
			if(m%j==0&&n%j==0){
				temp = j;
			}
		}
		printf("%d\n",temp);
	}
	return 0;
}
