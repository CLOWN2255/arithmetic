#include<stdio.h>
int sort(int a[],int begin,int end)
{
	int q=a[begin],t,p;
	for(int i=begin+1;i<end;i++)
	{
		if(a[begin]<a[i])
		{	
		    t=a[i];
		    for(p=i-1;p>=begin;p--)
			    a[p+1]=a[p];
		    a[p+1]=t;
		    begin=p+2;
		}
	}
	       return begin;
}
void Sum_sort(int a[],int begin,int end)
{
	if(begin<end)
	{
		int b=sort(a,begin,end);
		Sum_sort(a,begin,b);
		Sum_sort(a,b+1,end);
	}
}


int main(void)
{
	int a[]={4,3,6,1,8};
	Sum_sort(a,0,5);
	for(int i=0;i<5;i++)
		printf("%3d",a[i]);
	printf("\n");
	return 0;
}
