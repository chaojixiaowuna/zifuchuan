//memcpy(void* destination,const void* source,int sizeof)
//#include<stdio.h>
//#include<string.h>
//struct stu
//{
//	char name[20];
//	int age;
//};
//int main()
//{
//	struct stu arr[10]={{"zhangsan",18},{"lisi",28}};
//	struct stu arr1[10]={0};
//	memcpy((arr1->name),arr->name,sizeof(arr));
//	//int arr[]={1,2,3,5,7};
//	//int arr1[10]={0};
//	//memcpy(arr1,arr,sizeof(arr));
//	return 0;
//}


//#include<stdio.h>
//#include<assert.h>
//void* my_memcpy(void* src,const void* arr,size_t num)
//{
//	void* ret=src;
//	assert(src!=NULL);
//	assert(arr!=NULL);
//	
//	while(num--)
//	{
//		*(char*)src=*(char*)arr;
//		((char*)src)++;
//		((char*)arr)++;
//	}
//	return ret;
//}
//struct stu
//{
//	char name[20];
//	int age;
//};
//int main()
//{
//	struct stu arr[10]={{"zhangsan",18},{"lisi",28}};
//	struct stu arr1[10]={0};
//	my_memcpy((arr1->name),arr->name,sizeof(arr));
//	int arr[]={1,2,3,5,7};
//	int arr1[10]={0};
//	memcpy(arr1,arr,sizeof(arr));
//	return 0;
//}