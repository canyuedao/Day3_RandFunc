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
	int a[54]={};
	int b[54]={};
	/*for(int i=1;i<55;i++){
	vec.push_back(i);
	}
	vector<int>::iterator it=vec.begin();*/
	int temp=0;
	srand(time(NULL));
	int num=0;
	for(int i=0;i<54;i++){
		
		if(i%13==0)
			printf("\n");
		bool contains=true;
		while(contains){
			num=rand()%54+1;
			contains=false;
			for(int j=0;j<i;j++){
				if(a[j]==num){
					contains=true;						
				}	
					
			}
			
		}
		
		a[i]=num;
		printf("%d",num);
		if(num>=10)
			printf("   ");
		else
			printf("    ");
		
	}
	printf("\n");
}

