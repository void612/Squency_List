# include <stdio.h>
# include <stdlib.h>
# include "head.h"
int main(void)
{
	int i;
	SqList *L;
	L=(SqList *)malloc(sizeof(SqList));
	printf("Please input the elements of the list\n");
	i=-1;
	L->length=0;
	do
	{
		++i;
		printf("->");
		scanf("%d",&L->data[i]);
		++L->length;
	}while(L->data[i]!=00);
	--L->length;
	ExchangeInsert(L,5,6);
	for(i=0;i<L->length;i++)
	{
		printf("%d\t",L->data[i]);
	}
	return 0;
}
