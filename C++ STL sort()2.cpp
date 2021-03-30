#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

bool compare(pair<string,pair<int,int> > a,
			pair<string,pair<int,int> > b){
				if(a.second.first == b.second.first){
					return a.second.second > b.second.second; // ���̰� ��ſ� �� 
				} else{
					return a.second.first > b.second.first; // ������ �����Ϳ� �켱 
				}
			}

int main(){
	vector<pair<string,pair<int, int> > > v;
	v.push_back(pair<string, pair<int, int> >("����",pair<int, int>(90,19940503)));
	v.push_back(pair<string, pair<int, int> >("���",pair<int, int>(100,19980417)));	
	v.push_back(pair<string, pair<int, int> >("��",pair<int, int>(90,19940513)));
	
	sort(v.begin(),v.end(),compare);
	for(int i=0; i<v.size();i++){
		cout << v[i].first << ' '; //first second�� ���
	}
}



//int main(){
//	vector<pair<int,string>	> v;
//	v.push_back(pair<int,string>(90,"a"));
//	v.push_back(pair<int,string>(91,"b"));
//	v.push_back(pair<int,string>(98,"c"));
//	v.push_back(pair<int,string>(93,"d"));
//	v.push_back(pair<int,string>(94,"e"));
//	
//	sort(v.begin(),v.end());
//	for(int i=0;i<v.size(); i++){
//		cout << v[i].second << ' '; //first second�� ���
//		 
//		
//	}
//	return 0;
//}
