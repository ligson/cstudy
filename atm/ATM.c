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

//���
void store(){
	printf("\n��ѡ������:\n1.100;\n2.200;\n3.500;\n4.1000\n������:");
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
		printf("�������!");
		store();
	}
	loop();
}
//ȡ��
void qukuan(){
	printf("\n��ѡ��ȡ����:\n1.100;\n2.200;\n3.500;\n4.1000\n������:");
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
		printf("�������!");
		qukuan();
	}
	loop();
}

//��ѯ
void query(){
	printf("\n�˻��ܽ��:%d",total);
	loop();
}
//mainѭ��
void loop(){
	printf("\n��ѡ�����:\n1.���;\n2.ȡ��;\n3.��ѯ;\n4.ȡ��;\n������:");
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
		printf("�������!");
		loop();
	}
}
int main(){
	loop();
	return 0;
}
