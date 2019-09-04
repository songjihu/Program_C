﻿// Output.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void output()
{
	//输出函数
	printf("输出函数如下---------\n");
	//double a = 9.892132; double b = 8.136732; double f = 6.345522;
	int a = 9; int b = 8; double c = 9.895432543132; double d = 8.13543254325432543253426732; double f = 6.34545365436522;
	printf("输出整数:%d%d\n", a, b);//输出整数
	printf("输出小数(单精度):%f %f\n", c, d);//输出小数(单精度)
	printf("输出小数(双精度):%lf %lf\n", c, d);//输出小数(双精度)
	printf("输出两位小数(单精度):%.19f\n", f); //输出两位小数(单精度)
	printf("输出两位小数(双精度):%.19lf\n", f);//输出两位小数(双精度)
	char s = 's'; char str[10] = "ABCD";
	printf("输出单个字符:%c\n", s);//输出单个字符
	printf("输出字符串：%s\n", str);//输出字符串
}

void input()
{
	int t;
	//输入函数 
	printf("输入函数如下---------\n");

	char str[100];//字符串
	t = scanf("%s", &str);//跳过空格(空格即结束),Enter和Tab结束
	printf("输入1:%s\n", str);


	char str2[100];//字符串
	gets_s(str2); gets_s(str2);//能接收空格，回车则结束
	printf("输入2:%s\n", str2);

	char c;//字符
	c = getchar();//接收单个字符
	printf("输入3:%c\n", c);

	return;
}

void process_number_e()
{
	int a[4], i, j;
	for (i = 0; i < 4; i++) {
		int t = scanf("%d", &a[i]);
	}
	for (j = 0; j < 4; j++) {
		printf("%d", a[j]);
	}
	return;
}

void process_string_e() {

	char str[20] = "\0";
	printf("请输入字符串：\n");
	gets_s(str);
	printf("%s\n", str);
	return;
}

void m_and_f() {
	int* p = (int*)malloc(sizeof(int));
	free(p);
	return;
}

void about_math() {
	double sin(double x);//x的正弦值
	double cos(double x);//x的余弦值
	double tan(double x);//x的正切值

	double exp(double x);//e的x次方
	double pow(double x, double y);//x的y次方
	double sqrt(double x);//x的开方
	double log(double x);//log e x
	double log10(double x);//log 10 x

	double fabs(double x);//|x| x的绝对值

	return;
}

void about_struct() {
	struct Date
	{
		int month;
		int day;
		int year;
	}a, b;//方法1：定义结构体后并创建2个结构体变量a和b
	a.day = 11;
	Date c;//方法2：直接定义
	c.day = 10;
	printf("%d %d", a.day, c.day);
	return;
}

void about_struct_e() {
	struct Student
	{
		int num;
		char name[20];
		float score;
	};

	struct Student stu[5] = { {10101,"zhang",78},{10102,"wang",99.9},{10103,"CCC",68.5},{10104,"DDD",76},{10105,"EEE",98} };
	struct Student temp;
	int n = 5;
	int i, j;
	for (i = 0; i < n - 1; i++)
	{
		for (j = i + 1; j < n; j++) {
			if (stu[j].score > stu[i].score) {
				temp = stu[j];
				stu[j] = stu[i];
				stu[i] = temp;
			}
		}
	}
	for (i = 0; i < n; i++) {
		printf("%s %f\n", stu[i].name, stu[i].score);
	}

	return;
}

void find_prime() {
	//100以内
	int i, j;
	int length = 100;
	int count = 0;
	for (i = 2; i < length; i++)
	{
		for (j = 2; j <= i; j++) {
			if (i % j == 0) {
				break;//能被整除则跳出
			}
		}
		if (i == j) {
			count++;
			printf("%d:%d\n", count, i);
		}
	}
	return;
}

void prime_factorization() {

	int i, j;
	int n = 5446547;
	int k = n;
	for (i = 2; i <= n; i++) {
		while (n != i)
		{
			if (n % i == 0) {
				printf("%d*", i);
				n = n / i;
			}
			else
			{
				break;
			}
		}

	}
	printf("%d=%d\n", n, k);
	return;
}

