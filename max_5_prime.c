//С���� 5 �����ֿ�Ƭ������ֱ�Ϊ���� 1�� 2�� 3�� 6�� 9��С�������� 5 �����ֿ�Ƭ���һ������ 5 λ
//�����������λ����_______��
//��̣���������5�����֣����������Ϊ����5λ������������������5λ�����������ERROR��
#include<stdio.h>
#include<stdbool.h>
void swap(int a , int b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;
 } 
void perm(int list[] , int k ,int m,int a[]) 
{
	int n=0;
	if(k==m)
	{
		for(int i=0 ;i<=m ;i++)
		{
			a[n]=a[n]*10+list[i];
		}
		n++; 
	 } 
	 else{
	 	for(int i=k;i<=m;i++)
	 	{
	 		swap(list[i],list[k]);
	 		perm(list,k+1,m,a);
	 		swap(list[i] , list[k]);
		 }
	 }
	 
}
bool ss(int a)
{
	bool k=true;
	for(int i=2;i<a;i++)
	{
		if(a%i==0)
		{
			k=false;
		}
	}
	return k;
}
int main()
{
	int a[5];
	int b[120];
	int c[120];
	int m=0;
	for(int i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	perm(a,0,4,b);
	for(int i=0;i<120;i++)
	{
		if(ss(b[i]))
		{
			c[m++]=b[i];
		}
	}
	if(m==0)
	printf("ERROR");
	int max=c[0];
	for(int i=0;i<m;i++)
	{
		if(max<c[i])
		{
			max=c[i];
		}
	}
	if(m>0)
	printf("%d",max);
	return 0;
 } 
