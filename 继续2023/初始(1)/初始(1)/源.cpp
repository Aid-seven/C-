#include<stdio.h>

//int main()
//{
//	//����20
//	short age = 20;//���ڴ����������ֽ�(16bitλ)�������20
//	float weight = 95.6f;//���ڴ������ĸ��ֽڴ��С��
//	//95.6��f����ΪϵͳĬ�ϳ���С��ʱΪ˫���ȸ�������
//	//��float�ǵ����ȸ�������������ǰ���Ӧ
//
//	return 0;
//}

int main()
{
	//����ע����ʦ�̵���%d��%d��һ�ֳ����÷�
	//���Ǳ����������Ҹĳ�%zd����ʵ%zd�ǱȽ����õ�
	//%zd��ǿ��ת��Ϊ���εĸ�ʽ���������Ӧ����size-t���͵�(c99)�й涨
	printf("%zd\n", sizeof(char));//1
	printf("%zd\n", sizeof(short));//2
	printf("%zd\n", sizeof(int));//4
	printf("%zd\n", sizeof(long));//4
	//Ҳ�п�����8����ΪC����ֻ��long�Ĵ�СֻҪ>=int�Ĵ�С
	printf("%zd\n", sizeof(long long));//8
	printf("%zd\n", sizeof(float));//4
	printf("%zd\n", sizeof(double));//8
	return 0;
}