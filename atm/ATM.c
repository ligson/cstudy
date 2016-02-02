#include<stdio.h>
void store();
void qukuan();
void loop();

int total = 0;

int readChar(){
	//int ch;
	//while((ch = getchar())!='\n'){
	//}
	//system("cls");
	return getchar();
}

//存款
void store(){
	printf("\n请选择存款金额:\n1.100;\n2.200;\n3.500;\n4.1000\n请输入:");
	int ch = readChar();
	if(ch=='1'){
		total+=100;
	}else if(ch=='2'){
		total+=200;
	}else if(ch=='3'){
		total+=500;
	}else if(ch=='4'){
		total+=1000;
	}else{
		printf("输入错误!");
		store();
	}
	loop();
}
//取款
void qukuan(){
	printf("\n请选择取款金额:\n1.100;\n2.200;\n3.500;\n4.1000\n请输入:");
	int ch = readChar();
	if(ch=='1'){
		total-=100;
	}else if(ch=='2'){
		total-=200;
	}else if(ch=='3'){
		total-=500;
	}else if(ch=='4'){
		total-=1000;
	}else{
		printf("输入错误!");
		qukuan();
	}
	loop();
}

//查询
void query(){
	printf("\n账户总金额:%d",total);
	loop();
}
//main循环
void loop(){
	printf("\n请选择操作:\n1.存款;\n2.取款;\n3.查询;\n4.取卡;\n请输入:");
	int ch = readChar();
	if(ch=='1'){
		store();
	}else if(ch=='2'){
		qukuan();
	}else if(ch=='3'){
		query();
	}else if(ch=='4'){
		exit(0);
	}else{
		printf("输入错误!");
		loop();
	}
}
int main(){
	loop();
	return 0;
}
