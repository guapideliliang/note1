#define _CRT_SECURE_NO_WARNINGS 1
//
#include<stdio.h>
#include<stdlib.h>
////void jiaohuan(char*shuzu,char*shuzu1,int size)
////{
////	int i=0;
////	for (i = 0; i < size; i++)
////	{
////		char a = *shuzu;
////		*shuzu = *shuzu1;
////		*shuzu1 = a;
////		shuzu++;
////		shuzu1++;
////	}
////}
////void qrst(void* shuzu, int se, int size, int (*c)(const void* e1, const void* e2))
////{
////	int i = 0, j = 0;
////	for ( i = 0; i < se-1; i++)
////	{
////		for (j = 0; j < se-1-i;j++)
////		{
////			if (c((char*)shuzu+j*size,(char*)shuzu+(j+1)*size)>0)
////			{
////				jiaohuan((char*)shuzu + j * size, (char*)shuzu + (j + 1) * size,size);
////			}
////		}
////	}
////}
////int b (const void* e1, const void* e2)
////{
////	return *(int*)e1 - *(int*)e2;
////}
////int main()
////{
////	int arr[] = { 1,5,3,6,2,9,7,4,8,0 };
////	int se = sizeof(arr)/ sizeof(arr[0]);
////	qrst(arr, se, sizeof(arr[0]),b);
////	int i = 0;
////	for ( i = 0; i <se; i++)
////	{
////		printf("%d ",arr[i]);
////	}
////	return 0;
////}
////int main()
////{
////	int a = 0, b = 1, c = 0,n=0;
////	scanf("%d", &n);
////	if (n > 1)
////	{
////		while (n - 1)
////		{
////			c = a + b;
////			a = b, b = c;
////			n--;
////		}
////	}
////	else
////	{
////		c = n;
////	}
////
////	printf("%d", c);
////	return 0;
////}
//#include <stdio.h>//合并两有序表
//#include<stdlib.h>
//
//struct s
//{
//	int*date;
//}a,b,h;
//
//int main()
//{
//	int i = 0,j=0;
//	int d[5] = { 1,3,4,5,6 };
//	int g[6] = { 2,3,5,7,8,9 };
//	a.date = (int*)malloc(sizeof(int) * 5);
//	b.date = (int*)malloc(sizeof(int) * 6);
//	h.date= (int*)malloc(sizeof(int) * 11);
//	for ( i = 0; i <5; i++)
//	{
//		a.date[i] = d[i];
//	}
//	for ( i = 0; i <6; i++)
//	{
//		b.date[i] = g[i];
//	}
//	int z = 0;
//	for ( i = 0,j=0;i!=5&&j!=6;)
//	{
//		if (a.date[i]<b.date[j])
//		{
//			h.date[z++] = a.date[i++];
//		}
//		else
//		{
//			h.date[z++] = b.date[j++];
//		}
//	}
//	while (i != 5)
//	{
//		h.date[z++] = a.date[i++];
//	}
//	while (j!=6)
//	{
//		h.date[z++] = b.date[j++];
//	}
//	for (i = 0; i < z; i++)
//	{
//		printf("%d ", h.date[i]);
//
//	}
//
//	return 0;
//}




//int main()
//{
//    int i = 0;
//    int k = 16;
//    int count = 0;
//
//    for (i = 0; i< 18; i++)
//    {
//        int n = 1 << i;
//        int g = n & k;
//        if (g)
//        {
//            count++;
//        }
//    }
//    return 0;
//}

