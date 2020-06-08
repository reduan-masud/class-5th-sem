#include <bits/stdc++.h>
using namespace std;
#define deb(x) cout<<#x<<"\t"<<x<<"\n"

struct studentProfile{
    string stdName;
    string stdID;
    int classTest;
    int midExam;
    int finalExam;
    int attendance;
    int assignment;
    int total;

}student[500];

int main()
{

    freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout)

    int n;
    cout<<"Enter Number of student : "<<endl;
    cin>>n;


    int total;
    for(int i = 0; i<n; i++)
    {
        total = 0;
        cout<<"Enter Information for student "<<i+1<<endl;
        cout<<"Enter Student Name: "<<endl;
        cin>>student[i].stdName;

        cout<<"Enter Student Id: "<<endl;
        cin>>student[i].stdID;

        cout<<"Enter Class Test mark"<<endl;
        cin>>student[i].classTest;
        while(student[i].classTest > 10)
        {
            cout<<"Class Test should be <= 10"<<endl;
            cout<<"Give Again: "<<endl;
            cin>>student[i].classTest;
        }
        total += student[i].classTest;
        cout<<"Enter mid exam marks"<<endl;
        cin>>student[i].midExam;
        while(student[i].midExam > 30)
        {
            cout<<"Mid Exam Marks should be <= 30"<<endl;
            cout<<"Give Again: "<<endl;
            cin>>student[i].midExam;
        }
        total += student[i].midExam;
        cout<<"Enter final exam marks"<<endl;
        cin>>student[i].finalExam;

        while(student[i].finalExam > 40)
        {
            cout<<"Final Exam Marks should be <= 40"<<endl;
            cout<<"Give Again: "<<endl;
            cin>>student[i].finalExam;
        }
        total += student[i].finalExam;

        cout<<"Enter attendance marks"<<endl;
        cin>>student[i].attendance;

        while(student[i].attendance > 10)
        {
            cout<<"Attendance marks should be <= 10"<<endl;
            cout<<"Give Again: "<<endl;
            cin>>student[i].attendance;
        }
        total += student[i].attendance;

        cout<<"Enter assignment marks"<<endl;
        cin>>student[i].assignment;
        while(student[i].assignment > 10)
        {
            cout<<"Assignment marks should be <= 10"<<endl;
            cout<<"Give Again: "<<endl;
            cin>>student[i].assignment;
        }
        total += student[i].assignment;
        student[i].total = total;
        cout<<endl;
    }


    cout<<"======================Printing Student Information===================="<<endl;
    int sortVariable[3] = {-1};
    int chk[3] = {0};
    //find larger.
    if(student[0].total > student[1].total)
    {
        if(student[0].total > student[2].total)
        {
            sortVariable[0] = 0;
            chk[0] = 1;
        }
        else
        {
            sortVariable[0] = 2;
            chk[2] = 1;
        }
    }
    else
    {
        if(student[1].total > student[2].total)
        {
             sortVariable[0] = 1;
             chk[1] = 1;
        }
        else
        {
             sortVariable[0] = 2;
             chk[2] = 1;
        }
    }


    //find smaller
    if(student[0].total < student[1].total)
    {
        if(student[0].total < student[2].total)
        {
             sortVariable[2] = 0;
             chk[0] = 1;
        }
        else
        {
            sortVariable[2] = 2;
            chk[2] = 1;
        }
    }
    else
    {
        if(student[1].total < student[2].total)
        {
             sortVariable[2] = 1;
             chk[1] = 1;
        }
        else
        {
             sortVariable[2] = 2;
             chk[2] = 1;
        }

    }


    for(int i = 0; i<3; i++) if(chk[i] == 0) sortVariable[1] = i;

    //Printing
    for(int i = 0 ; i < n; i++)
    {

        cout<<"Student Name :"<<student[sortVariable[i]].stdName<<endl;
        cout<<"Student ID :"<<student[sortVariable[i]].stdID<<endl;

        cout<<"Total Marks out of 100 : "<<student[sortVariable[i]].total<<endl;
        cout<<endl;
    }



        return 0;
}

