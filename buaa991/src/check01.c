/*************************************************************************
	> File Name: check01.c
	> Author: RunRui_Li
	> Mail: 770486267@qq.com 
	> Created Time: Tue 12 Nov 2019 10:41:07 PM CST
 ************************************************************************/

/**
 * 下列程序向文件输出的结果：
 */
#include "stdio.h"

int main(){
	FILE *fp = fopen("test","wb");
	fprintf(fp,"%d%5.0f%c%d",42,75873.0,0,'-',3353);
	//printf("%d%5.0f%c%d",42,75873,0,'-',3353);
	printf("%5.0f",75873.0);
}
