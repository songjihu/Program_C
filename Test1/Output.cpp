﻿// Output.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <stdio.h>
#include <stdlib.h>

int main()
{
	void output(); //输出函数
	void input();  //输入函数
	void process_number(); //例子:处理一串数字

	//output();
	input();
	system("pause");
}

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
	c=getchar();//接收单个字符
	printf("输入3:%c\n", c);

	return;
}

void process_number()
{
	return;
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
