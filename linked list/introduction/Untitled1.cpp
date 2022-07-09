#include<stdio.h>
int main()
{
	int no, TAT[no],AT[no],BT[no],WT[no],CT[no],RT[no],sum;
	printf("enter the  no, of processes");
	scanf("%d",&no);
	for(int i=0;i<no;i++)
	{
		printf("enter AT AND BT");
		scanf("%d %d",&AT[i],&BT[i]);
	}
	for(int i=0;i<no;i++)
	{
		sum = sum+BT[i];
		CT[i]=sum;
	}
	for(int i=0;i<no;i++)
	{
		TAT[i]=CT[i]-BT[i];
	}
	for(int i=0;i<no;i++)
	{
		WT[i]=TAT[i]-AT[i];
	}
	
	printf("processes   AT   BT    CT     TAT     WT\n");
	for(int i = 0;i<no;i++)
	{
		printf("P%d %7d %7d %7d %7d %7d\n",i,AT[i],BT[i],CT[i],TAT[i],WT[i]);
	}
}

