#ifndef CLIENT_H
#define CLIENT_H
#include "project.h"
#include <iostream>

using namespace std;

class Client
{
private:
    int id;
    string name;
    string phone;
    string email;
    string note;
    date addedDate;
    project* m_project;
    int countPROJECT;
    //int flag4;
    //int countProject2;




public:
   //int countProject;

    void newProject();

    project* searchProject(string projectN);

    void setName(string nme);

    void setPhone(string phon);

    void setEmail(string emai);

    void setNote(string notte);

    void setDate(int DAY,int MONTH,int YEAR);

    string getName();

    string getPhone();

    string getEmail();

    string getNote();

    void readInput();

    void prinT();

    void printProjects();

    //void zeroPRO();

    //void setCOUnt();


     //int getr();

      //  void r();


    Client(int size2=10);
    ~Client();
};

#endif // CLIENT_H
