#define _CRT_SECURE_NO_WARNINGS 1
//�������ܿ����㷨���ʵ��	
//Ϊ������Ա���£��Ե��ݽ��н������ܵ��ȿ�����Ч�����Ա�������ݵ���Ӧ�ٶȣ���ʡ���������������Դ��������������Ч�ʺ�ʹ��������
//����¥��m�㡢n�����ݣ�����ν��е��ݵ����п�����Ҫ�����Ż���ơ�
#include<stdio.h>
#include<string.h>            //memset(a,0,sizeof(a)) ������a��ֵ
#include<conio.h>             //getch()
#include<easyx.h>             //������windows.h ��ʱ����Sleep() ��λ����
#include<mmsystem.h>          //Ҫд��easyx���·�  ��ý���豸�ӿ�ͷ�ļ�
#pragma comment(lib,"winmm.lib") //������̬��

//�������������е���ֻ�����а��� ֻ�����е��� ����ͬ��
#define height 10          //¥��߶�
#define liftnum 3          //��������
#define loadmax 10         //������������
#define speed   3000       //����������ÿ������ʱ�䣨���룩
#define wait   6000       //������¥��ȴ���ʱ
typedef struct LIFT
{
	int load;
	int con;       //-1��ʾ���� 0��ʾ����Ӧ 1��ʾ����
	int full;      //0��ʾδ�� 1��ʾ����
	int goal;           //Ŀ��¥��
	int current;        //��ǰ¥��
	int pass[height];   //��ͣ����¥��
	int lbutton[height];//�����ڵ�¥�㰴ť
}LIFT;
typedef struct FLOOR
{
	int ubutton;  //����¥�㰴ť 0��ʾδ���� 1��ʾ�Ѱ���
	int dbutton;
}FLOOR;
FLOOR f[height] = { 0 };      //��ʼ��¥����Ϣ
int Checkup(LIFT lift)        //���ϼ���Ƿ����ڵ�ǰ¥��֮�ϵ���������
{
	int i,max=lift.current,j;
	for (i = lift.current,j=1; i <= height; i++)
	{
		if (f[i - 1].ubutton == 0&&lift.lbutton[i-1]==0)
			continue;
		else
		{
			f[i - 1].ubutton = 0;
			lift.lbutton[i - 1] = 0;
			lift.pass[j++ - 1] = i;              //�洢����ʱ���������а�ť��¥����
			max = i;
		}
	}
	return max;
}
void Goup(LIFT lift)
{
	memset(lift.pass, 0, sizeof(lift.pass));        //Ӧ��Ҫ����Ŀ��¥�� ÿ�����н�·������
	lift.goal = Checkup(lift);
	for (int*p=lift.pass;;)
	{
		if (lift.current==*p)        //������¥��ͣ��
		{
			Sleep(10000);
			p++;
		}
		if (lift.current == lift.goal)
			break;
		//Sleep(speed);               //��������
		lift.current++;
		printf("%d\n", lift.current);
	}
}
int main()
{
	LIFT lift[liftnum] = {0};
	int i;
	for (i = 1; i <= liftnum; i++)  //��ʼ��������Ϣ  ����һ¥
		lift[i - 1] = { 0,0,0,0,1 ,{0} };

	f[3].ubutton = 1;
	lift[0].lbutton[5] = 1;
	Goup(lift[0]);

	return 0;
}