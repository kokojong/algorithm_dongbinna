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
		// ���� ������ ������ ���� ����
		bool operator <(Student &student){
			return this->score < student.score;
		}
	
};

int main(){
	Student students[] = {
		Student("����",90),
		Student("���",100),
		Student("����",30),
		Student("�ֱ�",40),
		Student("����",80)
	};
	sort(students, students+5);
	for(int i = 0; i<5; i++){
		cout << students[i].name << ' ';
	}
}



//bool compare(int a, int b){
//	return a<b; // �� ���� ���� ������ -> �������� 
//}
//
//int main(){
//	int a[10] = {9,3,5,4,1,10,8,6,7,2};
//	sort(a,a+10,compare); // �迭, ���ּ�, ������ ������ �츮�� ���� ���� 
//	
//	for(int i=0;i<10;i++){
//		cout << a[i] << ' ';
//	}
//
//}
