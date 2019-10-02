#define _CRT_SECURE_NO_WARNINGS
#pragma once
#include<math.h>

void output()
{
	//�������
	printf("�����������---------\n");
	//double a = 9.892132; double b = 8.136732; double f = 6.345522;
	int a = 9; int b = 8; double c = 9.895432543132; double d = 8.13543254325432543253426732; double f = 6.34545365436522;
	printf("�������:%d%d\n", a, b);//�������
	printf("���С��(������):%f %f\n", c, d);//���С��(������)
	printf("���С��(˫����):%lf %lf\n", c, d);//���С��(˫����)
	printf("�����λС��(������):%.19f\n", f); //�����λС��(������)
	printf("�����λС��(˫����):%.19lf\n", f);//�����λС��(˫����)
	char s = 's'; char str[10] = "ABCD";
	printf("��������ַ�:%c\n", s);//��������ַ�
	printf("����ַ�����%s\n", str);//����ַ���
}

void input()
{
	int t;
	//���뺯�� 
	printf("���뺯������---------\n");

	char str[100];//�ַ���
	t = scanf("%s", &str);//�����ո�(�ո񼴽���),Enter��Tab����
	printf("����1:%s\n", str);


	char str2[100];//�ַ���
	gets_s(str2); gets_s(str2);//�ܽ��տո񣬻س������
	printf("����2:%s\n", str2);

	char c;//�ַ�
	c = getchar();//���յ����ַ�
	printf("����3:%c\n", c);

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
	printf("�������ַ�����\n");
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
	double sin(double x);//x������ֵ
	double cos(double x);//x������ֵ
	double tan(double x);//x������ֵ

	double exp(double x);//e��x�η�
	double pow(double x, double y);//x��y�η�
	double sqrt(double x);//x�Ŀ���
	double log(double x);//log e x
	double log10(double x);//log 10 x

	double fabs(double x);//|x| x�ľ���ֵ

	return;
}

