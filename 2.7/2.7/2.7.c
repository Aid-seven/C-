#define _CRT_SECUERE_NO_WARNING 1
#include<stdio.h>


//int main()
//{
//	//int a = 1;
//	//int b = 2;
//	//int c = 3;
//	//int d = 4;
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};//����һ�����ʮ��������������
//	printf("%d\n", arr[4]);
//	//char ch[20];
//	//float arr2[5];
//	return 0;
//} 


//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	while (i < 10)
//	{
//		printf("%d\n", arr[i]);
//		i++;
//	}
//	return 0;
//}

//int main()
//{
//	int a = 5 % 2;//ȡģ
//	printf("%d\n", a);
//	return 0;
//}

//int main()
//{
//	int a = 1;
//	//����1ռ�ĸ��ֽ�=32bit
//	int b = a << 2;
//	printf("%d\n", a);
//	printf("%d\n", b);
//	return 0;
//}

//int main()
//{
//	//(������)λ����
//	//&��λ�� �룺������
//	//|��λ��
//	//^��λ���
//	int a = 3;
//	int b = 5;
//	int c=a&b;
//	printf("%d\n", c);
//	return 0;
//}

//int main()
//{
//	int a = 3;
//	int b = 5;
//	int c = a | b;
//	printf("%d\n", c);
//	return 0;
//}

//int main()
//{
//	int a = 3;
//	int b = 5;
//	int c = a ^ b;
//	printf("%d\n", c);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	a = 20;//=��ֵ��==�ж����
//	a = a + 10;
//	a += 10;
//	a = a & 2;
//	a&=2
//	return 0;
//}

//��Ŀ������
//˫Ŀ������
//��Ŀ������
//int main()
//{
//	int a = 10;
//	int b = 20;
//	a + b;//�����������Ҹ���һ�������������ԼӺ�Ϊ˫Ŀ������
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	printf("%d\n", a);
//	printf("%d\n", !a);
//	return 0;
//}

int main()
{
	int arr[10] = { 0 };
	int sz = 0;
	sz=sizeof(arr) / sizeof(arr[0]);
	printf("sz=%d\n", sz);
	return 0;
}