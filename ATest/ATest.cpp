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
	bool try_again=true;
	while(try_again){
			while(len<=0){
				printf("请输入随机数的最大值（大于0的整数）\n");				
		scanf("%d",&len);
		getchar();
	}
	
	vector<int> vec(len);
	vector<int> vec2(len);
	
	/*for(int i=1;i<55;i++){
	vec.push_back(i);
	}
	vector<int>::iterator it=vec.begin();*/
	int temp=0;
	srand(time(NULL));
	//int num_rand=0;
	int num_temp=0;
	for(int i=0;i<len;i++){
		vec2[i]=i+1;
		}			
		for(int j=0;j<len;j++){
			if(j%5==0){
				printf("\n");
				printf("%d",j);
				if(j<10)
					printf("          ");
				else if(j>=10&&j<100)
					printf("         ");
				else if(j>=100&&j<1000)
					printf("        ");
				else if(j>=1000&&j<10000)
					printf("       ");
				else if(j>=10000&&j<100000)
					printf("      ");
				else if(j>=100000&&j<1000000)
					printf("     ");
				else if(j>=1000000&&j<10000000)
					printf("    ");
				else if(j>=10000000&j<100000000)
					printf("   ");
				else 
					printf("  ");
			}
			num_temp=rand()%(len-j);
			vec[j]=vec2[num_temp];
			vec2[num_temp]=vec2[len-j-1];
			printf("%d",vec[j]);
			if(vec[j]<10)		
				printf("          ");					
			else if(vec[j]>=10&&vec[j]<100)
				printf("         ");
			else if(vec[j]>=100&&vec[j]<1000)
				printf("        ");
			else if(vec[j]>=1000&&vec[j]<10000)
				printf("       ");
			else if(vec[j]>=10000&&vec[j]<100000)
				printf("      ");
			else if(vec[j]>=100000&&vec[j]<1000000)
				printf("     ");
			else if(vec[j]>=1000000&&vec[j]<10000000)
				printf("    ");
			else if(vec[j]>=10000000&&vec[j]<100000000)
				printf("   ");
			else
				printf("  ");

		}

		//bool bContains=true;
		//while(bContains){

		//	num_rand=rand()%len+1;
		//	bContains=false;
		//	for(int j=0;j<i;j++){
		//		if(vec[j]==num_rand){
		//			//bContains=true;	
		//			vec[i]=len-i;
		//			break;
		//		}	

		//	}

		//}
		
		//vec[i]=num_rand;
		//printf("%d",num_rand);
		

		
	
	bool bAgain=true;
	
	while(bAgain){
		printf("\n再来一次吗？Y\/N\n");
		char cAgain;
		//getchar();
		scanf(" %c",&cAgain);
		if(cAgain=='Y'||cAgain=='y'){
			try_again=true;len=0;
			bAgain=false;
		}
			
		else if(cAgain=='N'||cAgain=='n'){
			//try_again=false;
			//bAgain=false;
			return 0;
		}
			
		else
			bAgain=true;
	}	
	}
	
	
}

