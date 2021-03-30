#include <stdio.h>

// 크기를 기준으로 갯수를 센다

 int main(){
 	int tmp;
 	int i;
 	int count[5];
 	// 정렬할 데이터의 크기에 큰 영향을 받는다 -> 하나라도 100이면 count의 크기가100이어야함 
 	int array[20] = {
	 	1,5,3,2,4,4,2,1,3,1,
	 	5,5,2,4,3,3,3,1,4,3
	};
	for(int i=0;i<5;i++){
		count[i] = 0;
	}
 	for(int i =0;i<20;i++){
		count[array[i]-1]++; // 0부터 인덱스가 시작 되기 때문에
		 
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
