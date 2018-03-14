#include <stdio.h>
#include "head.h"

int FindElem(SqList *L,int e)
{
	int i;
	for (i=0;i<L->length;i++)
	{
		if(L->data[i]==e)
		{
			return i;
		}
	}
	return -1;
}

int Insert(SqList *L,int e,int x)
{
	int i;
	if(e<0||e>L->length||L->length==maxsize)
	{
		return -1;
	}
	for(i=L->length-1;i>=e;i++)
	{
		L->data[i+1]=L->data[i];
	}
	L->data[e]=x;
	L->length++;
	return 1;
}

int Delete(SqList *L,int e)
{
	int i;
	if(e<0||e>L->length-1)
	{
		return -1;
	}
	for(i=e;i<L->length;i++)
	{
		L->data[i]=L->data[i+1];
	}
	L->length--;
	return 1;
}

void InitList(SqList *L)
{
	L->length=0;
}

int GetElem(SqList *L,int e)
{
	if(e<0||e>L->length)
	{
		return 0;
	}
	return L->data[e];
}


void ExchangeInsert(SqList *L,int m,int n)
{
	int i,j;
	int temp;
	for(i=m;i<m+n;i++)
	{
		temp=L->data[i];
		for(j=i-1;j>=0&&temp<L->data[j];j--)
		{
			L->data[j+1]=L->data[j];
		}
		L->data[j+1]=temp;
	}
}

void smallerthanhead(SqList *L)
{
	int i,j,temp;
	i=0;
	j=L->length-1;
	temp=L->data[i];
	while(i<j)
	{
		while(i<j&&L->data[j]>temp)
			j--;
		if(i<j)
		{
			L->data[i]=L->data[j];
			++i;
		}
		while(i<j&&L->data[i]<temp)
			++i;
		if(i<j)
		{
			L->data[j]=L->data[i];
			--j;
		}
	}
	L->data[i]=temp;
}

void reverse(SqList *L)
{
	int i,j,temp;
	for(i=0,j=L->length-1;i<j;++i,--j)
	{
		temp=L->data[i];
		L->data[i]=L->data[j];
		L->data[j]=temp;
	}
}

void vipeElem(SqList *L)
{
	int i,num,c;
	num=0;
	c=L->data[0];
	for(i=1;i<L->length;i++)
	{
		if(L->data[i]==c)
		{
			++num;
		}
		else
		{
			if(num>0)
			{
				count--;
			}
			else
			{
				c=L->data[i];
				count=0;
			}
		}
	}
	if(num>0)
	{
		for(i=0,num=0;i<L->length;i++)
		{
			if(L->data[i]==c)
			{
				++count;
			}
		}
	}
	if(count>L->length/2)
		return c;
	else return 0;
}