void about_struct() {
	struct Date
	{
		int month;
		int day;
		int year;
	}a, b;//����1������ṹ��󲢴���2���ṹ�����a��b
	a.day = 11;
	Date c;//����2��ֱ�Ӷ���
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
	//100����
	int i, j;
	int length = 100;
	int count = 0;
	for (i = 2; i < length; i++)
	{
		for (j = 2; j <= i; j++) {
			if (i % j == 0) {
				break;//�ܱ�����������
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
		printf("%d����:%d\n", i, b[i]);
	}
	return;
}

void divide_number() {

	int n = 123456;
	int k = 10;//����orλ��
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
	//�����Ƚ�������Ȼȡ��Ϊ0
	//շת����������Լ����ŷ������㷨��
	while (t != 0) {
		t = a % b;
		a = b;
		b = t;
	}
	//�������ĳ˻�k = ���Լ�� * ��С������
	b = k / a;
	printf("���Լ��:%d\n��С������:%d\n", a, b);
	return;
}

void bubble_sort() {

	int a[10] = { 4,2,5,1,4,6,9,0,7,4 };
	int n = 10;
	int i, j, t;
	for (i = 0; i < n - 1; i++) {
		//��ѭ��һ�˰����ֵ�������ұߣ�i�������ұ߽�
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
		//ѭ������Ҫ���ҽ�����λ��
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
		//�ϰ벿��ֱ�����ж�����
		for (j = 0; j < n; j++) {
			temp = a[i][j];
			a[i][j] = a[m - i - 1][n - j - 1];
			a[m - i - 1][n - j - 1] = temp;
		}
	}
	//����������ʣ���м�һ�е�������
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
	printf("��ʼ��ӡ:\n");
	for (i = 0; i < n; i++) {
		printf("%d:%3d  ", i+1,a[i]);
		if (i % 10 == 9) {
			printf("\n");
		}
	}
	printf("\n��ӡ����");
}

void print_ai_s(char a[], int n) {
	int i;
	printf("��ʼ��ӡ:\n");
	for (i = 0; i < n; i++) {
		printf("%c  ", a[i]);
	}
	printf("\n��ӡ����");
}

void sort(int a[], int n) {
	int i, j, t;
	for (i = 0; i < n - 1; i++) {
		for (j = 0; j < n - i - 1; j++) {
			//ÿһ�˰����ķ���n-i-1��λ���ϣ�һֱ������
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

	int i, j, p=0;
	for (i = 0; i < n; i++) {
		if (a[i] == 0) {
			//�ӵ�ǰλ�����Ѱ�ҷ�0Ԫ�ؽ���
			for (j = i; j < n; j++) {
				if (a[j] != 0) {
					p = j;//�ҵ�����±겢break
					break;
				}
				if (j == (n - 1)) {
					//ѭ����Ҳû�ҵ����ʾ����ƶ�
					return;
				}
			}
			//����
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
			k++;//���������ĳ���
		}
		else {
			a[i - k] = a[i];//���Ǵ洢
		}
	}
	return n - k;
}

void del_same(int a[], int n) {

	int i = 0, j, k = 0;
	while (i < n) {
		for (j = i + 1; j < n; j++) {
			if (a[i] == a[j]) {
				k++;//�����ظ�����k
			}
			else {
				//�ƶ���������ͬ���еĵ�һ���ĺ��
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
			//�ҵ����ǿ������������Ҳ��Ǳ������
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
				a[j] = a[j + 1];//ǰ��ÿһ����ߵ���
			}
			i--;//����iΪԭλ��
			num--;//����������һ
		}
	}
	return num;
}

void sort_string(char a[], int n) {

	int i, j, temp;
	//ð������
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
		//forѭ���ڶ�������
		while (i < len && a[i] < b[j]) {
			//�ƶ�����a[i]С��b[j]��׼������
			i++;
		}
		if (a[i] == b[j]) {
			//��ͬ�����
			continue;
		}
		for (k = len; k > i; k--) {
			//����ǰ���κ���
			a[k] = a[k - 1];
		}
		a[i] = b[j];//����
		len++;
	}
	return len;
}

void M_and_N(int a[], int m, int n, int start, int end)
{

	int i, j, temp, startplace = 0, endplace = 0, multiplier[100];
	for (i = 1; i < 100; i++) {
		//����100�γ���
		multiplier[i] = (m * 10) / n;//�������
		temp = m * 10;
		m = (m * 10) % n;//m����Ϊ����
		printf("%d/%d=%d��%d\n", temp, n, multiplier[i], m);
		if (m == 0 || a[m]) {
			//������Ϊ0�����ߣ������Ѿ��ǵڶ��γ��֣������
			if (a[m]) {
				startplace = a[m];//���뿪ʼi
			}
			endplace = i;//��������ѭ���Ľ���i
			break;
		}
		//printf(" %d ", m);
		a[m] = i;//������������С��λ�ô������ڵڼ��εõ���
	}
	printf("\n�����0.");
	for (i = 1; i < endplace; i++) {
		//ѭ��a[100]��ÿһ��λ��,��ѭ�������С�����ӡС������
		//ѭ������i
		printf("%d", multiplier[i]);//��ӡС��
		//���������жϿ�ʼ������С��λ
		for (j = 1; j < 100; j++) {
			if (a[j] == i) {
				//��ʼλ��֮ǰ
				if (i <= startplace) {
					start++;
					end = start;
				}
				else {
					end++;
					//�������
				}
			}
		}
	}
	printf("\n����ѭ����ʼ��%d������%d", start + 1, end);
	return;
}

void maxLen(int n, int S[], int* N1, int* N2) {

	int i = 0, L0 = 0, L1 = 0;//��ǰƽ̨����
	int n0 = 0, n1 = 0;//�ƽ̨����
	for (i = 0; i < n; i++) {
		//ѭ��ÿһ��Ԫ��
		if (S[i] == 0) {
			L1 = 0;//����ϣ�����
			L0++;//��ʱ���ȼ�1
			if (L0 > n0) {
				n0 = L0;//����Ŀǰ���ֵ
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
	printf("\n���Ƶ��Ϊ����%d, ������%d��\n", count, max);
	return;
}

void low_count() {

	char a[100];//����������
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
	printf("\n����%d��\n", l);
	return;
}

void magic_fun() {
	int a[10][10];
	int i, j, ok, n, m;
	for (i = 0; i < 10; i++)                   /*�����õ���������ʼ��*/
	{
		for (j = 0; j < 10; j++)
			a[i][j] = 0;
	}
	ok = 0;                                  /*�޶����������������Ҫ��*/
	while (ok == 0)
	{
		printf("Please input a number as the value of n:(������10���ڵ�����)\n");
		scanf("%d", &n);
		if (n % 2 != 0 && n > 0 && n < 10)
			ok = 1;
		else
			ok = 0;
	}
	i = 0;
	j = n / 2;
	a[i][j] = 1;
	for (m = 2; m <= n * n; m++)                  /*��Ϊ1�Ѿ��ź��ˣ��������Ǵ�2��ʼ��*/
	{
		if ((i == 0) && (j != n - 1))            /*�㷨�еĵ�3��*/
		{
			i = n - 1;
			j = j + 1;
			if (a[i][j] == 0)                  /*�㷨�еĵ�7��*/
				a[i][j] = m;
			else
			{
				i = 1;
				j = j - 1;
				a[i][j] = m;
			}
		}
		else if ((i != 0) && (j == n - 1))      /*�㷨�еĵ�4��*/
		{
			i = i - 1;
			j = 0;
			if (a[i][j] == 0)                /*�㷨�еĵ�7��*/
				a[i][j] = m;
			else
			{
				i = i + 1;
				j = n - 1;
				a[i][j] = m;
			}
		}
		else if ((i == 0) && (j == n - 1))       /*�㷨�еĵ�5��*/
		{
			i = n - 1;
			j = 0;
			if (a[i][j] == 0)                 /*�㷨�еĵ�7��*/
				a[i][j] = m;
			else
			{
				i = 1;
				j = n - 1;
				a[i][j] = m;
			}
		}
		else                                 /*�㷨�еĵ�6��*/
		{
			i = i - 1;
			j = j + 1;
			if (a[i][j] == 0)                 /*�㷨�еĵ�7��*/
				a[i][j] = m;
			else
			{
				i = i + 2;
				j = j - 1;
				a[i][j] = m;
			}
		}
	}
	printf("%d��ħ����:\n", n);
	for (i = 0; i < n; i++)                        /*�������*/
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
	//�ܸ���n,����a,��ǰλ��cur
	int i;
	//printf("%d\n", cur-100);
	//�п��ܴ�99���ӵ�101����100
	if (cur == 100 || cur == 101) {
		//����ǰλ���Ѿ��ﵽĿ����������ӡ����
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
		n_100(n, a, cur + 1);//�����²�ݹ�
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
	
	//շת��������Լ��e
	while (i != 0) {
		i = e % f;
		e = f;
		f = i;
	}
	printf("e=%d\n", e);
	b = b / e;
	a = a / e;
	//��������
	printf("%d/%d\n", b, a);
	return;
}

int insert_to_M(int* a, int x, int count) {
	
	//����һ������insert�����������һά������
	int i = 0, j = -1;
	for (i = 0; i < count; i++) {
		if (x > a[i] && x < a[i + 1]) {
			for (j = count; j > i; j--) {
				a[j + 1] = a[j];
			}
			a[i + 1] = x;
			count++;
			return count;
		}
	}
	if (i == count && j == -1) {
		a[count] = x;
		count++;
		return count;
	}
	return count;
}

void m_100() {

	int a[210], n = 0, y = 0, z = 0, i = 0, count = 1;
	a[0] = 1;
	n = 1;
	for (i = 0; i < 100; i++) {
		y = a[i] * 2 + 1;
		z = a[i] * 3 + 1;
		count = insert_to_M(a, y, count);
		count = insert_to_M(a, z, count);
	}
	print_ai(a, 100);
	return;
}

void out_subset(int n) {
	//����Ӽ�(��)
	
	int m = 0, i = 0, j = 0, k = 0;
	m = pow(2, n);//����2��n����
	for (i = 0; i < m; i++) {
		printf("{");
		j = i;
		k = 0;
		while (j != 0) {
			if (j % 2 != 0) {
				//jΪż��������
				printf(" %d", k);
			}
			k++;
			j = j / 2;
		}
		printf(" }\n");
	}
	return;
}

void trans_sixteen_ten(char* array,int n) {
	//16-10����

	int i = 0, sum = 0;
	for (i = 0; i <= n - 1; i++) {
		if (array[i] >= '0' && array[i] <= '9') {
			sum = sum * 16 + array[i] - '0';
		}
		else
		{
			if (array[i] >= 'A' && array[i] <= 'F') {
				sum = sum * 16 + array[i] - 'A' + 10;
			}
			else
			{
				break;
			}
		}
	}
	printf("\n%d\n",sum);
	return;
}

void trans_ten_two(int n) {
	//10-2����

	int a[10] = { 0 }, i = 0;
	if (n != 0) {
		while (n != 1) {
			a[i] = n % 2;
			n = n / 2;
			i++;
		}
		a[i] = 1;
		reverse(a, i + 1);
		print_ai(a, i + 1);
	}
	else
	{
		a[i] = 0;
		return;
	}
	return;
}

int multiplicative(int n) {
	//�۳��� n!
	int i = 1, c = 1;
	for (i = 1; i <= n; i++) {
		c = c * i;
	}
	return c;
}

void taylor_sin(double x) {
	//��̩�չ�ʽ�����С��0.00005��sin(x)����ֵ

	int i, sign = 1;
	double term = x, s = 0;
	for (i = 1; term > 1e-8; i += 2) {
		//һֱ��termС��10��-8�η�ֹͣѭ��
		term = pow(x, i) / multiplicative(i);//term=x��i�η�/i!
		s = s + term * sign;
		sign = -sign;
	}
	printf("sin(%10.8lf)���Ϊ:%10.8lf\n", x, s);
	return;
}


struct point
{
	//ƽ���ϵ������
	double x;
	double y;
};

float area(double m, double n, double t)
{
	printf("%lf,%lf,%lf\n", m,n,t);
	//�ú��׹�ʽ�������߳��������
	double p, S, temp;
	p = (m + n + t) / 2;
	temp = p * (p - m) * (p - n) * (p - t);
	S = sqrt(temp);
	//printf("%lf", temp);
	return S;
}

void is_in_triangle()
{
	//�����
	int t;
	struct point a, b, c, d;//�����ABCD
	float AB, BC, AC;//�����θ��߳���
	float S0, S1, S2, S3;//S0Ϊ�����������ΪD�������γɵ�С���������
	float DA, DB, DC;//D������3������߳���
	printf("������A������:\n");
	t = scanf("%lf", &a.x);
	t = scanf("%lf", &a.y);
	printf("A(%lf,%lf)\n",a.x,a.y);

	printf("������B������:\n");
	t = scanf("%lf", &b.x);
	t = scanf("%lf", &b.y);
	printf("B(%lf,%lf)\n", b.x, b.y);

	printf("������C������:\n");
	t = scanf("%lf", &c.x);
	t = scanf("%lf", &c.y);
	printf("C(%lf,%lf)\n", c.x, c.y);

	AB = (float)sqrt((a.x - b.x) * (a.x - b.x) + (a.y - b.y) * (a.y - b.y));
	BC = (float)sqrt((b.x - c.x) * (b.x - c.x) + (b.y - c.y) * (b.y - c.y));
	AC = (float)sqrt((a.x - c.x) * (a.x - c.x) + (a.y - c.y) * (a.y - c.y));
	if ((AB + BC) > AC && (AB + AC) > BC && (AC + BC) > AB) {
		printf("������D������:\n");
		t = scanf("%lf", &d.x);
		t = scanf("%lf", &d.y);
		DA = (float)sqrt((d.x - a.x) * (d.x - a.x) + (d.y - a.y) * (d.y - a.y));
		DB = (float)sqrt((d.x - b.x) * (d.x - b.x) + (d.y - b.y) * (d.y - b.y));
		DC = (float)sqrt((d.x - c.x) * (d.x - c.x) + (d.y - c.y) * (d.y - c.y));
		S0 = area(AB, BC, AC);
		S1 = area(DA, DB, AB);
		S2 = area(DA, DC, AC);
		S3 = area(DB, DC, BC);
		printf("S0=%f\n", S0);
		printf("S1=%f\n", S1);
		printf("S2=%f\n", S2);
		printf("S3=%f\n", S3);
		if (S1 + S2 + S3 - S0 <= 0.0001)
			printf("��Dλ���������ڲ�\n");
		else
			printf("��Dλ���������ⲿ\n S1+S2+S3-S0=%lf \n", S1 + S2 + S3 - S0);
	}
	else
		printf("���ܹ��������Σ�");
}

double dich_asist(double x) {
	return 2 * x * x * x - 4 * x * x + 3 * x - 6;
}

void dichotomy() {
	//���ַ����ض����̽�
	const double eps = 1e-6;//���峣��
	double m = -10, n = 10;//���ұ߽�
	double i, s, k;
	while (fabs(m-n)>eps)
	{
		//�����Ҳ����ʱѭ��
		i = (m + n) / 2;
		s = dich_asist(i);
		if (fabs(s) <= eps) {
			break;//ǡ���ҵ�s=0�ĵ���break
		}
		else
		{
			if (dich_asist(i)* dich_asist(m)<eps)
			{
				//�м�����߽�������滻�ұ߽�Ϊi
				n = i;
			}
			else
			{
				//��ѭ����
				m = i;
			}
		}
	}

	printf("�⣺x=%lf\n", (m + n) / 2);
	return;
}

