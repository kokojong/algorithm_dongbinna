#include <stdio.h>

// ũ�⸦ �������� ������ ����

 int main(){
 	int tmp;
 	int i;
 	int count[5];
 	// ������ �������� ũ�⿡ ū ������ �޴´� -> �ϳ��� 100�̸� count�� ũ�Ⱑ100�̾���� 
 	int array[20] = {
	 	1,5,3,2,4,4,2,1,3,1,
	 	5,5,2,4,3,3,3,1,4,3
	};
	for(int i=0;i<5;i++){
		count[i] = 0;
	}
 	for(int i =0;i<20;i++){
		count[array[i]-1]++; // 0���� �ε����� ���� �Ǳ� ������
		 
	}
	for(int i =0;i<5;i++){
		if(count[i] !=0){
			for(int j=0; j<count[i]; j++){
				printf("%d ",i+1);
			};
		}
		 
	}
 	
 	
 	return 0;
 }
