#define _CRT_SECURE_NO_WARNINGS 1  //��ע����ʾ
#include<stdio.h>
#include<math.h>
#include<string.h>
#include <conio.h>

int main()
{
	int i,k,count,s;
	char c,*b[20]={0};
	char* a[] = {(char*)"��",(char*)"Ҽ",(char*)"��",(char*)"��",(char*)"��",(char*)"��",(char*)"½",(char*)"��",(char*)"��",(char*)"��" };
	char* d[] = { (char*)"Ǫ",(char*)"��",(char*)"ʰ",(char*)"��",(char*)"��" };
	//�ַ�������ֵ�͵�ַ�ǲ����  ���ַ���ܸ����������� ��ֵ����
	//���ǿ������ת����
	for (i = 1; (c = getchar()) != '\n'; i++)
		b[i - 1] = a[c - 48 ];
	k = --i;
	count = 0;
	s = 0;
	if (k == 9)                      //�ֿ����
		printf("%s��", b[count++]);  //ͬ�����Ǻ�����ֵ����
	if(k>=5)
	{
		for (i = count + 1; i <= k-count - 4; i++)
		{
			if (b[i - 1] == "��" && i != k - count - 4)
			{
				s++;
				if (s == 1)
					printf("��");
			}
			else if(b[i - 1] == "��" && i == k - count - 4)
				continue;
			else
			{
				printf("%s", b[i - 1]);
				printf("%s", d[i - 1 - count]);
				s = 0;
			}
		}
		printf("��");
		count = k  - count-4;
		k -= count;
	}
	for(i=count+1;i<=)
}

//int main()              //��������  �ֽ׶����ж���
//{
//	int t=0, rab=0, tur=0,T;
//	scanf("%d", &T);
//	for (;t<T; )
//	{
//	
//		if (rab > tur)
//		{
//			tur += (T-t>30?30:T-t)*3;        //�����ּ򵥵����ȡ��ֵ
//			t += (T - t > 30 ? 30 : T - t);
//		}
//		else
//		{
//			tur += (T - t > 10 ? 10 : T - t)*3;
//			rab += (T - t > 10 ? 10 : T - t)*9;
//			t += (T - t > 10 ? 10 : T - t);
//		}
//	}
//	if (rab > tur)
//		printf("^_^ %d", rab);
//	else if (rab == tur)
//		printf("-_- %d", rab);
//	else
//		printf("@_@ %d", tur);
//	return 0;
//}

//#define num 4
//void Exc(int*, int*);
//void F(int*,int);
//int main()                           //ȫ�������� �ݹ�
//{
//	int a[num] = { 0 },n,i;
//	printf("������һ��������%d��������\n",9-num);
//	scanf("%d", &n);
//	for (i = 1; i <= num; i++)
//		a[i - 1] = n + i - 1;
//	F(a,num);
//	return 0;
//}
//void F(int* a,int n)
//{
//	int i;
//	if(n==1)
//	{
//		for (i = 1; i <= num; i++)
//			printf("%d", a[i - 1]);
//		printf("\n");
//	}
//	else
//	{
//		for (i =1; i<= n; i++)         //����λ����ʼ ������������ֵĵ�λ
//		{
//			Exc(&a[n - 1], &a[n - i]); //�Ƚ����������
//				F(a, n-1);             //�������Լ� ��ı䵱��ݹ��nֵ
//			Exc(&a[n - 1], &a[n - i]); //�ٻ���������ԭλ
//		}
//
//	}
//}
//void Exc(int* a, int* b)
//{
//	int k;
//	k = *a;
//	*a = *b;
//	*b = k;
//}  

//double F1(double,double);
//double F2(double,int);
//	double x;
//	int y;
//int main()            //���ַ��󿪴η���
//{                     //ע��ÿ������˵��ж�  �ݹ�ʱÿ���ж���ֵ����
//	int i = 0, a = 0, left, right;
//	scanf("%lf%d", &x,&y);
//	if (x < 0 && (y % 2 == 1))
//	{
//		x = -x;
//		a = 1;
//	}
//	while (F2(i,y) < x)
//		i++;
//	left = i - 1;
//	right = i;
//	if (a==1)
//		printf("sqrt(x)=%lf", -F1(left, right));
//	else
//		printf("sqrt(x)=%lf", F1(left, right));
//	return 0;
//}
//double F1(double left,double right)   //�ݹ麯��ÿһ����֧���з���ֵ
//{                                             //ÿһ�η���ֵ�����ص���һ��ݹ�
//	if (F2(right,y) == x)                    //����ұ߽�
//		return right;
//	double mid=(left+right)/2,a;
//	if (right - left < 1e-4)
//		return mid;
//	if (F2(mid,y) < x)
//		a=F1(mid, right);
//	else
//		a=F1(left, mid);
//	return a;
//}
//double F2(double x, int y)
//{
//	int i;
//	double a = 1;
//	if (y == 0)
//		return 1;
//	else if (x == 0)
//		return 0;
//	else
//	{
//		if (y < 0)
//			x = 1 / x;
//		y = (int)fabs(y);
//		for (i = 1; i <= y; i++)
//			a *= x;
//	}
//	return a;