void approximate_number() {

	int i;
	int n = 512;
	for (i = 2; i < n; i++) {
		if (n % i == 0) {
			printf("%d\n", i);
		}
	}
	return;
}

void statistical_number() {

	char ch;
	int digit = 0, upper = 0, lower = 0;
	ch = getchar();
	while (ch != '\n')
	{
		if (ch >= '0' && ch <= '9') {
			digit++;
		}
		else
		{
			if (ch >= 'A' && ch <= 'Z') {
				upper++;
			}
			else
			{
				if (ch >= 'a' && ch <= 'z') {
					lower++;
				}
			}
		}
		ch = getchar();
	}
	printf(" digit=%d\n upper=%d\n lower=%d\n", digit, upper, lower);
	return;
}

void positive_number() {

	int a[20] = { 2,4,3,2,4,2,1,1,2,3,1,2,3,1,3,1,1 };
	int b[10] = { 0 };
	int i;
	for (i = 0; i < 20; i++) {
		b[a[i]]++;
	}
	for (i = 0; i < 10; i++) {
		printf("%d次数:%d\n", i, b[i]);
	}
	return;
}

void divide_number() {

	int n = 123456;
	int k = 10;//进制or位数
	int b[10] = { 0 };
	int i = 0;
	printf("%d\n", n);
	while (n != 0)
	{
		b[i] = n % k;
		n /= k;
		i++;
	}
	k = i - 1;
	for (i = 0; i <= k; i++) {
		printf("%d:%d\n", i + 1, b[i]);
	}
	return;
}

void b_and_s() {

	int a = 18, b = 20;
	int k = a * b;
	int t = 1;
	if (a < b) {
		t = a;
		a = b;
		b = t;
	}
	//必须先交换，不然取余为0
	//辗转相除法求最大公约数（欧几里得算法）
	while (t != 0) {
		t = a % b;
		a = b;
		b = t;
	}
	//两个数的乘积k = 最大公约数 * 最小公倍数
	b = k / a;
	printf("最大公约数:%d\n最小公倍数:%d\n", a, b);
	return;
}

void bubble_sort() {

	int a[10] = { 4,2,5,1,4,6,9,0,7,4 };
	int n = 10;
	int i, j, t;
	for (i = 0; i < n - 1; i++) {
		//外循环一趟把最大值放在最右边，i控制最右边界
		for (j = 0; j < n - i - 1; j++) {
			if (a[j] > a[j + 1]) {
				t = a[j];
				a[j] = a[j + 1];
				a[j + 1] = t;
			}
		}
	}
	for (i = 0; i < n; i++) {
		printf("%d:%d\n", i, a[i]);
	}
	return;
}

void dwide(int a[], int n) {
	int i = 0, j = n - 1, temp;
	while (i < j) {
		while (a[i] % 2 != 0) {
			i++;
		}
		while (a[j] % 2 != 1) {
			j--;
		}
		//循环到需要左右交换的位置
		if (i < j) {
			temp = a[i];
			a[i] = a[j];
			a[j] = temp;
		}
	}
	for (i = 0; i < n; i++) {
		printf("%d ", a[i]);
	}
	printf("\n");
	return;
}

void swapt(int a[3][4]) {
	int m = 3, n = 4;
	int i, j, temp;
	for (i = 0; i < m; i++) {
		for (j = 0; j < n; j++) {
			printf(" %2d ", a[i][j]);
		}
		printf("\n");
	}
	printf("\n");

	for (i = 0; i < (m / 2); i++) {
		//上半部分直接行列都互换
		for (j = 0; j < n; j++) {
			temp = a[i][j];
			a[i][j] = a[m - i - 1][n - j - 1];
			a[m - i - 1][n - j - 1] = temp;
		}
	}
	//若奇数行则剩下中间一行单独处理
	if (m % 2 != 0) {
		for (j = 0; j < (n / 2); j++) {
			temp = a[m / 2][j];
			a[m / 2][j] = a[m / 2][n - j - 1];
			a[m / 2][n - j - 1] = temp;
		}
	}

	for (i = 0; i < m; i++) {
		for (j = 0; j < n; j++) {
			printf(" %2d ", a[i][j]);
		}
		printf("\n");
	}

	return;
}

void reverse(int a[], int n) {

	int i, temp;
	for (i = 0; i < (n / 2); i++) {
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
	}
	return;
}

