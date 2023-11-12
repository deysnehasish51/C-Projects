#include<iostream>
#include<conio.h> //library for getch()
#include<windows.h> //for clear the screen
#include<stdlib.h> //random function
using namespace std;

struct quiz
{
    string name;
    int regNo;
    int rollNo;
    int marks;
    int random;
};
quiz st;
void cplusplus()
{   st.marks=0;
    char option;
    int i=0,arr[5];
    while(i<=5)
    previous:
    {   
        st.random=rand()%6;
        for(int j=0;j<5;j++)
        {
            if(st.random==arr[j])
            {
                goto previous;
            }
        }
        arr[i]=st.random;
        switch(st.random)
        {
        case 0:
            cout<<i+1<<"C++ is a ____."<<endl;
            cout<<"a)Programming Language"<<endl;
            cout<<"b)English Language"<<endl;
            cout<<"c)Hindi Language"<<endl;
            cout<<"d)Punjabi Language"<<endl;
            option=getch();
            if(option=='a' || option=='A')
                {
                    cout<<"Correct Answer Congratulation !!!"<<endl;
                    st.marks++;
                }
            else
                {
                    cout<<"Wrong Answer "<<endl;
                }
            case 1:
            cout<<i+1<<"C++ is Used for____."<<endl;
            cout<<"a)Eating "<<endl;
            cout<<"b)Programming"<<endl;
            cout<<"c)Clening"<<endl;
            cout<<"d)None of these"<<endl;
            option=getch();
            if(option=='b' || option=='B')
                {
                    cout<<"Correct Answer Congratulation !!!"<<endl;
                    st.marks++;
                }
            else
                {
                    cout<<"Wrong Answer "<<endl;
                }
                break;
            case 2:
            cout<<i+1<<"Which of the following user-defined header file extension used in c++?"<<endl;
            cout<<"a)hg "<<endl;
            cout<<"b)cpp"<<endl;
            cout<<"c)gcc"<<endl;
            cout<<"d)None of these"<<endl;
            option=getch();
            if(option=='b' || option=='B')
                {
                    cout<<"Correct Answer Congratulation !!!"<<endl;
                    st.marks++;
                }
            else
                {
                    cout<<"Wrong Answer "<<endl;
                }
            break;
            case 3:
            cout<<i+1<<"Abstraction are used for____."<<endl;
            cout<<"a)Hidden the Private Data "<<endl;
            cout<<"b)Showing the Private Data"<<endl;
            cout<<"c)Secret method hidden"<<endl;
            cout<<"d)None of these"<<endl;
            option=getch();
            if(option=='a' || option=='A')
                {
                    cout<<"Correct Answer Congratulation !!!"<<endl;
                    st.marks++;
                }
            else
                {
                    cout<<"Wrong Answer "<<endl;
                }
            break;
        }
        i++;   
    }
}
void html()
{
    st.marks=0;
    char option;
    int i=0,arr[5];

    while(i<=5)
    previous:
    {
        st.random=rand()%6;
        for(int j=0;j<5;j++)
        {   
            if(st.random==arr[j])
            {
            goto previous;
            }
        }
        arr[i]=st.random;
        switch(st.random)
        {
    case 0:
    cout<<i+1<<"HTML stads for_____."<<endl;
    cout<<"a)Hyper Text Markup Language"<<endl;
    cout<<"b)High Text Markup Language"<<endl;
    cout<<"c)High Text Markdown Language"<<endl;
    cout<<"d)None of these"<<endl;
    option=getch();
        if(option=='a' || option=='A')
        {
            cout<<"Correct Answer Congratulation !!!"<<endl;
            st.marks++;
        }
        else
        {
            cout<<"Wrong Answer "<<endl;
        }
        break;
    case 1:
    cout<<i+1<<"How many sizes of headers are available in HTML by default?"<<endl;
    cout<<"a)5 "<<endl;
    cout<<"b)3"<<endl;
    cout<<"c)6"<<endl;
    cout<<"d)7"<<endl;
    option=getch();
        if(option=='c' || option=='C')
        {
            cout<<"Correct Answer Congratulation !!!"<<endl;
            st.marks++;
        }
        else
        {
            cout<<"Wrong Answer "<<endl;
        }
        break;
    case 2:
    cout<<i+1<<"What is the smallest header in HTML by default?"<<endl;
    cout<<"a)2 "<<endl;
    cout<<"b)4"<<endl;
    cout<<"c)6"<<endl;
    cout<<"d)None of these"<<endl;
    option=getch();
        if(option=='c' || option=='C')
        {
            cout<<"Correct Answer Congratulation !!!"<<endl;
            st.marks++;
        }
        else
        {
            cout<<"Wrong Answer "<<endl;
        }
        break;
    case 3:
    cout<<i+1<<"HTML files are saved by default with the extension?"<<endl;
    cout<<"a).html"<<endl;
    cout<<"b).h"<<endl;
    cout<<"c).ht"<<endl;
    cout<<"d)None of these"<<endl;
    option=getch();
        if(option=='a' || option=='A')
        {
            cout<<"Correct Answer Congratulation !!!"<<endl;
            st.marks++;
        }
        else
        {
            cout<<"Wrong Answer "<<endl;
        }
        break;
        }
        i++;
    }
}
void result()
{   int percentage;
    cout<<"Student Name : "<<st.name<<endl;
    cout<<"Student Registration No : "<<st.regNo<<endl;
    cout<<"Student Roll No : "<<st.rollNo<<endl;
    cout<<"Marks : "<<st.marks<<endl;
    percentage=st.marks*100/4;
    cout<<"Percentage : "<<percentage<<endl;
        if(percentage>=60)
        {
        cout<<"Pass"<<endl;
        }
        else{
            cout<<"Fail"<<endl;
        }

}
int main()
{   
    char start,select;
    do{
         system("CLS");
        cout<<"\n\n\n\n\n\t\t\t\t*********** Random Quiz System ***********\n\n\n\n"<<endl;
        cout<<"Enter your Name : "<<endl;
        cin>>st.name;
        cout<<"Enter your Registration No : "<<endl;
        cin>>st.regNo;
        cout<<"Enter your Roll No : "<<endl;
        cin>>st.rollNo;
        cout<<"Select the subject for your Quiz ? "<<endl;
        cout<<"1)C++"<<endl;
        cout<<"2)HTML"<<endl;
        select=getch();
        system("CLS");
        switch(select)
        {
            case '1':
            cout<<"C++ quiz started"<<endl;
            cplusplus();
            system("CLS");
            cout<<"\n\n\n\n\n\n\t\t\t\t\tResult of your quiz "<<endl;
            result();
            break;
            case '2':
            cout<<"HTML quiz started"<<endl;
            html();
            system("CLS");
            cout<<"\n\n\n\n\n\n\t\t\t\t\tResult of your Quiz"<<endl;
            result();
        }
        cout<<"Press s for start the Quiz OR any key for quit the Quiz !"<<endl;
        start=getch();
    }while(start=='S' || start=='s');
    return 0;
}