//double f(double, int);
//double F2(double x,int y)  //�Զ��������ݴκ���  �ݹ�
//{
//	if (x != 0 && y != 0)
//	{
//		if (y < 0)
//			x = 1 / x;
//		y = fabs(y);
//		return F(x, y);
//	}
//	else if (y == 0 && x != 0)            //��ϸ֦ĩ�ڷ���������  �õݹ麯�����ִ�����
//		return 1;
//	else if (x == 0 && y != 0)
//		return 0;
//}
//double f(double x, int y)
//{
//	if (y != 0)                     //x*=F(x,y)
//	{                               //x*=F(x,y-1)
//		y--;                        //.......
//		x *= F(x, y);               //x*=F(x,1)
//	}
//	else
//		return 1;
//	return x;
//}

//int main()  //����ѧ������һ������ÿλ����   ������λ��ʼ
//{
//	int i = 1;
//	int a;
//	int b[20];
//	scanf("%d", &a);
//	do
//	{
//		b[i - 1] = a % 10;  //ȡ���һλ
//		a /= 10;            //�����һλȥ��
//		i++;
//	} while (a!=0);
//	for (i--;i>=1;i--)
//		printf("%d\n", b[i - 1]);
//	return 0;
//}

//int main()          //ע�����е�print���к������ݻ���
//{
//	int i = 1;
//	printf("%d %d %d %d",i++, ++i,i, i++);
//	//���Ϊ 4 5 5 2
// 
// int a[]={1,2,3,4,5},*p=a;
// printf("%d  %d  %d  %d  ",*p++,*++p,(*p)++,++(*p));  //++���ȼ�����*
// //���Ϊ 1 3 3 5
// //(1 2 5 4 5)
//	//�������� ����ֱ�Ӵ��ڱ� ǰ���ȱ� �Լ����� iֱ�Ӵ���
//	//i=i+1 ��ǰ���߼�����
//	return 0;
//}

//��ָ������һ�α��λָ�루��ĳλ���ĵ�ַ�� ������һ�α����
//���ֶ�ά������һά������׵�ַ���� ǰ��Ҫ��һ�Σ���ʱֻ��λָ�룩
//�ַ��������ı��ʱ�ʾ��ʵ��һ����ַ
 
//�ݹ���ô������� ���д�������
//a>b>c  ������������
//����(T - t > 10 ? 10 : T - t)���滻ȡ��ֵ����

//-6%5=-1  6%-5=1 -5%6=-5 5%-6=5 ֻ�ɵ�һ����ȷ������ Ȼ����������
//�������˱���������


//�����±��0��ʼ
//������൱������ f[i+2]=f[i+1]+f[i] ���԰�ÿ�α仯��ֵ������


//����ԭ�� ���� �������  ����ԭ��ȡ����һΪ����
	
//�Զ�����ת������ֵ���ʱ �ұߵ��ܽ��ǿ��Ϊ�������  
//              ���������ͱ��ʽʱ ���߾��ȱ� ���Ҳ�Ǹ߾��ȵ�
//ǿ������ת����(double)sum/count=3.147   (double)(sum/count)=3.000

//��iΪ��λ�������λa=(int)i/100,ʮλb=(i-a*100)/10,��λc=i%10 �ɱ������ѭ��
//������ÿ��λ���з�ΧҪ�����ö���ѭ�������ڿ��ƣ��ҿ�ֱ�Ӱ����ִ���һ������ü�������
//��If����for֮ǰ���жϿ��Լ���ѭ������

//��fabs(x)��1e-6�ıȽ��ж�x�Ƿ�Ϊ0
//�����������棺j *=-1 �� if��� i%2==0 ������ż��
	
//continue ����δִ�е�ѭ���壬ֱ�ӽ��б��ʽ3����
//break ������ǰһ��ѭ��,��ִ�б��ʽ����ִ��ѭ������һ����䣬ע����������ѭ��ʱ�޶����� ��������gotoѭ��
//goto����ֱ����������ѭ��������ע���� ������ע�������������� 
//forѭ�����б�������ⶨ�壬�ɱ�����������ı䣻���ڶ�������
//for�����б�ʽ�ɸ�while���һ��
//do-while ���Ҫ�ӷֺ�
// return ����ֹ�������� ��continue break ������֮��
// while(a=5) ���ȸ�ֵ ���ж�a����� һ������ѭ��

//��md��ʽ������ռ������ -��ʾ�󶥸�
//int a = 10;
//printf("%-3d%3d", a, 50);
//	double x = 20.402;
//printf("%10.2f\n", x);  //С������10λ ����С��2λ
//scanf�������������
//����ַ���ʱ%s a ���÷�����
	
//ת���ַ����ַ����洢�ʹ�ӡʱ��Ҫ����
// 0���������� '0' �ַ��� '\0'ת���ַ�
//char arr[] =  "c:\\test\\32\\test.c";
//printf("%s", arr);
//getchar()�����������س� ���»س�ʱ�س������֡��ո�һ������ڴ滺����
//%c����ʶ��ת���ַ�����س�
//ע�������ʹ��

//�ȱ���� ���ڵ�ǰ���Ż�ֺ�
// ���ú�䣬���ֵ���¸��ֺŻ򶺺�
// ? : ������ն������� �ڵ�ǰ���ʽ�ı������
//int a = 0, b = 0;
//a = (b=0,++b,b++);
//a = --a == b++ ? a++ : b++;
//printf("a=%d b=%d", a,b);
