//strerror ���ش����룬����Ӧ�Ĵ�����Ϣ
//#include<stdio.h>
//#include<errno.h>
//#include<string.h>
//int main()
//{
//	//������   ������Ϣ
//	//0-       no error
//	//1-       operation not permitted
//	//2-       no such file or directory
//	//errno ��һ��ȫ�ֵĴ�����ı���
//	//��C���ԵĿ⺯����ִ�й����У������˴���ͻ�Ѷ�Ӧ�Ĵ����븳ֵ��errno��
//	//char* str=strerror(errno);
//	//printf("%s\n",str);
//	//���ļ�
//	FILE* pf=fopen("test.txt","r");//�ļ��� ���ļ�
//	if(pf==NULL)
//	{
//		printf("%s\n",strerror(errno));//��ӡ���ļ������ԭ��
//	}
//	else
//		printf("open file success");
//	return 0;
//}