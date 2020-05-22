#include <bits/stdc++.h>
using namespace std;


struct studentProfile{
    string stdName;
    string stdID;
    int classTest;
    int midExam;
    int finalExam;
    int attendance;
    int assignment;

}student[500];

int main()
{

    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout)

    int n;
    cout<<"Enter Number of student : "<<endl;
    cin>>n;



    for(int i = 0; i<n; i++)
    {
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

        cout<<"Enter mid exam marks"<<endl;
        cin>>student[i].midExam;
        while(student[i].midExam > 30)
        {
            cout<<"Mid Exam Marks should be <= 30"<<endl;
            cout<<"Give Again: "<<endl;
            cin>>student[i].midExam;
        }

        cout<<"Enter final exam marks"<<endl;
        cin>>student[i].finalExam;

        while(student[i].finalExam > 40)
        {
            cout<<"Final Exam Marks should be <= 40"<<endl;
            cout<<"Give Again: "<<endl;
            cin>>student[i].finalExam;
        }

        cout<<"Enter attendance marks"<<endl;
        cin>>student[i].attendance;

        while(student[i].attendance > 10)
        {
            cout<<"Attendance marks should be <= 10"<<endl;
            cout<<"Give Again: "<<endl;
            cin>>student[i].attendance;
        }

        cout<<"Enter assignment marks"<<endl;
        cin>>student[i].assignment;
        while(student[i].assignment > 10)
        {
            cout<<"Assignment marks should be <= 10"<<endl;
            cout<<"Give Again: "<<endl;
            cin>>student[i].assignment;
        }

        cout<<endl;
    }


    cout<<"======================Printing Student Information===================="<<endl;
    //Printing
    for(int i = 0 ; i < n; i++)
    {
        cout<<"Student Name :"<<student[i].stdName<<endl;
        cout<<"Student ID :"<<student[i].stdID<<endl;
        cout<<"Class Text Marks :"<<student[i].classTest<<endl;
        cout<<"Mid Exam marks :"<<student[i].midExam<<endl;
        cout<<"Final Exam Marks :"<<student[i].finalExam<<endl;
        cout<<"Attendance Marks :"<<student[i].attendance<<endl;
        cout<<"Assignment Marks :"<<student[i].assignment<<endl;

        cout<<"Total Marks out of 100 : "<<student[i].classTest+student[i].midExam+student[i].finalExam+student[i].attendance+student[i].assignment<<endl;
        cout<<endl;
    }



        return 0;
}

