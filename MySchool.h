#include<iostream>
#include<cstring>
using namespace std;

class Class{
	
	public:
		int classId;
		char classname[10];
		char sec[5];
		
	Class(){
		
		classId = 0;
		strcpy(classname,"Null");
		strcpy(sec,"Null");
	}
		
	void defaultRecord();
			
	void setRecord();
	
    void showRecord();
    
    void readfromstreamClass(istream& in);
		
	void printtostream(ostream& out);
		
};


class Person{
	
	public:
		int  id;
		char name[50];
		int  age;
		int  session;
		int  couId;
		int  classId;
	
	Person(){
		
		id=0;
		strcpy(name,"NULL");
		age=0;
		session=0;
		couId=0;
		classId=0;
	}
	

};


class Subject{
	
	public:
	int subId;
	char subname[20];
	
	Subject(){
		
		subId=0;
		strcpy(subname,"Null");
	}
	
	void defaultRecord();
			
	void setRecord();
	
	void showRecord();
    
    void readfromstreamSubject(istream& in);
		
	void printtostream(ostream& out);

	

	
};
    
 

class Teacher:public Person{
	
	public:
		
	void defaultRecord();
			
	void setRecord();
	
	void showRecord(Subject sub[10], Class cl[20]);
    
    void readfromstream(ifstream& in);
		
	void printtostream(ostream& out);

};


class Student:public Person{
	public:
	
	void defaultRecord();
			
	void setRecord();
	
	void showRecord(Subject sub[], Class cl[]);
    
    void readfromstream(ifstream& in);
		
	void printtostream(ostream& out);
		
}; 





