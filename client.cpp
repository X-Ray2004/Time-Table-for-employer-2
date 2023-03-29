#include "Client.h"


//int countProject2=0;
//int countProject;


Client::Client(int size2)
{
    phone=10;
    countPROJECT=0;
    email="unknown";
    name="unknown";
    //countProject2=0;

    note="unknown";
    m_project = new project[size2];
    // countProject2=0;

}

void Client::newProject()
{
    //project::countProject1++;
    project* newPro= new project();
    newPro->reedIN();
    m_project[countPROJECT]=*newPro;
    countPROJECT+=1;
    //countProject2++;
    // m_project[1].getr(countProject2);
}


project* Client::searchProject(string projectN)
{
    int s;
    project* findProject = new project();
    if (countPROJECT==0)
    {
        cout<<" NO PROJECT HERE ";
    }
    else
    {
        for (s=0; s<countPROJECT; s++)
        {
            if(m_project[s].getProjectName()==projectN)
            {
                cout<<" THE NUMBER OF PROJECT IS " <<s+1<<endl;
                m_project[s].print5();
                *findProject = m_project[s];
                s=0;
                break;

            }
        }
    }
    if(s==countPROJECT)
    {
        cout<<" THERE IS NO PROJECT WITH THIS NAME !";
        return 0;
    }
    else

        return findProject;
}

void Client::setName(string nme)
{
    name=nme;
}

void Client::setPhone(string phon)
{
    phone=phon;
}

void Client::setEmail(string emal)
{
    email=emal;
}

void Client::setNote(string notte)
{
    note=notte;
}

void Client::setDate(int DAY,int MONTH,int YEAR)
{
    addedDate.day=DAY;
    addedDate.month=MONTH;
    addedDate.year=YEAR;
}

string Client::getName()
{
    return name;
}

string Client::getPhone()
{
    return phone;
}

string Client::getEmail()
{
    return email;
}

string Client::getNote()
{
    return note;
}

void Client::prinT()
{
    cout<<"THE NAME IS : "<<name<<endl;

    cout<<"THE NUMBER IS : "<<phone<<endl;

    cout<<"THE MAIL IS : "<<email<<endl;

    cout<<"THE NUMBER OF PROJECTS : "<<countPROJECT<<endl;


}

void Client::readInput()
{

    cout<<"\nENTER THE NAME : ";
    cin>>name;
    cout<<"\nENTER THE NUMBER : ";
    cin>>phone;
    cout<<"\nENTER THE EMAIL : ";
    cin>>email;
    cout<<"\nENTER THE NOTES : ";
    cin>>note;
}

void Client::printProjects()
{
    //cout<<countProject<<endl;
    //countProject2=countPROJECT;
    for (int i=0; i<countPROJECT; i++)
    {
        cout<<"\nTHE NUMBER OF PROJECT  : "<<i+1<<endl;
        m_project[i].print5();
        cout<<"\t"<<endl;
    }
}

//void Client::zeroPRO()
//  {
//    countProject2=0;
//}
//
//        void Client::setCOUnt()
//        {
//            countProject++;
//        }

//        int Client::getr()
//{
//    return countProject2;
//}
//        void Client::r()
//        {
//            countProject2++;
//        }
//


Client::~Client()
{
    delete [] m_project;
}
