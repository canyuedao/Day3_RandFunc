// ATest.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <string.h>
#include <vector>
#include <ctime>
#include <cstdlib>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	/*char a[5]={"abc"};
	short i=strlen(a);
	printf("%d\n",i);
	return 0;*/
	/*int a=10;
	*(&a+10)=20;*/

	//反汇编
	/*int a;
	_asm mov dword ptr[a],10;
	_asm mov dword ptr[a+10],20;
	_asm mov eax,dword ptr[a+10];
	int b;
	_asm mov dword ptr[b],eax;*/

	//C++实现
	//char a=10;
	//*(&a+10)=20;
	//char b=*(&a+10);
	//vector<int> vec;
	//char a[4]={'1','2','3'};
	//char b[4]="123";
	//string str="123";
	int len=0;
	while(len<=0){
		printf("请输入随机数的最大值（大于0的整数）\n");
		scanf("%d",&len);
	}
	
	vector<int> vec(len);
	
	
	/*for(int i=1;i<55;i++){
	vec.push_back(i);
	}
	vector<int>::iterator it=vec.begin();*/
	int temp=0;
	srand(time(NULL));
	int num_rand=0;
	for(int i=0;i<len;i++){

		if(i%10==0)
			printf("\n");

		bool bContains=true;
		while(bContains){
			num_rand=rand()%len+1;
			bContains=false;
			for(int j=0;j<i;j++){
				if(vec[j]==num_rand){
					bContains=true;	
					break;
				}	

			}

		}
		
		vec[i]=num_rand;
		printf("%d",num_rand);
		if(num_rand<10)
			printf("     ");
		else if(num_rand>=10&&num_rand<100)
			printf("    ");
		else if(num_rand>=100&&num_rand<1000)
			printf("   ");
		else if(num_rand>=1000&&num_rand<10000)
			printf("  ");
		else
			printf(" ");

		
	}
	printf("\n");
}

