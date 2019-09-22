#define _CRT_SECURE_NO_WARNINGS
#pragma once

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
	return n - k;
}

void del_same(int a[], int n) {

	int i = 0, j, k = 0;
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
		for (j = 0; j < n - i - 1; j++) {
			if (a[j] > a[j + 1]) {
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

void M_and_N(int a[], int m, int n, int start, int end)
{

	int i, j, temp, startplace = 0, endplace = 0, multiplier[100];
	for (i = 1; i < 100; i++) {
		//进行100次除法
		multiplier[i] = (m * 10) / n;//保存乘数
		temp = m * 10;
		m = (m * 10) % n;//m覆盖为余数
		printf("%d/%d=%d余%d\n", temp, n, multiplier[i], m);
		if (m == 0 || a[m]) {
			//若余数为0，或者，余数已经是第二次出现，则结束
			if (a[m]) {
				startplace = a[m];//存入开始i
			}
			endplace = i;//存入无限循环的结束i
			break;
		}
		//printf(" %d ", m);
		a[m] = i;//否则在余数大小的位置存入是在第几次得到的
	}
	printf("\n输出：0.");
	for (i = 1; i < endplace; i++) {
		//循环a[100]的每一个位置,按循环次序从小到大打印小数部分
		//循环次序i
		printf("%d", multiplier[i]);//打印小数
		//从余数来判断开始结束的小数位
		for (j = 1; j < 100; j++) {
			if (a[j] == i) {
				//开始位置之前
				if (i <= startplace) {
					start++;
					end = start;
				}
				else {
					end++;
					//结束序号
				}
			}
		}
	}
	printf("\n无限循环开始于%d结束于%d", start + 1, end);
	return;
}

void maxLen(int n, int S[], int* N1, int* N2) {

	int i = 0, L0 = 0, L1 = 0;//当前平台长度
	int n0 = 0, n1 = 0;//最长平台长度
	for (i = 0; i < n; i++) {
		//循环每一个元素
		if (S[i] == 0) {
			L1 = 0;//被打断，清零
			L0++;//临时长度加1
			if (L0 > n0) {
				n0 = L0;//超过目前最长则赋值
			}
		}
		if (S[i] == 1) {
			L0 = 0;
			L1++;
			if (L1 > n1) {
				n1 = L1;
			}
		}
	}
	printf("\nN0=%d N1=%d\n", n0, n1);
	return;
}

void MP_in_A(int a[6][6], int m, int n) {

	int b[100] = { 0 };
	int i = 0, j = 0, count = 0, max = 0;
	for (i = 0; i < m; i++) {
		for (j = 0; j < n; j++) {
			b[a[i][j]]++;
		}
	}
	for (i = 0; i < 100; i++) {
		if (b[i] > max) {
			count = i;
			max = b[i];
		}
	}
	printf("\n最大频率为数字%d, 出现了%d次\n", count, max);
	return;
}

void low_count() {

	char a[100];//缓冲区长度
	int	count[30] = { 0 };
	int i, l;
	gets_s(a);
	l = _mbstrlen(a);
	for (i = 0; i < l; i++) {
		if (a[i] >= 'a' && a[i] <= 'z') {
			count[a[i] - 97]++;
		}
	}
	for (i = 0; i < 26; i++) {
		printf(" %c:%d\n", i + 97, count[i]);
	}
	printf("\n共计%d个\n", l);
	return;
}

void magic_fun() {
	int a[10][10];
	int i, j, ok, n, m;
	for (i = 0; i < 10; i++)                   /*给备用的数组做初始化*/
	{
		for (j = 0; j < 10; j++)
			a[i][j] = 0;
	}
	ok = 0;                                  /*限定输入的数必须满足要求*/
	while (ok == 0)
	{
		printf("Please input a number as the value of n:(必须是10以内的奇数)\n");
		scanf("%d", &n);
		if (n % 2 != 0 && n > 0 && n < 10)
			ok = 1;
		else
			ok = 0;
	}
	i = 0;
	j = n / 2;
	a[i][j] = 1;
	for (m = 2; m <= n * n; m++)                  /*因为1已经放好了，所以我们从2开始放*/
	{
		if ((i == 0) && (j != n - 1))            /*算法中的第3步*/
		{
			i = n - 1;
			j = j + 1;
			if (a[i][j] == 0)                  /*算法中的第7步*/
				a[i][j] = m;
			else
			{
				i = 1;
				j = j - 1;
				a[i][j] = m;
			}
		}
		else if ((i != 0) && (j == n - 1))      /*算法中的第4步*/
		{
			i = i - 1;
			j = 0;
			if (a[i][j] == 0)                /*算法中的第7步*/
				a[i][j] = m;
			else
			{
				i = i + 1;
				j = n - 1;
				a[i][j] = m;
			}
		}
		else if ((i == 0) && (j == n - 1))       /*算法中的第5步*/
		{
			i = n - 1;
			j = 0;
			if (a[i][j] == 0)                 /*算法中的第7步*/
				a[i][j] = m;
			else
			{
				i = 1;
				j = n - 1;
				a[i][j] = m;
			}
		}
		else                                 /*算法中的第6步*/
		{
			i = i - 1;
			j = j + 1;
			if (a[i][j] == 0)                 /*算法中的第7步*/
				a[i][j] = m;
			else
			{
				i = i + 2;
				j = j - 1;
				a[i][j] = m;
			}
		}
	}
	printf("%d阶魔方阵:\n", n);
	for (i = 0; i < n; i++)                        /*输出数组*/
	{
		for (j = 0; j < n; j++)
		{
			printf("%4d", a[i][j]);
		}
		printf("\n");
	}
	return;
}

void n_100(int n, int* a, int cur) {
	//总个数n,数组a,当前位置cur
	int i;
	//printf("%d\n", cur-100);
	//有可能从99增加到101跳过100
	if (cur == 100 || cur == 101) {
		//若当前位置已经达到目标个数，则打印所有
		for (i = 0; i < n; i++) {
			printf(" %2d:%2d ", i + 1, a[i]);
			if ((i + 1) % 10 == 0) {
				printf("\n");
			}
		}
		return;
	}
	else if (a[cur - 1] * a[cur - 2] < 10) {
		a[cur] = a[cur - 1] * a[cur - 2];
		n_100(n, a, cur + 1);//进入下层递归
	}
	else
	{
		a[cur] = a[cur - 1] * a[cur - 2] / 10;
		a[cur + 1] = a[cur - 1] * a[cur - 2] % 10;
		n_100(n, a, cur + 2);
	}
}

void harmonic_series(int n) {

	int a = 1, b = 1, c = 2, i = 1, e, f;
	do {
		b = c * b + a;
		a = a * c;
		c++;
		printf("%d/%d\n", b, a);
	} while (c <= n);
	e = b;
	f = a;
	
	//辗转相除求最大公约数e
	while (i != 0) {
		i = e % f;
		e = f;
		f = i;
	}
	printf("e=%d\n", e);
	b = b / e;
	a = a / e;
	//化简后输出
	printf("%d/%d\n", b, a);
	return;
}