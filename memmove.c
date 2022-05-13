//memmove 处理内存重叠的情况	
//C语言标准 
//memcpy只要处理不重叠的内存拷贝就可以
//memmove处理重叠内存的拷贝
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