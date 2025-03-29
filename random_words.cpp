#include<iostream>
#include<fstream>
#include<vector>
#include<map>
#include<ctime>
using namespace std ;

vector<string> split(string index){
	fstream mine(index,ios::in | ios::out);
	if( ! mine.is_open() ) system("PAUSE");
	vector<string> split_index ;
	string word ; 
	while(mine >> word){
		split_index.push_back(word);
	}
	mine.close();
	return split_index ;
}

map<string,int> frequences(vector<string> split_index){
	map<string,int> split_frequences ;
	for(auto& k : now){
		split_frequences[k]++;
	}
	return split_frequences;
}

string random_word(vector<string> split_index, map<string,int> split_frequences){
	int counter = 5 ; // only 5 words !
	string rd_word = "";
	srand(time(NULL));
	while(counter--){
		int rd_number = rand()%9 ;
		if(split_frequences[split_index[rd_number]] > 0){
			rd_word += now[rd_number] + " ";
		}
		else{
			counter++;
			continue ;
		}
			
	}
	return rd_word ;
}

int main(){
	string index = "document.txt";
	vector <string> split_index = split(index);
	map<string,int> result = frequences(split_index);
	for(auto& k : result){
		cout << k.first << " : " << k.second << '\n';
	}
	string rd_word = random_word(now,result);
	cout << rd_word << '\n';
	return 0 ;
}
