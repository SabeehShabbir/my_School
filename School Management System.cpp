#include<iostream>
#include <fstream>

#define Max 5
#include <string.h>

using namespace std;


void displayMenu(){
  	
  	cout<<"\n1.New Addmition"<<endl;
    cout<<"\n2.View Record"<<endl;
    cout<<"\n3.Search Record"<<endl;
    cout<<"\n4.Edit Record"<<endl;
    cout<<"\n5.Delete Record"<<endl;
    cout<<"\n6.Exit Program"<<endl;
    
    }
    
void showMenu(){
  	
  	cout<<"\n1.Hire Teacher"<<endl;
    cout<<"\n2.View Record"<<endl;
    cout<<"\n3.Search Record"<<endl;
    cout<<"\n4.Edit Record"<<endl;
    cout<<"\n5.Delete Record"<<endl;
    cout<<"\n6.Exit Program"<<endl;
    
    }
    
class Subject{
    public:
    char sub[20];
    Subject(){
    	strcpy(sub,"Null");
	}
	};
class Class{
   	public:
   	int clas;
   	Class(){
   		clas=0;
	   }
   	
    }; 
class Section{
public:
	char section[20];
	Section(){
		
		strcpy(section,"NULL");
	}
	
    };
class Session{
public:
    int yyyy;
    Session(){
    	yyyy=0;
	}
	};
	
	