//#include<stdio.h>
//#include<malloc.h>
//#define max 5
//typedef struct {
//	int data[max];
//	int top;
//} cat;
//void cr(cat* l)
//{
//	l->top = -1;
//}
//int in(cat* l, int x)
//{
//	if (l->top == max - 1)
//		return -1;
//	else
//	{
//		l->top++;
//		l->data[l->top] = x;
//	}
//	return 0;
//}
//int out(cat* l)
//{
//	if (l->top == -1)
//		return -1;
//	while (l->top != -1)
//	{
//		printf("%d ", l->data[l->top]);
//		l->top--;
//	}
//	return 0;
//}
//int main()
//{
//	int out(cat * l);
//	int in(cat * l, int x);
//	void cr(cat * l);
//	cat s;
//	int i, x;
//	cr(&s);
//	for (i = 0; i < max; i++)
//	{
//		scanf_s("%d",&x);
//		in(&s, x);
//	}
//	out(&s);
//	return 0;
//}
//#include<stdio.h>
//int ge(int* nums, int i, int numsSize)
//{
//    int max=0;
//    int j = 0;
//    for (j = 0; j < i; j++)
//    {
//        max = max + nums[j];
//    }
//    int sum = 0;
//    for (j = 0; j + i <= numsSize; j++)
//    {
//        int k = 0;
//        for (k = 0; k < i; k++)
//        {
//            sum = sum+nums[j + k];
//        }
//        if (sum > max)
//        {
//            max = sum;
//        }
//        sum = 0;
//    }
//    return max;
//}
//
//
//
//int maxSubArray(int* nums, int numsSize) {
//    int i = 0;
//    int num[10];
//    for (i = 1; i <=numsSize; i++)
//    {
//        num[i - 1] = ge(nums, i, numsSize);
//    }
//    int max = num[0];
//    for (i = 1; i < numsSize; i++)
//    {
//        if (num[i] > max)
//        {
//            max = num[i];
//        }
//    }
//    return max;
//}
//int main()
//{
//    int nums[10] = { 0 };
//    int i = 0;
//    for ( i = 0; i < 5; i++)
//    {
//        scanf_s("%d", &nums[i]);
//    }
//    printf("%d",maxSubArray(nums, 5));
//    return 0;
//}
//#include <stdio.h>
//#include <math.h>
//int main()//高级阶乘计算器
//{
//	int n = 0;
//	scanf_s("%d", &n);
//	if (n < 0)
//	{
//		printf("错误");
//		return 0;
//	}
//	int i = 0, j = 0,sum=0;
//	int k = 1;
//    int a[4000] = { 0 };
//	a[0] = 1;
//	for (j = 1; j <= n; j++)
//	{
//		for (i = 0; i <= k; i++)
//		{
//			a[i] = a[i] * j;
//			if (sum)
//			{
//				a[i] = sum+a[i];
//				sum = 0;
//				if (k==i)
//				{
//					k++;
//				}
//			}
//			if (a[i] > 9)
//			{
//				sum = a[i] / 10;
//				a[i] = a[i] % 10;
//			}
//		}
//	}
//	printf("%d\n", k - 1);
//	for ( i = k-1; i >=0 ; i--)
//	{
//		printf("%d", a[i]);
//	}
//    return 0;
//}
//#include<math.h>
//int main()
//{
//	int i = 0,j=0,k=0;
//	for ( i = 1;; i++)
//	{
//		int count = 0;
//		for (j = 1;; j = j + i)
//		{
//			for ( k = 2; k <=sqrt(j); k++)
//			{
//				if (j%k==0)
//				{
//					break;
//				}
//			}
//			if (k<=sqrt(j))
//			{
//				break;
//			}
//			count++;
//		}
//		if (count>=10)
//		{
//			break;
//		}
//	}
//	printf("%d", i);
//	return 0;
//}

//#include <stdio.h>
//#include <math.h>
//int main()
//{
//	long a, b, c;
//	double s, area;
//	printf("input a,b,c\n");
//	scanf_s("%d,%d,%d", &a, &b, &c);
//	s = (a + b + c) / 2.0;
//	area = sqrt(s * (s - a) * (s - b) * (s - c));
//	printf("area=%f\n", area);
//
//	return 0;
//}


