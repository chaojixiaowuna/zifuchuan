//strlen ����������unsigned int �޷�������
//strcpy ���\0������ȥ
//strncpy ֻ����ָ���������ַ� ���´��\0
//�����������ַ���������ʱ �ظ�����\0
//strncat ƴ����һ���ַ����������׷��\0 ���ǵ���ƴ�ӵ��ַ������ȵ�����Ҫ��ʱ
// ֻƴ�����е� ��ֻ׷��һ��\0
// strstr �����ַ��� ���ص�ʱ��һ���ҵ����ַ��ĵ�ַ


 
//kmp�㷨
//ʵ��strstr �Ĺ���
////#include<stdio.h>
////#include<assert.h>
////char* my_str(const char* p1,const char* p2)
////{
////	char* s1=(char*)p1;//������ͬ���ַ�
////	char* s2=(char*)p2;
////	char* cur=(char*)p1;//��¼��ʼ���ҵĵ�ַ
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
////			return cur;//�ҵ��ַ���
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
////		printf("�Ҳ���");
////	}
////	else
////		printf("%s",p);
////	return 0;
////}
////