class Person{
	public:
	int id;
	char nam[50];
	int age;
	char gen[5];
	int yy;
	int mm;
	int dd;
	
};

    class Student:public Person{
	public:
	Subject sub[Max];	
    Session s[Max];
    Section sec[Max];
    Class cl[Max];

 
  Student(){
		
    id=0;
  	strcpy(nam,"Unknown");
  	age=0;
  	strcpy(gen,"Null");
  	yy=0;
  	mm=0;	
  	dd=0;
	}
	
  void defaultStudent(int a){	
	
    id=0;
  	strcpy(nam,"Unknown");
  	age=0;
  	strcpy(gen,"Null");
  	s[a].yyyy=0;
  	cl[a].clas=0;
  	strcpy(sec[a].section,"NULL");
  	strcpy(sub[a].sub,"Null");
  	yy=0;
  	mm=0;	
  	dd=0;
	}
  

  int setRecord(int b){
	  
	cout<<"\nEnter Student Id: ";
	cin>>id;
  	
  	cout<<"\nEnter Student Name: ";
  	cin>>nam;
  	
  	cout<<"\nEnter Student Age: ";
  	cin>>age;
  	
  	cout<<"\nEnter Student Gender:" ;
  	cin>>gen;
  	
  	cout<<"\nEnter Student Session:" ;
  	cin>>s[b].yyyy;
  	
  	cout<<"\nEnter Student Class:" ;
  	cin>>cl[b].clas;

  	cout<<"\nEnter Student Section:" ;
  	cin>>sec[b].section;
  	
  	cout<<"\nEnter Student Subject:" ;
  	cin>>sub[b].sub;
    	
  	cout<<"\nEnter Birth Year: ";
  	cin>>yy;
  	
  	cout<<"\nEnter Birth Month: ";
  	cin>>mm;
  	
  	cout<<"\nEnter Birth Day: ";
  	cin>>dd;
  	
}




    int enterRecord(int *a,int i){

  	    if(id==0){
  		setRecord(i);
  		*a=1;
	  }
}
  
   
    int displayRecord(int a){
        
  	    cout<<"\nStudent Id: "<<id;
 
  	    cout<<"\nStudent Name: "<<nam;
  		
       	cout<<"\nStudent Age: "<<age;
  	
  	    cout<<"\nStudent Gender: "<<gen;
  	    
  	    cout<<"\nStudent Session: "<<s[a].yyyy;
  	    
  	    cout<<"\nStudent Class: "<<cl[a].clas;
  	    
  	    cout<<"\nStudent Section: "<<sec[a].section;
  	    
  	    cout<<"\nStudent Class: "<<sub[a].sub;
  	    
  	    cout<<"\nStudent Birth Year: "<<dd<<":"<<mm<<":"<<yy;
  	    
    }   
     
    void showRecord(int a){	
  		displayRecord(a);	
}
 
    void searchRecord(int searchID,int a){
  	
  		if(searchID == id){
  		displayRecord(a);			
}
  	       
}
    
    void advanceSearch(int session,int clas,string seaction,int a){
  	       
  		if(session == s[a].yyyy && clas == cl[a].clas && seaction==sec[a].section ){
  		displayRecord(a);			
        }   
}
       
    int editRecord(int edtID,int a){
  	  	if(edtID==id){	
  		setRecord(a);
     }
}
  	int  deleteRecord(int delID,int a){  
  	  	if(delID==id){	
  	  	defaultStudent(a);
  	    cout<<"\nRecord is deleated\n";
        }  
}
  	    
    int exit(){
 	    cout<<"\nProgram is Ended";
    }
    void printtostream(ostream& ostrm,int i)
      {
     	ostrm<<" "<<id<<" "<<nam<<" "<<age<<" "<<gen<<" "<<s[i].yyyy<<" "<<cl[i].clas<<" "<<sec[i].section<<" "<<sub[i].sub<<" "<<" "<<dd<<" "<<mm<<" "<<yy<<endl;	
      }
    void readfromstream(istream& istrm,int b)
      {
         istrm>>id>>nam>>age>>gen>>s[b].yyyy>>cl[b].clas>>sec[b].section>>sub[b].sub>>dd>>mm>>yy;
         displayRecord(b);
      }   
};


 class Teacher:public Person{
	public:
	
	Subject sub[Max];	
    Session s[Max];
    Section sec[Max];
    Class cl[Max];
    
    Teacher(){
    id=0;
  	strcpy(nam,"Unknown");
  	age=0;
  	strcpy(gen,"Null");
  	yy=0;
  	mm=0;	
  	dd=0;
  	
	}
	void defaultTeacher(int a){	
    id=0;
  	strcpy(nam,"Unknown");
  	age=0;
  	strcpy(gen,"Null");
  	s[a].yyyy=0;
  	cl[a].clas=0;
  	strcpy(sec[a].section,"NULL");
  	strcpy(sub[a].sub,"Null");
  	yy=0;
  	mm=0;	
  	dd=0;
	}
 
    int setRecord(int i){
    	   
	cout<<"\nEnter Teacher Id: ";
	cin>>id;
  	
  	cout<<"\nEnter Teacher Name: ";
  	cin>>nam;
  	
  	cout<<"\nEnter Teacher Age: ";
  	cin>>age;
  	
  	cout<<"\nEnter Teacher Gender:" ;
  	cin>>gen;
  	
  	cout<<"\nEnter Teacher Session:" ;
  	cin>>s[i].yyyy;
  	
  	cout<<"\nEnter Teacher Class:" ;
  	cin>>cl[i].clas;

  	
  	cout<<"\nEnter Teacher Section:" ;
  	cin>>sec[i].section;
  	
  	cout<<"\nEnter Teacher Subject:" ;
  	cin>>sub[i].sub;
  
  	
  	cout<<"\nEnter Birth Year: ";
  	cin>>yy;
  	
  	cout<<"\nEnter Birth Month: ";
  	cin>>mm;
  	
  
  	cout<<"\nEnter Birth Day: ";
  	cin>>dd;
  	
	}
    int enterRecord(int *a,int i){

  	if(id==0){
  		setRecord(i);
  		*a=1;
	  }
    }
    
  
   
   
  int displayRecord(int a){
        
  	    cout<<"\nTeacher Id: "<<id;
 
  	    cout<<"\nTeacher Name: "<<nam;
  		
       	cout<<"\nTeacher Age: "<<age;
  	
  	    cout<<"\nTeacher Gender: "<<gen;
  	    
  	    cout<<"\nTeacher Session: "<<s[a].yyyy;
  	    
  	    cout<<"\nTeacher Class: "<<cl[a].clas;
  	    
  	    cout<<"\nTeacher Section: "<<sec[a].section;
  	    
  	    cout<<"\nTeacher Class: "<<sub[a].sub;
  	    
  	    cout<<"\nTeacher Birth Year: "<<dd<<":"<<mm<<":"<<yy;
  	    
    }   
     
	
  	  void showRecord(int a){	
  		displayRecord(a);	
    }
    
 
  void searchRecord(int searchID,int a){
  	         	
  			if(searchID == id){
  			displayRecord(a);			
            }  	       
}
    
    void advanceSearch(int session,int clas,string section,int a){
  	        
  			if(session == s[a].yyyy && clas == cl[a].clas&& section==sec[a].section){
  			displayRecord(a);			
            }
  	        
    }
       
    
    
    int editRecord(int edit,int a){
	    
  	  	if(edit==id){	
  		setRecord(a);
  	}
}

  	    int  deleteRecord(int delID,int a){
  	    
  	  	if(delID==id){
		defaultTeacher(a);	
  	    cout<<"\nRecord is deleated\n";
        } 
        
}
  	
 int exit(){
 	    cout<<"\nProgram is Ended";
 	
}
 void readfromstream(istream& istrm,int i)
      {
         istrm>>id>>nam>>age>>gen>>s[i].yyyy>>cl[i].clas>>sec[i].section>>sub[i].sub>>dd>>mm>>yy;
         displayRecord(i);
      }
void printtostream(ostream& ostrm,int b)
      {
      	
    ostrm<<" "<<id<<" "<<nam<<" "<<age<<" "<<gen<<" "<<s[b].yyyy<<" "<<cl[b].clas<<" "<<sec[b].section<<" "<<sub[b].sub<<" "<<" "<<dd<<" "<<mm<<" "<<yy<<endl;
	}
      
};
  
  

