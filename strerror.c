//strerror 返回错误码，所对应的错误信息
//#include<stdio.h>
//#include<errno.h>
//#include<string.h>
//int main()
//{
//	//错误码   错误信息
//	//0-       no error
//	//1-       operation not permitted
//	//2-       no such file or directory
//	//errno 是一个全局的错误码的变量
//	//当C语言的库函数在执行过程中，发生了错误就会把对应的错误码赋值到errno中
//	//char* str=strerror(errno);
//	//printf("%s\n",str);
//	//打开文件
//	FILE* pf=fopen("test.txt","r");//文件名 读文件
//	if(pf==NULL)
//	{
//		printf("%s\n",strerror(errno));//打印打开文件错误的原因
//	}
//	else
//		printf("open file success");
//	return 0;
//}