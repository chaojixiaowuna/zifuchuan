//memmove �����ڴ��ص������	
//C���Ա�׼ 
//memcpyֻҪ�����ص����ڴ濽���Ϳ���
//memmove�����ص��ڴ�Ŀ���
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	int arr[]={1,2,3,4,5,6,7,8,9,10};
//	int i=0;
//	memmove(arr+2,arr,20);
//	for(i=0;i<10;i++)
//	{
//		printf("%d ",arr[i]);
//	}
//	return 0;
//}


//#include<stdio.h>
//#include<string.h>
//#include<assert.h>
//void* my_memmove(void* dest,const void* src,size_t num)
//{
//	void* ret=dest;
//	assert(dest!=NULL);
//	assert(src!=NULL);
//		if(dest>src&&(char*)dest<((char*)src+num))
//		{
//			while(num--)
//			{
//
//			*((char*)dest+num)=*((char*)src+num);
//			}
//		}
//		else
//		{
//			while(num--)
//			{
//			*(char*)dest=*(char*)src;
//			((char*)dest)++;
//			((char*)src)++;
//			}
//		}
//		return ret;
//}
//int main()
//{
//	int arr[]={1,2,3,4,5,6,7,8,9,10};
//	int i=0;
//	my_memmove(arr,arr+2,20);
//	for(i=0;i<10;i++)
//	{
//		printf("%d ",arr[i]);
//	}
//	return 0;
//}