void readfromfile(Student date[])
{
    ifstream ifs;  
    ifs.open("mySchool.txt");
    for(int b=0;b<5;b++){
    date[b].readfromstream(ifs,b);
}
    ifs.close(); 
}

void write2file(Student date[])
{
    ofstream ofs;
    ofs.open("mySchool.txt");
    for(int b=0;b<5;b++){
    date[b].printtostream(ofs,b);
}
    ofs.close();
  
}
void readfromfilex(Teacher date[])
{
    ifstream ifs;  
    ifs.open("Teacher.txt");
    for(int b=0;b<5;b++){
    date[b].readfromstream(ifs,b);
}
    ifs.close();
}

void write2filex(Teacher date[])
{
    ofstream ofs;
    ofs.open("Teacher.txt");
    for(int b=0;b<5;b++){
    date[b].printtostream(ofs,b);
}
    ofs.close();
  
}


  int main(){
  	    cout<<"\n--------------------------------------------\n"<<endl;
  	    cout<<"\n   Welcome to My School Manigment System\n"<<endl;
  	    cout<<"\n--------------------------------------------\n"<<endl;
  	    cout<<"\n1:- Studant Record\n"<<endl;
  	    cout<<"\n2:- Teacher Record\n"<<endl;
  	    cout<<"\n3:- Exit\n"<<endl;
    int select=0; 
 	    cin>>select;
 	    
  	do{
    if (select==1){ 
        Student date[5];
        readfromfile(date);
		write2file(date);
		
  	    int choice;
  	do{
	
  	    cout<<"\nWelcome to Student Reecord\n"<<endl;
  	    displayMenu();
  	
  	    cout<<"\nEnter Your Choice: ";
  	    cin>>choice;
  	
    if(choice==1){
    	int a=0;
    	  for(int i=0;i<5;i++){
    	  	
    	  	if(a==1){
		  	write2file(date);
	    	break;
		}
	      date[i].enterRecord(&a,i);
	    }
		  	
}
  	else if(choice==2){  
	  for(int a=0;a<5;a++){
		date[a].showRecord(a);
	}	
}
			
	else if(choice==3){
		cout<<"\n1:-Search by ID"<<endl;
		cout<<"\n2:-Search by Secession,Class and Section"<<endl;
		int option;
		cin>>option;
	if(option==1){
		int searchID;
  	    cout<<"\nEnter Student ID You Want to Search: ";
  	    cin>>searchID;
  	    for(int a=0;a<5;a++){
		date[a].searchRecord(searchID,a);
	}
	}
	else if(option==2){
		int session,clas;
		string section;
  	    cout<<"\nEnter Student Secession: ";
  	    cin>>session;
  	    cout<<"\nEnter Student Class: ";
  	    cin>>clas;
  	    cout<<"\nEnter Student Section: ";
  	    cin>>section;
  	    for(int a=0;a<5;a++){
		date[a].advanceSearch(session,clas,section,a);
	}
	}
	else{
	    cout<<"\nInvalid"<<endl;
	}
}
	else if(choice==4){ 
		int editID;
		cout<<"\nEnter Student ID You Want to Edit: ";
  	    cin>>editID;
  	    for(int a=0;a<5;a++){
	    date[a].editRecord(editID,a);
	}
	write2file(date);
}
	else if(choice==5){
		int delID;
		cout<<"\nEnter Student ID You Want to Delete: ";
  	    cin>>delID;
  	    for(int a=0;a<5;a++){
		date[a].deleteRecord(delID,a);
	}
	write2file(date);
}
			
	else if(choice==6){
		exit(6);
}
	else{
		cout<<"Invalid input";
}	  
}while(choice!=6);

}
    else if(select==2){
    	Teacher date[5];
        readfromfilex(date);
		write2filex(date); 
  	    int choice;
  	do{
	  
  	    cout<<"\nWelcome to Teacher Record\n"<<endl;
  	    showMenu();
  	
  	    cout<<"\nEnter Your Choice: ";
  	    cin>>choice;
  	
    if(choice==1){
		int a=0;
    	  for(int i=0;i<5;i++){
    	  	
    	  	if(a==1){
		  	write2filex(date);
	    	break;
		}
	      date[i].enterRecord(&a,i);
	    }
		
}

  	else if(choice==2){  	
	for(int a=0;a<5;a++){
		date[a].showRecord(a);
	}		
}
    else if(choice==3){
		cout<<"\n1:-Search by ID"<<endl;
		cout<<"\n2:-Search by Secession,Class and Section"<<endl;
		int option;
		cin>>option;
	if(option==1){
		int searchID;
  	    cout<<"\nEnter Teacher ID You Want to Search: ";
  	    cin>>searchID;
		for(int a=0;a<5;a++){
		date[a].searchRecord(searchID,a);
	}
	}
	else if(option==2){
		int session,clas;
		string section;
  	    cout<<"\nEnter Teacher Alocated Secession: ";
  	    cin>>session;
  	    cout<<"\nEnter Teacher Alocated Class: ";
  	    cin>>clas;
  	    cout<<"\nEnter Teacher Alocated Section: ";
  	    cin>>section;
		for(int a=0;a<5;a++){
		date[a].advanceSearch(session,clas,section,a);
	}
	}
	else{
	    cout<<"\nInvalid"<<endl;
	}
}
	else if(choice==4){ 
		int editID;
		cout<<"\nEnter Teacher ID You Want to Edit: ";
  	    cin>>editID;
	    for(int a=0;a<5;a++){
	    date[a].editRecord(editID,a);
	}
	write2filex(date);
}
	else if(choice==5){
		int delID;
		cout<<"\nEnter Teacher ID You Want to Delete: ";
  	    cin>>delID;
	    for(int a=0;a<5;a++){
		date[a].deleteRecord(delID,a);
	}
	write2filex(date);
}
			
	else if(choice==6){
		exit(6);
}
else{
		cout<<"Invalid input";
}	 
	  
}while(choice!=6);
}
    else{
	    cout<<"Program is Terminated";
}
}while(select!=0);
}
