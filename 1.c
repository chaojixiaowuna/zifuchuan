//strlen 返回类型是unsigned int 无符号整型
//strcpy 会把\0拷贝过去
//strncpy 只拷贝指定个数的字符 不会拷贝\0
//当被拷贝的字符个数不够时 重复复制\0
//strncat 拼接上一段字符串后会主动追加\0 但是当被拼接的字符串长度低于需要的时
// 只拼接已有的 并只追加一个\0
// strstr 查找字符串 返回的时第一次找到的字符的地址


 
//kmp算法
//实现strstr 的功能
////#include<stdio.h>
////#include<assert.h>
////char* my_str(const char* p1,const char* p2)
////{
////	char* s1=(char*)p1;//查找相同的字符
////	char* s2=(char*)p2;
////	char* cur=(char*)p1;//记录开始查找的地址
////	assert(p1&&p2);
////	while(*cur)
////	{
////		s1=cur;
////		s2=(char*)p2;
////		while(*p1=='\0')
////		{
////			return (char*)p1;
////		}
////		while(*s1==*s2&&*s1!='\0'&&*s2!='\0')
////		{
////			s1++;
////			s2++;
////		}
////		if(*s2=='\0')
////		{
////			return cur;//找到字符串
////		}
////		if(*s1=='\0')
////		{
////			return NULL;
////		}
////		cur++;
////	}
////	return NULL;
////}
////int main()
////{
////	char* p1="chaojixiaowu";
////	char* p2="xiaowu";
////	char* p;
////	p=my_str(p1,p2);
////	if(p==NULL)
////	{
////		printf("找不到");
////	}
////	else
////		printf("%s",p);
////	return 0;
////}
////
