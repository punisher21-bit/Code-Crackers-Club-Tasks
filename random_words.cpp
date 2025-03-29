#include<iostream>
#include<fstream>
#include<vector>
#include<map>
#include<ctime>
using namespace std ;

vector<string> split(string index){
	fstream mine(index,ios::in | ios::out);
	if( ! mine.is_open() ) system("PAUSE");
	vector<string> now ;
	string word ; 
	while(mine >> word){
		now.push_back(word);
	}
	mine.close();
	return now ;
}

map<string,int> t2(vector<string> now){
	map<string,int> last ;
	for(auto& k : now){
		last[k]++;
	}
	return last;
}

string t3(vector<string> now, map<string,int> result){
	int counter = 5 ;
	string all = "";
	srand(time(NULL));
	while(counter--){
		int ans = rand()%9 ;
		if(result[now[ans]] > 0){
			all += now[ans] + " ";
		}
		else{
			counter++;
			continue ;
		}
			
	}
	return all ;
}

int main(){
	//fstream mine("document.txt",ios::in | ios::out );
	string index = "document.txt";
	vector <string> now = split(index);
	map<string,int> result = t2(now);
	for(auto& k : result){
		cout << k.first << " : " << k.second << '\n';
	}
	srand(time(NULL));
	string ls = t3(now,result);
	cout << ls << '\n';
	return 0 ;
}