//int countTime(char* time) {
//    int a = 0;
//    if (time[0] == '?')
//    {
//        if (time[1] > '4')
//        {
//            a = 2;
//        }
//        else
//        {
//            a = 3;
//        }
//
//    }
//    if (time[1] == '?')
//    {
//        if (a == 0)
//        {
//            if (time[0] == '2')
//            {
//                if (time[3] == '0' && time[4] == '0')
//
//                {
//                    a = 5;
//                }
//                else
//                {
//                    a = 4;
//                }
//            }
//            else
//            {
//                a = 10;
//            }
//        }
//        else {
//            a = 24;
//        }
//    }
//    if (time[3] == '?')
//    {
//        if (a == 0)
//        {
//            if (time[0] = 2 && time[1] == 4)
//            {
//                a = 1;
//            }
//            else
//            {
//                a = 6;
//            }
//        }
//        else {
//            a *= 6;
//        }
//    }
//    if (time[4] == '?')
//    {
//        if (a == 0)
//        {
//            if (time[0] = 2 && time[1] == 4)
//            {
//                a = 1;
//            }
//            else
//            {
//                a = 10;
//            }
//        }
//        else {
//            if (time[0] = 2 && time[1] == 4)
//            {
//                a = 1;
//            }
//            else {
//                a *= 10;
//            }
//        }
//    }
//    if (a = 0)
//    {
//        a = 1;
//    }
//    return a;
//}
//int main()
//{
//    char a[] = "?5:00";
//    printf("%d",countTime(a));
//	return 0;
//}
//#include<math.h>
//int main()
//{
//	int n = 5, k = 14;
//	int i = 0;
//	int m = 0;
//	for (i = n - 1; i > 0; i--)
//	{
//		int b = pow(2, i);
//		b /= 2;
//		if (b < k)
//		{
//			k -= b;
//			m++;
//		}
//	}
//	int result = 0;
//	for ( i = m; i>0;i--)
//	{
//		if (result == 0)
//		{
//			result = 1;
//		}
//		else
//		{
//			result = 0;
//		}
//	}
//	printf("%d", result);
//	return 0;
//}
//int main()
//{
//	int m = 0, n = 0;
//	scanf_s("%d", &m);
//	int i = 0, j = 0;
//	int a[100] = { 0 }, b[100] = { 0 };
//	for ( i = 0; i <m; i++)
//	{
//		scanf_s("%d", &a[i]);
//	}
//	scanf_s("%d", &n);
//	for ( i = 0; i < n; i++)
//	{
//		scanf_s("%d", &b[i]);
//	}
//	for ( i = 0; i < m; i++)
//	{
//		printf("%d ", a[i]);
//	}
//	int k = i;
//	printf("\n");
//	for ( i = 0; i < n; i++)
//	{
//		printf("%d ", b[i]);
//	}
//	printf("\n");
//	for (j = 0;j < n; j++)
//	{
//		for ( i = 0; i <k ; i++)
//		{
//			if (a[i]==b[j])
//			{
//				break;
//			}
//		}
//		if (i == k)
//		{
//			
//			a[k] = b[j];
//			k++;
//		}
//		for (i = 0; i < k; i++)
//		{
//			printf("%d ", a[i]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//int main()
//{
//	void sort(int* a, int n, int k);
//	int part(int* a, int n, int k);
//	int n = 0, k = 0,i=0;
//	char b = '0';
//	for (;;)
//	{
//		int a[1000] = { 0 };
//		scanf("%d", &n);
//		scanf("%d", &k);
//		for (i = 0; i < n; i++)
//		{
//			scanf("%d", &a[i]);
//			b=getchar();
//		}
//		sort(a,0, n-1);
//		printf("%d\n", a[k - 1]);
//		if (b=='\n')
//		{
//			break;
//		}
//	}
//	return 0;
//}
//void sort(int* a, int n, int k)//快排
//{
//	if (n < k)
//	{
//		int x = part(a, n, k);
//		sort(a, n, x - 1);
//		sort(a, x + 1, k);
//	}
//}
//int part(int* a, int n, int k)
//{
//	int low=n,high=k;
//	int x = a[low];
//	for (;low<high;)
//	{
//		while (high > low && a[high] >= x)
//		{
//			--high;
//		}
//			a[low] = a[high];
//		while (high > low && a[low] <= x)
//		{
//			++low;
//		}
//		a[high] = a[low];
//
//		}
//	a[low] = x;
//	return low;
//}
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int n = 0, i = 0, sum = 0, k = 0,flag=0;
//	int a[20][4] = { 0 };
//
//	while (1)
//	{
//		sum++;
//		scanf("%d", &n);
//		if (!n)
//		{
//			break;
//		}
//		for (i = 0; i < n; i++)
//		{
//			scanf("%d %d %d", &a[i][0], &a[i][1], &a[i][2]);
//
//			a[i][3] = abs(a[i][1] - a[i][2]);
//		}
//		i = 0; 
//		while (i != n)
//		{
//			if (n == 1)
//			{
//				break;
//			}
//			for (;;)
//			{
//				if (a[0][0] > a[1][0] && a[0][0] < 10000 && a[1][0] < 10000)
//				{
//					a[1][0] += a[1][3];
//				}
//				else if (a[0][0] < a[1][0] && a[0][0] < 10000 && a[1][0] < 10000)
//				{
//					a[0][0] += a[0][3];
//				}
//				else
//				{
//					break;
//				}
//			}
//			k = a[0][0];
//			if (k>=10000)
//			{
//				break;
//			}
//			for (i = 2; i < n; i++)
//			{
//				while (1)
//				{
//
//					if (k > a[i][0])
//					{
//						a[i][0] += a[i][3];
//					}
//					else if (k < a[i][0])
//					{
//						flag = 1;
//						break;
//					}
//					else
//					{
//						break;
//					}
//				}
//				if(flag)
//				{
//					flag = 0;
//					a[0][0] += a[0][3];
//					break;
//				}
//			}
//		}
//		if (i == n && a[0][0] < 10000)
//		{
//			printf("Case #%d:\n", sum);
//			printf("The actual year is %d.\n\n", a[0][0]);
//
//		}
//		else
//		{
//			printf("Case #%d:\n", sum);
//			printf("Unknown bugs detected.\n");
//		}
//	}
//	return 0;
//}
//int main()
//{
//
//	int a = 0, b = 0;
//	while (scanf("%d %d", &a, &b) != EOF)
//	{
//		printf("%d\n", a + b);
//}
//
//	return 0;
//}