void print_ai(int a[], int n) {
	int i;
	printf("开始打印:\n");
	for (i = 0; i < n; i++) {
		printf("%d  ", a[i]);
	}
	printf("\n打印结束");
}

void print_ai_s(char a[], int n) {
	int i;
	printf("开始打印:\n");
	for (i = 0; i < n; i++) {
		printf("%c  ", a[i]);
	}
	printf("\n打印结束");
}

void sort(int a[], int n) {
	int i, j, t;
	for (i = 0; i < n - 1; i++) {
		for (j = 0; j < n - i - 1; j++) {
			//每一趟把最大的放在n-i-1的位置上，一直到有序
			if (a[j] > a[j + 1]) {
				t = a[j + 1];
				a[j + 1] = a[j];
				a[j] = t;
			}
		}
	}
	return;
}

void move_zero(int a[], int n) {

	int i, j, p;
	for (i = 0; i < n; i++) {
		if (a[i] == 0) {
			//从当前位置向后寻找非0元素交换
			for (j = i; j < n; j++) {
				if (a[j] != 0) {
					p = j;//找到则存下标并break
					break;
				}
				if (j == (n - 1)) {
					//循环完也没找到则表示完成移动
					return;
				}
			}
			//交换
			a[i] = a[p];
			a[p] = 0;
		}
	}
	return;
}

int move_bettwen(int a[], int n, int x, int y) {

	int i = 0, k = 0;
	for (i = 0; i < n; i++) {
		if (a[i] >= x && a[i] <= y) {
			k++;//计算跳过的长度
		}
		else {
			a[i - k] = a[i];//覆盖存储
		}
	}
	return n-k;
}

void del_same(int a[], int n) {

	int i=0, j, k=0;
	while (i < n) {
		for (j = i + 1; j < n; j++) {
			if (a[i] == a[j]) {
				k++;//连续重复个数k
			}
			else {
				//移动到连续相同序列的第一个的后边
				a[j - k] = a[j];
			}
		}
		i++;
		k = 0;
	}
	return;
}

int is_prime(int x) {

	if (x == 1) {
		return 0;
	}
	int i;
	for (i = 2; i < x; i++) {
		if (x % i == 0 && x != i) {
			//找到不是可以整除他的且不是本身的数
			return 0;
		}
	}
	return 1;
}

int del_sushu(int a[], int n) {

	int i, j, num = n;
	for (i = 0; i < num; i++) {
		if (is_prime(a[i])) {
			for (j = i; j < num - 1; j++) {
				a[j] = a[j + 1];//前移每一个后边的数
			}
			i--;//保持i为原位置
			num--;//数组总数减一
		}
	}
	return num;
}

void sort_string(char a[], int n) {

	int i, j, temp;
	//冒泡排序
	for (i = 0; i < n; i++) {
		for (j = 0; j < n - i - 1;j++) {
			if (a[j] > a[j+1]) {
				temp = a[j + 1];
				a[j + 1] = a[j];
				a[j] = temp;
			}
		}
	}
	return;
}

int merge_two(int a[], int m, int b[], int n) {

	int i = 0, j = 0, k, len = m;
	for (j = 0; j < n; j++) {
		//for循环第二个数组
		while (i < len && a[i] < b[j]) {
			//移动到比a[i]小的b[j]处准备插入
			i++;
		}
		if (a[i] == b[j]) {
			//相同则忽略
			continue;
		}
		for (k = len; k > i; k--) {
			//插入前依次后移
			a[k] = a[k - 1];
		}
		a[i] = b[j];//插入
		len++;
	}
	return len;
}

