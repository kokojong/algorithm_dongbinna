#include <stdio.h>

int number = 9;
int heap[9] = {7,6,5,8,3,5,9,1,6};

int main(){
	// ���� ��ü Ʈ�� ������ �ִ� �� ������ ����� 
	for(int i=1;i<number;i++){
		int c = i;
		do{
			int root = (c-1)/2;
			if(heap[root]<heap[c]){
				int tmp = heap[root];
				heap[root] = heap[c];
				heap[c] = tmp;
			}
			c=root;
			
		} while(c!=0); 
	}
	 // ũ�⸦ �ٿ����� �ݺ������� ���� ����
	 for(int i= number-1;i>=0;i--){
	 	int tmp = heap[0];
	 	heap[0] = heap[i];
	 	heap[i] = tmp;
	 	int root = 0;
	 	int c= 1;
	 	do{
	 		c =2*root+1;
	 		// �ڽ��߿��� �� ū���� ã��
			 if(heap[c]<heap[c+1] && c< i-1){
			 	c++;
			 }
			 // ��Ʈ���� �ڽ��� �� ũ�ٸ� ��ȯ�ϱ�
			 if(heap[root]<heap[c] && c < i){
			 		int tmp = heap[root];
				heap[root] = heap[c];
				heap[c] = tmp;
			 } root = c;
			 
		 }while (c < i);
	 } 
	 for(int i = 0; i<number; i++){
	 	printf("%d ",heap[i]);
	 }
}