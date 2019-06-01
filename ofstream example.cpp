#include<iostream>
#include<fstream>
using namespace std;

main()
{
    ofstream obj("Aryansh.txt");
    int roll;
    char name[20], course[20];

    for(int i=0; i<5; ++i){                 //will take input of 5 students
        cout<<"Enter roll: ";       cin>>roll;
        cout<<"Enter name: ";       cin.getline(name,20);   cin.getline(name,20);
        cout<<"Enter Course: ";     cin.getline(name,20);


        obj<<"Roll = "<<roll<<endl<<"Name = "<<name<<endl<<"Course ="<<course<<endl<<endl;
    }


    obj.close();

    cout<<endl<<endl;
}
