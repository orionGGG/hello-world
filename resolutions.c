//选作题
//输入一个字符串，形如
//3072x1728,2720x1536,2560x1600,2560x1440,2304x1728,2048x1536,1920x1200,1920x1080,1440x900,1280x800,1280x720,1024x768,1024x640,800x600,800x500,800x450,640x480,640x400,640x360,480x360,480x300,480x270,320x240,320x200,320x180,240x180,176x144,160x120,160x100,160x90
//这是一个显示器支持的分辨率清单，中间逗号分隔。
//现在输入画面的宽和高，然后在上述清单中挑选一个最接近的分辨率输出
//比如输入2000，1000，输出的分辨率应该是1920x1080，因为其它分辨率的误差更大。
//完成如下程序
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