int main()
{
	//----基础----
	/*void output(); //输出函数
	void input();  //输入函数
	void process_number_e(); //例子:处理一串数字
	void process_string_e();//例子:处理字符串
	void m_and_f();//申请和释放空间
	void about_math();//数学相关函数
	//ASCII 0-48 A-65 a-97
	void about_struct();//结构体相关定义
	void about_struct_e();//结构体例子*/

	//----常用小算法----
	/*void find_prime();//*寻找素数
	void prime_factorization();//**分解质因数
	void approximate_number();//**约数
	void statistical_number();//统计字母和数字出现个数
	void positive_number();//统计正整数出现个数
	void divide_number();//以进制分解数字
	void b_and_s();//**求最大公约数和最小公倍数
	void bubble_sort();//*冒泡排序*/

	//----习题----
	
	//P11[题型一]数组分类:将a[n]划分为左边为奇数，右边为偶数
	/*int a[10] = { 1,2,3,4,5,6,7,8,9,10 },n=10;
	void dwide(int a[], int n);*/

	//[题型二]数组逆序:①将m*n二维数组首尾互换,例如+1 -1 +2 -2互换
	/*int b[3][4] = { {0,1,2,3},{10,11,12,13},{20,21,22,23} };
	void swapt(int a[3][4]);*/

	//②将一维数组A[m+n]a1-am与b1-bn整体互换位置
	/*
	int c[11] = { 1,2,3,4,5,6,7,8,9,10,11 }, left_num = 5, right_num = 6, n = 11;
	void reverse(int a[], int n);//颠倒数组
	void print_ai(int a[], int n);//打印数组
	
	reverse(c,n);
	reverse(c, right_num);
	reverse(c+right_num, left_num);
	print_ai(c, n);
	*/

	//③一个数组中有100个正整数，将所有偶数（奇数）从小到大排在前半部分（后半部分）
	/*int aa[8] = { 1,4,3,2,5,9,7 };//输出 2 4 1 3 5 7 9
	void sort(int a[],int n);
	int n = 7; int i = 0, j = n - 1, p = 0, q = 0,temp;
	//先划分好奇数偶数部分
	while (i < j) {
		//处理偶数
		while (aa[i] % 2 == 0) {
			i++;
			p++;
		}
		//处理奇数
		while (aa[j] % 2 != 0) {
			j--;
			q++;
		}
		if (i < j) {
			temp = aa[i];
			aa[i] = aa[j];
			aa[j] = temp;
		}
	}
	//再排序
	sort(aa, p);
	sort(aa+p, q);

	print_ai(aa, n);

	int test[10] = { 1,4,56,3,2,5,4,3,33 }; n = 9;
	sort(test, n);
	print_ai(test, n);
	*/

	//P12[题型三]数组排序:①将2个有序数组合并为1个有序数组 略
	
	//②从大小为15的有序数组中使用折半查找找出下标 略
	
	//P13[题型三]平台问题:①从一维数组中求最长平台长度 略 ② 同 略

	//P14[题型四]特殊值:①从一维数组中移动特殊值到尾部,且其他值次序不变
	/*int a[8] = {7,0,0,3,0,5,0},n=7;
	move_zero(a, n);
	print_ai(a, n);*/

	//②在一维数组中移位删属于特定区间的(<=y&&>=x)元素,返回删除后元素个数
	/*int a[8] = { 1,2,3,4,5,6,7 },n=7;
	print_ai(a, move_bettwen(a, n, 2, 4));*/

	//③ 同① 略

	//④删除数组中重复的元素，并将剩余的元素移到前边
	/*int a[8] = { 1,1,2,3,4,4,1 },n=7;
	del_same(a, n);
	print_ai(a, n);*/

	//⑤10乘10二维数组中每行最大元素构成向量B，每列最小元素构成向量C，求B·C 略

	//⑥判定在一维数组a中是否存在a[i]等于前i-1个元素之和 略

	//⑦删除一维数组中所有素数（保持次序，无新数组，打印处理后数组，返回剩余元素个数）
	/*int a[8] = { 1,2,3,4,5,6,7 } ,n = 7,t;
	t=del_sushu(a, n);
	print_ai(a, t);*/

	//⑧对字符串中所有字符按照ASCII码递增排序
	/*char a[8] = { 'd','a','c','b','f','e','h' }, n = 7;
	sort_string(a, n);
	print_ai_s(a, n);*/

	//⑨合并2个严格增序数组a b到a，且不另设数组，返回a的元素个数
	/*int a[8] = { 1,2,3 }, m = 3, b[4] = { 3,4,5 }, n = 3, t;
	t = merge_two(a, m, b, n);
	print_ai(a, t);*/

	//⑩使用数组精确计算M/N各小数位值，若无限循环则输出循环节和起始位置

	system("pause");
}



// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
