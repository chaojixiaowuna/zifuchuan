//memcmp��const void* dest,const void* src,size_t num���ڴ�Ƚ�

//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	int arr1[]={7,4,7,5,1};
//	int arr2[]={7,4,7,4,1};
//	int ret=memcmp(arr1,arr2,12);
//	printf("%d",ret);
//	return 0;
//}
//memset �ڴ�����	

#include<stdio.h>
#include<string.h>
int main()
{
	int arr[10]={0};
	memset(arr,'1',40);
	return 0;
}