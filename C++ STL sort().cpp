#include <algorithm>
#include <iostream>

using namespace std;

class Student{
	public:
		string name;
		int score;
		Student(string name, int score){
			this->name = name;
			this->score = score;
		}
		// 정령 기준은 점수가 낮은 순서
		bool operator <(Student &student){
			return this->score < student.score;
		}
	
};

int main(){
	Student students[] = {
		Student("여종",90),
		Student("사라",100),
		Student("힝구",30),
		Student("밍구",40),
		Student("대지",80)
	};
	sort(students, students+5);
	for(int i = 0; i<5; i++){
		cout << students[i].name << ' ';
	}
}



//bool compare(int a, int b){
//	return a<b; // 더 작은 값이 앞으로 -> 오름차순 
//}
//
//int main(){
//	int a[10] = {9,3,5,4,1,10,8,6,7,2};
//	sort(a,a+10,compare); // 배열, 끝주소, 정렬의 기준을 우리가 설정 가능 
//	
//	for(int i=0;i<10;i++){
//		cout << a[i] << ' ';
//	}
//
//}
