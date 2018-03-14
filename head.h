
#define maxsize 50
typedef struct
{
	int data[maxsize];
	int length;
}SqList;


int FindElem(SqList *L,int e);
int Insert(SqList *L,int e,int x);
int Delete(SqList *L,int e);
void InitList(SqList *L);
int GetElem(SqList *L,int e);
void ExchangeInsert(SqList *L,int m,int n);
void reverse(SqList *L);
void smallerthanhead(SqList *L);
void vipElem(SqList *L);
