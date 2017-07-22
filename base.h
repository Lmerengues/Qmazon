#ifndef BOOK_H
#define BOOK_H

#include<string>
#include<map>
#include<iostream>
#include<vector>
using namespace std;

class Book {
public:
	Book() {
		cnt = 0;
		sum = 0;
		aveRank=0;
	}
	void deletebook();
	void addbook();
	void rechangebook(string s1, string s2);
	string title, author, publisher;  //���⡢���ߡ�������
	string year;                      //ʱ��
	string urlS, urlM, urlL;          //������Ϣ
	double aveRank, sum;              //ƽ���֡��ܷ�
	int cnt;                          //��������
									  //part3����
	vector<string> comment;
	vector<string> commentauthor;
	string id;
	map<string, int> userRanked;
	void show() {
	//	if(title!=" "&&year!=" ")
		cout << title << " (" << year << ")" << endl;
	//	else
	//	cout<<id<<endl;
//		if(author!=" ")
		cout << author << endl;
	//	if(aveRank!=0)
		cout << "Average Rating: " << aveRank << endl;
	}
	map<string, int> usersRead;       //����Щ�û�����������
};
#endif // BOOK_H


#ifndef USER_H
#define USER_H

#include<string>
#include<map>
using namespace std;
class User {
public:
	User() {
		sum = 0;
		cnt = 0;
		password="iamauser";
	}
	void deleteuser();
	void addusers();
	void rechangeuser(string s1, string s2);
	string town, city, country;
	int age;
	int cnt;                      //��������
	string himself;
	string password;
	double aveRank, sum;
	map<string, int> booksRead;   //���û�����������������
    //part3����
	string isbn;
    Book findByName(string ti);
	void rank(int rank, string str);
//	string id;
	void get_init_reco();
    double get_sim(User const& u);
    map<string,User> sim_user;
    void add_comment(Book&, string comm);
	//����
	void getrecommendation();
	void show(){
		cout<<himself<<";"<<town<<","<<city<<","<<country<<";"<<age<<endl;
	}
};
#endif // USER_H

//�������
