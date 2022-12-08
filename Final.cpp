#include<iostream>
#include<stdlib.h>
#include<fstream>
#include<windows.h>
using namespace std;

void loadingBar()
{
    system ("color 70");

    char a= 177, b=219;


    printf("\t     Loading....");
    printf("\n\t     Please stay with us!\n\n");
    printf("\t\t");

    for(int i=0; i<40 ; i++)
    printf("%c", a);

    printf("\r");
    printf("\t     ");

    for(int i; i<51; i++)
        {
        printf("%c", b);
        Sleep(100);
        }
     printf("\n\n\n");

}

class Intro
{
protected:
    void intropage()
    {
                                                          ///********Welcome start**************///
    int time=400;
    Sleep(time);
    while(1){

    system("cls");
    system("color 70");

    cout<<endl<<endl;
    cout<<endl<<"                           ======================================================================================================================================================";
    cout<<endl<<"                           ======================================================================================================================================================";
    cout<<endl<<"                           ======================================================================================================================================================";
    cout<<endl<<"                           |||||||||====================================================================================================================================|||||||||";
    cout<<endl<<"                           |||||||||====================================================================================================================================|||||||||";
    cout<<endl<<"                           |||||||||-----------                                                                                                             ------------|||||||||     ";
    cout<<endl<<"                           |||||||||----------------                                                                                                --------------------|||||||||     ";
    cout<<endl<<"                           |||||||||---------------- \\\\       //\\\\      //  ||=======|  ||        ||=======|  ||=======||   ||\\\\  //||   ||=======|   ------------------|||||||||";
    cout<<endl<<"                           |||||||||----------------- \\\\     //  \\\\    //   ||          ||        ||          ||       ||   || \\\\// ||   ||         --------------------|||||||||";
    cout<<endl<<"                           |||||||||------------------ \\\\   //    \\\\  //    ||====|     ||        ||          ||       ||   ||  \\/  ||   ||====|      ------------------|||||||||" ;
    cout<<endl<<"                           |||||||||------------------- \\\\ //      \\\\//     ||          ||        ||          ||       ||   ||      ||   ||         --------------------|||||||||";
    cout<<endl<<"                           |||||||||-------------------- \\\\/        \\\/      ||=======|  ||======| ||=======|  ||=======||   ||      ||   ||=======|   ------------------|||||||||";
    cout<<endl<<"                           |||||||||---------------------                                                                                           --------------------|||||||||";
    cout<<endl<<"                           |||||||||------------------------                                ==========   =========                               -----------------------||||||||| ";
    cout<<endl<<"                           |||||||||--------------------------                                  ||       ||     ||                             -------------------------|||||||||";
    cout<<endl<<"                           |||||||||------------------------                                    ||       ||     ||                                 ---------------------|||||||||";
    cout<<endl<<"                           |||||||||---------------------                                       ||       ||     ||                                    ------------------|||||||||  ";
    cout<<endl<<"                           |||||||||-----------------                                           ||       =========                                       ---------------||||||||| ";
    cout<<endl<<"                           |||||||||---------------                                                                                                        -------------|||||||||     ";
    cout<<endl<<"                           |||||||||====================================================================================================================================|||||||||";
    cout<<endl<<"                           |||||||||====================================================================================================================================|||||||||";
    cout<<endl<<"                           |||||||||====================================================================================================================================|||||||||";
    cout<<endl<<"                           |||||||||*   *   *   *   *   *   *   *   *   *   *   *   *   *   *   *   *   *   *   *   *   *   *   *   *   *   *   *   *   *   *   *   *   |||||||||     ";
    cout<<endl<<"                           |||||||||  *   *   *   *   *   *   *   *   *   *   *   *   *   *   *   *   *   *   *   *   *   *   *   *   *   *   *   *   *   *   *   *   * |||||||||     ";
    cout<<endl<<"                           |||||||||*   *   *   *   *   *   *   *   *     /\\        ===========   ||\\     ||   ||\\     ||   *   *   *   *   *   *   *   *   *    *   *  |||||||||  ";
    cout<<endl<<"                           |||||||||  *   *   *   *   *   *   *    *   * //\\\\       ||            ||\\\\    ||   ||\\\\    || *   *   *   *   *    *   *   *    *   *   *   |||||||||";
    cout<<endl<<"                           |||||||||*   *   *   *    *   *   *    *   * //  \\\\      ||            || \\\\   ||   || \\\\   ||   *  *    *   *    *   *   *    *    *   *  * |||||||||";
    cout<<endl<<"                           |||||||||  *   *   *    *    *   *    *   * //    \\\\     ===========   ||  \\\\  ||   ||  \\\\  || *   *   *    *   *   *   *    *    *   *   *  |||||||||";
    cout<<endl<<"                           |||||||||*   *   *    *    *   *    *    * //------\\\\             ||   ||   \\\\ ||   ||   \\\\ ||   *   *   *    *   *   *   *    *    *   *   *|||||||||";
    cout<<endl<<"                           |||||||||  *   *   *    *    *    *   *   //--------\\\\            ||   ||    \\\\||   ||    \\\\|| *   *   *    *   *   *   *    *    *   *   *  |||||||||";
    cout<<endl<<"                           |||||||||*   *   *   *    *    *    *    //          \\\\  ===========   ||     \\||   ||     \\|| *   *   *   *   *    *   *   *   *    *   *  *|||||||||";
    cout<<endl<<"                           |||||||||  *   *   *   *   *   *   *   *   *   *   *   *   *   *   *   *   *  *  *   *   *   *   *   *   *   *   *   *   *   *   *   *   *   |||||||||";
    cout<<endl<<"                           |||||||||*   *   *   *   *   *   *   *   *   *   *   *   *   *   *   *   *   *   *  *   *   *   *   *   *   *   *   *   *   *   *   *   *  * |||||||||";
    cout<<endl<<"                           |||||||||====================================================================================================================================|||||||||";
    cout<<endl<<"                           |||||||||====================================================================================================================================|||||||||";
    cout<<endl<<"                           ======================================================================================================================================================";
    cout<<endl<<"                           ======================================================================================================================================================"<<endl;
    cout<<endl;
    cout<<endl<<"                           ======================================================================================================================================================";
    cout<<endl<<"                           ||--------------------------------------------------------------------------------------------------------------------------------------------------|| ";
    cout<<endl<<"                           ||-----------------------------      '' Develop a passion for learning. If you do, you will never cease to grow. ''         ------------------------|| ";
    cout<<endl<<"                           ||--------------------------------------------------------------------------------------------------------------------------------------------------|| ";
    cout<<endl<<"                           ======================================================================================================================================================"<<endl<<endl<<endl<<endl;


    Sleep(time);
    time=time-10;
    if(time==260)
    {

        break;
    }
     }                                                                                       ///********Welcome end**************
    }


};

class moto : public Intro
{
protected:

    void motopage()
    {


    system("cls");
    system("color 70");

    cout<<endl<<endl<<endl;
    cout<<"             * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *"<<endl;
    cout<<"             *                                                                                                                                                                               *"<<endl;
    cout<<"             *                                                                                                                                                                               *"<<endl;
    cout<<"             *       =================================================================================================================================================================       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||              ==================================================================================================================================             ||       *"<<endl;
    cout<<"             *       ||              |                                                       ||=========||                                                            |             ||       *"<<endl;
    cout<<"             *       ||              |                                                       ||  MOTTO  ||                                                            |             ||       *"<<endl;
    cout<<"             *       ||              |                                                       ||=========||                                                            |             ||       *"<<endl;
    cout<<"             *       ||              |                                                                                                                                |             ||       *"<<endl;
    cout<<"             *       ||              |         C++ is one of the most used Programming Languages in the world. In this 21st century, programming playing very         |             ||       *"<<endl;
    cout<<"             *       ||              |  important roll in our life. We have been using it for our own need since 1980.                                                |             ||       *"<<endl;
    cout<<"             *       ||              |                                                                                                                                |             ||       *"<<endl;
    cout<<"             *       ||              |         Many people want to learn C++ languages but they fail for not getting proper direction. In TeamASNN Website, we added  |             ||       *"<<endl;
    cout<<"             *       ||              |  many different features so that user can easily use it for their needs. There are 30 index in different topics. From          |             ||       *"<<endl;
    cout<<"             *       ||              |  Hello world to object-oriented programming, user can learn anything such as Arrays, Loop, Functions etc.                      |             ||       *"<<endl;
    cout<<"             *       ||              |                                                                                                                                |             ||       *"<<endl;
    cout<<"             *       ||              |         After learning any topic, user can give quiz.Before login, User have to register his mail to give quiz. After giving   |             ||       *"<<endl;
    cout<<"             *       ||              |  quiz, user get to know right answers. For Grading system,user get to know his total marks. For giving quiz, we give a         |             ||       *"<<endl;
    cout<<"             *       ||              |  Certificate to the user.                                                                                                      |             ||       *"<<endl;
    cout<<"             *       ||              |                                                                                                                                |             ||       *"<<endl;
    cout<<"             *       ||              |         In our website, there are also many live demo codes. User can run it or if they are stuck in any other place this      |             ||       *"<<endl;
    cout<<"             *       ||              |  type of live-demo codes helps a lot.                                                                                          |             ||       *"<<endl;
    cout<<"             *       ||              |                                                                                                                                |             ||       *"<<endl;
    cout<<"             *       ||              |          Another important thing is : For Beginners our site is really useful because we designed the website that way. so     |             ||       *"<<endl;
    cout<<"             *       ||              |  that we can satisfy every users need. Users basic will be clear after learning C++.                                           |             ||       *"<<endl;
    cout<<"             *       ||              |                                                                                                                                |             ||       *"<<endl;
    cout<<"             *       ||              |                                                                                                                                |             ||       *"<<endl;
    cout<<"             *       ||              ==================================================================================================================================             ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       =================================================================================================================================================================       *"<<endl;
    cout<<"             *                                                                                                                                                                               * "<<endl;
    cout<<"             *                                                                                                                                                                               *"<<endl;
    cout<<"             * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *"<<endl;
    cout<<endl;

    loadingBar();                                           ///********Motto info end**************//
    system("pause");


    }

public:

    char p;

    void showintro()
    {
       intropage() ;
    }


};

class index : public moto
{

protected:
    int sum=0,wrong=0;
    string command,name, password, inName, inPassword, registerName, registerPassword;
    string val;


    void indexpage()
    {
        int i;                                      ///**************Index start**********
    for(i=0;i<100;i++)
    {

    system("cls");

    system("color 70");
    cout<<"\n\n\n\n\n";
    cout<<"\n\n\n\t\t\t\t\t\t\t* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *\n";
    cout<<"\t\t\t\t\t\t\t*\t                                                                                    *\n";
    cout<<"\t\t\t\t\t\t\t*\t                                                                                    *\n";
    cout<<"\t\t\t\t\t\t\t*\t                                                                                    *\n";
    cout<<"\t\t\t\t\t\t\t*\t=============================================================================       *\n";
    cout<<"\t\t\t\t\t\t\t*\t*\t                                                                    *       *";
    cout<<"\n\t\t\t\t\t\t\t*\t*\t_____________________________________________________________       *       *\n ";
    cout<<"\t\t\t\t\t\t\t*\t*\t|                     |                                      |      *       *";
    cout<<"\n\t\t\t\t\t\t\t*\t*\t|  >> C++ Basics <<   |\t\t >> C++ Function <<          |      *       *\n";
    cout<<"\t\t\t\t\t\t\t*\t*\t|_____________________|______________________________________|      *       *";
    cout<<"\n\t\t\t\t\t\t\t*\t*\t| 01. Introduction    |\t18. Functions                        |      *       *\n";
    cout<<"\t\t\t\t\t\t\t*\t*\t|                     |                                      |      *       *";
    cout<<"\n\t\t\t\t\t\t\t*\t*\t| 02. Syntax          |\t19. Function Parameters              |      *       *\n";
    cout<<"\t\t\t\t\t\t\t*\t*\t|                     |                                      |      *       *";
    cout<<"\n\t\t\t\t\t\t\t*\t*\t| 03. Comments        |\t20. Function Overloading             |      *       *\n";
    cout<<"\t\t\t\t\t\t\t*\t*\t|                     |                                      |      *       *";
    cout<<"\n\t\t\t\t\t\t\t*\t*\t| 04. Output          |______________________________________|      *       *\n";
    cout<<"\t\t\t\t\t\t\t*\t*\t|                     |                                      |      *       *";
    cout<<"\n\t\t\t\t\t\t\t*\t*\t| 05. Variable Types  |\t         >> C++ Classes <<           |      *       *\n";
    cout<<"\t\t\t\t\t\t\t*\t*\t|                     |______________________________________|      *       *";
    cout<<"\n\t\t\t\t\t\t\t*\t*\t| 06. Variable Scope  |\t21. OOP                              |      *       *\n";
    cout<<"\t\t\t\t\t\t\t*\t*\t|                     |                                      |      *       *";
    cout<<"\n\t\t\t\t\t\t\t*\t*\t| 07. User Input      |\t22. Classes/Objects                  |      *       *\n";
    cout<<"\t\t\t\t\t\t\t*\t*\t|                     |                                      |      *       *";
    cout<<"\n\t\t\t\t\t\t\t*\t*\t| 08. Data Types      |\t23. Class Methods                    |      *       *\n";
    cout<<"\t\t\t\t\t\t\t*\t*\t|                     |                                      |      *       *";
    cout<<"\n\t\t\t\t\t\t\t*\t*\t| 09. operators       |\t24. Constructors                     |      *       *\n";
    cout<<"\t\t\t\t\t\t\t*\t*\t|                     |                                      |      *       *";
    cout<<"\n\t\t\t\t\t\t\t*\t*\t| 10. Conditions      |\t25. Access Specifiers                |      *       *\n";
    cout<<"\t\t\t\t\t\t\t*\t*\t|                     |                                      |      *       *";
    cout<<"\n\t\t\t\t\t\t\t*\t*\t| 11. Switch          |\t26. Encapsulation                    |      *       *\n";
    cout<<"\t\t\t\t\t\t\t*\t*\t|                     |                                      |      *       *";
    cout<<"\n\t\t\t\t\t\t\t*\t*\t| 12. Loop            |\t27. Inheritance                      |      *       *\n";
    cout<<"\t\t\t\t\t\t\t*\t*\t|                     |                                      |      *       *";
    cout<<"\n\t\t\t\t\t\t\t*\t*\t| 13. Dynamic Memory  |\t28. Polymorphism                     |      *       *\n";
    cout<<"\t\t\t\t\t\t\t*\t*\t|                     |                                      |      *       *";
    cout<<"\n\t\t\t\t\t\t\t*\t*\t| 14. Break/Continue  |\t29. Files                            |      *       *\n";
    cout<<"\t\t\t\t\t\t\t*\t*\t|                     |                                      |      *       *";
    cout<<"\n\t\t\t\t\t\t\t*\t*\t| 15. Arrays          |\t30. Exception                        |      *       *\n";
    cout<<"\t\t\t\t\t\t\t*\t*\t|                     |                                      |      *       *";
    cout<<"\n\t\t\t\t\t\t\t*\t*\t| 16. References      |\t31. Quiz                             |      *       *\n";
    cout<<"\t\t\t\t\t\t\t*\t*\t|                     |                                      |      *       *";
    cout<<"\n\t\t\t\t\t\t\t*\t*\t| 17. Pointers        |\t32. About us                         |      *       *\n";
    cout<<"\t\t\t\t\t\t\t*\t*\t|_____________________|______________________________________|      *       *\n";
    cout<<"\t\t\t\t\t\t\t*\t*\t                                                                    *       *\n";
    cout<<"\t\t\t\t\t\t\t*\t*\t                                                                    *       *\n";
    cout<<"\t\t\t\t\t\t\t*\t=============================================================================       *\n";
    cout<<"\t\t\t\t\t\t\t*\t\t                                                                            *\n";
    cout<<"\t\t\t\t\t\t\t*\t\t                                                                            *\n";
    cout<<"\t\t\t\t\t\t\t*\t\t                                                                            *\n";
    cout<<"\t\t\t\t\t\t\t* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *";
    cout<<"\n\n";





            //**************Index end**********


                                                ///**************Index end*******************
                                                ///********Index Choose Start*************


        string inp;
        cout<<"\n\t\t\t\t\t\t\t||====>>> Please Write the topic / Choose Your Number : ";
        cin>>inp;





                                                       ///********Introduction Start******///

        if (inp=="01" || inp=="Introduction" || inp=="1")
        {

            system("cls");
            system("color 70");

    cout<<endl<<endl<<endl;
    cout<<"             * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *  *"<<endl;
    cout<<"             *                                                                                                                                                                                * "<<endl;
    cout<<"             *                                                                                                                                                                                *"<<endl;
    cout<<"             *                                                                                                                                                                                *"<<endl;
    cout<<"             *       ------------------------------------------------------------------------------------------------------------------------------------------------------------------       *"<<endl;
    cout<<"             *       ||||||||||||||||||||||||||||||||||||||||| <= => @https://www.teamasnn.com/cplusplus/cpp_Tutorial.htm. ||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||       *"<<endl;
    cout<<"             *       ------------------------------------------------------------------------------------------------------------------------------------------------------------------       *"<<endl;
    cout<<"             *       ==================================================================================================================================================================       *"<<endl;
    cout<<"             *       ||           __________                        ||--------------------/\\                         /\\---------------------||                                       ||       *"<<endl;
    cout<<"             *       ||          [          ]                       ||-------------------/  \\                       /  \\--------------------||                                       ||       *"<<endl;
    cout<<"             *       ||          [ TeamASNN ]                       ||-------------------\\  /       TEAM ASNN       \\  /--------------------||                                       ||       *"<<endl;
    cout<<"             *       ||          [ LearnC++ ]                       ||--------------------\\/                         \\/---------------------||                                       ||       *"<<endl;
    cout<<"             *       ||          [__________]                       ||----------------------|||||||||||||||||||||||||-----------------------||                                       ||       *"<<endl;
    cout<<"             *       ==================================================================================================================================================================       *"<<endl;
    cout<<"             *                                                                                                                                                                                *"<<endl;
    cout<<"             *                                                                                                                                                                                *"<<endl;
    cout<<"             *       ==================================================================================================================================================================       *"<<endl;
    cout<<"             *       ||           ----------------------                              ***********************************                           ----------------------           ||       *"<<endl;
    cout<<"             *       ||           | << Previous page   |                              **            Tutorial           **                           |     Next page  >>  |           ||       *"<<endl;
    cout<<"             *       ||           ----------------------                              ***********************************                           ----------------------           ||       *"<<endl;
    cout<<"             *       ==================================================================================================================================================================       *"<<endl;
    cout<<"             *       ||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||       *"<<endl;
    cout<<"             *       ==================================================================================================================================================================       *"<<endl;
    cout<<"             *       ||                                                                                                                                                              ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                              ||       *"<<endl;
    cout<<"             *       ||      C++ is a middle-level programming language developed by Bjarne Stroustrup starting in 1979 at Bell Labs. C++ runs on a variety of platforms,            ||       *"<<endl;
    cout<<"             *       ||      such as Windows, Mac OS, and the various versions of UNIX. This C++ tutorial adopts a simple and practical approach to describe the concepts            ||       *"<<endl;
    cout<<"             *       ||      of C++ for beginners to advanded software engineers.                                                                                                    ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                              ||       *"<<endl;
    cout<<"             *       ||                  Why to Learn C++                                                                                                                            ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                              ||       *"<<endl;
    cout<<"             *       ||       C++ is a MUST for students and working professionals to become a great Software Engineer. I will list down some of the key advantages of learning C++: ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                              ||       *"<<endl;
    cout<<"             *       ||              * C++ is very close to hardware, so you get a chance to work at a low level which gives you lot of control in terms of memory management,       ||       *"<<endl;
    cout<<"             *       ||               better performance and finally a robust software development.                                                                                  ||       *"<<endl;
    cout<<"             *       ||              * C++ programming gives you a clear understanding about Object Oriented Programming. You will understand low level implementation of            ||       *"<<endl;
    cout<<"             *       ||               polymorphism when you will implement virtual tables and virtual table pointers, or dynamic type identification.                                ||       *"<<endl;
    cout<<"             *       ||              * C++ is one of the every green programming languages and loved by millions of software developers. If you are a great C++ programmer           ||       *"<<endl;
    cout<<"             *       ||               then you will never sit without work and more importantly you will get highly paid for your work.                                              ||       *"<<endl;
    cout<<"             *       ||              *C++ is the most widely used programming languages in application and system programming. So you can choose your area of interest               ||       *"<<endl;
    cout<<"             *       ||               of software development.                                                                                                                       ||       *"<<endl;
    cout<<"             *       ||              *C++ really teaches you the difference between compiler, linker and loader, different data types, storage classes,                              ||       *"<<endl;
    cout<<"             *       ||               variable types their scopes etc.                                                                                                               ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                              ||       *"<<endl;
    cout<<"             *       ||       There are 1000s of good reasons to learn C++ Programming. But one thing for sure, to learn any programming language, not only C++,                     ||       *"<<endl;
    cout<<"             *       ||       you just need to code, and code and finally code until you become expert.                                                                              ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                              ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                              ||       *"<<endl;
    cout<<"             *       ||       Hello World using C++                                                                                                                                  ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                              ||       *"<<endl;
    cout<<"             *       ||       Just to give you a little excitement about C++ programming, I'm going to give you a small conventional C++ Hello World program,                        ||       *"<<endl;
    cout<<"             *       ||       You can try it using Demo link                                                                                                                         ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                              ||       *"<<endl;
    cout<<"             *       ||       C++ is a super set of C programming with additional implementation of object-oriented concepts                                                         ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                              ||       *"<<endl;
    cout<<"             *       ||                                             [-LIVE DEMO-]                                                                                                    ||       *"<<endl;
    cout<<"             *       ||      ---------------------------------------------------                                                                                                     ||       *"<<endl;
    cout<<"             *       ||      | #INCLUDE<IOSTREAM>                              |                                                                                                     ||       *"<<endl;
    cout<<"             *       ||      | using namespace std;                            |                                                                                                     ||       *"<<endl;
    cout<<"             *       ||      | // main() is where program execution begins.    |                                                                                                     ||       *"<<endl;
    cout<<"             *       ||      | int main() {                                    |                                                                                                     ||       *"<<endl;
    cout<<"             *       ||      |    cout << ""; // prints Hello World   |          |                                                                                                     ||       *"<<endl;
    cout<<"             *       ||      |    return 0;                                    |                                                                                                     ||       *"<<endl;
    cout<<"             *       ||      | }                                               |                                                                                                     ||       *"<<endl;
    cout<<"             *       ||      ---------------------------------------------------                                                                                                     ||       *"<<endl;
    cout<<"             *       ||      There are many C++ compilers available which you can use to compile and run above mentioned program:                                                    ||       *"<<endl;
    cout<<"             *       ||          *Apple C++. Xcode                                                                                                                                   ||       *"<<endl;
    cout<<"             *       ||          *Bloodshed Dev-C++                                                                                                                                  ||       *"<<endl;
    cout<<"             *       ||          *Clang C++                                                                                                                                          ||       *"<<endl;
    cout<<"             *       ||          *Cygwin (GNU C++)                                                                                                                                   ||       *"<<endl;
    cout<<"             *       ||          *Mentor Graphics                                                                                                                                    ||       *"<<endl;
    cout<<"             *       ||          *MINGW - Minimalist GNU for Windows                                                                                                                 ||       *"<<endl;
    cout<<"             *       ||          *GNU CC source                                                                                                                                      ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                              ||       *"<<endl;
    cout<<"             *       ||       It is really impossible to give a complete list of all the available compilers.                                                                        ||       *"<<endl;
    cout<<"             *       ||       The C++ world is just too large and too much new is happening.                                                                                         ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                              ||       *"<<endl;
    cout<<"             *       ||                                                             Applications of C++ Programming                                                                  ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                              ||       *"<<endl;
    cout<<"             *       ||        As mentioned before, C++ is one of the most widely used programming languages. It has it's presence in almost every area of software development.     ||       *"<<endl;
    cout<<"             *       ||         I'm going to list few of them here:                                                                                                                  ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                              ||       *"<<endl;
    cout<<"             *       ||              *Application Software Development - C++ programming has been used in developing almost all the major Operating Systems like Windows,            ||       *"<<endl;
    cout<<"             *       ||               Mac OSX and Linux. Apart from the operating systems, the core part of many browsers like Mozilla Firefox and Chrome have been written using C++||       *"<<endl;
    cout<<"             *       ||               C++ also has been used in developing the most popular database system called MySQL.                                                            ||       *"<<endl;
    cout<<"             *       ||              *Programming Languages Development - C++ has been used extensively in developing new programming languages like C#, Java, JavaScript, Perl,     ||       *"<<endl;
    cout<<"             *       ||                UNIX�s C Shell, PHP and Python, and Verilog etc.                                                                                              ||       *"<<endl;
    cout<<"             *       ||              *Computation Programming - C++ is the best friends of scientists because of fast speed and computational efficiencies.                          ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                              ||       *"<<endl;
    cout<<"             *       ||       This list goes on, there are various areas where software developers are happily using C++ to provide great softwares.                                 ||       *"<<endl;
    cout<<"             *       ||        I highly recommend you to learn C++ and contribute great softwares to the community.                                                                  ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                              ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                              ||       *"<<endl;
    cout<<"             *       ==================================================================================================================================================================       *"<<endl;
    cout<<"             *       ||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||       *"<<endl;
    cout<<"             *       ==================================================================================================================================================================       *"<<endl;
    cout<<"             *                                                                                                                                                                                * "<<endl;
    cout<<"             *                                                                                                                                                                                *"<<endl;
    cout<<"             *                                                                                                                                                                                *"<<endl;
    cout<<"             * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * **"<<endl;
    cout<<endl<<endl<<endl;
    system("pause");

        }
                                              ///********Introduction end******///




                                              ///********Syntax Start******///

        else if (inp=="2" || inp=="02" || inp=="Syntax")
        {
            system("cls");
            system("color 70");

    cout<<endl<<endl<<endl;
    cout<<"             * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *"<<endl;
    cout<<"             *                                                                                                                                                                               * "<<endl;
    cout<<"             *                                                                                                                                                                               *"<<endl;
    cout<<"             *                                                                                                                                                                               *"<<endl;
    cout<<"             *       -----------------------------------------------------------------------------------------------------------------------------------------------------------------       *"<<endl;
    cout<<"             *       ||||||||||||||||||||||||||||||||||||||||| <= => @https://www.teamasnn.com/cplusplus/cpp_basic_syntax.htm. |||||||||||||||||||||||||||||||||||||||||||||||||||||||       *"<<endl;
    cout<<"             *       -----------------------------------------------------------------------------------------------------------------------------------------------------------------       *"<<endl;
    cout<<"             *       =================================================================================================================================================================       *"<<endl;
    cout<<"             *       ||           __________                        ||--------------------/\\                         /\\---------------------||                                      ||       *"<<endl;
    cout<<"             *       ||          [          ]                       ||-------------------/  \\                       /  \\--------------------||                                      ||       *"<<endl;
    cout<<"             *       ||          [ TeamASNN ]                       ||-------------------\\  /       TEAM ASNN       \\  /--------------------||                                      ||       *"<<endl;
    cout<<"             *       ||          [ LearnC++ ]                       ||--------------------\\/                         \\/---------------------||                                      ||       *"<<endl;
    cout<<"             *       ||          [__________]                       ||----------------------|||||||||||||||||||||||||-----------------------||                                      ||       *"<<endl;
    cout<<"             *       =================================================================================================================================================================       *"<<endl;
    cout<<"             *                                                                                                                                                                               *"<<endl;
    cout<<"             *                                                                                                                                                                               *"<<endl;
    cout<<"             *       =================================================================================================================================================================       *"<<endl;
    cout<<"             *       ||           ----------------------                              ***********************************                           ----------------------          ||       *"<<endl;
    cout<<"             *       ||           | << Previous page   |                              **            Syntax             **                           |     Next page  >>  |          ||       *"<<endl;
    cout<<"             *       ||           ----------------------                              ***********************************                           ----------------------          ||       *"<<endl;
    cout<<"             *       =================================================================================================================================================================       *"<<endl;
    cout<<"             *       |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||       *"<<endl;
    cout<<"             *       =================================================================================================================================================================       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       || When we consider a C++ program, it can be defined as a collection of objects that communicate via invoking each other's methods.Let us now briefly look into||       *"<<endl;
    cout<<"             *       || what a class, object, methods, and instant variables mean.                                                                                                  ||       *"<<endl;
    cout<<"             *       || Object- Objects have states and behaviors. Example: A dog has states -color, name, breed as well as behaviors - wagging, barking,eating. An object is an    ||       *"<<endl;
    cout<<"             *       || instance of a class.                                                                                                                                        ||       *"<<endl;
    cout<<"             *       || Class- A class can be defined as a template/blueprint that describes the behaviors/states that object of its type support.                                  ||       *"<<endl;
    cout<<"             *       || Methods- A method is basically a behavior. A class can contain many methods. It is in methods where the logics are written, data  is manipulated and all the||       *"<<endl;
    cout<<"             *       || actions are executed.                                                                                                                                       ||       *"<<endl;
    cout<<"             *       || Instance Variables- Each object has its unique set of instance variables. An object's state is created by the values assigned to these instance variables.  ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||          **C++ Program Structure                                                                                                                            ||       *"<<endl;
    cout<<"             *       || Let us look at a simple code that would print the words Hello World.                                                                                        ||       *"<<endl;
    cout<<"             *       ||      |-----------------------------------------------------------|                                                                                          ||       *"<<endl;
    cout<<"             *       ||      | #include <iostream>                                       |                                                                                          ||       *"<<endl;
    cout<<"             *       ||      | using namespace std;                                      |                                                                                          ||       *"<<endl;
    cout<<"             *       ||      | // main() is where program execution begins.              |                                                                                          ||       *"<<endl;
    cout<<"             *       ||      | int main() {                                              |                                                                                          ||       *"<<endl;
    cout<<"             *       ||      | return 0;                                                 |                                                                                          ||       *"<<endl;
    cout<<"             *       ||      | }                                                         |                                                                                          ||       *"<<endl;
    cout<<"             *       ||      |---------------------------------------------------------- |                                                                                          ||       *"<<endl;
    cout<<"             *       || Let us look at the various parts of the above program -                                                                                                     ||       *"<<endl;
    cout<<"             *       || The C++ language defines several headers, which contain information that is either necessary or useful to your program. For this program, the header        ||       *"<<endl;
    cout<<"             *       || <iostream> is needed.                                                                                                                                       ||       *"<<endl;
    cout<<"             *       || The line using namespace std; tells the compiler to use the std namespace. Namespaces are a relatively recent addition to C++ .                             ||       *"<<endl;
    cout<<"             *       || The next line '// main() is where program execution begins.' is a single-line comment available in C++.Single-line comments begin with // and stop at the   ||       *"<<endl;
    cout<<"             *       || end of the line.                                                                                                                                            ||       *"<<endl;
    cout<<"             *       || The line int main() is the main function where program execution begins.                                                                                    ||       *"<<endl;
    cout<<"             *       || The next line cout << Hello World  ; causes the message Hello World to be displayed on the screen.                                                          ||       *"<<endl;
    cout<<"             *       || The next line return 0; terminates main( )function and causes it to return the value 0 to the calling process.                                              ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||         **Compile and Execute C++ Program                                                                                                                   ||       *"<<endl;
    cout<<"             *       || Let's look at how to save the file, compile and run the program. Please follow the steps given below -                                                      ||       *"<<endl;
    cout<<"             *       || Open a text editor and add the code as above.                                                                                                               ||       *"<<endl;
    cout<<"             *       || Save the file as: hello.cpp                                                                                                                                 ||       *"<<endl;
    cout<<"             *       || Open a command prompt and go to the directory where you saved the file.                                                                                     ||       *"<<endl;
    cout<<"             *       || Type 'g++ hello.cpp' and press enter to compile your code. If there are no errors in your code the command prompt will take you to the next line and would  ||       *"<<endl;
    cout<<"             *       || generate a.out executable file.                                                                                                                             ||       *"<<endl;
    cout<<"             *       || Now, type 'a.out' to run your program.                                                                                                                      ||       *"<<endl;
    cout<<"             *       || You will be able to see ' Hello World ' printed on the window.                                                                                              ||       *"<<endl;
    cout<<"             *       ||      |------------------------|                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||      |$ g++ hello.cpp         |                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||      |$ ./a.out               |                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||      |Hello World             |                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||      |------------------------|                                                                                                                             ||       *"<<endl;
    cout<<"             *       || Make sure that g++ is in your path and that you are running it in the directory containing file hello.cpp.                                                  ||       *"<<endl;
    cout<<"             *       || You can compile C/C++ programs using makefile.                                                                                                              ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||         **Semicolons and Blocks in C++                                                                                                                      ||       *"<<endl;
    cout<<"             *       || In C++, the semicolon is a statement terminator. That is, each individual statement must be ended with a semicolon. It indicates the end of one logical     ||       *"<<endl;
    cout<<"             *       || entity.                                                                                                                                                     ||       *"<<endl;
    cout<<"             *       || For example, following are three different statements -                                                                                                     ||       *"<<endl;
    cout<<"             *       ||      |-----------------------|                                                                                                                              ||       *"<<endl;
    cout<<"             *       ||      | x = y;                |                                                                                                                              ||       *"<<endl;
    cout<<"             *       ||      | y = y + 1;            |                                                                                                                              ||       *"<<endl;
    cout<<"             *       ||      | add(x, y);            |                                                                                                                              ||       *"<<endl;
    cout<<"             *       ||      |-----------------------|                                                                                                                              ||       *"<<endl;
    cout<<"             *       || A block is a set of logically connected statements that are surrounded by opening and closing braces. For example -                                         ||       *"<<endl;
    cout<<"             *       ||      |--------------------------------------------------|                                                                                                   ||       *"<<endl;
    cout<<"             *       ||      | {                                                |                                                                                                   ||       *"<<endl;
    cout<<"             *       ||      | out << Hello World;                              |                                                                                                   ||       *"<<endl;
    cout<<"             *       ||      | return 0;                                        |                                                                                                   ||       *"<<endl;
    cout<<"             *       ||      | }                                                |                                                                                                   ||       *"<<endl;
    cout<<"             *       ||      |--------------------------------------------------|                                                                                                   ||       *"<<endl;
    cout<<"             *       || C++ does not recognize the end of the line as a terminator. For this reason, it does not matter where you put a statement in a line. For example -          ||       *"<<endl;
    cout<<"             *       ||      |-----------------------|                                                                                                                              ||       *"<<endl;
    cout<<"             *       ||      |x = y;                 |                                                                                                                              ||       *"<<endl;
    cout<<"             *       ||      |y = y + 1;             |                                                                                                                              ||       *"<<endl;
    cout<<"             *       ||      |add(x, y);             |                                                                                                                              ||       *"<<endl;
    cout<<"             *       ||      |-----------------------|                                                                                                                              ||       *"<<endl;
    cout<<"             *       || is the same as                                                                                                                                              ||       *"<<endl;
    cout<<"             *       || x = y; y = y + 1; add(x, y);                                                                                                                                ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||          **C++ Identifiers                                                                                                                                  ||       *"<<endl;
    cout<<"             *       || A C++ identifier is a name used to identify a variable, function, class, module, or any other user-defined item.An identifier starts with a letter A to Z   ||       *"<<endl;
    cout<<"             *       || or a to z or an underscore (_) followed by zero or more letters, underscores, and digits (0 to 9).                                                          ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       || C++ does not allow punctuation characters such as @, $, and % within identifiers. C++ is a case-sensitive programming language.                             ||       *"<<endl;
    cout<<"             *       || Thus, Manpower and manpower are two different identifiers in C++.                                                                                           ||       *"<<endl;
    cout<<"             *       || Here are some examples of acceptable identifiers -                                                                                                          ||       *"<<endl;
    cout<<"             *       || |-----------------------------------------------|                                                                                                           ||       *"<<endl;
    cout<<"             *       || |mohd       zara    abc   move_name  a_123      |                                                                                                           ||       *"<<endl;
    cout<<"             *       || |myname50   _temp   j     a23b9      retVal     |                                                                                                           ||       *"<<endl;
    cout<<"             *       || |-----------------------------------------------|                                                                                                           ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||            **C++ Keywords                                                                                                                                   ||       *"<<endl;
    cout<<"             *       || The following list shows the reserved words in C++. These reserved words may not be used as constant or variable or any other identifier names.             ||       *"<<endl;
    cout<<"             *       ||   |-------------|-------------|---------------------|----------------|                                                                                      ||       *"<<endl;
    cout<<"             *       ||   |     asm     |     else    |          new        |       this     |                                                                                      ||       *"<<endl;
    cout<<"             *       ||   |-------------|-------------|---------------------|----------------|                                                                                      ||       *"<<endl;
    cout<<"             *       ||   |    auto     |     enum    |       operator      |      throw     |                                                                                      ||       *"<<endl;
    cout<<"             *       ||   |-------------|-------------|---------------------|----------------|                                                                                      ||       *"<<endl;
    cout<<"             *       ||   |    bool     |   explicit  |        private      |       true     |                                                                                      ||       *"<<endl;
    cout<<"             *       ||   |-------------|-------------|---------------------|----------------|                                                                                      ||       *"<<endl;
    cout<<"             *       ||   |    break    |    export   |       protected     |       try      |                                                                                      ||       *"<<endl;
    cout<<"             *       ||   |-------------|-------------|---------------------|----------------|                                                                                      ||       *"<<endl;
    cout<<"             *       ||   |    case     |    extern   |         public      |     typedef    |                                                                                      ||       *"<<endl;
    cout<<"             *       ||   |-------------|-------------|---------------------|----------------|                                                                                      ||       *"<<endl;
    cout<<"             *       ||   |    catch    |     false   |       register      |      typeid    |                                                                                      ||       *"<<endl;
    cout<<"             *       ||   |-------------|-------------|---------------------|----------------|                                                                                      ||       *"<<endl;
    cout<<"             *       ||   |   char      |     float   |   reinterpret_cast  |    typename    |                                                                                      ||       *"<<endl;
    cout<<"             *       ||   |-------------|-------------|---------------------|----------------|                                                                                      ||       *"<<endl;
    cout<<"             *       ||   |   class     |      for    |       return        |      union     |                                                                                      ||       *"<<endl;
    cout<<"             *       ||   |-------------|-------------|---------------------|----------------|                                                                                      ||       *"<<endl;
    cout<<"             *       ||   |   const     |    friend   |        short        |    unsigned    |                                                                                      ||       *"<<endl;
    cout<<"             *       ||   |-------------|-------------|---------------------|----------------|                                                                                      ||       *"<<endl;
    cout<<"             *       ||   | const_cast  |     goto    |       signed        |      using     |                                                                                      ||       *"<<endl;
    cout<<"             *       ||   |-------------|-------------|---------------------|----------------|                                                                                      ||       *"<<endl;
    cout<<"             *       ||   |  continue   |      if     |       sizeof        |    virtual     |                                                                                      ||       *"<<endl;
    cout<<"             *       ||   |-------------|-------------|---------------------|----------------|                                                                                      ||       *"<<endl;
    cout<<"             *       ||   |  default    |    inline   |       static        |      void      |                                                                                      ||       *"<<endl;
    cout<<"             *       ||   |-------------|-------------|---------------------|----------------|                                                                                      ||       *"<<endl;
    cout<<"             *       ||   |   delete    |     int     |     static_cast     |    volatile    |                                                                                      ||       *"<<endl;
    cout<<"             *       ||   |-------------|-------------|---------------------|----------------|                                                                                      ||       *"<<endl;
    cout<<"             *       ||   |    do       |     long    |       struct        |    wchar_t     |                                                                                      ||       *"<<endl;
    cout<<"             *       ||   |-------------|-------------|---------------------|----------------|                                                                                      ||       *"<<endl;
    cout<<"             *       ||   |   double    |   mutable   |      switch         |      while     |                                                                                      ||       *"<<endl;
    cout<<"             *       ||   |-------------|-------------|---------------------|----------------|                                                                                      ||       *"<<endl;
    cout<<"             *       ||   | dynamic_cast|  namespace  |     template        |                |                                                                                      ||       *"<<endl;
    cout<<"             *       ||   |-------------|-------------|---------------------|----------------|                                                                                      ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||            **Whitespace in C++                                                                                                                              ||       *"<<endl;
    cout<<"             *       || A line containing only whitespace, possibly with a comment, is known as a blank line, and C++ compiler totally ignores it.                                  ||       *"<<endl;
    cout<<"             *       || Whitespace is the term used in C++ to describe blanks, tabs, newline characters and comments. Whitespace separates one part of a statement from another     ||       *"<<endl;
    cout<<"             *       || and enables the compiler to identify where one element in a statement, such as int, ends and the next element begins.                                       ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       =================================================================================================================================================================       *"<<endl;
    cout<<"             *       |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||       *"<<endl;
    cout<<"             *       =================================================================================================================================================================       *"<<endl;
    cout<<"             *                                                                                                                                                                               * "<<endl;
    cout<<"             *                                                                                                                                                                               *"<<endl;
    cout<<"             *                                                                                                                                                                               *"<<endl;
    cout<<"             * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *"<<endl;

    cout<<endl<<endl<<endl;
    system("pause");



        }
                                              ///********Syntax end******///







                                              ///********Comments Start******///

        else if (inp=="03" || inp=="3" || inp=="Comments")
        {
            system("cls");
            system("color 70");
    cout<<endl<<endl<<endl;
    cout<<"             * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *"<<endl;
    cout<<"             *                                                                                                                                                                               * "<<endl;
    cout<<"             *                                                                                                                                                                               *"<<endl;
    cout<<"             *                                                                                                                                                                               *"<<endl;
    cout<<"             *       -----------------------------------------------------------------------------------------------------------------------------------------------------------------       *"<<endl;
    cout<<"             *       ||||||||||||||||||||||||||||||||||||||||| <= => @https://www.teamasnn.com/cplusplus/cpp_basic_comments.htm. |||||||||||||||||||||||||||||||||||||||||||||||||||||||       *"<<endl;
    cout<<"             *       -----------------------------------------------------------------------------------------------------------------------------------------------------------------       *"<<endl;
    cout<<"             *       =================================================================================================================================================================       *"<<endl;
    cout<<"             *       ||           __________                        ||--------------------/\\                         /\\---------------------||                                      ||       *"<<endl;
    cout<<"             *       ||          [          ]                       ||-------------------/  \\                       /  \\--------------------||                                      ||       *"<<endl;
    cout<<"             *       ||          [ TeamASNN ]                       ||-------------------\\  /       TEAM ASNN       \\  /--------------------||                                      ||       *"<<endl;
    cout<<"             *       ||          [ LearnC++ ]                       ||--------------------\\/                         \\/---------------------||                                      ||       *"<<endl;
    cout<<"             *       ||          [__________]                       ||----------------------|||||||||||||||||||||||||-----------------------||                                      ||       *"<<endl;
    cout<<"             *       =================================================================================================================================================================       *"<<endl;
    cout<<"             *                                                                                                                                                                               *"<<endl;
    cout<<"             *                                                                                                                                                                               *"<<endl;
    cout<<"             *       =================================================================================================================================================================       *"<<endl;
    cout<<"             *       ||           ----------------------                              ***********************************                           ----------------------          ||       *"<<endl;
    cout<<"             *       ||           | << Previous page   |                              **           Comments            **                           |     Next page  >>  |          ||       *"<<endl;
    cout<<"             *       ||           ----------------------                              ***********************************                           ----------------------          ||       *"<<endl;
    cout<<"             *       =================================================================================================================================================================       *"<<endl;
    cout<<"             *       |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||       *"<<endl;
    cout<<"             *       =================================================================================================================================================================       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       || Program comments are explanatory statements that you can include in the C++ code. These comments help anyone reading the source code.All programming        ||       *"<<endl;
    cout<<"             *       || languages allow for some form of comments.                                                                                                                  ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       || C++ supports single-line and multi-line comments. All characters available inside any comment are ignored by C++ compiler.                                  ||       *"<<endl;
    cout<<"             *       || C++ comments start with /* and end with */. For example -                                                                                                   ||       *"<<endl;
    cout<<"             *       ||     |------------------------------|                                                                                                                        ||       *"<<endl;
    cout<<"             *       ||     | /* This is a comment */      |                                                                                                                        ||       *"<<endl;
    cout<<"             *       ||     | /* C++ comments can also     |                                                                                                                        ||       *"<<endl;
    cout<<"             *       ||     |  * span multiple lines       |                                                                                                                        ||       *"<<endl;
    cout<<"             *       ||     | */                           |                                                                                                                        ||       *"<<endl;
    cout<<"             *       ||     |------------------------------|                                                                                                                        ||       *"<<endl;
    cout<<"             *       || A comment can also start with //, extending to the end of the line. For example -                                                                           ||       *"<<endl;
    cout<<"             *       ||     |-------------------------------------------------|                                                                                                     ||       *"<<endl;
    cout<<"             *       ||     | #include <iostream>                             |                                                                                                     ||       *"<<endl;
    cout<<"             *       ||     | using namespace std;                            |                                                                                                     ||       *"<<endl;
    cout<<"             *       ||     | main() {                                        |                                                                                                     ||       *"<<endl;
    cout<<"             *       ||     | cout << Hello World; // prints Hello World      |                                                                                                     ||       *"<<endl;
    cout<<"             *       ||     | return 0;                                       |                                                                                                     ||       *"<<endl;
    cout<<"             *       ||     | }                                               |                                                                                                     ||       *"<<endl;
    cout<<"             *       ||     |-------------------------------------------------|                                                                                                     ||       *"<<endl;
    cout<<"             *       || When the above code is compiled, it will ignore // prints Hello World and final executable will produce the following result -                              ||       *"<<endl;
    cout<<"             *       ||     |--------------------------|                                                                                                                            ||       *"<<endl;
    cout<<"             *       ||     |  Hello World             |                                                                                                                            ||       *"<<endl;
    cout<<"             *       ||     |--------------------------|                                                                                                                            ||       *"<<endl;
    cout<<"             *       || Within a /* and */ comment, // characters have no special meaning. Within a // comment, /* and */ have no special meaning. Thus, you can nest one kind of   ||       *"<<endl;
    cout<<"             *       || comment within the other kind. For example -                                                                                                                ||       *"<<endl;
    cout<<"             *       ||     |--------------------------------------------------|                                                                                                    ||       *"<<endl;
    cout<<"             *       ||     | /* Comment out printing of Hello World:          |                                                                                                    ||       *"<<endl;
    cout<<"             *       ||     |                                                  |                                                                                                    ||       *"<<endl;
    cout<<"             *       ||     | cout << Hello World; // prints Hello World       |                                                                                                    ||       *"<<endl;
    cout<<"             *       ||     |                                                  |                                                                                                    ||       *"<<endl;
    cout<<"             *       ||     | */                                               |                                                                                                    ||       *"<<endl;
    cout<<"             *       ||     |--------------------------------------------------|                                                                                                    ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       =================================================================================================================================================================       *"<<endl;
    cout<<"             *       |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||       *"<<endl;
    cout<<"             *       =================================================================================================================================================================       *"<<endl;
    cout<<"             *                                                                                                                                                                               * "<<endl;
    cout<<"             *                                                                                                                                                                               *"<<endl;
    cout<<"             *                                                                                                                                                                               *"<<endl;
    cout<<"             * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *"<<endl;

    cout<<endl<<endl<<endl;
    system("pause");


       }
                                              ///********Comments end******///







                                              ///********Output Start******///

        else if (inp=="04" || inp=="4" || inp=="Output")
        {
            system("cls");
             system("color 70");

    cout<<endl<<endl<<endl;
    cout<<"             * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *"<<endl;
    cout<<"             *                                                                                                                                                                               * "<<endl;
    cout<<"             *                                                                                                                                                                               *"<<endl;
    cout<<"             *                                                                                                                                                                               *"<<endl;
    cout<<"             *       -----------------------------------------------------------------------------------------------------------------------------------------------------------------       *"<<endl;
    cout<<"             *       ||||||||||||||||||||||||||||||||||||||||| <= => @https://www.teamasnn.com/cplusplus/cpp_basic_output.htm. |||||||||||||||||||||||||||||||||||||||||||||||||||||||       *"<<endl;
    cout<<"             *       -----------------------------------------------------------------------------------------------------------------------------------------------------------------       *"<<endl;
    cout<<"             *       =================================================================================================================================================================       *"<<endl;
    cout<<"             *       ||           __________                        ||--------------------/\\                         /\\---------------------||                                      ||       *"<<endl;
    cout<<"             *       ||          [          ]                       ||-------------------/  \\                       /  \\--------------------||                                      ||       *"<<endl;
    cout<<"             *       ||          [ TeamASNN ]                       ||-------------------\\  /       TEAM ASNN       \\  /--------------------||                                      ||       *"<<endl;
    cout<<"             *       ||          [ LearnC++ ]                       ||--------------------\\/                         \\/---------------------||                                      ||       *"<<endl;
    cout<<"             *       ||          [__________]                       ||----------------------|||||||||||||||||||||||||-----------------------||                                      ||       *"<<endl;
    cout<<"             *       =================================================================================================================================================================       *"<<endl;
    cout<<"             *                                                                                                                                                                               *"<<endl;
    cout<<"             *                                                                                                                                                                               *"<<endl;
    cout<<"             *       =================================================================================================================================================================       *"<<endl;
    cout<<"             *       ||           ----------------------                              ***********************************                           ----------------------          ||       *"<<endl;
    cout<<"             *       ||           | << Previous page   |                              **            Output             **                           |     Next page  >>  |          ||       *"<<endl;
    cout<<"             *       ||           ----------------------                              ***********************************                           ----------------------          ||       *"<<endl;
    cout<<"             *       =================================================================================================================================================================       *"<<endl;
    cout<<"             *       |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||       *"<<endl;
    cout<<"             *       =================================================================================================================================================================       *"<<endl;
    cout<<"             *       ||          **Output (Print Text)                                                                                                                              ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       || The cout object, together with the << operator, is used to output values/print text:                                                                        ||       *"<<endl;
    cout<<"             *       ||    Example :                                                                                                                                                ||       *"<<endl;
    cout<<"             *       ||    |--------------------------------------|                                                                                                                 ||       *"<<endl;
    cout<<"             *       ||    | #include <iostream>                  |                                                                                                                 ||       *"<<endl;
    cout<<"             *       ||    | using namespace std;                 |                                                                                                                 ||       *"<<endl;
    cout<<"             *       ||    | int main() {                         |                                                                                                                 ||       *"<<endl;
    cout<<"             *       ||    | cout << Hello World!;                |                                                                                                                 ||       *"<<endl;
    cout<<"             *       ||    | return 0;                            |                                                                                                                 ||       *"<<endl;
    cout<<"             *       ||    | }                                    |                                                                                                                 ||       *"<<endl;
    cout<<"             *       ||    |--------------------------------------|                                                                                                                 ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       || You can add as many cout objects as you want. However, note that it does not insert a new line at the end of the output:                                    ||       *"<<endl;
    cout<<"             *       ||    Example :                                                                                                                                                ||       *"<<endl;
    cout<<"             *       ||    |--------------------------------------|                                                                                                                 ||       *"<<endl;
    cout<<"             *       ||    | #include <iostream>                  |                                                                                                                 ||       *"<<endl;
    cout<<"             *       ||    | using namespace std;                 |                                                                                                                 ||       *"<<endl;
    cout<<"             *       ||    | int main() {                         |                                                                                                                 ||       *"<<endl;
    cout<<"             *       ||    | cout << Hello World!;                |                                                                                                                 ||       *"<<endl;
    cout<<"             *       ||    | cout << I am learning C++;           |                                                                                                                 ||       *"<<endl;
    cout<<"             *       ||    | return 0;                            |                                                                                                                 ||       *"<<endl;
    cout<<"             *       ||    | }                                    |                                                                                                                 ||       *"<<endl;
    cout<<"             *       ||    |--------------------------------------|                                                                                                                 ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||            **New Lines                                                                                                                                      ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       || To insert a new line, you can use the slash n character:                                                                                                    ||       *"<<endl;
    cout<<"             *       ||    Example :                                                                                                                                                ||       *"<<endl;
    cout<<"             *       ||    |--------------------------------------|                                                                                                                 ||       *"<<endl;
    cout<<"             *       ||    | #include <iostream>                  |                                                                                                                 ||       *"<<endl;
    cout<<"             *       ||    | using namespace std;                 |                                                                                                                 ||       *"<<endl;
    cout<<"             *       ||    | int main() {                         |                                                                                                                 ||       *"<<endl;
    cout<<"             *       ||    | cout << Hello World!   ;             |                                                                                                                 ||       *"<<endl;
    cout<<"             *       ||    | cout << I am learning C++;           |                                                                                                                 ||       *"<<endl;
    cout<<"             *       ||    | return 0;                            |                                                                                                                 ||       *"<<endl;
    cout<<"             *       ||    | }                                    |                                                                                                                 ||       *"<<endl;
    cout<<"             *       ||    |--------------------------------------|                                                                                                                 ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       || Tip: Two slash n characters after each other will create a blank line:                                                                                      ||       *"<<endl;
    cout<<"             *       ||    Example :                                                                                                                                                ||       *"<<endl;
    cout<<"             *       ||    |--------------------------------------|                                                                                                                 ||       *"<<endl;
    cout<<"             *       ||    | #include <iostream>                  |                                                                                                                 ||       *"<<endl;
    cout<<"             *       ||    | using namespace std;                 |                                                                                                                 ||       *"<<endl;
    cout<<"             *       ||    | int main() {                         |                                                                                                                 ||       *"<<endl;
    cout<<"             *       ||    | cout << Hello World!     ;           |                                                                                                                 ||       *"<<endl;
    cout<<"             *       ||    | cout << I am learning C++;           |                                                                                                                 ||       *"<<endl;
    cout<<"             *       ||    | return 0;                            |                                                                                                                 ||       *"<<endl;
    cout<<"             *       ||    | }                                    |                                                                                                                 ||       *"<<endl;
    cout<<"             *       ||    |--------------------------------------|                                                                                                                 ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       || Another way to insert a new line, is with the endl manipulator:                                                                                             ||       *"<<endl;
    cout<<"             *       ||    Example :                                                                                                                                                ||       *"<<endl;
    cout<<"             *       ||    |--------------------------------------|                                                                                                                 ||       *"<<endl;
    cout<<"             *       ||    | #include <iostream>                  |                                                                                                                 ||       *"<<endl;
    cout<<"             *       ||    | using namespace std;                 |                                                                                                                 ||       *"<<endl;
    cout<<"             *       ||    | int main() {                         |                                                                                                                 ||       *"<<endl;
    cout<<"             *       ||    | cout << Hello World!<<endl;          |                                                                                                                 ||       *"<<endl;
    cout<<"             *       ||    | cout << I am learning C++;           |                                                                                                                 ||       *"<<endl;
    cout<<"             *       ||    | return 0;                            |                                                                                                                 ||       *"<<endl;
    cout<<"             *       ||    | }                                    |                                                                                                                 ||       *"<<endl;
    cout<<"             *       ||    |--------------------------------------|                                                                                                                 ||       *"<<endl;
    cout<<"             *       || Both slash n and endl are used to break lines. However, slash n is used more often and is the preferred way.                                                ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       =================================================================================================================================================================       *"<<endl;
    cout<<"             *       |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||       *"<<endl;
    cout<<"             *       =================================================================================================================================================================       *"<<endl;
    cout<<"             *                                                                                                                                                                               * "<<endl;
    cout<<"             *                                                                                                                                                                               *"<<endl;
    cout<<"             *                                                                                                                                                                               *"<<endl;
    cout<<"             * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *"<<endl;

    cout<<endl<<endl<<endl;
    system("pause");


        }
                                              ///********Output end******///







                                              ///********Variable Types Start******///

        else if (inp=="05" || inp=="5" || inp=="Variable Types")
        {
            system("cls");
            system("color 70");

    cout<<endl<<endl<<endl;
    cout<<"             * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *"<<endl;
    cout<<"             *                                                                                                                                                                               * "<<endl;
    cout<<"             *                                                                                                                                                                               *"<<endl;
    cout<<"             *                                                                                                                                                                               *"<<endl;
    cout<<"             *       -----------------------------------------------------------------------------------------------------------------------------------------------------------------       *"<<endl;
    cout<<"             *       ||||||||||||||||||||||||||||||||||||||||| <= => @https://www.teamasnn.com/cplusplus/cpp_basic_variable_type.htm. ||||||||||||||||||||||||||||||||||||||||||||||||       *"<<endl;
    cout<<"             *       -----------------------------------------------------------------------------------------------------------------------------------------------------------------       *"<<endl;
    cout<<"             *       =================================================================================================================================================================       *"<<endl;
    cout<<"             *       ||           __________                        ||--------------------/\\                         /\\---------------------||                                      ||       *"<<endl;
    cout<<"             *       ||          [          ]                       ||-------------------/  \\                       /  \\--------------------||                                      ||       *"<<endl;
    cout<<"             *       ||          [ TeamASNN ]                       ||-------------------\\  /       TEAM ASNN       \\  /--------------------||                                      ||       *"<<endl;
    cout<<"             *       ||          [ LearnC++ ]                       ||--------------------\\/                         \\/---------------------||                                      ||       *"<<endl;
    cout<<"             *       ||          [__________]                       ||----------------------|||||||||||||||||||||||||-----------------------||                                      ||       *"<<endl;
    cout<<"             *       =================================================================================================================================================================       *"<<endl;
    cout<<"             *                                                                                                                                                                               *"<<endl;
    cout<<"             *                                                                                                                                                                               *"<<endl;
    cout<<"             *       =================================================================================================================================================================       *"<<endl;
    cout<<"             *       ||           ----------------------                              ***********************************                           ----------------------          ||       *"<<endl;
    cout<<"             *       ||           | << Previous page   |                              **         Variable Type         **                           |     Next page  >>  |          ||       *"<<endl;
    cout<<"             *       ||           ----------------------                              ***********************************                           ----------------------          ||       *"<<endl;
    cout<<"             *       =================================================================================================================================================================       *"<<endl;
    cout<<"             *       |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||       *"<<endl;
    cout<<"             *       =================================================================================================================================================================       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||    A variable is nothing but a name given to a storage area that our programs can manipulate. Each variable in C has a specific type, which determines the  ||       *"<<endl;
    cout<<"             *       ||    size and layout of the variable's memory; the range of values that can be stored within that memory; and the set of operations that can be applied       ||       *"<<endl;
    cout<<"             *       ||    to the variable.                                                                                                                                         ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||    The name of a variable can be composed of letters, digits, and the underscore character. It must begin with either a letter or an underscore. Upper and  ||       *"<<endl;
    cout<<"             *       ||    lowercase letters are distinct because C is case-sensitive. Based on the basic types explained in the previous chapter, there will be the following      ||       *"<<endl;
    cout<<"             *       ||    basic variable types :                                                                                                                                   ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||            _______________________________________________________________________________________                                                          ||       *"<<endl;
    cout<<"             *       ||           |            |                                                                          |                                                         ||       *"<<endl;
    cout<<"             *       ||           |   Sr.No.   |    Type & Description                                                    |                                                         ||       *"<<endl;
    cout<<"             *       ||           |____________|__________________________________________________________________________|                                                         ||       *"<<endl;
    cout<<"             *       ||           |            |                                                                          |                                                         ||       *"<<endl;
    cout<<"             *       ||           |     1.     |    char                                                                  |                                                         ||       *"<<endl;
    cout<<"             *       ||           |            |    Typically a single octet(one byte). It is an integer type.            |                                                         ||       *"<<endl;
    cout<<"             *       ||           |____________|__________________________________________________________________________|                                                         ||       *"<<endl;
    cout<<"             *       ||           |            |                                                                          |                                                         ||       *"<<endl;
    cout<<"             *       ||           |     2.     |    int                                                                   |                                                         ||       *"<<endl;
    cout<<"             *       ||           |            |    The most natural size of integer for the machine.                     |                                                         ||       *"<<endl;
    cout<<"             *       ||           |____________|__________________________________________________________________________|                                                         ||       *"<<endl;
    cout<<"             *       ||           |            |                                                                          |                                                         ||       *"<<endl;
    cout<<"             *       ||           |     3.     |    float                                                                 |                                                         ||       *"<<endl;
    cout<<"             *       ||           |            |    A single-precision floating point value.                              |                                                         ||       *"<<endl;
    cout<<"             *       ||           |____________|__________________________________________________________________________|                                                         ||       *"<<endl;
    cout<<"             *       ||           |            |                                                                          |                                                         ||       *"<<endl;
    cout<<"             *       ||           |     4.     |    double                                                                |                                                         ||       *"<<endl;
    cout<<"             *       ||           |            |    A double-precision floating point value.                              |                                                         ||       *"<<endl;
    cout<<"             *       ||           |____________|__________________________________________________________________________|                                                         ||       *"<<endl;
    cout<<"             *       ||           |            |                                                                          |                                                         ||       *"<<endl;
    cout<<"             *       ||           |     5.     |    void                                                                  |                                                         ||       *"<<endl;
    cout<<"             *       ||           |            |    Represents the absence of type.                                       |                                                         ||       *"<<endl;
    cout<<"             *       ||           |____________|__________________________________________________________________________|                                                         ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||    C programming language also allows to define various other types of variables, which we will cover in subsequent chapters like Enumeration, Pointer,     ||       *"<<endl;
    cout<<"             *       ||    Array, Structure,Union, etc. For this chapter, let us study only basic variable types.                                                                   ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||    Variable Definition in C                                                                                                                                 ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||    A variable definition tells the compiler where and how much storage to create for the variable. A variable definition specifies a data type  and         ||       *"<<endl;
    cout<<"             *       ||    contains a list of one or more variables of that type as follows :                                                                                       ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||           __________________________________                                                                                                                ||       *"<<endl;
    cout<<"             *       ||          |                                  |                                                                                                               ||       *"<<endl;
    cout<<"             *       ||          |     type variable_list;          |                                                                                                               ||       *"<<endl;
    cout<<"             *       ||          |__________________________________|                                                                                                               ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||    Here, type must be a valid C data type including char, w_char, int, float, double, bool, or any user-defined object; and variable_list may consist       ||       *"<<endl;
    cout<<"             *       ||    of one or more identifier names separated by commas. Some valid declarations are shown here :                                                            ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||           ___________________________________________                                                                                                       ||       *"<<endl;
    cout<<"             *       ||          |                                           |                                                                                                      ||       *"<<endl;
    cout<<"             *       ||          |     int    i, j, k;                       |                                                                                                      ||       *"<<endl;
    cout<<"             *       ||          |___________________________________________|                                                                                                      ||       *"<<endl;
    cout<<"             *       ||          |                                           |                                                                                                      ||       *"<<endl;
    cout<<"             *       ||          |     char   c, ch;                         |                                                                                                      ||       *"<<endl;
    cout<<"             *       ||          |___________________________________________|                                                                                                      ||       *"<<endl;
    cout<<"             *       ||          |                                           |                                                                                                      ||       *"<<endl;
    cout<<"             *       ||          |     float  f, salary;                     |                                                                                                      ||       *"<<endl;
    cout<<"             *       ||          |___________________________________________|                                                                                                      ||       *"<<endl;
    cout<<"             *       ||          |                                           |                                                                                                      ||       *"<<endl;
    cout<<"             *       ||          |     double d;                             |                                                                                                      ||       *"<<endl;
    cout<<"             *       ||          |___________________________________________|                                                                                                      ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||    The line int i, j, k; declares and defines the variables i, j, and k; which instruct the compiler to create variables named i, j and k of type int.      ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||    Variables can be initialized (assigned an initial value) in their declaration. The initializer consists of an equal sign followed by a constant          ||       *"<<endl;
    cout<<"             *       ||    expression as follows :                                                                                                                                  ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||           _____________________________________                                                                                                             ||       *"<<endl;
    cout<<"             *       ||          |                                     |                                                                                                            ||       *"<<endl;
    cout<<"             *       ||          |     type variable_name = value;     |                                                                                                            ||       *"<<endl;
    cout<<"             *       ||          |_____________________________________|                                                                                                            ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||    Variable Declaration in C :                                                                                                                              ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||    A variable declaration provides assurance to the compiler that there exists a variable with the given type and name so that the compiler can proceed for ||       *"<<endl;
    cout<<"             *       ||    further compilation without requiring the complete detail about the variable. A variable definition has its meaning at the time of compilation only, the ||       *"<<endl;
    cout<<"             *       ||    compiler needs actual variable definition at the time of linking the program.                                                                            ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||    A variable declaration is useful when you are using multiple files and you define your variable in one of the files which will be available at the time  ||       *"<<endl;
    cout<<"             *       ||    of linking of the program. You will use the keyword extern to declare a variable at any place. Though you can declare a variable multiple times in your  ||       *"<<endl;
    cout<<"             *       ||    C program, it can be defined only once in a file, a function, or a block of code.                                                                        ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||    Example                                                                                                                                                  ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||    Try the following example, where variables have been declared at the top, but they have been defined and initialized inside the main function :          ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||         _________________________________________________________                                                                                           ||       *"<<endl;
    cout<<"             *       ||        |                                                         |                                                                                          ||       *"<<endl;
    cout<<"             *       ||        |     #include <stdio.h>                                  |                                                                                          ||       *"<<endl;
    cout<<"             *       ||        |     // Variable declaration:                            |                                                                                          ||       *"<<endl;
    cout<<"             *       ||        |     extern int a, b;                                    |                                                                                          ||       *"<<endl;
    cout<<"             *       ||        |     extern int c;                                       |                                                                                          ||       *"<<endl;
    cout<<"             *       ||        |     extern float f;                                     |                                                                                          ||       *"<<endl;
    cout<<"             *       ||        |                                                         |                                                                                          ||       *"<<endl;
    cout<<"             *       ||        |      int main () {                                      |                                                                                          ||       *"<<endl;
    cout<<"             *       ||        |           /* variable definition: */                    |                                                                                          ||       *"<<endl;
    cout<<"             *       ||        |               int a, b;                                 |                                                                                          ||       *"<<endl;
    cout<<"             *       ||        |               int c;                                    |                                                                                          ||       *"<<endl;
    cout<<"             *       ||        |               float f;                                  |                                                                                          ||       *"<<endl;
    cout<<"             *       ||        |           /* actual initialization */                   |                                                                                          ||       *"<<endl;
    cout<<"             *       ||        |               a = 10;                                   |                                                                                          ||       *"<<endl;
    cout<<"             *       ||        |               b = 20;                                   |                                                                                          ||       *"<<endl;
    cout<<"             *       ||        |               c = a + b;                                |                                                                                          ||       *"<<endl;
    cout<<"             *       ||        |                cout<<''The value of c :''<<c<<endl;     |                                                                                          ||       *"<<endl;
    cout<<"             *       ||        |               f = 70.0/3.0;                             |                                                                                          ||       *"<<endl;
    cout<<"             *       ||        |                cout<<''The value of f :''<<f<<endl;     |                                                                                          ||       *"<<endl;
    cout<<"             *       ||        |               return 0;                                 |                                                                                          ||       *"<<endl;
    cout<<"             *       ||        |               }                                         |                                                                                          ||       *"<<endl;
    cout<<"             *       ||        |_________________________________________________________|                                                                                          ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||     When the above code is compiled and executed, it produces the following result :                                                                        ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||        ___________________________________________                                                                                                          ||       *"<<endl;
    cout<<"             *       ||       |                                           |                                                                                                         ||       *"<<endl;
    cout<<"             *       ||       |     value of c : 30                       |                                                                                                         ||       *"<<endl;
    cout<<"             *       ||       |     value of f : 23.333334                |                                                                                                         ||       *"<<endl;
    cout<<"             *       ||       |___________________________________________|                                                                                                         ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       =================================================================================================================================================================       *"<<endl;
    cout<<"             *       |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||       *"<<endl;
    cout<<"             *       =================================================================================================================================================================       *"<<endl;
    cout<<"             *                                                                                                                                                                               * "<<endl;
    cout<<"             *                                                                                                                                                                               *"<<endl;
    cout<<"             *                                                                                                                                                                               *"<<endl;
    cout<<"             * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *"<<endl;

    cout<<endl<<endl<<endl;
    system("pause");



        }
                                              ///********Variable Types end******///







                                              ///********Variable Scope Start******///

        else if (inp=="06" || inp=="6" || inp=="Variable Scope")
        {
            system("cls");
            system("color 70");
    cout<<endl<<endl<<endl;
    cout<<"             * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *"<<endl;
    cout<<"             *                                                                                                                                                                               * "<<endl;
    cout<<"             *                                                                                                                                                                               *"<<endl;
    cout<<"             *                                                                                                                                                                               *"<<endl;
    cout<<"             *       -----------------------------------------------------------------------------------------------------------------------------------------------------------------       *"<<endl;
    cout<<"             *       ||||||||||||||||||||||||||||||||||||||||| <- -> @https://www.teamasnn.com/cplusplus/cpp_Variable_Scope.htm. |||||||||||||||||||||||||||||||||||||||||||||||||||||       *"<<endl;
    cout<<"             *       -----------------------------------------------------------------------------------------------------------------------------------------------------------------       *"<<endl;
    cout<<"             *       =================================================================================================================================================================       *"<<endl;
    cout<<"             *       ||           __________                        ||--------------------/\\                         /\\---------------------||                                      ||       *"<<endl;
    cout<<"             *       ||          [          ]                       ||-------------------/  \\                       /  \\--------------------||                                      ||       *"<<endl;
    cout<<"             *       ||          [ TeamASNN ]                       ||-------------------\\  /       TEAM ASNN       \\  /--------------------||                                      ||       *"<<endl;
    cout<<"             *       ||          [ LearnC++ ]                       ||--------------------\\/                         \\/---------------------||                                      ||       *"<<endl;
    cout<<"             *       ||          [__________]                       ||----------------------|||||||||||||||||||||||||-----------------------||                                      ||       *"<<endl;
    cout<<"             *       =================================================================================================================================================================       *"<<endl;
    cout<<"             *                                                                                                                                                                               *"<<endl;
    cout<<"             *                                                                                                                                                                               *"<<endl;
    cout<<"             *       =================================================================================================================================================================       *"<<endl;
    cout<<"             *       ||           ----------------------                              ***********************************                           ----------------------          ||       *"<<endl;
    cout<<"             *       ||           | << Previous page   |                              **         Variable Scope        **                           |     Next page  >>  |          ||       *"<<endl;
    cout<<"             *       ||           ----------------------                              ***********************************                           ----------------------          ||       *"<<endl;
    cout<<"             *       =================================================================================================================================================================       *"<<endl;
    cout<<"             *       |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||       *"<<endl;
    cout<<"             *       =================================================================================================================================================================       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||  A scope is a region of the program and broadly speaking there are three places, where variables                                                            ||       *"<<endl;
    cout<<"             *       ||  can be declared -                                                                                                                                          ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||          -> Inside a function or a block which is called local variables,                                                                                   ||       *"<<endl;
    cout<<"             *       ||          -> In the definition of function parameters which is called formal parameters.                                                                     ||       *"<<endl;
    cout<<"             *       ||          -> Outside of all functions which is called global variables.                                                                                      ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||  We will learn what is a function and it's parameter in subsequent chapters. Here let us explain                                                            ||       *"<<endl;
    cout<<"             *       ||  what are local and global variables.                                                                                                                       ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||                                          1) Local Variables                                                                                                 ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||  Variables that are declared inside a function or block are local variables. They can be used only                                                          ||       *"<<endl;
    cout<<"             *       ||  by statements that are inside that function or block of code. Local variables are not known to                                                             ||       *"<<endl;
    cout<<"             *       ||  functions outside their own. Following is the example using local variables -                                                                              ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||  #include <iostream>                                                                                                                                        ||       *"<<endl;
    cout<<"             *       ||  using namespace std;                                                                                                                                       ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||   _____________________________                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||  | int main () {               |                                                                                                                            ||       *"<<endl;
    cout<<"             *       ||  |  int a, b;                  |                                                                                                                            ||       *"<<endl;
    cout<<"             *       ||  |  int c;                     |                                                                                                                            ||       *"<<endl;
    cout<<"             *       ||  |                             |                                                                                                                            ||       *"<<endl;
    cout<<"             *       ||  |  a = 10;                    |                                                                                                                            ||       *"<<endl;
    cout<<"             *       ||  |  b = 20;                    |                                                                                                                            ||       *"<<endl;
    cout<<"             *       ||  |  c = a + b;                 |                                                                                                                            ||       *"<<endl;
    cout<<"             *       ||  |                             |                                                                                                                            ||       *"<<endl;
    cout<<"             *       ||  |  cout << c;                 |                                                                                                                            ||       *"<<endl;
    cout<<"             *       ||  |                             |                                                                                                                            ||       *"<<endl;
    cout<<"             *       ||  |  return 0;                  |                                                                                                                            ||       *"<<endl;
    cout<<"             *       ||  | }                           |                                                                                                                            ||       *"<<endl;
    cout<<"             *       ||  |_____________________________|                                                                                                                            ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||                                            2) Global Variables                                                                                              ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||  Global variables are defined outside of all the functions, usually on top of the program.                                                                  ||       *"<<endl;
    cout<<"             *       ||  The global variables will hold their value throughout the life-time of your program.                                                                       ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||  A global variable can be accessed by any function. That is, a global variable is available for use                                                         ||       *"<<endl;
    cout<<"             *       ||  throughout your entire program after its declaration. Following is the example using global and                                                            ||       *"<<endl;
    cout<<"             *       ||  local variables -                                                                                                                                          ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||  #include <iostream>                                                                                                                                        ||       *"<<endl;
    cout<<"             *       ||  using namespace std;                                                                                                                                       ||       *"<<endl;
    cout<<"             *       ||   _____________________                                                                                                                                     ||       *"<<endl;
    cout<<"             *       ||  | int g;              |                                                                                                                                    ||       *"<<endl;
    cout<<"             *       ||  | int main ()         |                                                                                                                                    ||       *"<<endl;
    cout<<"             *       ||  | {                   |                                                                                                                                    ||       *"<<endl;
    cout<<"             *       ||  |     int a, b;       |                                                                                                                                    ||       *"<<endl;
    cout<<"             *       ||  |                     |                                                                                                                                    ||       *"<<endl;
    cout<<"             *       ||  |     a = 10;         |                                                                                                                                    ||       *"<<endl;
    cout<<"             *       ||  |     b = 20;         |                                                                                                                                    ||       *"<<endl;
    cout<<"             *       ||  |     g = a + b;      |                                                                                                                                    ||       *"<<endl;
    cout<<"             *       ||  |                     |                                                                                                                                    ||       *"<<endl;
    cout<<"             *       ||  |     cout << g;      |                                                                                                                                    ||       *"<<endl;
    cout<<"             *       ||  |                     |                                                                                                                                    ||       *"<<endl;
    cout<<"             *       ||  |     return 0;       |                                                                                                                                    ||       *"<<endl;
    cout<<"             *       ||  | }                   |                                                                                                                                    ||       *"<<endl;
    cout<<"             *       ||  |_____________________|                                                                                                                                    ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||  A program can have same name for local and global variables but value of local variable inside                                                             ||       *"<<endl;
    cout<<"             *       ||  a function will take preference. For example -                                                                                                             ||       *"<<endl;
    cout<<"             *       ||   ______________________                                                                                                                                    ||       *"<<endl;
    cout<<"             *       ||  | #include <iostream>  |                                                                                                                                   ||       *"<<endl;
    cout<<"             *       ||  | using namespace std; |                                                                                                                                   ||       *"<<endl;
    cout<<"             *       ||  |                      |                                                                                                                                   ||       *"<<endl;
    cout<<"             *       ||  | int g = 20;          |                                                                                                                                   ||       *"<<endl;
    cout<<"             *       ||  |                      |                                                                                                                                   ||       *"<<endl;
    cout<<"             *       ||  | int main () {        |                                                                                                                                   ||       *"<<endl;
    cout<<"             *       ||  |   int g = 10;        |                                                                                                                                   ||       *"<<endl;
    cout<<"             *       ||  |   cout << g;         |                                                                                                                                   ||       *"<<endl;
    cout<<"             *       ||  |                      |                                                                                                                                   ||       *"<<endl;
    cout<<"             *       ||  |  return 0;           |                                                                                                                                   ||       *"<<endl;
    cout<<"             *       ||  | }                    |                                                                                                                                   ||       *"<<endl;
    cout<<"             *       ||  |______________________|                                                                                                                                   ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||  When the above code is compiled and executed, it produces the following result -                                                                           ||       *"<<endl;
    cout<<"             *       ||   _______________                                                                                                                                           ||       *"<<endl;
    cout<<"             *       ||  |               |                                                                                                                                          ||       *"<<endl;
    cout<<"             *       ||  |     10        |                                                                                                                                          ||       *"<<endl;
    cout<<"             *       ||  |_______________|                                                                                                                                          ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       =================================================================================================================================================================       *"<<endl;
    cout<<"             *       |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||       *"<<endl;
    cout<<"             *       =================================================================================================================================================================       *"<<endl;
    cout<<"             *                                                                                                                                                                               * "<<endl;
    cout<<"             *                                                                                                                                                                               *"<<endl;
    cout<<"             *                                                                                                                                                                               *"<<endl;
    cout<<"             * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *"<<endl;

    cout<<endl<<endl<<endl;
    system("pause");



        }
                                              ///********Variable Scope end******///







                                              ///********User Input Start******///

        else if (inp=="07" || inp=="7" || inp=="User Input")
        {
            system("cls");
            system("color 70");

    cout<<endl<<endl<<endl;
    cout<<"             * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *"<<endl;
    cout<<"             *                                                                                                                                                                               * "<<endl;
    cout<<"             *                                                                                                                                                                               *"<<endl;
    cout<<"             *                                                                                                                                                                               *"<<endl;
    cout<<"             *       -----------------------------------------------------------------------------------------------------------------------------------------------------------------       *"<<endl;
    cout<<"             *       ||||||||||||||||||||||||||||||||||||||||| <= => @https://www.teamasnn.com/cplusplus/cpp_basic_user_input.htm. |||||||||||||||||||||||||||||||||||||||||||||||||||       *"<<endl;
    cout<<"             *       -----------------------------------------------------------------------------------------------------------------------------------------------------------------       *"<<endl;
    cout<<"             *       =================================================================================================================================================================       *"<<endl;
    cout<<"             *       ||           __________                        ||--------------------/\\                         /\\---------------------||                                      ||       *"<<endl;
    cout<<"             *       ||          [          ]                       ||-------------------/  \\                       /  \\--------------------||                                      ||       *"<<endl;
    cout<<"             *       ||          [ TeamASNN ]                       ||-------------------\\  /       TEAM ASNN       \\  /--------------------||                                      ||       *"<<endl;
    cout<<"             *       ||          [ LearnC++ ]                       ||--------------------\\/                         \\/---------------------||                                      ||       *"<<endl;
    cout<<"             *       ||          [__________]                       ||----------------------|||||||||||||||||||||||||-----------------------||                                      ||       *"<<endl;
    cout<<"             *       =================================================================================================================================================================       *"<<endl;
    cout<<"             *                                                                                                                                                                               *"<<endl;
    cout<<"             *                                                                                                                                                                               *"<<endl;
    cout<<"             *       =================================================================================================================================================================       *"<<endl;
    cout<<"             *       ||           ----------------------                              ***********************************                           ----------------------          ||       *"<<endl;
    cout<<"             *       ||           | << Previous page   |                              **         User Input            **                           |     Next page  >>  |          ||       *"<<endl;
    cout<<"             *       ||           ----------------------                              ***********************************                           ----------------------          ||       *"<<endl;
    cout<<"             *       =================================================================================================================================================================       *"<<endl;
    cout<<"             *       |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||       *"<<endl;
    cout<<"             *       =================================================================================================================================================================       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||    In most program environments, the standard input by default is the keyboard, and the C++ stream object defined to access it is cin.                      ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||    For formatted input operations, cin is used together with the extraction operator, which is written as >> (i.e., two ''greater than'' signs).            ||       *"<<endl;
    cout<<"             *       ||    This operator is then followed by the variable where the extracted data is stored. For example:                                                          ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||          ___________________                                                                                                                                ||       *"<<endl;
    cout<<"             *       ||         |                   |                                                                                                                               ||       *"<<endl;
    cout<<"             *       ||         |    int age;       |                                                                                                                               ||       *"<<endl;
    cout<<"             *       ||         |    cin >> age;    |                                                                                                                               ||       *"<<endl;
    cout<<"             *       ||         |___________________|                                                                                                                               ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||    The first statement declares a variable of type int called age, and the second extracts from cin a value to be stored in it. This operation makes the    ||       *"<<endl;
    cout<<"             *       ||    program wait for input from cin; generally, this means that the program will wait for the user to enter some sequence with the keyboard. In this case,   ||       *"<<endl;
    cout<<"             *       ||    note that the characters introduced using the keyboard are only transmitted to the program when the ENTER (or RETURN) key is pressed. Once the statement ||       *"<<endl;
    cout<<"             *       ||    with the extraction operation on cin is reached, the program will wait for as long as needed until some input is introduced.                             ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||    The extraction operation on cin uses the type of the variable after the >> operator to determine how it interprets the characters read from the input;   ||       *"<<endl;
    cout<<"             *       ||    if it is an integer, the format expected is a series of digits, if a string a sequence of characters, etc.                                               ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||          _____________________________________________________________                                                                                      ||       *"<<endl;
    cout<<"             *       ||         |                                                             |                                                                                     ||       *"<<endl;
    cout<<"             *       ||         |    // i/o example                                           |                                                                                     ||       *"<<endl;
    cout<<"             *       ||         |    #include <iostream>                                      |                                                                                     ||       *"<<endl;
    cout<<"             *       ||         |    using namespace std;                                     |                                                                                     ||       *"<<endl;
    cout<<"             *       ||         |                                                             |                                                                                     ||       *"<<endl;
    cout<<"             *       ||         |    int main ()                                              |                                                                                     ||       *"<<endl;
    cout<<"             *       ||         |    {                                                        |                                                                                     ||       *"<<endl;
    cout<<"             *       ||         |    int i;                                                   |                                                                                     ||       *"<<endl;
    cout<<"             *       ||         |    cout << ''Please enter an integer value: '';             |                                                                                     ||       *"<<endl;
    cout<<"             *       ||         |    cin >> i;                                                |                                                                                     ||       *"<<endl;
    cout<<"             *       ||         |    cout << ''The value you entered is '' << i;              |                                                                                     ||       *"<<endl;
    cout<<"             *       ||         |    cout << '' and its double is '' << i*2 <<endl;           |                                                                                     ||       *"<<endl;
    cout<<"             *       ||         |    return 0;                                                |                                                                                     ||       *"<<endl;
    cout<<"             *       ||         |    }                                                        |                                                                                     ||       *"<<endl;
    cout<<"             *       ||         |_____________________________________________________________|                                                                                     ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||    When the above code is compiled and executed, it produces the following result :                                                                         ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||          ______________________________________________________________                                                                                     ||       *"<<endl;
    cout<<"             *       ||         |                                                              |                                                                                    ||       *"<<endl;
    cout<<"             *       ||         |    Please enter an integer value: 702                        |                                                                                    ||       *"<<endl;
    cout<<"             *       ||         |    The value you entered is 702 and its double is 1404.      |                                                                                    ||       *"<<endl;
    cout<<"             *       ||         |______________________________________________________________|                                                                                    ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||     As you can see, extracting from cin seems to make the task of getting input from the standard input pretty simple and straightforward. But this         ||       *"<<endl;
    cout<<"             *       ||     method also has a big drawback.What happens in the example above if the user enters something else that cannot be interpreted as an integer?            ||       *"<<endl;
    cout<<"             *       ||     Well, in this case, the extraction operation fails. And this, by default, lets the program continue without setting a value for variable i,             ||       *"<<endl;
    cout<<"             *       ||     producing undetermined results if the value of i is used later.                                                                                         ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||     This is very poor program behavior. Most programs are expected to behave in an expected manner no matter what the user types, handling invalid values   ||       *"<<endl;
    cout<<"             *       ||     appropriately. Only very simple programs should rely on values extracted directly from cin without further checking. A little later we will see how     ||       *"<<endl;
    cout<<"             *       ||     stringstreams can be used to have better control over user input.                                                                                       ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||     Extractions on cin can also be chained to request more than one datum in a single statement:                                                            ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||          _____________________________                                                                                                                      ||       *"<<endl;
    cout<<"             *       ||         |                             |                                                                                                                     ||       *"<<endl;
    cout<<"             *       ||         |    cin >> a >> b;           |                                                                                                                     ||       *"<<endl;
    cout<<"             *       ||         |_____________________________|                                                                                                                     ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||    This is equivalent to:                                                                                                                                   ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||          ________________________                                                                                                                           ||       *"<<endl;
    cout<<"             *       ||         |                        |                                                                                                                          ||       *"<<endl;
    cout<<"             *       ||         |    cin >> a;           |                                                                                                                          ||       *"<<endl;
    cout<<"             *       ||         |    cin >> b;           |                                                                                                                          ||       *"<<endl;
    cout<<"             *       ||         |________________________|                                                                                                                          ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||    In both cases, the user is expected to introduce two values, one for variable a, and another for variable b. Any kind of space is used                   ||       *"<<endl;
    cout<<"             *       ||    to separate two consecutive input operations; this may either be a space, a tab, or a new-line character.                                                ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       =================================================================================================================================================================       *"<<endl;
    cout<<"             *       |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||       *"<<endl;
    cout<<"             *       =================================================================================================================================================================       *"<<endl;
    cout<<"             *                                                                                                                                                                               * "<<endl;
    cout<<"             *                                                                                                                                                                               *"<<endl;
    cout<<"             *                                                                                                                                                                               *"<<endl;
    cout<<"             * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *"<<endl;

    cout<<endl<<endl<<endl;
    system("pause");



        }
                                              ///********User Input end******///







                                              ///********Data Types Start******///

        else if (inp=="08" || inp=="8" || inp=="Data Types")
        {
            system("cls");
            system("color 70");

    cout<<endl<<endl<<endl;
    cout<<"             * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *"<<endl;
    cout<<"             *                                                                                                                                                                               * "<<endl;
    cout<<"             *                                                                                                                                                                               *"<<endl;
    cout<<"             *                                                                                                                                                                               *"<<endl;
    cout<<"             *       -----------------------------------------------------------------------------------------------------------------------------------------------------------------       *"<<endl;
    cout<<"             *       ||||||||||||||||||||||||||||||||||||||||| <- -> @https://www.teamasnn.com/cplusplus/cpp_data_types.htm. |||||||||||||||||||||||||||||||||||||||||||||||||||||||||       *"<<endl;
    cout<<"             *       -----------------------------------------------------------------------------------------------------------------------------------------------------------------       *"<<endl;
    cout<<"             *       =================================================================================================================================================================       *"<<endl;
    cout<<"             *       ||           __________                        ||--------------------/\\                         /\\---------------------||                                      ||       *"<<endl;
    cout<<"             *       ||          [          ]                       ||-------------------/  \\                       /  \\--------------------||                                      ||       *"<<endl;
    cout<<"             *       ||          [ TeamASNN ]                       ||-------------------\\  /       TEAM ASNN       \\  /--------------------||                                      ||       *"<<endl;
    cout<<"             *       ||          [ LearnC++ ]                       ||--------------------\\/                         \\/---------------------||                                      ||       *"<<endl;
    cout<<"             *       ||          [__________]                       ||----------------------|||||||||||||||||||||||||-----------------------||                                      ||       *"<<endl;
    cout<<"             *       =================================================================================================================================================================       *"<<endl;
    cout<<"             *                                                                                                                                                                               *"<<endl;
    cout<<"             *                                                                                                                                                                               *"<<endl;
    cout<<"             *       =================================================================================================================================================================       *"<<endl;
    cout<<"             *       ||           ----------------------                              ***********************************                           ----------------------          ||       *"<<endl;
    cout<<"             *       ||           | << Previous page   |                              **            Data Types         **                           |     Next page  >>  |          ||       *"<<endl;
    cout<<"             *       ||           ----------------------                              ***********************************                           ----------------------          ||       *"<<endl;
    cout<<"             *       =================================================================================================================================================================       *"<<endl;
    cout<<"             *       |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||       *"<<endl;
    cout<<"             *       =================================================================================================================================================================       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||  While writing program in any language, you need to use various variables to store various information.                                                     ||       *"<<endl;
    cout<<"             *       ||  Variables are nothing but reserved memory locations to store values. This means that when you create a                                                     ||       *"<<endl;
    cout<<"             *       ||  variable you reserve some space in memory.                                                                                                                 ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||  You may like to store information of various data types like character, wide character, integer, floating point, double floating point, boolean etc        ||       *"<<endl;
    cout<<"             *       ||  Based on the data type of a variable, the operating system allocates memory and decides what can be stored in the reserved memory.                         ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||                                                               ******Primitive Built-in Types******                                                          ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||  C++ offers the programmer a rich assortment of built-in as well as user defined data types. Following table lists down seven basic C++ data types -        ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||  ___________________________________________________________________________________________                                                                ||       *"<<endl;
    cout<<"             *       ||  |                                            |                                            |                                                                ||       *"<<endl;
    cout<<"             *       ||  |                    Type                    |                     Keyword                |                                                                ||       *"<<endl;
    cout<<"             *       ||  |____________________________________________|____________________________________________|                                                                ||       *"<<endl;
    cout<<"             *       ||  |                   Boolean                  |                      bool                  |                                                                ||       *"<<endl;
    cout<<"             *       ||  |--------------------------------------------|--------------------------------------------|                                                                ||       *"<<endl;
    cout<<"             *       ||  |                  Character                 |                      char                  |                                                                ||       *"<<endl;
    cout<<"             *       ||  |--------------------------------------------|--------------------------------------------|                                                                ||       *"<<endl;
    cout<<"             *       ||  |                   Integer                  |                      int                   |                                                                ||       *"<<endl;
    cout<<"             *       ||  |--------------------------------------------|--------------------------------------------|                                                                ||       *"<<endl;
    cout<<"             *       ||  |                Floating point              |                      float                 |                                                                ||       *"<<endl;
    cout<<"             *       ||  |--------------------------------------------|--------------------------------------------|                                                                ||       *"<<endl;
    cout<<"             *       ||  |               Double floating point        |                      double                |                                                                ||       *"<<endl;
    cout<<"             *       ||  |--------------------------------------------|--------------------------------------------|                                                                ||       *"<<endl;
    cout<<"             *       ||  |                  Valueless                 |                       void                 |                                                                ||       *"<<endl;
    cout<<"             *       ||  |--------------------------------------------|--------------------------------------------|                                                                ||       *"<<endl;
    cout<<"             *       ||  |                Wide character              |                      wchar_t               |                                                                ||       *"<<endl;
    cout<<"             *       ||  |____________________________________________|____________________________________________|                                                                ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||  Several of the basic types can be modified using one or more of these type modifiers                                                                       ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||            => signed                                                                                                                                        ||       *"<<endl;
    cout<<"             *       ||            => unsigned                                                                                                                                      ||       *"<<endl;
    cout<<"             *       ||            => short                                                                                                                                         ||       *"<<endl;
    cout<<"             *       ||            => long                                                                                                                                          ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||  The size of variables might be different from those shown in the above table, depending on the compiler and                                                ||       *"<<endl;
    cout<<"             *       ||  the computer you are using.                                                                                                                                ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||  Following is the example, which will produce correct size of various data types on your computer.                                                          ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||  __________________________________________________________________________                                                                                 ||       *"<<endl;
    cout<<"             *       ||  |                                                                         |                                                                                ||       *"<<endl;
    cout<<"             *       ||  |  #include <iostream>                                                    |                                                                                ||       *"<<endl;
    cout<<"             *       ||  |  #include <iostream>                                                    |                                                                                ||       *"<<endl;
    cout<<"             *       ||  |                                                                         |                                                                                ||       *"<<endl;
    cout<<"             *       ||  |  int main() {                                                           |                                                                                ||       *"<<endl;
    cout<<"             *       ||  |        cout << Size of char       :  << sizeof(char) << endl;           |                                                                                ||       *"<<endl;
    cout<<"             *       ||  |        cout << Size of int        :  << sizeof(int) << endl;            |                                                                                ||       *"<<endl;
    cout<<"             *       ||  |        cout << Size of short int  :  << sizeof(short int) << endl;      |                                                                                ||       *"<<endl;
    cout<<"             *       ||  |        cout << Size of long int   :  << sizeof(long int) << endl;       |                                                                                ||       *"<<endl;
    cout<<"             *       ||  |        cout << size of float      :  << sizeof(float) << endl;          |                                                                                ||       *"<<endl;
    cout<<"             *       ||  |        cout << Size of double     :  << sizeof(double) << endl;         |                                                                                ||       *"<<endl;
    cout<<"             *       ||  |        cout << Size of wchar_t    :  << sizeof(wchar_t) << endl;        |                                                                                ||       *"<<endl;
    cout<<"             *       ||  |                                                                         |                                                                                ||       *"<<endl;
    cout<<"             *       ||  |       return 0;                                                         |                                                                                ||       *"<<endl;
    cout<<"             *       ||  |  }                                                                      |                                                                                ||       *"<<endl;
    cout<<"             *       ||  |                                                                         |                                                                                ||       *"<<endl;
    cout<<"             *       ||  |_________________________________________________________________________|                                                                                ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||  This example uses endl, which inserts a new-line character after every line and << operator is being used to pass multiple values out to the screen.       ||       *"<<endl;
    cout<<"             *       ||  We are also using sizeof() operator to get size of various data types.                                                                                     ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||  When the above code is compiled and executed, it produces the following result which can vary from machine to machine-                                     ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||   _______________________________                                                                                                                           ||       *"<<endl;
    cout<<"             *       ||  |                               |                                                                                                                          ||       *"<<endl;
    cout<<"             *       ||  | Size of char      : 1         |                                                                                                                          ||       *"<<endl;
    cout<<"             *       ||  | Size of int       : 4         |                                                                                                                          ||       *"<<endl;
    cout<<"             *       ||  | Size of short int : 2         |                                                                                                                          ||       *"<<endl;
    cout<<"             *       ||  | Size of long int  : 4         |                                                                                                                          ||       *"<<endl;
    cout<<"             *       ||  | Size of float     : 4         |                                                                                                                          ||       *"<<endl;
    cout<<"             *       ||  | Size of double    : 8         |                                                                                                                          ||       *"<<endl;
    cout<<"             *       ||  | Size of wchar_t   : 4         |                                                                                                                          ||       *"<<endl;
    cout<<"             *       ||  |_______________________________|                                                                                                                          ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||                                                                               ***typedef Declarations***                                                    ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||  You can create a new name for an existing type using typedef. Following is the simple syntax to define a new type using typedef -                          ||       *"<<endl;
    cout<<"             *       ||     -->  typedef type newname;                                                                                                                              ||       *"<<endl;
    cout<<"             *       ||  For example, the following tells the compiler that feet is another name for int -                                                                          ||       *"<<endl;
    cout<<"             *       ||     -->  typedef int feet;                                                                                                                                  ||       *"<<endl;
    cout<<"             *       ||  Now, the following declaration is perfectly legal and creates an integer variable called distance -                                                        ||       *"<<endl;
    cout<<"             *       ||     -->  feet distance;                                                                                                                                     ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       =================================================================================================================================================================       *"<<endl;
    cout<<"             *       |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||       *"<<endl;
    cout<<"             *       =================================================================================================================================================================       *"<<endl;
    cout<<"             *                                                                                                                                                                               * "<<endl;
    cout<<"             *                                                                                                                                                                               *"<<endl;
    cout<<"             *                                                                                                                                                                               *"<<endl;
    cout<<"             * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *"<<endl;
    cout<<endl<<endl<<endl;
    system("pause");





        }
                                              ///********Data Types end******///







                                              ///********operators Start******///

        else if (inp=="09" || inp=="9" || inp=="operators")
        {
            system("cls");
            system("color 70");

    cout<<endl<<endl<<endl;
    cout<<"             * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *"<<endl;
    cout<<"             *                                                                                                                                                                               * "<<endl;
    cout<<"             *                                                                                                                                                                               *"<<endl;
    cout<<"             *                                                                                                                                                                               *"<<endl;
    cout<<"             *       -----------------------------------------------------------------------------------------------------------------------------------------------------------------       *"<<endl;
    cout<<"             *       ||||||||||||||||||||||||||||||||||||||||| <- -> @https://www.teamasnn.com/cplusplus/cpp_operators.htm.    |||||||||||||||||||||||||||||||||||||||||||||||||||||||       *"<<endl;
    cout<<"             *       -----------------------------------------------------------------------------------------------------------------------------------------------------------------       *"<<endl;
    cout<<"             *       =================================================================================================================================================================       *"<<endl;
    cout<<"             *       ||           __________                        ||--------------------/\\                         /\\---------------------||                                      ||       *"<<endl;
    cout<<"             *       ||          [          ]                       ||-------------------/  \\                       /  \\--------------------||                                      ||       *"<<endl;
    cout<<"             *       ||          [ TeamASNN ]                       ||-------------------\\  /       TEAM ASNN       \\  /--------------------||                                      ||       *"<<endl;
    cout<<"             *       ||          [ LearnC++ ]                       ||--------------------\\/                         \\/---------------------||                                      ||       *"<<endl;
    cout<<"             *       ||          [__________]                       ||----------------------|||||||||||||||||||||||||-----------------------||                                      ||       *"<<endl;
    cout<<"             *       =================================================================================================================================================================       *"<<endl;
    cout<<"             *                                                                                                                                                                               *"<<endl;
    cout<<"             *                                                                                                                                                                               *"<<endl;
    cout<<"             *       =================================================================================================================================================================       *"<<endl;
    cout<<"             *       ||           ----------------------                              ***********************************                           ----------------------          ||       *"<<endl;
    cout<<"             *       ||           | << Previous page   |                              **           Operators           **                           |     Next page  >>  |          ||       *"<<endl;
    cout<<"             *       ||           ----------------------                              ***********************************                           ----------------------          ||       *"<<endl;
    cout<<"             *       =================================================================================================================================================================       *"<<endl;
    cout<<"             *       |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||       *"<<endl;
    cout<<"             *       =================================================================================================================================================================       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||  An operator is a symbol that tells the compiler to perform specific mathematical or logical manipulations. C++ is rich in built-in operators and           ||       *"<<endl;
    cout<<"             *       ||  provide the following types of operators -                                                                                                                 ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||       -->  Arithmetic Operators                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||       -->  Relational Operators                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||       -->  Logical Operators                                                                                                                                ||       *"<<endl;
    cout<<"             *       ||       -->  Bitwise Operators                                                                                                                                ||       *"<<endl;
    cout<<"             *       ||       -->  Assignment Operators                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||       -->  Misc Operators                                                                                                                                   ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||  This chapter will examine the arithmetic, relational, logical, bitwise, assignment and other operators one by one.                                         ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||                                                              ***-> Arithmetic Operators <-***                                                               ||       *"<<endl;
    cout<<"             *       || There are following arithmetic operators supported by C++ language -                                                                                        ||       *"<<endl;
    cout<<"             *       || Assume variable A holds 10 and variable B holds 20, then -                                                                                                  ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||  ___________________________________________________________________________________________________________                                                ||       *"<<endl;
    cout<<"             *       ||  |  Operator  |                            Description                         |            Example         |                                               ||       *"<<endl;
    cout<<"             *       ||  |------------|----------------------------------------------------------------|----------------------------|                                               ||       *"<<endl;
    cout<<"             *       ||  |      +     |  Adds two operands                                             |      A + B will give 30    |                                               ||       *"<<endl;
    cout<<"             *       ||  |------------|----------------------------------------------------------------|----------------------------|                                               ||       *"<<endl;
    cout<<"             *       ||  |      -     |  Subtracts second operand from the first                       |      A - B will give -10   |                                               ||       *"<<endl;
    cout<<"             *       ||  |------------|----------------------------------------------------------------|----------------------------|                                               ||       *"<<endl;
    cout<<"             *       ||  |      *     |  Multiplies both operands                                      |      A * B will give 200   |                                               ||       *"<<endl;
    cout<<"             *       ||  |------------|----------------------------------------------------------------|----------------------------|                                               ||       *"<<endl;
    cout<<"             *       ||  |      /     |  Divides numerator by de-numerator                             |      B / A will give 2     |                                               ||       *"<<endl;
    cout<<"             *       ||  |------------|----------------------------------------------------------------|----------------------------|                                               ||       *"<<endl;
    cout<<"             *       ||  |      %     |  Modulus Operator and remainder of after an integer division   |      B % A will give 0     |                                               ||       *"<<endl;
    cout<<"             *       ||  |------------|----------------------------------------------------------------|----------------------------|                                               ||       *"<<endl;
    cout<<"             *       ||  |      ++    |  Increment operator, increases integer value by one            |      A++ will give 11      |                                               ||       *"<<endl;
    cout<<"             *       ||  |------------|----------------------------------------------------------------|----------------------------|                                               ||       *"<<endl;
    cout<<"             *       ||  |      --    |  Decrement operator, decreases integer value by one            |     A-- will give 9        |                                               ||       *"<<endl;
    cout<<"             *       ||  |____________|________________________________________________________________|____________________________|                                               ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||                                                                  ***--> Relational Operators <--***                                                         ||       *"<<endl;
    cout<<"             *       ||  _________________________________________________________________________________________________________________________________________________          ||       *"<<endl;
    cout<<"             *       ||  |  Operatoer |                                                             Description                                    |        Example       |         ||       *"<<endl;
    cout<<"             *       ||  |------------|------------------------------------------------------------------------------------------------------------|----------------------|         ||       *"<<endl;
    cout<<"             *       ||  |     ==     | Checks if the values of two operands are equal or not,                                                     | (A == B) is not true |         ||       *"<<endl;
    cout<<"             *       ||  |            | if yes then condition becomes true.                                                                        |                      |         ||       *"<<endl;
    cout<<"             *       ||  |------------|------------------------------------------------------------------------------------------------------------|----------------------|         ||       *"<<endl;
    cout<<"             *       ||  |     !=     | Checks if the values of two operands are equal or not,                                                     | (A != B) is true.    |         ||       *"<<endl;
    cout<<"             *       ||  |            | if values are not equal then condition becomes true.                                                       |                      |         ||       *"<<endl;
    cout<<"             *       ||  |------------|------------------------------------------------------------------------------------------------------------|----------------------|         ||       *"<<endl;
    cout<<"             *       ||  |     >      | Checks if the value of left operand is greater than the value of right operand,                            | (A > B) is not true. |         ||       *"<<endl;
    cout<<"             *       ||  |            | if yes then condition becomes true.                                                                        |                      |         ||       *"<<endl;
    cout<<"             *       ||  |------------|------------------------------------------------------------------------------------------------------------|----------------------|         ||       *"<<endl;
    cout<<"             *       ||  |     <      | Checks if the value of left operand is less than the value of right operand,                               | (A < B) is true.     |         ||       *"<<endl;
    cout<<"             *       ||  |            | if yes then condition becomes true.                                                                        |                      |         ||       *"<<endl;
    cout<<"             *       ||  |------------|------------------------------------------------------------------------------------------------------------|----------------------|         ||       *"<<endl;
    cout<<"             *       ||  |     >=     | Checks if the value of left operand is greater than or equal to the value of right operand,                | (A >= B) is not true |         ||       *"<<endl;
    cout<<"             *       ||  |            | if yes then condition becomes true.                                                                        |                      |         ||       *"<<endl;
    cout<<"             *       ||  |------------|------------------------------------------------------------------------------------------------------------|----------------------|         ||       *"<<endl;
    cout<<"             *       ||  |     <=     | Checks if the value of left operand is less than or equal to the value of right operand,                   | (A <= B) is true.    |         ||       *"<<endl;
    cout<<"             *       ||  |            | if yes then condition becomes true.                                                                        |                      |         ||       *"<<endl;
    cout<<"             *       ||  |____________|____________________________________________________________________________________________________________|______________________|         ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||                                                                                        ***--> Logical Operators <--***                                      ||       *"<<endl;
    cout<<"             *       || There are following logical operators supported by C++ language.                                                                                            ||       *"<<endl;
    cout<<"             *       || Assume variable A holds 1 and variable B holds 0, then -                                                                                                    ||       *"<<endl;
    cout<<"             *       || Show Examples;                                                                                                                                              ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||  _________________________________________________________________________________________________________________________________________________          ||       *"<<endl;
    cout<<"             *       ||  |  Operatoer |                                                             Description                                    |        Example       |         ||       *"<<endl;
    cout<<"             *       ||  |------------|------------------------------------------------------------------------------------------------------------|----------------------|         ||       *"<<endl;
    cout<<"             *       ||  |     &&     | Called Logical AND operator. If both the operands are non-zero, then condition becomes true.               |  (A && B) is false.  |         ||       *"<<endl;
    cout<<"             *       ||  |            |                                                                                                            |                      |         ||       *"<<endl;
    cout<<"             *       ||  |------------|------------------------------------------------------------------------------------------------------------|----------------------|         ||       *"<<endl;
    cout<<"             *       ||  |     ||     | Called Logical OR Operator. If any of the two operands is non-zero, then condition becomes true.           |  (A || B) is true.   |         ||       *"<<endl;
    cout<<"             *       ||  |            |                                                                                                            |                      |         ||       *"<<endl;
    cout<<"             *       ||  |------------|------------------------------------------------------------------------------------------------------------|----------------------|         ||       *"<<endl;
    cout<<"             *       ||  |      !     | Called Logical NOT Operator. Use to reverses the logical state of its operand.                             |  !(A && B) is true.  |         ||       *"<<endl;
    cout<<"             *       ||  |            | If a condition is true, then Logical NOT operator will make false.                                         |                      |         ||       *"<<endl;
    cout<<"             *       ||  |____________|____________________________________________________________________________________________________________|______________________|         ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       =================================================================================================================================================================       *"<<endl;
    cout<<"             *       |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||       *"<<endl;
    cout<<"             *       =================================================================================================================================================================       *"<<endl;
    cout<<"             *                                                                                                                                                                               * "<<endl;
    cout<<"             *                                                                                                                                                                               *"<<endl;
    cout<<"             *                                                                                                                                                                               *"<<endl;
    cout<<"             * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *"<<endl;

    cout<<endl<<endl<<endl;
    system("pause");




        }
                                              ///********operators end******///







                                              ///********Conditions Start******///

        else if (inp=="10" || inp=="Conditions")
        {
            system("cls");
            system("color 70");


    cout<<endl<<endl<<endl;
    cout<<"             * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *"<<endl;
    cout<<"             *                                                                                                                                                                               * "<<endl;
    cout<<"             *                                                                                                                                                                               *"<<endl;
    cout<<"             *                                                                                                                                                                               *"<<endl;
    cout<<"             *       -----------------------------------------------------------------------------------------------------------------------------------------------------------------       *"<<endl;
    cout<<"             *       ||||||||||||||||||||||||||||||||||||||||| <= => @https://www.teamasnn.com/cplusplus/cpp_basic_conditions.htm. |||||||||||||||||||||||||||||||||||||||||||||||||||       *"<<endl;
    cout<<"             *       -----------------------------------------------------------------------------------------------------------------------------------------------------------------       *"<<endl;
    cout<<"             *       =================================================================================================================================================================       *"<<endl;
    cout<<"             *       ||           __________                        ||--------------------/\\                         /\\---------------------||                                      ||       *"<<endl;
    cout<<"             *       ||          [          ]                       ||-------------------/  \\                       /  \\--------------------||                                      ||       *"<<endl;
    cout<<"             *       ||          [ TeamASNN ]                       ||-------------------\\  /       TEAM ASNN       \\  /--------------------||                                      ||       *"<<endl;
    cout<<"             *       ||          [ LearnC++ ]                       ||--------------------\\/                         \\/---------------------||                                      ||       *"<<endl;
    cout<<"             *       ||          [__________]                       ||----------------------|||||||||||||||||||||||||-----------------------||                                      ||       *"<<endl;
    cout<<"             *       =================================================================================================================================================================       *"<<endl;
    cout<<"             *                                                                                                                                                                               *"<<endl;
    cout<<"             *                                                                                                                                                                               *"<<endl;
    cout<<"             *       =================================================================================================================================================================       *"<<endl;
    cout<<"             *       ||           ----------------------                              ***********************************                           ----------------------          ||       *"<<endl;
    cout<<"             *       ||           | << Previous page   |                              **            Conditions         **                           |     Next page  >>  |          ||       *"<<endl;
    cout<<"             *       ||           ----------------------                              ***********************************                           ----------------------          ||       *"<<endl;
    cout<<"             *       =================================================================================================================================================================       *"<<endl;
    cout<<"             *       |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||       *"<<endl;
    cout<<"             *       =================================================================================================================================================================       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       || C++ supports the usual logical conditions from mathematics:                                                                                                 ||       *"<<endl;
    cout<<"             *       ||  -Less than: a < b                                                                                                                                          ||       *"<<endl;
    cout<<"             *       ||  -Less than or equal to: a <= b                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||  -Greater than: a > b                                                                                                                                       ||       *"<<endl;
    cout<<"             *       ||  -Greater than or equal to: a >= b                                                                                                                          ||       *"<<endl;
    cout<<"             *       ||  -Equal to a == b                                                                                                                                           ||       *"<<endl;
    cout<<"             *       ||  -Not Equal to: a != b                                                                                                                                      ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       || You can use these conditions to perform different actions for different decisions.                                                                          ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       || C++ has the following conditional statements:                                                                                                               ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||   -Use if to specify a block of code to be executed, if a specified condition is true                                                                       ||       *"<<endl;
    cout<<"             *       ||   -Use else to specify a block of code to be executed, if the same condition is false                                                                       ||       *"<<endl;
    cout<<"             *       ||   -Use else if to specify a new condition to test, if the first condition is false                                                                          ||       *"<<endl;
    cout<<"             *       ||   -Use switch to specify many alternative blocks of code to be executed                                                                                     ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||           **The if Statement                                                                                                                                ||       *"<<endl;
    cout<<"             *       || Use the if statement to specify a block of C++ code to be executed if a condition is true.                                                                  ||       *"<<endl;
    cout<<"             *       ||   Syntax :                                                                                                                                                  ||       *"<<endl;
    cout<<"             *       ||    |--------------------------------------------------------------|                                                                                         ||       *"<<endl;
    cout<<"             *       ||    | if (condition) {                                             |                                                                                         ||       *"<<endl;
    cout<<"             *       ||    | // block of code to be executed if the condition is true     |                                                                                         ||       *"<<endl;
    cout<<"             *       ||    |}                                                             |                                                                                         ||       *"<<endl;
    cout<<"             *       ||    |--------------------------------------------------------------|                                                                                         ||       *"<<endl;
    cout<<"             *       || Note that if is in lowercase letters. Uppercase letters (If or IF) will generate an error.                                                                  ||       *"<<endl;
    cout<<"             *       || In the example below, we test two values to find out if 20 is greater than 18. If the condition is true, print some text:                                   ||       *"<<endl;
    cout<<"             *       ||   Example :                                                                                                                                                 ||       *"<<endl;
    cout<<"             *       ||    |----------------------------------------|                                                                                                               ||       *"<<endl;
    cout<<"             *       ||    | if (20 > 18) {                         |                                                                                                               ||       *"<<endl;
    cout<<"             *       ||    | cout << 20 is greater than 18;         |                                                                                                               ||       *"<<endl;
    cout<<"             *       ||    | }                                      |                                                                                                               ||       *"<<endl;
    cout<<"             *       ||    |----------------------------------------|                                                                                                               ||       *"<<endl;
    cout<<"             *       || We can also test variables:                                                                                                                                 ||       *"<<endl;
    cout<<"             *       ||  Example :                                                                                                                                                  ||       *"<<endl;
    cout<<"             *       ||     |--------------------------------------------|                                                                                                          ||       *"<<endl;
    cout<<"             *       ||     | int x = 20;                                |                                                                                                          ||       *"<<endl;
    cout<<"             *       ||     | int y = 18;                                |                                                                                                          ||       *"<<endl;
    cout<<"             *       ||     | if (x > y) {                               |                                                                                                          ||       *"<<endl;
    cout<<"             *       ||     | cout << x is greater than y;               |                                                                                                          ||       *"<<endl;
    cout<<"             *       ||     | }                                          |                                                                                                          ||       *"<<endl;
    cout<<"             *       ||     |--------------------------------------------|                                                                                                          ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||  Example explained :                                                                                                                                        ||       *"<<endl;
    cout<<"             *       || In the example above we use two variables, x and y, to test whether x is greater than y (using the > operator). As x is 20, and y is 18, and we know that 20||       *"<<endl;
    cout<<"             *       || is greater than 18, we print to the screen that x is greater than y.                                                                                        ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||          **The else Statement                                                                                                                               ||       *"<<endl;
    cout<<"             *       || Use the else statement to specify a block of code to be executed if the condition is false.                                                                 ||       *"<<endl;
    cout<<"             *       ||    Syntax :                                                                                                                                                 ||       *"<<endl;
    cout<<"             *       ||     |-------------------------------------------------------------------|                                                                                   ||       *"<<endl;
    cout<<"             *       ||     | if (condition) {                                                  |                                                                                   ||       *"<<endl;
    cout<<"             *       ||     |   // block of code to be executed if the condition is true        |                                                                                   ||       *"<<endl;
    cout<<"             *       ||     | } else {                                                          |                                                                                   ||       *"<<endl;
    cout<<"             *       ||     |   // block of code to be executed if the condition is false       |                                                                                   ||       *"<<endl;
    cout<<"             *       ||     |  }                                                                |                                                                                   ||       *"<<endl;
    cout<<"             *       ||     |-------------------------------------------------------------------|                                                                                   ||       *"<<endl;
    cout<<"             *       ||    Example :                                                                                                                                                ||       *"<<endl;
    cout<<"             *       ||     |-------------------------------------------------|                                                                                                     ||       *"<<endl;
    cout<<"             *       ||     | int time = 20;                                  |                                                                                                     ||       *"<<endl;
    cout<<"             *       ||     | if (time < 18) {                                |                                                                                                     ||       *"<<endl;
    cout<<"             *       ||     |   cout << Good day.;                            |                                                                                                     ||       *"<<endl;
    cout<<"             *       ||     | } else {                                        |                                                                                                     ||       *"<<endl;
    cout<<"             *       ||     |   cout << Good evening.;                        |                                                                                                     ||       *"<<endl;
    cout<<"             *       ||     |  }                                              |                                                                                                     ||       *"<<endl;
    cout<<"             *       ||     | // Outputs Good evening.                        |                                                                                                     ||       *"<<endl;
    cout<<"             *       ||     |-------------------------------------------------|                                                                                                     ||       *"<<endl;
    cout<<"             *       ||  Example explained :                                                                                                                                        ||       *"<<endl;
    cout<<"             *       || In the example above, time (20) is greater than 18, so the condition is false. Because of this, we move on to the else condition and print to the screen    ||       *"<<endl;
    cout<<"             *       || Good evening. If the time was less than 18, the program would print Good day.                                                                               ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||          **The else if Statement                                                                                                                            ||       *"<<endl;
    cout<<"             *       || Use the else if statement to specify a new condition if the first condition is false.                                                                       ||       *"<<endl;
    cout<<"             *       ||   Syntax :                                                                                                                                                  ||       *"<<endl;
    cout<<"             *       ||      |-----------------------------------------------------------------------------------------------|                                                      ||       *"<<endl;
    cout<<"             *       ||      | if (condition1) {                                                                             |                                                      ||       *"<<endl;
    cout<<"             *       ||      |    // block of code to be executed if condition1 is true                                      |                                                      ||       *"<<endl;
    cout<<"             *       ||      | } else if (condition2) {                                                                      |                                                      ||       *"<<endl;
    cout<<"             *       ||      |   // block of code to be executed if the condition1 is false and condition2 is true           |                                                      ||       *"<<endl;
    cout<<"             *       ||      | } else {                                                                                      |                                                      ||       *"<<endl;
    cout<<"             *       ||      |   // block of code to be executed if the condition1 is false and condition2 is false          |                                                      ||       *"<<endl;
    cout<<"             *       ||      | }                                                                                             |                                                      ||       *"<<endl;
    cout<<"             *       ||      |-----------------------------------------------------------------------------------------------|                                                      ||       *"<<endl;
    cout<<"             *       ||   Example :                                                                                                                                                 ||       *"<<endl;
    cout<<"             *       ||      |---------------------------------------------|                                                                                                        ||       *"<<endl;
    cout<<"             *       ||      | int time = 22;                              |                                                                                                        ||       *"<<endl;
    cout<<"             *       ||      | if (time < 10) {                            |                                                                                                        ||       *"<<endl;
    cout<<"             *       ||      |    cout << Good morning.;                   |                                                                                                        ||       *"<<endl;
    cout<<"             *       ||      | } else if (time < 20) {                     |                                                                                                        ||       *"<<endl;
    cout<<"             *       ||      |    cout << Good day.;                       |                                                                                                        ||       *"<<endl;
    cout<<"             *       ||      | } else {                                    |                                                                                                        ||       *"<<endl;
    cout<<"             *       ||      |    cout << Good evening.;                   |                                                                                                        ||       *"<<endl;
    cout<<"             *       ||      | }                                           |                                                                                                        ||       *"<<endl;
    cout<<"             *       ||      | // Outputs Good evening.                    |                                                                                                        ||       *"<<endl;
    cout<<"             *       ||      |---------------------------------------------|                                                                                                        ||       *"<<endl;
    cout<<"             *       ||  Example explained :                                                                                                                                        ||       *"<<endl;
    cout<<"             *       || In the example above, time (22) is greater than 10, so the first condition is false. The next condition, in the else if statement, is also false,           ||       *"<<endl;
    cout<<"             *       || so we move on to the else condition since condition1 and condition2 is both false - and print to the screen Good evening.                                   ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       || However, if the time was 14, our program would print Good day.                                                                                              ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       =================================================================================================================================================================       *"<<endl;
    cout<<"             *       |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||       *"<<endl;
    cout<<"             *       =================================================================================================================================================================       *"<<endl;
    cout<<"             *                                                                                                                                                                               * "<<endl;
    cout<<"             *                                                                                                                                                                               *"<<endl;
    cout<<"             *                                                                                                                                                                               *"<<endl;
    cout<<"             * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *"<<endl;

    cout<<endl<<endl<<endl;
    cout<<"             ================================================================================================================================================================================="<<endl;
    cout<<"             ||                                                                                                                                                                             ||"<<endl;
    cout<<"             ||      Do you want to see some problems related to this topic? (Press 'y/Y' for Yes || 'n/N' for No) :::    "; cin>>p;
    cout<<"             ||                                                                                                                                                                             ||";
    cout<<endl<<"             ================================================================================================================================================================================="<<endl<<endl;





    if(p= "y" || "Y" || "yes" || "YES" || "Yes" )
    {
        system("cls");
        system("color 70"); //body for the problem show casing
         cout<<endl<<endl<<endl;

    cout<<"           ==>>  Write a C++ program to find odd and even number."<<endl<<endl<<endl<<endl;
    cout<<"              1.     #include <iostream>"<<endl;
    cout<<"              2.     using namespace std;"<<endl<<endl;
    cout<<"              3.     int main()"<<endl;
    cout<<"              4.     {"<<endl;
    cout<<"              5.        int num;"<<endl;
    cout<<"              6.        cout<<'' Enter a number :'' ; "<<endl<<endl;
    cout<<"              7.        cin>>num;"<<endl<<endl;
    cout<<"              8.        if(num%2!=0) "<<endl;
    cout<<"              9.        {"<<endl;
    cout<<"              10.       cout<<endl << num <<'' is an odd number ''<<endl; "<<endl<<endl;
    cout<<"              11.       }"<<endl<<endl;
    cout<<"              12.       else"<<endl<<endl;
    cout<<"              13.       {"<<endl;
    cout<<"              14.       cout<<endl << num <<'' is an even number ''<<endl; "<<endl;
    cout<<"              15.       }"<<endl<<endl;
    cout<<"              16.     return 0;"<<endl;
    cout<<"              17.     }"<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
    system("pause");

    }
    else
    {
        continue;
    }

        }
                                              ///********Conditions end******///







                                              ///********Switch Start******///

        else if (inp=="11" || inp=="Switch")
        {
            system("cls");
            system("color 70");

    cout<<endl<<endl<<endl;
    cout<<"             * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *"<<endl;
    cout<<"             *                                                                                                                                                                               * "<<endl;
    cout<<"             *                                                                                                                                                                               *"<<endl;
    cout<<"             *                                                                                                                                                                               *"<<endl;
    cout<<"             *       -----------------------------------------------------------------------------------------------------------------------------------------------------------------       *"<<endl;
    cout<<"             *       ||||||||||||||||||||||||||||||||||||||||| <= => @https://www.teamasnn.com/cplusplus/cpp_switch statement.htm. |||||||||||||||||||||||||||||||||||||||||||||||||||       *"<<endl;
    cout<<"             *       -----------------------------------------------------------------------------------------------------------------------------------------------------------------       *"<<endl;
    cout<<"             *       =================================================================================================================================================================       *"<<endl;
    cout<<"             *       ||           __________                        ||--------------------/\\                         /\\---------------------||                                      ||       *"<<endl;
    cout<<"             *       ||          [          ]                       ||-------------------/  \\                       /  \\--------------------||                                      ||       *"<<endl;
    cout<<"             *       ||          [ TeamASNN ]                       ||-------------------\\  /       TEAM ASNN       \\  /--------------------||                                      ||       *"<<endl;
    cout<<"             *       ||          [ LearnC++ ]                       ||--------------------\\/                         \\/---------------------||                                      ||       *"<<endl;
    cout<<"             *       ||          [__________]                       ||----------------------|||||||||||||||||||||||||-----------------------||                                      ||       *"<<endl;
    cout<<"             *       =================================================================================================================================================================       *"<<endl;
    cout<<"             *                                                                                                                                                                               *"<<endl;
    cout<<"             *                                                                                                                                                                               *"<<endl;
    cout<<"             *       =================================================================================================================================================================       *"<<endl;
    cout<<"             *       ||           ----------------------                              ***********************************                           ----------------------          ||       *"<<endl;
    cout<<"             *       ||           | << Previous page   |                              **            Switch             **                           |     Next page  >>  |          ||       *"<<endl;
    cout<<"             *       ||           ----------------------                              ***********************************                           ----------------------          ||       *"<<endl;
    cout<<"             *       =================================================================================================================================================================       *"<<endl;
    cout<<"             *       |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||       *"<<endl;
    cout<<"             *       =================================================================================================================================================================       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||  A switch statement allows a variable to be tested for equality against a list of values. Each value is                                                     ||       *"<<endl;
    cout<<"             *       ||  called a case, and the variable being switched on is checked for each case.                                                                                ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||  Syntax                                                                                                                                                     ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||  -----------------------------------------------------------                                                                                                ||       *"<<endl;
    cout<<"             *       ||  |The syntax for a switch statement in C++ is as follows   |                                                                                                ||       *"<<endl;
    cout<<"             *       ||  |                                                         |                                                                                                ||       *"<<endl;
    cout<<"             *       ||  |case constant-expression  :                              |                                                                                                ||       *"<<endl;
    cout<<"             *       ||  |break; //optional                                        |                                                                                                ||       *"<<endl;
    cout<<"             *       ||  |statement(s);                                            |                                                                                                ||       *"<<endl;
    cout<<"             *       ||  |break; //                                                |                                                                                                ||       *"<<endl;
    cout<<"             *       ||  | // you can have any number of case statements.          |                                                                                                ||       *"<<endl;
    cout<<"             *       ||  |default :                                                |                                                                                                ||       *"<<endl;
    cout<<"             *       ||  |}                                                        |                                                                                                ||       *"<<endl;
    cout<<"             *       ||  -----------------------------------------------------------                                                                                                ||       *"<<endl;
    cout<<"             *       ||  How does the switch statement work?                                                                                                                        ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       || *The expression is evaluated once and compared with the values of each case label.                                                                          ||       *"<<endl;
    cout<<"             *       ||  example, if the value of the variable is equal to constant2, the code after                                                                                ||       *"<<endl;
    cout<<"             *       ||  case constant2: is executed until the break statement is encountered.                                                                                      ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       || *If there is no match, the code after default: is executed.                                                                                                 ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       =================================================================================================================================================================       *"<<endl;
    cout<<"             *       |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||       *"<<endl;
    cout<<"             *       =================================================================================================================================================================       *"<<endl;
    cout<<"             *                                                                                                                                                                               *"<<endl;
    cout<<"             *                                                                                                                                                                               *"<<endl;
    cout<<"             *                                                                                                                                                                               *"<<endl;
    cout<<"             * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *"<<endl;



    cout<<endl<<endl<<endl;
    cout<<"             ================================================================================================================================================================================="<<endl;
    cout<<"             ||                                                                                                                                                                             ||"<<endl;
    cout<<"             ||      Do you want to see some problems related to this topic? (Press 'y/Y' for Yes || 'n/N' for No) :::    "; cin>>p;
    cout<<"             ||                                                                                                                                                                             ||";
    cout<<endl<<"             ================================================================================================================================================================================="<<endl<<endl;

    if(p= "y" || "Y" || "yes" || "YES" || "Yes" )
    {
        //body for the problem show casing
         system("cls");
        system("color 70");
         cout<<endl<<endl<<endl;

    cout<<"           ==>>  Write a C++ program to build a simple calculator using switch Statement."<<endl<<endl<<endl<<endl;
    cout<<"              1.     #include <iostream>"<<endl;
    cout<<"              2.     using namespace std;"<<endl<<endl;
    cout<<"              3.     int main()"<<endl;
    cout<<"              4.     {"<<endl;
    cout<<"              5.         char oper;"<<endl;
    cout<<"              6.         float num1, num2;"<<endl<<endl;
    cout<<"              7.         cout << '' Enter an operator (+, -, *, /): '';"<<endl;
    cout<<"              8.         cin >> oper;"<<endl;
    cout<<"              9.         cout << '' Enter two numbers: '' << endl;"<<endl;
    cout<<"              10.        cin >> num1 >> num2; "<<endl<<endl;
    cout<<"              11.        switch (oper) {"<<endl;
    cout<<"              12.        case '+':  "<<endl;
    cout<<"              13.        cout << num1 << '' + '' << num2 << '' = '' << num1 + num2;"<<endl;
    cout<<"              14.        break;"<<endl;
    cout<<"              15.        case '-':"<<endl;
    cout<<"              16.        cout << num1 << '' - '' << num2 << '' = '' << num1 - num2;"<<endl;
    cout<<"              17.        break;"<<endl;
    cout<<"              18.        case '*':"<<endl;
    cout<<"              19.        cout << num1 << '' * '' << num2 << '' = '' << num1 * num2;"<<endl;
    cout<<"              20.        break;"<<endl;
    cout<<"              21.        case '/':"<<endl;
    cout<<"              22.        cout << num1 << '' / '' << num2 << '' = '' << num1 / num2;"<<endl;
    cout<<"              23.        break;"<<endl;
    cout<<"              24.        default:"<<endl;
    cout<<"              25.                        // operator is doesn't match any case constant (+, -, *, /)"<<endl<<endl;
    cout<<"              26.        cout << ''Error! The operator is not correct'';"<<endl;
    cout<<"              27.        break;"<<endl<<endl;
    cout<<"              28.        return 0;"<<endl;
    cout<<"              29.        }"<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
    system("pause");
}

    else
    {
        continue;
    }

        }
                                              ///********Switch end******///







                                              ///********Loop Start******///

        else if (inp=="12" || inp=="Loop")
        {
            system("cls");
            system("color 70");

    cout<<endl<<endl<<endl;
    cout<<"             * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *"<<endl;
    cout<<"             *                                                                                                                                                                               * "<<endl;
    cout<<"             *                                                                                                                                                                               *"<<endl;
    cout<<"             *                                                                                                                                                                               *"<<endl;
    cout<<"             *       -----------------------------------------------------------------------------------------------------------------------------------------------------------------       *"<<endl;
    cout<<"             *       ||||||||||||||||||||||||||||||||||||||||| <= => @https://www.teamasnn.com/cplusplus/cpp_loop.htm.|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||        *"<<endl;
    cout<<"             *       -----------------------------------------------------------------------------------------------------------------------------------------------------------------       *"<<endl;
    cout<<"             *       =================================================================================================================================================================       *"<<endl;
    cout<<"             *       ||           __________                        ||--------------------/\\                         /\\---------------------||                                      ||       *"<<endl;
    cout<<"             *       ||          [          ]                       ||-------------------/  \\                       /  \\--------------------||                                      ||       *"<<endl;
    cout<<"             *       ||          [ TeamASNN ]                       ||-------------------\\  /       TEAM ASNN       \\  /--------------------||                                      ||       *"<<endl;
    cout<<"             *       ||          [ LearnC++ ]                       ||--------------------\\/                         \\/---------------------||                                      ||       *"<<endl;
    cout<<"             *       ||          [__________]                       ||----------------------||||||||||||||||||||||||||----------------------||                                      ||       *"<<endl;
    cout<<"             *       =================================================================================================================================================================       *"<<endl;
    cout<<"             *                                                                                                                                                                               *"<<endl;
    cout<<"             *                                                                                                                                                                               *"<<endl;
    cout<<"             *       =================================================================================================================================================================       *"<<endl;
    cout<<"             *       ||           ----------------------                              ***********************************                           ----------------------          ||       *"<<endl;
    cout<<"             *       ||           | << Previous page   |                              **            loop               **                           |     Next page  >>  |          ||       *"<<endl;
    cout<<"             *       ||           ----------------------                              ***********************************                           ----------------------          ||       *"<<endl;
    cout<<"             *       =================================================================================================================================================================       *"<<endl;
    cout<<"             *       |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||       *"<<endl;
    cout<<"             *       =================================================================================================================================================================       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||  A for loop is a repetition control structure that allows you to efficiently write a loop that needs to execute a specific number of times.                 ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||  Syntax                                                                                                                                                     ||       *"<<endl;
    cout<<"             *       ||  The syntax of a for loop in C++ is                                                                                                                         ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||   for ( init; condition; increment ) {                                                                                                                      ||       *"<<endl;
    cout<<"             *       ||   statement(s);                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||   }                                                                                                                                                         ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||   Here is the flow of control in a for loop                                                                                                                 ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||           *The init step is executed first, and only once. This step allows you to declare and initialize any loop control variables.                       ||       *"<<endl;
    cout<<"             *       ||            You are not required to put a statement here, as long as a semicolon appears.                                                                    ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||           *Next, the condition is evaluated. If it is true, the body of the loop is executed. If it is false,                                               ||       *"<<endl;
    cout<<"             *       ||             the body of the loop does not execute and flow of control jumps to the next statement just after the for loop.                                  ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||           *After the body of the for loop executes, the flow of control jumps back up to the increment statement.                                           ||       *"<<endl;
    cout<<"             *       ||             This statement can be left blank, as long as a semicolon appears after the condition.                                                           ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||           *After the body of the for loop executes, the flow of control jumps back up to the increment statement.                                           ||       *"<<endl;
    cout<<"             *       ||             This statement can be left blank, as long as a semicolon appears after the condition.                                                           ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||           *The condition is now evaluated again. If it is true, the loop executes and the process repeats itself (body of loop,                             ||       *"<<endl;
    cout<<"             *       ||             then increment step, and then again condition). After the condition becomes false, the for loop terminates.                                     ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||                                         [LIVE DEMO]                                                                                                         ||       *"<<endl;
    cout<<"             *       ||    |----------------------------------------------|                                                                                                         ||       *"<<endl;
    cout<<"             *       ||    | #include <iostream>                          |                                                                                                         ||       *"<<endl;
    cout<<"             *       ||    | using namespace std;                         |                                                                                                         ||       *"<<endl;
    cout<<"             *       ||    | int main () {                                |                                                                                                         ||       *"<<endl;
    cout<<"             *       ||    |    // for loop execution                     |                                                                                                         ||       *"<<endl;
    cout<<"             *       ||    |    for( int a = 10; a < 20; a = a + 1 ) {    |                                                                                                         ||       *"<<endl;
    cout<<"             *       ||    |       cout <<   value of a:  << a << endl;   |                                                                                                         ||       *"<<endl;
    cout<<"             *       ||    |    }                                         |                                                                                                         ||       *"<<endl;
    cout<<"             *       ||    |                                              |                                                                                                         ||       *"<<endl;
    cout<<"             *       ||    |    return 0;                                 |                                                                                                         ||       *"<<endl;
    cout<<"             *       ||    | }                                            |                                                                                                         ||       *"<<endl;
    cout<<"             *       ||    |                                              |                                                                                                         ||       *"<<endl;
    cout<<"             *       ||    |----------------------------------------------|                                                                                                         ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||     DO                                                                                                                                                      ||       *"<<endl;
    cout<<"             *       ||     The do/while loop is a variant of the while loop. This loop will execute the code block once, before checking if the condition is true, then it will    ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||     Syntax                                                                                                                                                  ||       *"<<endl;
    cout<<"             *       ||   --------------------------------------                                                                                                                    ||       *"<<endl;
    cout<<"             *       ||   |  do {                              |                                                                                                                    ||       *"<<endl;
    cout<<"             *       ||   |      // code block to be executed  |                                                                                                                    ||       *"<<endl;
    cout<<"             *       ||   |  }                                 |                                                                                                                    ||       *"<<endl;
    cout<<"             *       ||   |  while (condition);                |                                                                                                                    ||       *"<<endl;
    cout<<"             *       ||   |                                    |                                                                                                                    ||       *"<<endl;
    cout<<"             *       ||   --------------------------------------                                                                                                                    ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||   The example below uses a do/while loop. The loop will always be executed at least once, even if the condition is false,                                   ||       *"<<endl;
    cout<<"             *       ||   because the code block is executed before the condition is tested:                                                                                        ||       *"<<endl;
    cout<<"             *       ||                            [Example]                                                                                                                        ||       *"<<endl;
    cout<<"             *       ||    ------------------------------------                                                                                                                     ||       *"<<endl;
    cout<<"             *       ||   | int i = 0;                         |                                                                                                                    ||       *"<<endl;
    cout<<"             *       ||   |do {                                |                                                                                                                    ||       *"<<endl;
    cout<<"             *       ||   |    cout << i <<                    |                                                                                                                    ||       *"<<endl;
    cout<<"             *       ||   | i++;                               |                                                                                                                    ||       *"<<endl;
    cout<<"             *       ||   | }                                  |                                                                                                                    ||       *"<<endl;
    cout<<"             *       ||   | while (i < 5);                     |                                                                                                                    ||       *"<<endl;
    cout<<"             *       ||   -------------------------------------                                                                                                                     ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||        TRY IT YOUR SELF                                                                                                                                     ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       =================================================================================================================================================================       *"<<endl;
    cout<<"             *       |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||       *"<<endl;
    cout<<"             *       =================================================================================================================================================================       *"<<endl;
    cout<<"             *                                                                                                                                                                               * "<<endl;
    cout<<"             *                                                                                                                                                                               *"<<endl;
    cout<<"             *                                                                                                                                                                               *"<<endl;
    cout<<"             * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *"<<endl;

    cout<<endl<<endl<<endl;
    cout<<"             ================================================================================================================================================================================="<<endl;
    cout<<"             ||                                                                                                                                                                             ||"<<endl;
    cout<<"             ||      Do you want to see some problems related to this topic? (Press 'y/Y' for Yes || 'n/N' for No) :::    "; cin>>p;
    cout<<"             ||                                                                                                                                                                             ||";
    cout<<endl<<"             ================================================================================================================================================================================="<<endl<<endl;



    if(p= "y" || "Y" || "yes" || "YES" || "Yes" )
    {
       system("cls");
       system("color 70"); //body for the problem show casing
       cout<<endl<<endl<<endl;

    cout<<"           ==>> Write a C++ program to print all even numbers between 1 to 100."<<endl<<endl<<endl<<endl;
    cout<<"              1.     #include <iostream>"<<endl;
    cout<<"              2.     using namespace std;"<<endl<<endl;
    cout<<"              3.     int main()"<<endl;
    cout<<"              4.     {"<<endl;
    cout<<"              5.         int i=2;"<<endl;
    cout<<"              6.         cout<< '' All even numbers between 1 to 100 :'' ;"<<endl<<endl;
    cout<<"              7.         while(i<=100) "<<endl;
    cout<<"              8.         {"<<endl;
    cout<<"              9.         cout<<i<<'' '';"<<endl;
    cout<<"              10.        i=i+2;"<<endl;
    cout<<"              11.        }"<<endl<<endl;
    cout<<"              16.     return 0;"<<endl;
    cout<<"              17.     }"<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
    system("pause");

    }
    else
    {
        continue;
    }
        }
                                              ///********Loop end******///







                                              ///********Dynamic Memory Start******///

        else if (inp=="13" || inp=="Dynamic" || inp=="Dynamic Memory")
        {
            system("cls");
            system("color 70");

    cout<<endl<<endl<<endl;
    cout<<"             * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *"<<endl;
    cout<<"             *                                                                                                                                                                               * "<<endl;
    cout<<"             *                                                                                                                                                                               *"<<endl;
    cout<<"             *                                                                                                                                                                               *"<<endl;
    cout<<"             *       -----------------------------------------------------------------------------------------------------------------------------------------------------------------       *"<<endl;
    cout<<"             *       ||||||||||||||||||||||||||||||||||||||||| <= => @https://www.teamasnn.com/cplusplus/cpp_dynamic Memory.htm. |||||||||||||||||||||||||||||||||||||||||||||||||||||       *"<<endl;
    cout<<"             *       -----------------------------------------------------------------------------------------------------------------------------------------------------------------       *"<<endl;
    cout<<"             *       =================================================================================================================================================================       *"<<endl;
    cout<<"             *       ||           __________                        ||--------------------/\\                         /\\---------------------||                                      ||       *"<<endl;
    cout<<"             *       ||          [          ]                       ||-------------------/  \\                       /  \\--------------------||                                      ||       *"<<endl;
    cout<<"             *       ||          [ TeamASNN ]                       ||-------------------\\  /       TEAM ASNN       \\  /--------------------||                                      ||       *"<<endl;
    cout<<"             *       ||          [ LearnC++ ]                       ||--------------------\\/                         \\/---------------------||                                      ||       *"<<endl;
    cout<<"             *       ||          [__________]                       ||----------------------|||||||||||||||||||||||||-----------------------||                                      ||       *"<<endl;
    cout<<"             *       =================================================================================================================================================================       *"<<endl;
    cout<<"             *                                                                                                                                                                               *"<<endl;
    cout<<"             *                                                                                                                                                                               *"<<endl;
    cout<<"             *       =================================================================================================================================================================       *"<<endl;
    cout<<"             *       ||           ----------------------                              ***********************************                           ----------------------          ||       *"<<endl;
    cout<<"             *       ||           | << Previous page   |                              **         Dynamic Memory        **                           |     Next page  >>  |          ||       *"<<endl;
    cout<<"             *       ||           ----------------------                              ***********************************                           ----------------------          ||       *"<<endl;
    cout<<"             *       =================================================================================================================================================================       *"<<endl;
    cout<<"             *       |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||       *"<<endl;
    cout<<"             *       =================================================================================================================================================================       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||  A good understanding of how dynamic memory really works in C++ is essential to becoming                                                                    ||       *"<<endl;
    cout<<"             *       ||  a good C++ programmer. Memory in your C++ program is divided into two parts                                                                                ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||           *The stack   All variables declared inside the function will take up memory from the stack.                                                       ||       *"<<endl;
    cout<<"             *       ||           *The heap   This is unused memory of the program and can be used to allocate the memory dynamically when program runs.                            ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||    Many times, you are not aware in advance how much memory you will need to store                                                                          ||       *"<<endl;
    cout<<"             *       ||   particular information in a defined variable and the size of required memory can be                                                                       ||       *"<<endl;
    cout<<"             *       ||   determined at run time.                                                                                                                                   ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||   You can allocate memory at run time within the heap for the variable of a given type using a                                                              ||       *"<<endl;
    cout<<"             *       ||   special operator in C++ which returns the address of the space allocated. This operator is                                                                ||       *"<<endl;
    cout<<"             *       ||     called new operator.                                                                                                                                    ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||    If you are not in need of dynamically allocated memory anymore, you can use delete                                                                       ||       *"<<endl;
    cout<<"             *       ||    operator, which de-allocates memory that was previously allocated by new operator.                                                                       ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||    new and delete Operators                                                                                                                                 ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||    There is following generic syntax to use new operator to allocate memory dynamically for any data-type.                                                  ||       *"<<endl;
    cout<<"             *       ||             -----------------                                                                                                                               ||       *"<<endl;
    cout<<"             *       ||             | new data-type; |                                                                                                                              ||       *"<<endl;
    cout<<"             *       ||             -----------------                                                                                                                               ||       *"<<endl;
    cout<<"             *       ||   Here, data-type could be any built-in data type including an array or any user defined data                                                               ||       *"<<endl;
    cout<<"             *       ||   types include class or structure. Let us start with built in data types. For example we can                                                               ||       *"<<endl;
    cout<<"             *       ||   define a pointer to type double and then request that the memory be allocated at execution                                                                ||       *"<<endl;
    cout<<"             *       ||   time. We can do this using the new operator with the following statements                                                                                 ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||              double* pvalue  = NULL; // Pointer initialized with null                                                                                       ||       *"<<endl;
    cout<<"             *       ||              pvalue  = new double;   // Request memory for the variable                                                                                     ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||    The memory may not have been allocated successfully, if the free store had been used up.                                                                 ||       *"<<endl;
    cout<<"             *       ||    So it is good practice to check if new operator is returning NULL pointer and take appropriate action as below                                           ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||         ----------------------------------------------------                                                                                                ||       *"<<endl;
    cout<<"             *       ||         |    double* pvalue  = NULL;                       |                                                                                                ||       *"<<endl;
    cout<<"             *       ||         |    if( !(pvalue  = new double )) {               |                                                                                                ||       *"<<endl;
    cout<<"             *       ||         |          cout << Error: out of memory. <<endl;   |                                                                                                ||       *"<<endl;
    cout<<"             *       ||         |          exit(1);                                |                                                                                                ||       *"<<endl;
    cout<<"             *       ||         |    }                                             |                                                                                                ||       *"<<endl;
    cout<<"             *       ||         ----------------------------------------------------                                                                                                ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||      The malloc() function from C, still exists in C++, but it is recommended to avoid using malloc() function.                                             ||       *"<<endl;
    cout<<"             *       ||      The main advantage of new over malloc() is that new doesn't just allocate memory, it constructs objects which is prime purpose of C++.                 ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||       At any point, when you feel a variable that has been dynamically allocated is not anymore required,                                                   ||       *"<<endl;
    cout<<"             *       ||       you can free up the memory that it occupies in the free store with the   delete operator as follows                                                   ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||     ----------------------------------------------------------------                                                                                        ||       *"<<endl;
    cout<<"             *       ||     | delete pvalue;        // Release memory pointed to by pvalue |                                                                                        ||       *"<<endl;
    cout<<"             *       ||     ----------------------------------------------------------------                                                                                        ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||     Let us put above concepts and form the following example to show how   new and   delete work                                                            ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||   --------------------------------------------------------------------------------                                                                          ||       *"<<endl;
    cout<<"             *       ||   |   #include <iostream>                                                         |                                                                         ||       *"<<endl;
    cout<<"             *       ||   |  using namespace std;                                                         |                                                                         ||       *"<<endl;
    cout<<"             *       ||   |                                                                               |                                                                         ||       *"<<endl;
    cout<<"             *       ||   |   int main () {                                                               |                                                                         ||       *"<<endl;
    cout<<"             *       ||   |       double* pvalue  = NULL; // Pointer initialized with null                |                                                                         ||       *"<<endl;
    cout<<"             *       ||   |       pvalue  = new double;   // Request memory for the variable              |                                                                         ||       *"<<endl;
    cout<<"             *       ||   |                                                                               |                                                                         ||       *"<<endl;
    cout<<"             *       ||   |       *pvalue = 29494.99;     // Store value at allocated address             |                                                                         ||       *"<<endl;
    cout<<"             *       ||   |        cout <<   Value of pvalue :  << *pvalue << endl;                       |                                                                         ||       *"<<endl;
    cout<<"             *       ||   |                                                                               |                                                                         ||       *"<<endl;
    cout<<"             *       ||   |        delete pvalue;         // free up the memory.                          |                                                                         ||       *"<<endl;
    cout<<"             *       ||   |        return 0;                                                              |                                                                         ||       *"<<endl;
    cout<<"             *       ||   |   }                                                                           |                                                                         ||       *"<<endl;
    cout<<"             *       ||   | ----------------------------------------------------------------------------- |                                                                         ||       *"<<endl;
    cout<<"             *       ||   |  If we compile and run above code, this would produce the following result    |                                                                         ||       *"<<endl;
    cout<<"             *       ||   | ----------------------------------------------------------------------------- |                                                                         ||       *"<<endl;
    cout<<"             *       ||   |   Value of pvalue : 29495                                                     |                                                                         ||       *"<<endl;
    cout<<"             *       ||   |                                                                               |                                                                         ||       *"<<endl;
    cout<<"             *       ||   |                                                                               |                                                                         ||       *"<<endl;
    cout<<"             *       ||   --------------------------------------------------------------------------------                                                                          ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||    Dynamic Memory Allocation for Arrays                                                                                                                     ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||    Consider you want to allocate memory for an array of characters, i.e., string of 20 characters.                                                          ||       *"<<endl;
    cout<<"             *       ||    Using the same syntax what we have used above we can allocate memory dynamically as shown below.                                                         ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||        --------------------------------------------------------------------                                                                                 ||       *"<<endl;
    cout<<"             *       ||       | char* pvalue  = NULL;         // Pointer initialized with null    |                                                                                 ||       *"<<endl;
    cout<<"             *       ||       |  pvalue  = new char[20];       // Request memory for the variable |                                                                                 ||       *"<<endl;
    cout<<"             *       ||        --------------------------------------------------------------------                                                                                 ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||     To remove the array that we have just created the statement would look like this                                                                        ||       *"<<endl;
    cout<<"             *       ||         --------------------------------------------------------------------                                                                                ||       *"<<endl;
    cout<<"             *       ||        * delete [] pvalue;             // Delete array pointed to by pvalue *                                                                               ||       *"<<endl;
    cout<<"             *       ||         --------------------------------------------------------------------                                                                                ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||     Following the similar generic syntax of new operator, you can allocate for a multi-dimensional array as follows                                         ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||         --------------------------------------------------------------------                                                                                ||       *"<<endl;
    cout<<"             *       ||         | double** pvalue  = NULL;      // Pointer initialized with null   |                                                                                ||       *"<<endl;
    cout<<"             *       ||         | pvalue  = new double [3][4];  // Allocate memory for a 3x4 array |                                                                                ||       *"<<endl;
    cout<<"             *       ||         --------------------------------------------------------------------                                                                                ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||        However, the syntax to release the memory for multi-dimensional array will still remain same as above                                                ||       *"<<endl;
    cout<<"             *       ||         ---------------------------------------------------------------------                                                                               ||       *"<<endl;
    cout<<"             *       ||         * delete [] pvalue;            // Delete array pointed to by pvalue  *                                                                              ||       *"<<endl;
    cout<<"             *       ||         ---------------------------------------------------------------------                                                                               ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       =================================================================================================================================================================       *"<<endl;
    cout<<"             *       |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||       *"<<endl;
    cout<<"             *       =================================================================================================================================================================       *"<<endl;
    cout<<"             *                                                                                                                                                                               * "<<endl;
    cout<<"             *                                                                                                                                                                               *"<<endl;
    cout<<"             *                                                                                                                                                                               *"<<endl;
    cout<<"             * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *"<<endl;
    cout<<endl<<endl<<endl;
    system("pause");



        }
                                              ///********Dynamic Memory end******///







                                              ///********Break/Continue Start******///

        else if (inp=="14" || inp=="Break" || inp=="Break/Continue")
        {
            system("cls");
            system("color 70");

    cout<<endl<<endl<<endl;
    cout<<"             * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *"<<endl;
    cout<<"             *                                                                                                                                                                               * "<<endl;
    cout<<"             *                                                                                                                                                                               *"<<endl;
    cout<<"             *                                                                                                                                                                               *"<<endl;
    cout<<"             *       -----------------------------------------------------------------------------------------------------------------------------------------------------------------       *"<<endl;
    cout<<"             *       ||||||||||||||||||||||||||||||||||||||||| <= => @https://www.teamasnn.com/cplusplus/cpp_basic_break/continue.htm. |||||||||||||||||||||||||||||||||||||||||||||||       *"<<endl;
    cout<<"             *       -----------------------------------------------------------------------------------------------------------------------------------------------------------------       *"<<endl;
    cout<<"             *       =================================================================================================================================================================       *"<<endl;
    cout<<"             *       ||           __________                        ||--------------------/\\                         /\\---------------------||                                      ||       *"<<endl;
    cout<<"             *       ||          [          ]                       ||-------------------/  \\                       /  \\--------------------||                                      ||       *"<<endl;
    cout<<"             *       ||          [ TeamASNN ]                       ||-------------------\\  /       TEAM ASNN       \\  /--------------------||                                      ||       *"<<endl;
    cout<<"             *       ||          [ LearnC++ ]                       ||--------------------\\/                         \\/---------------------||                                      ||       *"<<endl;
    cout<<"             *       ||          [__________]                       ||----------------------|||||||||||||||||||||||||-----------------------||                                      ||       *"<<endl;
    cout<<"             *       =================================================================================================================================================================       *"<<endl;
    cout<<"             *                                                                                                                                                                               *"<<endl;
    cout<<"             *                                                                                                                                                                               *"<<endl;
    cout<<"             *       =================================================================================================================================================================       *"<<endl;
    cout<<"             *       ||           ----------------------                              ***********************************                           ----------------------          ||       *"<<endl;
    cout<<"             *       ||           | << Previous page   |                              **         Break/Continue        **                           |     Next page  >>  |          ||       *"<<endl;
    cout<<"             *       ||           ----------------------                              ***********************************                           ----------------------          ||       *"<<endl;
    cout<<"             *       =================================================================================================================================================================       *"<<endl;
    cout<<"             *       |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||       *"<<endl;
    cout<<"             *       =================================================================================================================================================================       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||    The Break Statement :                                                                                                                                    ||       *"<<endl;
    cout<<"             *       ||    --------------------                                                                                                                                     ||       *"<<endl;
    cout<<"             *       ||    Break leaves a loop, even if the condition for its end is not fulfilled. It can be used to end an infinite loop, or to force it to end before its        ||       *"<<endl;
    cout<<"             *       ||    natural end. For example, let's stop the countdown before its natural end:                                                                               ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||          ____________________________________________________________________                                                                               ||       *"<<endl;
    cout<<"             *       ||         |                                                                    |                                                                              ||       *"<<endl;
    cout<<"             *       ||         |    // break loop example                                           |                                                                              ||       *"<<endl;
    cout<<"             *       ||         |    #include <iostream>                                             |                                                                              ||       *"<<endl;
    cout<<"             *       ||         |    using namespace std;                                            |                                                                              ||       *"<<endl;
    cout<<"             *       ||         |                                                                    |                                                                              ||       *"<<endl;
    cout<<"             *       ||         |    int main ()                                                     |                                                                              ||       *"<<endl;
    cout<<"             *       ||         |    {                                                               |                                                                              ||       *"<<endl;
    cout<<"             *       ||         |        for (int n=10; n>0; n--)                                    |                                                                              ||       *"<<endl;
    cout<<"             *       ||         |        {                                                           |                                                                              ||       *"<<endl;
    cout<<"             *       ||         |            cout << n << '','';                                     |                                                                              ||       *"<<endl;
    cout<<"             *       ||         |            if (n==3)                                               |                                                                              ||       *"<<endl;
    cout<<"             *       ||         |                {                                                   |                                                                              ||       *"<<endl;
    cout<<"             *       ||         |                    cout << ''countdown aborted!'';                 |                                                                              ||       *"<<endl;
    cout<<"             *       ||         |                    break;                                          |                                                                              ||       *"<<endl;
    cout<<"             *       ||         |                }                                                   |                                                                              ||       *"<<endl;
    cout<<"             *       ||         |        }                                                           |                                                                              ||       *"<<endl;
    cout<<"             *       ||         |    }                                                               |                                                                              ||       *"<<endl;
    cout<<"             *       ||         |____________________________________________________________________|                                                                              ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||      When the above code is compiled and executed, it produces the following result :                                                                       ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||         ______________________________________________________________________                                                                              ||       *"<<endl;
    cout<<"             *       ||        |                                                                      |                                                                             ||       *"<<endl;
    cout<<"             *       ||        |    10, 9, 8, 7, 6, 5, 4, 3, countdown aborted!                       |                                                                             ||       *"<<endl;
    cout<<"             *       ||        |______________________________________________________________________|                                                                             ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||    The Continue Statement :                                                                                                                                 ||       *"<<endl;
    cout<<"             *       ||    ------------------------                                                                                                                                 ||       *"<<endl;
    cout<<"             *       ||    The continue statement causes the program to skip the rest of the loop in the current iteration, as if the end of the statement block had been           ||       *"<<endl;
    cout<<"             *       ||    reached, causing it to jump to the start of the following iteration. For example, let's skip number 5 in our countdown:                                  ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||          ____________________________________________________________________                                                                               ||       *"<<endl;
    cout<<"             *       ||         |                                                                    |                                                                              ||       *"<<endl;
    cout<<"             *       ||         |    // continue loop example                                        |                                                                              ||       *"<<endl;
    cout<<"             *       ||         |    #include <iostream>                                             |                                                                              ||       *"<<endl;
    cout<<"             *       ||         |    using namespace std;                                            |                                                                              ||       *"<<endl;
    cout<<"             *       ||         |                                                                    |                                                                              ||       *"<<endl;
    cout<<"             *       ||         |    int main ()                                                     |                                                                              ||       *"<<endl;
    cout<<"             *       ||         |    {                                                               |                                                                              ||       *"<<endl;
    cout<<"             *       ||         |        for (int n=10; n>0; n--) {                                  |                                                                              ||       *"<<endl;
    cout<<"             *       ||         |         if (n==5); continue;                                       |                                                                              ||       *"<<endl;
    cout<<"             *       ||         |         cout << n << '', '';                                       |                                                                              ||       *"<<endl;
    cout<<"             *       ||         |          }                                                         |                                                                              ||       *"<<endl;
    cout<<"             *       ||         |        cout << ''liftoff!''<<endl;                                 |                                                                              ||       *"<<endl;
    cout<<"             *       ||         |     }                                                              |                                                                              ||       *"<<endl;
    cout<<"             *       ||         |____________________________________________________________________|                                                                              ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||      When the above code is compiled and executed, it produces the following result :                                                                       ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||         ______________________________________________________________________                                                                              ||       *"<<endl;
    cout<<"             *       ||        |                                                                      |                                                                             ||       *"<<endl;
    cout<<"             *       ||        |    10, 9, 8, 7, 6, 4, 3, 2, 1, liftoff!                              |                                                                             ||       *"<<endl;
    cout<<"             *       ||        |______________________________________________________________________|                                                                             ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       =================================================================================================================================================================       *"<<endl;
    cout<<"             *       |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||       *"<<endl;
    cout<<"             *       =================================================================================================================================================================       *"<<endl;
    cout<<"             *                                                                                                                                                                               * "<<endl;
    cout<<"             *                                                                                                                                                                               *"<<endl;
    cout<<"             *                                                                                                                                                                               *"<<endl;
    cout<<"             * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *"<<endl;
    cout<<endl<<endl<<endl;
    cout<<"             ================================================================================================================================================================================="<<endl;
    cout<<"             ||                                                                                                                                                                             ||"<<endl;
    cout<<"             ||      Do you want to see some problems related to this topic? (Press 'y/Y' for Yes || 'n/N' for No) :::    "; cin>>p;
    cout<<"             ||                                                                                                                                                                             ||";
    cout<<endl<<"             ================================================================================================================================================================================="<<endl<<endl;




    if(p= "y" || "Y" || "yes" || "YES" || "Yes" )
    {
        system("cls");
        system("color 70");//body for the problem show casing
        cout<<endl<<endl<<endl;

    cout<<"           ==>>  Write a C++ program to find the sum of positive numbers."<<endl<<endl<<endl<<endl;
    cout<<"              1.     #include <iostream>"<<endl;
    cout<<"              2.     using namespace std;"<<endl<<endl;
    cout<<"              3.     int main()"<<endl;
    cout<<"              4.     {"<<endl;
    cout<<"              5.         int number;"<<endl;
    cout<<"              6.         int sum = 0;"<<endl<<endl;
    cout<<"              7.         while (true) {"<<endl;
    cout<<"              8.                         // take input from the user"<<endl;
    cout<<"              9.         cout << '' Enter a number: '';"<<endl;
    cout<<"              10.        cin >> number;"<<endl<<endl;
    cout<<"              11.                       // break condition"<<endl<<endl;
    cout<<"              12.        if (number < 0) {"<<endl;
    cout<<"              13.            break;"<<endl;
    cout<<"              14.        }"<<endl;
    cout<<"              15.                      // add all positive numbers"<<endl<<endl;
    cout<<"              16.        sum += number;"<<endl;
    cout<<"              17.        }"<<endl;
    cout<<"              18.                     // display the sum"<<endl;
    cout<<"              19.        cout << '' The sum is '' << sum << endl;"<<endl<<endl;
    cout<<"              21.     return 0;"<<endl;
    cout<<"              22.     }"<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;

    system ("pause");
    }
    else
    {
        continue;
    }
        }
                                              ///********Break/Continue end******///







                                              ///********Arrays Start******///

        else if (inp=="15" || inp=="Arrays")
        {
            system("cls");
            system("color 70");

    cout<<endl<<endl<<endl;
    cout<<"             * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *"<<endl;
    cout<<"             *                                                                                                                                                                               * "<<endl;
    cout<<"             *                                                                                                                                                                               *"<<endl;
    cout<<"             *                                                                                                                                                                               *"<<endl;
    cout<<"             *       -----------------------------------------------------------------------------------------------------------------------------------------------------------------       *"<<endl;
    cout<<"             *       ||||||||||||||||||||||||||||||||||||||||| <= => @https://www.teamasnn.com/cplusplus/cpp_basic_arrays.htm. |||||||||||||||||||||||||||||||||||||||||||||||||||||||       *"<<endl;
    cout<<"             *       -----------------------------------------------------------------------------------------------------------------------------------------------------------------       *"<<endl;
    cout<<"             *       =================================================================================================================================================================       *"<<endl;
    cout<<"             *       ||           __________                        ||--------------------/\\                         /\\---------------------||                                      ||       *"<<endl;
    cout<<"             *       ||          [          ]                       ||-------------------/  \\                       /  \\--------------------||                                      ||       *"<<endl;
    cout<<"             *       ||          [ TeamASNN ]                       ||-------------------\\  /       TEAM ASNN       \\  /--------------------||                                      ||       *"<<endl;
    cout<<"             *       ||          [ LearnC++ ]                       ||--------------------\\/                         \\/---------------------||                                      ||       *"<<endl;
    cout<<"             *       ||          [__________]                       ||----------------------|||||||||||||||||||||||||-----------------------||                                      ||       *"<<endl;
    cout<<"             *       =================================================================================================================================================================       *"<<endl;
    cout<<"             *                                                                                                                                                                               *"<<endl;
    cout<<"             *                                                                                                                                                                               *"<<endl;
    cout<<"             *       =================================================================================================================================================================       *"<<endl;
    cout<<"             *       ||           ----------------------                              ***********************************                           ----------------------          ||       *"<<endl;
    cout<<"             *       ||           | << Previous page   |                              **             Arrays            **                           |     Next page  >>  |          ||       *"<<endl;
    cout<<"             *       ||           ----------------------                              ***********************************                           ----------------------          ||       *"<<endl;
    cout<<"             *       =================================================================================================================================================================       *"<<endl;
    cout<<"             *       |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||       *"<<endl;
    cout<<"             *       =================================================================================================================================================================       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||  C++ provides a data structure, the array, which stores a fixed-size sequential collection of elements of the same type.An array is used to store a         ||       *"<<endl;
    cout<<"             *       ||  collection of data, but it is often more useful to think of an array as a collection of variables of the same type.                                        ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||  Instead of declaring individual variables, such as number0, number1, ..., and number99, you declare one array variable such as numbers and use numbers[0], ||       *"<<endl;
    cout<<"             *       ||  numbers[1], and ..., numbers[99] to represent individual variables. A specific element in an array is accessed by an index.                                ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||  All arrays consist of contiguous memory locations. The lowest address corresponds to the first element and the highest address to the last element.        ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||               **Declaring Arrays                                                                                                                            ||       *"<<endl;
    cout<<"             *       ||  To declare an array in C++, the programmer specifies the type of the elements and the number of elements required by an array as follows -                 ||       *"<<endl;
    cout<<"             *       ||        type arrayName [ arraySize ];                                                                                                                        ||       *"<<endl;
    cout<<"             *       ||  This is called a single-dimension array. The arraySize must be an integer constant greater than zero and type can be any valid C++ data type.For example,to||       *"<<endl;
    cout<<"             *       ||  declare a 10-element array called balance of type double, use this statement -                                                                             ||       *"<<endl;
    cout<<"             *       ||        double balance[10];                                                                                                                                  ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||                **Initializing Arrays                                                                                                                        ||       *"<<endl;
    cout<<"             *       ||  You can initialize C++ array elements either one by one or using a single statement as follows -                                                           ||       *"<<endl;
    cout<<"             *       ||        double balance[5] = {1000.0, 2.0, 3.4, 17.0, 50.0};                                                                                                  ||       *"<<endl;
    cout<<"             *       ||  The number of values between braces { } can not be larger than the number of elements that we declare for the array between square brackets [ ].Following  ||       *"<<endl;
    cout<<"             *       ||  is an example to assign a single element of the array -                                                                                                    ||       *"<<endl;
    cout<<"             *       ||  If you omit the size of the array, an array just big enough to hold the initialization is created. Therefore, if you write -                               ||       *"<<endl;
    cout<<"             *       ||        double balance[] = {1000.0, 2.0, 3.4, 17.0, 50.0};                                                                                                   ||       *"<<endl;
    cout<<"             *       ||  You will create exactly the same array as you did in the previous example.                                                                                 ||       *"<<endl;
    cout<<"             *       ||        balance[4] = 50.0;                                                                                                                                   ||       *"<<endl;
    cout<<"             *       ||  The above statement assigns element number 5th in the array a value of 50.0. Array with 4th index will be 5th, i.e., last element because all arrays have  ||       *"<<endl;
    cout<<"             *       ||   0 as the index of their first element which is also called base index. Following is the pictorial representaion of the same array we discussed above -    ||       *"<<endl;
    cout<<"             *       ||                     0         1         2        3       4                                                                                                  ||       *"<<endl;
    cout<<"             *       ||               |----------|--------|--------|--------|--------|                                                                                              ||       *"<<endl;
    cout<<"             *       ||       balance |  1000.0  |  2.0   |  3.4   |  7.0   |  50.0  |                                                                                              ||       *"<<endl;
    cout<<"             *       ||               |----------|--------|--------|--------|--------|                                                                                              ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||               **Accessing Array Elements                                                                                                                    ||       *"<<endl;
    cout<<"             *       ||  An element is accessed by indexing the array name. This is done by placing the index of the element within square brackets after the name of the array.    ||       *"<<endl;
    cout<<"             *       ||  For example -                                                                                                                                              ||       *"<<endl;
    cout<<"             *       ||          double salary = balance[9];                                                                                                                        ||       *"<<endl;
    cout<<"             *       ||  The above statement will take 10th element from the array and assign the value to salary variable. Following is an example, which will use all the         ||       *"<<endl;
    cout<<"             *       ||  above-mentioned three concepts viz. declaration, assignment and accessing arrays -                                                                         ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||               |------------------------------------------------------------------------|                                                                    ||       *"<<endl;
    cout<<"             *       ||               |  #include <iostream>                                                   |                                                                    ||       *"<<endl;
    cout<<"             *       ||               |  using namespace std;                                                  |                                                                    ||       *"<<endl;
    cout<<"             *       ||               |  #include <iomanip>                                                    |                                                                    ||       *"<<endl;
    cout<<"             *       ||               |  using std::setw;                                                      |                                                                    ||       *"<<endl;
    cout<<"             *       ||               |                                                                        |                                                                    ||       *"<<endl;
    cout<<"             *       ||               |  int main(){                                                           |                                                                    ||       *"<<endl;
    cout<<"             *       ||               |      int n[ 10 ]; // n is an array of 10 integers                      |                                                                    ||       *"<<endl;
    cout<<"             *       ||               |      // initialize elements of array n to 0                            |                                                                    ||       *"<<endl;
    cout<<"             *       ||               |      for ( int i = 0; i < 10; i++ ) {                                  |                                                                    ||       *"<<endl;
    cout<<"             *       ||               |         n[ i ] = i + 100; // set element at location i to i + 100      |                                                                    ||       *"<<endl;
    cout<<"             *       ||               |      }                                                                 |                                                                    ||       *"<<endl;
    cout<<"             *       ||               |      cout << Element << setw( 13 ) << Value << endl;                   |                                                                    ||       *"<<endl;
    cout<<"             *       ||               |                                                                        |                                                                    ||       *"<<endl;
    cout<<"             *       ||               |      // output each array element's value                              |                                                                    ||       *"<<endl;
    cout<<"             *       ||               |      for ( int j = 0; j < 10; j++ ) {                                  |                                                                    ||       *"<<endl;
    cout<<"             *       ||               |         cout << setw( 7 )<< j << setw( 13 ) << n[ j ] << endl;         |                                                                    ||       *"<<endl;
    cout<<"             *       ||               |      }                                                                 |                                                                    ||       *"<<endl;
    cout<<"             *       ||               |      return 0;                                                         |                                                                    ||       *"<<endl;
    cout<<"             *       ||               |       }                                                                |                                                                    ||       *"<<endl;
    cout<<"             *       ||               |------------------------------------------------------------------------|                                                                    ||       *"<<endl;
    cout<<"             *       ||   This program makes use of setw() function to format the output. When the above code is compiled and executed, it produces the following result -          ||       *"<<endl;
    cout<<"             *       ||                       |----------------------------|-----------------------------|                                                                          ||       *"<<endl;
    cout<<"             *       ||                       |           Element          |           Value             |                                                                          ||       *"<<endl;
    cout<<"             *       ||                       |----------------------------|-----------------------------|                                                                          ||       *"<<endl;
    cout<<"             *       ||                       |              0             |             100             |                                                                          ||       *"<<endl;
    cout<<"             *       ||                       |----------------------------|-----------------------------|                                                                          ||       *"<<endl;
    cout<<"             *       ||                       |              1             |             101             |                                                                          ||       *"<<endl;
    cout<<"             *       ||                       |----------------------------|-----------------------------|                                                                          ||       *"<<endl;
    cout<<"             *       ||                       |              2             |             102             |                                                                          ||       *"<<endl;
    cout<<"             *       ||                       |----------------------------|-----------------------------|                                                                          ||       *"<<endl;
    cout<<"             *       ||                       |              3             |             103             |                                                                          ||       *"<<endl;
    cout<<"             *       ||                       |----------------------------|-----------------------------|                                                                          ||       *"<<endl;
    cout<<"             *       ||                       |              4             |             104             |                                                                          ||       *"<<endl;
    cout<<"             *       ||                       |----------------------------|-----------------------------|                                                                          ||       *"<<endl;
    cout<<"             *       ||                       |              5             |             105             |                                                                          ||       *"<<endl;
    cout<<"             *       ||                       |----------------------------|-----------------------------|                                                                          ||       *"<<endl;
    cout<<"             *       ||                       |              6             |             106             |                                                                          ||       *"<<endl;
    cout<<"             *       ||                       |----------------------------|-----------------------------|                                                                          ||       *"<<endl;
    cout<<"             *       ||                       |              7             |             107             |                                                                          ||       *"<<endl;
    cout<<"             *       ||                       |----------------------------|-----------------------------|                                                                          ||       *"<<endl;
    cout<<"             *       ||                       |              8             |             108             |                                                                          ||       *"<<endl;
    cout<<"             *       ||                       |----------------------------|-----------------------------|                                                                          ||       *"<<endl;
    cout<<"             *       ||                       |              9             |             109             |                                                                          ||       *"<<endl;
    cout<<"             *       ||                       |----------------------------|-----------------------------|                                                                          ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||               **Arrays in C++                                                                                                                               ||       *"<<endl;
    cout<<"             *       ||   Arrays are important to C++ and should need lots of more detail. There are following few important concepts, which should be clear to a C++ programmer -  ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||               |---------|----------------------------------------------------------------------------------------------------------------------|            ||       *"<<endl;
    cout<<"             *       ||               |  Sr.No  |                            Concept & Description                                                                     |            ||       *"<<endl;
    cout<<"             *       ||               |---------|----------------------------------------------------------------------------------------------------------------------|            ||       *"<<endl;
    cout<<"             *       ||               |    1    |   -Multi-dimensional arrays                                                                                          |            ||       *"<<endl;
    cout<<"             *       ||               |         | C++ supports multidimensional arrays. The simplest form of the multidimensional array is the two-dimensional array.  |            ||       *"<<endl;
    cout<<"             *       ||               |---------|----------------------------------------------------------------------------------------------------------------------|            ||       *"<<endl;
    cout<<"             *       ||               |    2    |    -Pointer to an arrays                                                                                             |            ||       *"<<endl;
    cout<<"             *       ||               |         | C++ supports multidimensional arrays. The simplest form of the multidimensional array is the two-dimensional array.  |            ||       *"<<endl;
    cout<<"             *       ||               |---------|----------------------------------------------------------------------------------------------------------------------|            ||       *"<<endl;
    cout<<"             *       ||               |    3    |    -Passing arrays to functions                                                                                      |            ||       *"<<endl;
    cout<<"             *       ||               |         | You can pass to the function a pointer to an array by specifying the array's name without an index.                  |            ||       *"<<endl;
    cout<<"             *       ||               |---------|----------------------------------------------------------------------------------------------------------------------|            ||       *"<<endl;
    cout<<"             *       ||               |    4    |    -Return array from functions                                                                                      |            ||       *"<<endl;
    cout<<"             *       ||               |         | C++ allows a function to return an array.                                                                            |            ||       *"<<endl;
    cout<<"             *       ||               |---------|----------------------------------------------------------------------------------------------------------------------|            ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       =================================================================================================================================================================       *"<<endl;
    cout<<"             *       |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||       *"<<endl;
    cout<<"             *       =================================================================================================================================================================       *"<<endl;
    cout<<"             *                                                                                                                                                                               * "<<endl;
    cout<<"             *                                                                                                                                                                               *"<<endl;
    cout<<"             *                                                                                                                                                                               *"<<endl;
    cout<<"             * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *"<<endl;
    cout<<endl<<endl<<endl;
    cout<<"             ================================================================================================================================================================================="<<endl;
    cout<<"             ||                                                                                                                                                                             ||"<<endl;
    cout<<"             ||      Do you want to see some problems related to this topic? (Press 'y/Y' for Yes || 'n/N' for No) :::    "; cin>>p;
    cout<<"             ||                                                                                                                                                                             ||";
    cout<<endl<<"             ================================================================================================================================================================================="<<endl<<endl;





    if(p= "y" || "Y" || "yes" || "YES" || "Yes" )
    {
        system("cls");
        system("color 70");
        cout<<endl<<endl<<endl;

    cout<<"           ==>>  write a C++ program which Take Inputs from User and Store Them in array."<<endl<<endl<<endl<<endl;
    cout<<"              1.     #include <iostream>"<<endl;
    cout<<"              2.     using namespace std;"<<endl<<endl;
    cout<<"              3.     int main()"<<endl;
    cout<<"              4.     {"<<endl;
    cout<<"              5.         int numbers[5];"<<endl;
    cout<<"              6.         cout <<endl<< ''  Enter 5 numbers:  '' << endl;"<<endl<<endl;
    cout<<"              7.                                        //  store input from user to array"<<endl<<endl;
    cout<<"              8.         for (int i = 0; i < 5; ++i) {"<<endl;
    cout<<"              9.         cin >> numbers[i];"<<endl;
    cout<<"              10.                                    }"<<endl<<endl;
    cout<<"              11.        cout << ''  The numbers are: '';"<<endl<<endl;
    cout<<"              12.                                       //  print array elements"<<endl<<endl;
    cout<<"              13.        for (int n = 0; n < 5; ++n) {"<<endl;
    cout<<"              14.        cout << numbers[n] <<''   '';"<<endl;
    cout<<"              15.                                    }"<<endl<<endl;
    cout<<"              16.    return 0;"<<endl;
    cout<<"              17.    }"<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;

     system("pause");
    }


    else
    {
        continue;
    }
        }
                                              ///********Arrays end******///







                                              ///********References Start******///

        else if (inp=="16" || inp=="references" || inp=="References")
        {
            system("cls");
            system("color 70");

    cout<<endl<<endl<<endl;
    cout<<"             * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *"<<endl;
    cout<<"             *                                                                                                                                                                               * "<<endl;
    cout<<"             *                                                                                                                                                                               *"<<endl;
    cout<<"             *                                                                                                                                                                               *"<<endl;
    cout<<"             *       -----------------------------------------------------------------------------------------------------------------------------------------------------------------       *"<<endl;
    cout<<"             *       ||||||||||||||||||||||||||||||||||||||||| <= => @https://www.teamasnn.com/cplusplus/cpp_basic_reference.htm. ||||||||||||||||||||||||||||||||||||||||||||||||||||       *"<<endl;
    cout<<"             *       -----------------------------------------------------------------------------------------------------------------------------------------------------------------       *"<<endl;
    cout<<"             *       =================================================================================================================================================================       *"<<endl;
    cout<<"             *       ||           __________                        ||--------------------/\\                         /\\---------------------||                                      ||       *"<<endl;
    cout<<"             *       ||          [          ]                       ||-------------------/  \\                       /  \\--------------------||                                      ||       *"<<endl;
    cout<<"             *       ||          [ TeamASNN ]                       ||-------------------\\  /       TEAM ASNN       \\  /--------------------||                                      ||       *"<<endl;
    cout<<"             *       ||          [ LearnC++ ]                       ||--------------------\\/                         \\/---------------------||                                      ||       *"<<endl;
    cout<<"             *       ||          [__________]                       ||----------------------|||||||||||||||||||||||||-----------------------||                                      ||       *"<<endl;
    cout<<"             *       =================================================================================================================================================================       *"<<endl;
    cout<<"             *                                                                                                                                                                               *"<<endl;
    cout<<"             *                                                                                                                                                                               *"<<endl;
    cout<<"             *       =================================================================================================================================================================       *"<<endl;
    cout<<"             *       ||           ----------------------                              ***********************************                           ----------------------          ||       *"<<endl;
    cout<<"             *       ||           | << Previous page   |                              **            Reference          **                           |     Next page  >>  |          ||       *"<<endl;
    cout<<"             *       ||           ----------------------                              ***********************************                           ----------------------          ||       *"<<endl;
    cout<<"             *       =================================================================================================================================================================       *"<<endl;
    cout<<"             *       |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||       *"<<endl;
    cout<<"             *       =================================================================================================================================================================       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||    References :                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||   -----------                                                                                                                                               ||       *"<<endl;
    cout<<"             *       ||    Standard C++ Library reference                                                                                                                           ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||    C Library :                                                                                                                                              ||       *"<<endl;
    cout<<"             *       ||   -----------                                                                                                                                               ||       *"<<endl;
    cout<<"             *       ||    The elements of the C language library are also included as a subset of the C++ Standard library. These cover many aspects,from general utility          ||       *"<<endl;
    cout<<"             *       ||    functions and macros to input/output functions and dynamic memory management functions:                                                                  ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||     ____________________________________________________________________________________________________________________________________________            ||       *"<<endl;
    cout<<"             *       ||    |                                     |                                                                                                      |           ||       *"<<endl;
    cout<<"             *       ||    |   <cassert> (assert.h)              |     C Diagnostics Library (header)                                                                   |           ||       *"<<endl;
    cout<<"             *       ||    |_____________________________________|______________________________________________________________________________________________________|           ||       *"<<endl;
    cout<<"             *       ||    |                                     |                                                                                                      |           ||       *"<<endl;
    cout<<"             *       ||    |   <cinttypes> (inttypes.h)          |     C integer types (header)                                                                         |           ||       *"<<endl;
    cout<<"             *       ||    |_____________________________________|______________________________________________________________________________________________________|           ||       *"<<endl;
    cout<<"             *       ||    |                                     |                                                                                                      |           ||       *"<<endl;
    cout<<"             *       ||    |   <cctype> (ctype.h)                |     Character handling functions (header)                                                            |           ||       *"<<endl;
    cout<<"             *       ||    |_____________________________________|______________________________________________________________________________________________________|           ||       *"<<endl;
    cout<<"             *       ||    |                                     |                                                                                                      |           ||       *"<<endl;
    cout<<"             *       ||    |   <cerrno> (errno.h)                |      C Errors (header)                                                                               |           ||       *"<<endl;
    cout<<"             *       ||    |_____________________________________|______________________________________________________________________________________________________|           ||       *"<<endl;
    cout<<"             *       ||    |                                     |                                                                                                      |           ||       *"<<endl;
    cout<<"             *       ||    |   <cfenv> (fenv.h)                  |      Floating-point environment (header)                                                             |           ||       *"<<endl;
    cout<<"             *       ||    |_____________________________________|______________________________________________________________________________________________________|           ||       *"<<endl;
    cout<<"             *       ||    |                                     |                                                                                                      |           ||       *"<<endl;
    cout<<"             *       ||    |   <cfloat> (float.h)                |      Characteristics of floating-point types (header)                                                |           ||       *"<<endl;
    cout<<"             *       ||    |_____________________________________|______________________________________________________________________________________________________|           ||       *"<<endl;
    cout<<"             *       ||    |                                     |                                                                                                      |           ||       *"<<endl;
    cout<<"             *       ||    |   <ciso646> (iso646.h)              |      ISO 646 Alternative operator spellings (header)                                                 |           ||       *"<<endl;
    cout<<"             *       ||    |_____________________________________|______________________________________________________________________________________________________|           ||       *"<<endl;
    cout<<"             *       ||    |                                     |                                                                                                      |           ||       *"<<endl;
    cout<<"             *       ||    |   <climits> (limits.h)              |      Sizes of integral types (header)                                                                |           ||       *"<<endl;
    cout<<"             *       ||    |_____________________________________|______________________________________________________________________________________________________|           ||       *"<<endl;
    cout<<"             *       ||    |                                     |                                                                                                      |           ||       *"<<endl;
    cout<<"             *       ||    |   <clocale> (locale.h)              |      C localization library (header)                                                                 |           ||       *"<<endl;
    cout<<"             *       ||    |_____________________________________|______________________________________________________________________________________________________|           ||       *"<<endl;
    cout<<"             *       ||    |                                     |                                                                                                      |           ||       *"<<endl;
    cout<<"             *       ||    |   <cmath> (math.h)                  |      C numerics library (header)                                                                     |           ||       *"<<endl;
    cout<<"             *       ||    |_____________________________________|______________________________________________________________________________________________________|           ||       *"<<endl;
    cout<<"             *       ||    |                                     |                                                                                                      |           ||       *"<<endl;
    cout<<"             *       ||    |  <cstdbool> (stdbool.h)             |      Boolean type (header)                                                                           |           ||       *"<<endl;
    cout<<"             *       ||    |_____________________________________|______________________________________________________________________________________________________|           ||       *"<<endl;
    cout<<"             *       ||    |                                     |                                                                                                      |           ||       *"<<endl;
    cout<<"             *       ||    |   <cstdint> (stdint.h)              |      Integer types (header)                                                                          |           ||       *"<<endl;
    cout<<"             *       ||    |_____________________________________|______________________________________________________________________________________________________|           ||       *"<<endl;
    cout<<"             *       ||    |                                     |                                                                                                      |           ||       *"<<endl;
    cout<<"             *       ||    |    <cstdio> (stdio.h)               |      C library to perform Input/Output operations (header)                                           |           ||       *"<<endl;
    cout<<"             *       ||    |_____________________________________|______________________________________________________________________________________________________|           ||       *"<<endl;
    cout<<"             *       ||    |                                     |                                                                                                      |           ||       *"<<endl;
    cout<<"             *       ||    |    <cstdlib> (stdlib.h)             |       C Standard General Utilities Library (header)                                                  |           ||       *"<<endl;
    cout<<"             *       ||    |_____________________________________|______________________________________________________________________________________________________|           ||       *"<<endl;
    cout<<"             *       ||    |                                     |                                                                                                      |           ||       *"<<endl;
    cout<<"             *       ||    |    <ctgmath> (tgmath.h)             |      Type-generic math (header)                                                                      |           ||       *"<<endl;
    cout<<"             *       ||    |_____________________________________|______________________________________________________________________________________________________|           ||       *"<<endl;
    cout<<"             *       ||    |                                     |                                                                                                      |           ||       *"<<endl;
    cout<<"             *       ||    |    <ctime> (time.h)                 |      C Time Library (header)                                                                         |           ||       *"<<endl;
    cout<<"             *       ||    |_____________________________________|______________________________________________________________________________________________________|           ||       *"<<endl;
    cout<<"             *       ||    |                                     |                                                                                                      |           ||       *"<<endl;
    cout<<"             *       ||    |    <cwctype> (wctype.h)             |      Wide character type (header)                                                                    |           ||       *"<<endl;
    cout<<"             *       ||    |_____________________________________|______________________________________________________________________________________________________|           ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       =================================================================================================================================================================       *"<<endl;
    cout<<"             *       |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||       *"<<endl;
    cout<<"             *       =================================================================================================================================================================       *"<<endl;
    cout<<"             *                                                                                                                                                                               * "<<endl;
    cout<<"             *                                                                                                                                                                               *"<<endl;
    cout<<"             *                                                                                                                                                                               *"<<endl;
    cout<<"             * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *"<<endl;

    cout<<endl<<endl<<endl;
    system("pause");


        }
                                              ///********References end******///







                                              ///********Pointers Start******///

        else if (inp=="17" || inp=="pointers" || inp=="Pointers")
        {
            system("cls");
            system("color 70");

    cout<<endl<<endl<<endl;
    cout<<"             * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *"<<endl;
    cout<<"             *                                                                                                                                                                               * "<<endl;
    cout<<"             *                                                                                                                                                                               *"<<endl;
    cout<<"             *                                                                                                                                                                               *"<<endl;
    cout<<"             *       -----------------------------------------------------------------------------------------------------------------------------------------------------------------       *"<<endl;
    cout<<"             *       ||||||||||||||||||||||||||||||||||||||||| <= => @https://www.teamasnn.com/cplusplus/cpp_basic_pointers.htm. |||||||||||||||||||||||||||||||||||||||||||||||||||||       *"<<endl;
    cout<<"             *       -----------------------------------------------------------------------------------------------------------------------------------------------------------------       *"<<endl;
    cout<<"             *       =================================================================================================================================================================       *"<<endl;
    cout<<"             *       ||           __________                        ||--------------------/\\                         /\\---------------------||                                      ||       *"<<endl;
    cout<<"             *       ||          [          ]                       ||-------------------/  \\                       /  \\--------------------||                                      ||       *"<<endl;
    cout<<"             *       ||          [ TeamASNN ]                       ||-------------------\\  /       TEAM ASNN       \\  /--------------------||                                      ||       *"<<endl;
    cout<<"             *       ||          [ LearnC++ ]                       ||--------------------\\/                         \\/---------------------||                                      ||       *"<<endl;
    cout<<"             *       ||          [__________]                       ||----------------------|||||||||||||||||||||||||-----------------------||                                      ||       *"<<endl;
    cout<<"             *       =================================================================================================================================================================       *"<<endl;
    cout<<"             *                                                                                                                                                                               *"<<endl;
    cout<<"             *                                                                                                                                                                               *"<<endl;
    cout<<"             *       =================================================================================================================================================================       *"<<endl;
    cout<<"             *       ||           ----------------------                              ***********************************                           ----------------------          ||       *"<<endl;
    cout<<"             *       ||           | << Previous page   |                              **           Pointers            **                           |     Next page  >>  |          ||       *"<<endl;
    cout<<"             *       ||           ----------------------                              ***********************************                           ----------------------          ||       *"<<endl;
    cout<<"             *       =================================================================================================================================================================       *"<<endl;
    cout<<"             *       |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||       *"<<endl;
    cout<<"             *       =================================================================================================================================================================       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||    Pointers :                                                                                                                                               ||       *"<<endl;
    cout<<"             *       ||    ---------                                                                                                                                                ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||    Pointers in C are easy and fun to learn. Some C programming tasks are performed more easily with pointers, and other tasks, such as dynamic memory       ||       *"<<endl;
    cout<<"             *       ||    allocation, cannot be performed without using pointers. So it becomes necessary to learn pointers to become a perfect C programmer. Let's start learning ||       *"<<endl;
    cout<<"             *       ||    them in simple and easy steps.                                                                                                                           ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||    As you know, every variable is a memory location and every memory location has its address defined which can be accessed using ampersand (&) operator,   ||       *"<<endl;
    cout<<"             *       ||    which denotes an address in memory. Consider the following example, which prints the address of the variables defined :                                  ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||          ______________________________________________________________________________                                                                     ||       *"<<endl;
    cout<<"             *       ||         |                                                                              |                                                                    ||       *"<<endl;
    cout<<"             *       ||         |     #include <stdio.h>                                                       |                                                                    ||       *"<<endl;
    cout<<"             *       ||         |                                                                              |                                                                    ||       *"<<endl;
    cout<<"             *       ||         |     int main () {                                                            |                                                                    ||       *"<<endl;
    cout<<"             *       ||         |     int  var1;                                                               |                                                                    ||       *"<<endl;
    cout<<"             *       ||         |     char var2[10];                                                           |                                                                    ||       *"<<endl;
    cout<<"             *       ||         |                                                                              |                                                                    ||       *"<<endl;
    cout<<"             *       ||         |     cout<<''Address of var1 variable: ''<< &var1 <<endl;                     |                                                                    ||       *"<<endl;
    cout<<"             *       ||         |     cout<<''Address of var2 variable: ''<< &var2 <<endl;                     |                                                                    ||       *"<<endl;
    cout<<"             *       ||         |                                                                              |                                                                    ||       *"<<endl;
    cout<<"             *       ||         |     return 0;                                                                |                                                                    ||       *"<<endl;
    cout<<"             *       ||         |       }                                                                      |                                                                    ||       *"<<endl;
    cout<<"             *       ||         |______________________________________________________________________________|                                                                    ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||     When the above code is compiled and executed, it produces the following result :                                                                        ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||          ______________________________________________________________________________                                                                     ||       *"<<endl;
    cout<<"             *       ||         |                                                                              |                                                                    ||       *"<<endl;
    cout<<"             *       ||         |     Address of var1 variable: bff5a400                                       |                                                                    ||       *"<<endl;
    cout<<"             *       ||         |     Address of var2 variable: bff5a3f6                                       |                                                                    ||       *"<<endl;
    cout<<"             *       ||         |______________________________________________________________________________|                                                                    ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||     What are Pointers?                                                                                                                                      ||       *"<<endl;
    cout<<"             *       ||    -------------------                                                                                                                                      ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||     A pointer is a variable whose value is the address of another variable, i.e., direct address of the memory location. Like any variable or constant,     ||       *"<<endl;
    cout<<"             *       ||     you must declare a pointer before using it to store any variable address. The general form of a pointer variable declaration is :                       ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||          ___________________________________                                                                                                                ||       *"<<endl;
    cout<<"             *       ||         |                                   |                                                                                                               ||       *"<<endl;
    cout<<"             *       ||         |     type *var-name;               |                                                                                                               ||       *"<<endl;
    cout<<"             *       ||         |___________________________________|                                                                                                               ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||     Here, type is the pointer's base type; it must be a valid C data type and var-name is the name of the pointer variable. The asterisk * used to declare  ||       *"<<endl;
    cout<<"             *       ||     a pointer is the same asterisk used for multiplication. However, in this statement the asterisk is being used to designate a variable as a pointer.     ||       *"<<endl;
    cout<<"             *       ||     Take a look at some of the valid pointer declarations :                                                                                                 ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||           ______________________________________________________________________________                                                                    ||       *"<<endl;
    cout<<"             *       ||          |                                                                              |                                                                   ||       *"<<endl;
    cout<<"             *       ||          |    int    *ip;    /* pointer to an integer */                                |                                                                   ||       *"<<endl;
    cout<<"             *       ||          |    double *dp;    /* pointer to a double */                                  |                                                                   ||       *"<<endl;
    cout<<"             *       ||          |    float  *fp;    /* pointer to a float */                                   |                                                                   ||       *"<<endl;
    cout<<"             *       ||          |    char   *ch     /* pointer to a character */                               |                                                                   ||       *"<<endl;
    cout<<"             *       ||          |______________________________________________________________________________|                                                                   ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||    The actual data type of the value of all pointers, whether integer, float, character, or otherwise, is the same, a long hexadecimal number that          ||       *"<<endl;
    cout<<"             *       ||    represents a memory address. The only difference between pointers of different data types is the data type of the variable or constant that the          ||       *"<<endl;
    cout<<"             *       ||    pointer points to.                                                                                                                                       ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||   How to Use Pointers?                                                                                                                                      ||       *"<<endl;
    cout<<"             *       ||   --------------------                                                                                                                                      ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||   There are a few important operations, which we will do with the help of pointers very frequently.(a) We define a pointer variable, (b)assign the address  ||       *"<<endl;
    cout<<"             *       ||   of a variable to a pointer and (c) finally access the value at the address available in the pointer variable. This is done by using unary operator * that ||       *"<<endl;
    cout<<"             *       ||   returns the value of the variable located at the address specified by its operand. The following example makes use of these operations :                  ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||           ______________________________________________________________________________                                                                    ||       *"<<endl;
    cout<<"             *       ||          |                                                                              |                                                                   ||       *"<<endl;
    cout<<"             *       ||          |   #include <stdio.h>                                                         |                                                                   ||       *"<<endl;
    cout<<"             *       ||          |   int main () {                                                              |                                                                   ||       *"<<endl;
    cout<<"             *       ||          |                                                                              |                                                                   ||       *"<<endl;
    cout<<"             *       ||          |      int  var = 20;   /* actual variable declaration */                      |                                                                   ||       *"<<endl;
    cout<<"             *       ||          |      int  *ip;        /* pointer variable declaration */                     |                                                                   ||       *"<<endl;
    cout<<"             *       ||          |                                                                              |                                                                   ||       *"<<endl;
    cout<<"             *       ||          |      ip = &var;  /* store address of var in pointer variable*/               |                                                                   ||       *"<<endl;
    cout<<"             *       ||          |      cout<<''Address of var variable: ''<< &var<<endl;                       |                                                                   ||       *"<<endl;
    cout<<"             *       ||          |      /* address stored in pointer variable */                                |                                                                   ||       *"<<endl;
    cout<<"             *       ||          |      COT<<''Address stored in ip variable: ''<< ip <<endl;                   |                                                                   ||       *"<<endl;
    cout<<"             *       ||          |      /* access the value using the pointer */                                |                                                                   ||       *"<<endl;
    cout<<"             *       ||          |      cout<<''Value of *ip variable: ''<< *ip <<endl;                         |                                                                   ||       *"<<endl;
    cout<<"             *       ||          |      return 0; }                                                             |                                                                   ||       *"<<endl;
    cout<<"             *       ||          |______________________________________________________________________________|                                                                   ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||      When the above code is compiled and executed, it produces the following result :                                                                       ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||          ______________________________________________________________________________                                                                     ||       *"<<endl;
    cout<<"             *       ||         |                                                                              |                                                                    ||       *"<<endl;
    cout<<"             *       ||         |    Address of var variable: bffd8b3c                                         |                                                                    ||       *"<<endl;
    cout<<"             *       ||         |    Address stored in ip variable: bffd8b3c                                   |                                                                    ||       *"<<endl;
    cout<<"             *       ||         |    Value of *ip variable: 20                                                 |                                                                    ||       *"<<endl;
    cout<<"             *       ||         |______________________________________________________________________________|                                                                    ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||      NULL Pointers :                                                                                                                                        ||       *"<<endl;
    cout<<"             *       ||    ----------------                                                                                                                                         ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||      It is always a good practice to assign a NULL value to a pointer variable in case you do not have an exact address to be assigned.                     ||       *"<<endl;
    cout<<"             *       ||      This is done at the time of variable declaration. A pointer that is assigned NULL is called a null pointer.                                            ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       =================================================================================================================================================================       *"<<endl;
    cout<<"             *       |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||       *"<<endl;
    cout<<"             *       =================================================================================================================================================================       *"<<endl;
    cout<<"             *                                                                                                                                                                               * "<<endl;
    cout<<"             *                                                                                                                                                                               *"<<endl;
    cout<<"             *                                                                                                                                                                               *"<<endl;
    cout<<"             * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *"<<endl;

    cout<<endl<<endl<<endl;
    cout<<"             ================================================================================================================================================================================="<<endl;
    cout<<"             ||                                                                                                                                                                             ||"<<endl;
    cout<<"             ||      Do you want to see some problems related to this topic? (Press 'y/Y' for Yes || 'n/N' for No) :::    "; cin>>p;
    cout<<"             ||                                                                                                                                                                             ||";
    cout<<endl<<"             ================================================================================================================================================================================="<<endl<<endl;




    if(p= "y" || "Y" || "yes" || "YES" || "Yes" )
    {
       system("cls");
       system("color 70"); //body for the problem show casing
       cout<<endl<<endl<<endl;

    cout<<"           ==>>   Write a C++ program which Printing Variable Addresses ."<<endl<<endl<<endl<<endl;
    cout<<"              1.     #include <iostream>"<<endl;
    cout<<"              2.     using namespace std;"<<endl<<endl;
    cout<<"              3.     int main()"<<endl;
    cout<<"              4.     {"<<endl;
    cout<<"              5.         int var1 = 3;"<<endl;
    cout<<"              6.         int var2 = 24;"<<endl;
    cout<<"              7.         int var3 = 17;"<<endl<<endl;
    cout<<"              8.                        // print address of var1"<<endl;
    cout<<"              9.         cout <<'' Address of var1: ''<< &var1 << endl;"<<endl<<endl;
    cout<<"              10.                      // print address of var2"<<endl;
    cout<<"              11.        cout <<'' Address of var2: ''<< &var2 << endl;"<<endl<<endl;
    cout<<"              12.                      // print address of var3"<<endl;
    cout<<"              13.        cout <<'' Address of var3: '' << &var3 << endl;"<<endl<<endl;
    cout<<"              16.    return 0;"<<endl;
    cout<<"              17.    }"<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
    system("pause");
    }
    else
    {
        continue;
    }

        }
                                              ///********Pointers end******///







                                              ///********Functions Start******///

        else if (inp=="18" || inp=="functions" || inp=="Functions")
        {
            system("cls");
            system("color 70");

    cout<<endl<<endl<<endl;
    cout<<"             * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *"<<endl;
    cout<<"             *                                                                                                                                                                               * "<<endl;
    cout<<"             *                                                                                                                                                                               *"<<endl;
    cout<<"             *                                                                                                                                                                               *"<<endl;
    cout<<"             *       -----------------------------------------------------------------------------------------------------------------------------------------------------------------       *"<<endl;
    cout<<"             *       ||||||||||||||||||||||||||||||||||||||||| <= => @https://www.teamasnn.com/cplusplus/cpp_functions.htm. ||||||||||||||||||||||||||||||||||||||||||||||||||||||||||       *"<<endl;
    cout<<"             *       -----------------------------------------------------------------------------------------------------------------------------------------------------------------       *"<<endl;
    cout<<"             *       =================================================================================================================================================================       *"<<endl;
    cout<<"             *       ||           __________                        ||--------------------/\\                         /\\---------------------||                                      ||       *"<<endl;
    cout<<"             *       ||          [          ]                       ||-------------------/  \\                       /  \\--------------------||                                      ||       *"<<endl;
    cout<<"             *       ||          [ TeamASNN ]                       ||-------------------\\  /       TEAM ASNN       \\  /--------------------||                                      ||       *"<<endl;
    cout<<"             *       ||          [ LearnC++ ]                       ||--------------------\\/                         \\/---------------------||                                      ||       *"<<endl;
    cout<<"             *       ||          [__________]                       ||----------------------|||||||||||||||||||||||||-----------------------||                                      ||       *"<<endl;
    cout<<"             *       =================================================================================================================================================================       *"<<endl;
    cout<<"             *                                                                                                                                                                               *"<<endl;
    cout<<"             *                                                                                                                                                                               *"<<endl;
    cout<<"             *       =================================================================================================================================================================       *"<<endl;
    cout<<"             *       ||           ----------------------                              ***********************************                           ----------------------          ||       *"<<endl;
    cout<<"             *       ||           | << Previous page   |                              **            Functions          **                           |     Next page  >>  |          ||       *"<<endl;
    cout<<"             *       ||           ----------------------                              ***********************************                           ----------------------          ||       *"<<endl;
    cout<<"             *       =================================================================================================================================================================       *"<<endl;
    cout<<"             *       |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||       *"<<endl;
    cout<<"             *       =================================================================================================================================================================       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||  A function is a group of statements that together perform a task. Every C++ program has at                                                                 ||       *"<<endl;
    cout<<"             *       ||  least one function, which is main(), and all the most trivial programs can define additional                                                               ||       *"<<endl;
    cout<<"             *       ||  functions.                                                                                                                                                 ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||  You can divide up your code into separate functions. How you divide up your code among                                                                     ||       *"<<endl;
    cout<<"             *       ||  different functions is up to you, but logically the division usually is such that each function                                                            ||       *"<<endl;
    cout<<"             *       ||  performs a specific task.                                                                                                                                  ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||  A function declaration tells the compiler about a function's name, return type, and                                                                        ||       *"<<endl;
    cout<<"             *       ||  parameters. A function definition provides the actual body of the function.                                                                                ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||  The C++ standard library provides numerous built-in functions that your program can call.                                                                  ||       *"<<endl;
    cout<<"             *       ||  For example, function strcat() to concatenate two strings, function memcpy() to copy one                                                                   ||       *"<<endl;
    cout<<"             *       ||  memory location to another location and many more functions.                                                                                               ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||  A function is known with various names like a method or a sub-routine or a procedure etc.                                                                  ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||  Defining a Function                                                                                                                                        ||       *"<<endl;
    cout<<"             *       ||  The general form of a C++ function definition is as follows                                                                                                ||       *"<<endl;
    cout<<"             *       ||  -------------------------------------------------                                                                                                          ||       *"<<endl;
    cout<<"             *       ||  | return_type function_name( parameter list ) { |                                                                                                          ||       *"<<endl;
    cout<<"             *       ||  |   body of the function                        |                                                                                                          ||       *"<<endl;
    cout<<"             *       ||  |   }                                           |                                                                                                          ||       *"<<endl;
    cout<<"             *       ||  -------------------------------------------------                                                                                                          ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||  A C++ function definition consists of a function header and a function body. Here are all the parts of a function                                          ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||       *Return Type   A function may return a value. The return_type is the data type of                                                                     ||       *"<<endl;
    cout<<"             *       ||        the value the function returns. Some functions perform the desired operations                                                                        ||       *"<<endl;
    cout<<"             *       ||        without returning a value. In this case, the return_type is the keyword void.                                                                        ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||       *Function Name   This is the actual name of the function. The function name and                                                                       ||       *"<<endl;
    cout<<"             *       ||        the parameter list together constitute the function signature                                                                                        ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||       *Function Body   The function body contains a collection of statements that define                                                                    ||       *"<<endl;
    cout<<"             *       ||       what the function does.                                                                                                                               ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||   Example                                                                                                                                                   ||       *"<<endl;
    cout<<"             *       ||   Following is the source code for a function called max(). This function takes two parameters                                                              ||       *"<<endl;
    cout<<"             *       ||   num1 and num2 and return the biggest of both                                                                                                              ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||  ----------------------------------------------------                                                                                                       ||       *"<<endl;
    cout<<"             *       ||  | // function returning the max between two numbers |                                                                                                      ||       *"<<endl;
    cout<<"             *       ||  | int max(int num1, int num2) {                     |                                                                                                      ||       *"<<endl;
    cout<<"             *       ||  |  // local variable declaration                    |                                                                                                      ||       *"<<endl;
    cout<<"             *       ||  |   int result;                                     |                                                                                                      ||       *"<<endl;
    cout<<"             *       ||  |   if (num1 > num2)                                |                                                                                                      ||       *"<<endl;
    cout<<"             *       ||  |   result = num1;                                  |                                                                                                      ||       *"<<endl;
    cout<<"             *       ||  |   else                                            |                                                                                                      ||       *"<<endl;
    cout<<"             *       ||  |      result = num                                 |                                                                                                      ||       *"<<endl;
    cout<<"             *       ||  |    return result;                                 |                                                                                                      ||       *"<<endl;
    cout<<"             *       ||  | }                                                 |                                                                                                      ||       *"<<endl;
    cout<<"             *       ||  ----------------------------------------------------                                                                                                       ||       *"<<endl;
    cout<<"             *       =================================================================================================================================================================       *"<<endl;
    cout<<"             *       |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||       *"<<endl;
    cout<<"             *       =================================================================================================================================================================       *"<<endl;
    cout<<"             *                                                                                                                                                                               *"<<endl;
    cout<<"             *                                                                                                                                                                               *"<<endl;
    cout<<"             *                                                                                                                                                                               *"<<endl;
    cout<<"             * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *"<<endl;

    cout<<endl<<endl<<endl;
     system("pause");




        }
                                              ///********Functions end******///







                                              ///********Function Parameters Start******///

        else if (inp=="19" || inp=="function parameters" || inp=="Function Parameters")
        {
            system("cls");
            system("color 70");

    cout<<endl<<endl<<endl;
    cout<<"             * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *"<<endl;
    cout<<"             *                                                                                                                                                                               * "<<endl;
    cout<<"             *                                                                                                                                                                               *"<<endl;
    cout<<"             *                                                                                                                                                                               *"<<endl;
    cout<<"             *       -----------------------------------------------------------------------------------------------------------------------------------------------------------------       *"<<endl;
    cout<<"             *       ||||||||||||||||||||||||||||||||||||| <= => @https://www.teamasnn.com/cplusplus/cpp_basic_function_parameters|.htm. |||||||||||||||||||||||||||||||||||||||||||||       *"<<endl;
    cout<<"             *       -----------------------------------------------------------------------------------------------------------------------------------------------------------------       *"<<endl;
    cout<<"             *       =================================================================================================================================================================       *"<<endl;
    cout<<"             *       ||           __________                        ||--------------------/\\                         /\\---------------------||                                      ||       *"<<endl;
    cout<<"             *       ||          [          ]                       ||-------------------/  \\                       /  \\--------------------||                                      ||       *"<<endl;
    cout<<"             *       ||          [ TeamASNN ]                       ||-------------------\\  /       TEAM ASNN       \\  /--------------------||                                      ||       *"<<endl;
    cout<<"             *       ||          [ LearnC++ ]                       ||--------------------\\/                         \\/---------------------||                                      ||       *"<<endl;
    cout<<"             *       ||          [__________]                       ||----------------------|||||||||||||||||||||||||-----------------------||                                      ||       *"<<endl;
    cout<<"             *       =================================================================================================================================================================       *"<<endl;
    cout<<"             *                                                                                                                                                                               *"<<endl;
    cout<<"             *                                                                                                                                                                               *"<<endl;
    cout<<"             *       =================================================================================================================================================================       *"<<endl;
    cout<<"             *       ||           ----------------------                              ***********************************                           ----------------------          ||       *"<<endl;
    cout<<"             *       ||           | << Previous page   |                              **     Function Parameters       **                           |     Next page  >>  |          ||       *"<<endl;
    cout<<"             *       ||           ----------------------                              ***********************************                           ----------------------          ||       *"<<endl;
    cout<<"             *       =================================================================================================================================================================       *"<<endl;
    cout<<"             *       |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||       *"<<endl;
    cout<<"             *       =================================================================================================================================================================       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||  When you define a function, you can specify a default value for each of the last parameters                                                                ||       *"<<endl;
    cout<<"             *       ||  This value will be used if the corresponding argument is left blank when calling to the                                                                    ||       *"<<endl;
    cout<<"             *       ||  function.                                                                                                                                                  ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||  This is done by using the assignment operator and assigning values for the arguments in the                                                                ||       *"<<endl;
    cout<<"             *       ||  function definition. If a value for that parameter is not passed when the function is called, the                                                          ||       *"<<endl;
    cout<<"             *       ||  default given value is used, but if a value is specified, this default value is ignored and the                                                            ||       *"<<endl;
    cout<<"             *       ||  passed value is used instead. Consider the following example                                                                                               ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||                                                                        [LIVE DEMO]                                                                          ||       *"<<endl;
    cout<<"             *       || --------------------------------------------------------------------------------------                                                                      ||       *"<<endl;
    cout<<"             *       || |  #include<iostream>                                                                |                                                                      ||       *"<<endl;
    cout<<"             *       || |  using namespce std                                                                |                                                                      ||       *"<<endl;
    cout<<"             *       || |                                                                                    |                                                                      ||       *"<<endl;
    cout<<"             *       || |  int sum(int a, int b = 20) {                                                      |                                                                      ||       *"<<endl;
    cout<<"             *       || |    int result;                                                                     |                                                                      ||       *"<<endl;
    cout<<"             *       || |    result = a + b;                                                                 |                                                                      ||       *"<<endl;
    cout<<"             *       || |    return (result);                                                                |                                                                      ||       *"<<endl;
    cout<<"             *       || |  }                                                                                 |                                                                      ||       *"<<endl;
    cout<<"             *       || |  int main () {                                                                     |                                                                      ||       *"<<endl;
    cout<<"             *       || |  // local variable declaration:                                                    |                                                                      ||       *"<<endl;
    cout<<"             *       || |  int a = 100;                                                                      |                                                                      ||       *"<<endl;
    cout<<"             *       || |  int b = 200;                                                                      |                                                                      ||       *"<<endl;
    cout<<"             *       || |   // calling a function to add the values.                                         |                                                                      ||       *"<<endl;
    cout<<"             *       || |  result = sum(a, b)                                                                |                                                                      ||       *"<<endl;
    cout<<"             *       || |  cout <<   Total value is : << result << endl;                                     |                                                                      ||       *"<<endl;
    cout<<"             *       || |    // calling a function again as follows.                                         |                                                                      ||       *"<<endl;
    cout<<"             *       || |  result = sum(a);                                                                  |                                                                      ||       *"<<endl;
    cout<<"             *       || |  cout <<   Total value is : << result << endl;                                     |                                                                      ||       *"<<endl;
    cout<<"             *       || |  return 0;                                                                         |                                                                      ||       *"<<endl;
    cout<<"             *       || |  }                                                                                 |                                                                      ||       *"<<endl;
    cout<<"             *       || |                                                                                    |                                                                      ||       *"<<endl;
    cout<<"             *       || |  When the above code is compiled and executed, it produces the following result    |                                                                      ||       *"<<endl;
    cout<<"             *       || |                                                                                    |                                                                      ||       *"<<endl;
    cout<<"             *       || | Total value is :300                                                                |                                                                      ||       *"<<endl;
    cout<<"             *       || | Total value is :120                                                                |                                                                      ||       *"<<endl;
    cout<<"             *       || |------------------------------------------------------------------------------------|                                                                      ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       =================================================================================================================================================================       *"<<endl;
    cout<<"             *       |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||       *"<<endl;
    cout<<"             *       =================================================================================================================================================================       *"<<endl;
    cout<<"             *                                                                                                                                                                               * "<<endl;
    cout<<"             *                                                                                                                                                                               *"<<endl;
    cout<<"             *                                                                                                                                                                               *"<<endl;
    cout<<"             * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *"<<endl;

    cout<<endl<<endl<<endl;
    cout<<"             ================================================================================================================================================================================="<<endl;
    cout<<"             ||                                                                                                                                                                             ||"<<endl;
    cout<<"             ||      Do you want to see some problems related to this topic? (Press 'y/Y' for Yes || 'n/N' for No) :::    "; cin>>p;
    cout<<"             ||                                                                                                                                                                             ||";
    cout<<endl<<"             ================================================================================================================================================================================="<<endl<<endl;




    if(p= "y" || "Y" || "yes" || "YES" || "Yes" )
    {
      system("cls");
      system("color 70");  //body for the problem show casing

    cout<<endl<<endl<<endl;

    cout<<"           ==>>  write a C++ program which Take Inputs from User and Store Them in Function parameters."<<endl<<endl<<endl<<endl;

    cout<<"     #include <iostream>  \n";
    cout<<"     #include <string>  \n";
    cout<<"     using namespace std;  \n";

    cout<<"     void myFunction(string fname) {  \n";
    cout<<"       cout << fname <<    Refsnes\n ;  \n";
    cout<<"     }  \n";

    cout<<"     int main() {  \n";
    cout<<"       myFunction(  Liam );  \n";
    cout<<"       myFunction( Jenny );  \n";
    cout<<"       myFunction( Anja );  \n";
    cout<<"       return 0;  \n";
    system("pause");
    }
    else
    {
        continue;
    }

        }
                                              ///********Function Parameters end******///







                                              ///********Function Overloading Start******///

        else if (inp=="20" || inp=="" || inp=="Function Overloading")
        {
            system("cls");
            system("color 70");

    cout<<endl<<endl<<endl;
    cout<<"             * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *"<<endl;
    cout<<"             *                                                                                                                                                                               * "<<endl;
    cout<<"             *                                                                                                                                                                               *"<<endl;
    cout<<"             *                                                                                                                                                                               *"<<endl;
    cout<<"             *       -----------------------------------------------------------------------------------------------------------------------------------------------------------------       *"<<endl;
    cout<<"             *       ||||||||||||||||||||||||||||||||||||||||| <= => @https://www.teamasnn.com/cplusplus/cpp_function_overloading.htm. |||||||||||||||||||||||||||||||||||||||||||||||       *"<<endl;
    cout<<"             *       -----------------------------------------------------------------------------------------------------------------------------------------------------------------       *"<<endl;
    cout<<"             *       =================================================================================================================================================================       *"<<endl;
    cout<<"             *       ||           __________                        ||--------------------/\\                         /\\---------------------||                                      ||       *"<<endl;
    cout<<"             *       ||          [          ]                       ||-------------------/  \\                       /  \\--------------------||                                      ||       *"<<endl;
    cout<<"             *       ||          [ TeamASNN ]                       ||-------------------\\  /       TEAM ASNN       \\  /--------------------||                                      ||       *"<<endl;
    cout<<"             *       ||          [ LearnC++ ]                       ||--------------------\\/                         \\/---------------------||                                      ||       *"<<endl;
    cout<<"             *       ||          [__________]                       ||----------------------|||||||||||||||||||||||||-----------------------||                                      ||       *"<<endl;
    cout<<"             *       =================================================================================================================================================================       *"<<endl;
    cout<<"             *                                                                                                                                                                               *"<<endl;
    cout<<"             *                                                                                                                                                                               *"<<endl;
    cout<<"             *       =================================================================================================================================================================       *"<<endl;
    cout<<"             *       ||           ----------------------                              ***********************************                           ----------------------          ||       *"<<endl;
    cout<<"             *       ||           | << Previous page   |                              **     Function Overloding       **                           |     Next page  >>  |          ||       *"<<endl;
    cout<<"             *       ||           ----------------------                              ***********************************                           ----------------------          ||       *"<<endl;
    cout<<"             *       =================================================================================================================================================================       *"<<endl;
    cout<<"             *       |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||       *"<<endl;
    cout<<"             *       =================================================================================================================================================================       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||  C++ allows you to specify more than one definition for a function name or an operator in                                                                   ||       *"<<endl;
    cout<<"             *       ||  the same scope, which is called function overloading and operator overloading                                                                              ||       *"<<endl;
    cout<<"             *       ||  respectively.                                                                                                                                              ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||  An overloaded declaration is a declaration that is declared with the same name as a                                                                        ||       *"<<endl;
    cout<<"             *       ||  previously declared declaration in the same scope, except that both declarations have                                                                      ||       *"<<endl;
    cout<<"             *       ||  different arguments and obviously different definition (implementation).                                                                                   ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||  When you call an overloaded function or operator, the compiler determines the most                                                                         ||       *"<<endl;
    cout<<"             *       ||  appropriate definition to use, by comparing the argument types you have used to call the                                                                   ||       *"<<endl;
    cout<<"             *       ||  function or operator with the parameter types specified in the definitions. The process of                                                                 ||       *"<<endl;
    cout<<"             *       ||  selecting the most appropriate overloaded function or operator is called overload                                                                          ||       *"<<endl;
    cout<<"             *       ||  resolution.                                                                                                                                                ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||  You can have multiple definitions for the same function name in the same scope. The                                                                        ||       *"<<endl;
    cout<<"             *       ||  definition of the function must differ from each other by the types and/or the number of                                                                   ||       *"<<endl;
    cout<<"             *       ||  arguments in the argument list. You cannot overload function declarations that differ only by                                                              ||       *"<<endl;
    cout<<"             *       ||  return type.                                                                                                                                               ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||   Following is the example where same function print() is being used to print different data types  :                                                       ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||                                                       [LIVE DEMO]                                                                                           ||       *"<<endl;
    cout<<"             *       ||  ----------------------------------------------------------------                                                                                           ||       *"<<endl;
    cout<<"             *       ||  |  #include <iostream>                                         |                                                                                           ||       *"<<endl;
    cout<<"             *       ||  |  using namespace std;                                        |                                                                                           ||       *"<<endl;
    cout<<"             *       ||  |  class printData {                                           |                                                                                           ||       *"<<endl;
    cout<<"             *       ||  |   public:                                                    |                                                                                           ||       *"<<endl;
    cout<<"             *       ||  |      void print(int i) {                                     |                                                                                           ||       *"<<endl;
    cout<<"             *       ||  |      cout << Printing int:  << i << endl;                    |                                                                                           ||       *"<<endl;
    cout<<"             *       ||  |     }                                                        |                                                                                           ||       *"<<endl;
    cout<<"             *       ||  |     void print(double  f) {                                  |                                                                                           ||       *"<<endl;
    cout<<"             *       ||  |     cout << Printing float:  << f << endl;                   |                                                                                           ||       *"<<endl;
    cout<<"             *       ||  |     }                                                        |                                                                                           ||       *"<<endl;
    cout<<"             *       ||  |       void print(char* c) {                                  |                                                                                           ||       *"<<endl;
    cout<<"             *       ||  |           cout << Printing character:    << c << endl;       |                                                                                           ||       *"<<endl;
    cout<<"             *       ||  |       }                                                      |                                                                                           ||       *"<<endl;
    cout<<"             *       ||  |                                                              |                                                                                           ||       *"<<endl;
    cout<<"             *       ||  |   };                                                         |                                                                                           ||       *"<<endl;
    cout<<"             *       ||  |  int main(void) {                                            |                                                                                           ||       *"<<endl;
    cout<<"             *       ||  |  printData pd;                                               |                                                                                           ||       *"<<endl;
    cout<<"             *       ||  |                                                              |                                                                                           ||       *"<<endl;
    cout<<"             *       ||  | // Call print to print integer                               |                                                                                           ||       *"<<endl;
    cout<<"             *       ||  |  pd.print(5);                                                |                                                                                           ||       *"<<endl;
    cout<<"             *       ||  |                                                              |                                                                                           ||       *"<<endl;
    cout<<"             *       ||  | // Call print to print float                                 |                                                                                           ||       *"<<endl;
    cout<<"             *       ||  |  pd.print(500.263);                                          |                                                                                           ||       *"<<endl;
    cout<<"             *       ||  |                                                              |                                                                                           ||       *"<<endl;
    cout<<"             *       ||  |  // Call print to print character                            |                                                                                           ||       *"<<endl;
    cout<<"             *       ||  |  pd.print(Hello C++);                                        |                                                                                           ||       *"<<endl;
    cout<<"             *       ||  |                                                              |                                                                                           ||       *"<<endl;
    cout<<"             *       ||  |       return 0;                                              |                                                                                           ||       *"<<endl;
    cout<<"             *       ||  |   }                                                          |                                                                                           ||       *"<<endl;
    cout<<"             *       ||  ----------------------------------------------------------------                                                                                           ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||  When the above code is compiled and executed, it produces the following result                                                                             ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||   Printing int: 5                                                                                                                                           ||       *"<<endl;
    cout<<"             *       ||   Printing float: 500.263                                                                                                                                   ||       *"<<endl;
    cout<<"             *       ||   Printing character: Hello C++                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       =================================================================================================================================================================       *"<<endl;
    cout<<"             *       |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||       *"<<endl;
    cout<<"             *       =================================================================================================================================================================       *"<<endl;
    cout<<"             *                                                                                                                                                                               * "<<endl;
    cout<<"             *                                                                                                                                                                               *"<<endl;
    cout<<"             *                                                                                                                                                                               *"<<endl;
    cout<<"             * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *"<<endl;

    cout<<endl<<endl<<endl;
    cout<<"             ================================================================================================================================================================================="<<endl;
    cout<<"             ||                                                                                                                                                                             ||"<<endl;
    cout<<"             ||      Do you want to see some problems related to this topic? (Press 'y/Y' for Yes || 'n/N' for No) :::    "; cin>>p;
    cout<<"             ||                                                                                                                                                                             ||";
    cout<<endl<<"             ================================================================================================================================================================================="<<endl<<endl;




    if(p= "y" || "Y" || "yes" || "YES" || "Yes" )
    {
       system("cls");
      system("color 70"); //body for the problem show casing
       cout<<endl<<endl<<endl;

        cout<<"           ==>>  write a C++ program which Take Inputs from User and Store Them in Function overloading."<<endl<<endl<<endl<<endl;

        cout<<"     #include <iostream>     \n";
        cout<<"     using namespace std;     \n";

        cout<<"     int plusFuncInt(int x, int y) {     \n";
        cout<<"       return x + y;     \n";
        cout<<"     }     \n";

        cout<<"     double plusFuncDouble(double x, double y) {     \n";

        cout<<"      return x + y;     \n";
        cout<<"     }     \n";

        cout<<"     int main() {     \n";
        cout<<"       int myNum1 = plusFuncInt(8, 5)     \n";
        cout<<"       double myNum2 = plusFuncDouble(4.3, 6.26)    \n";
        cout<<"       cout <<  Int:   << myNum1 <<  \n;     \n";
        cout<<"     cout <<  Double:   << myNum2;     \n";
        cout<<"      return 0;     \n";
        system("pause");
    }
    else
    {
        continue;
    }

        }
                                              ///********Function Overloading end******///







                                              ///********OOP Start******///

        else if (inp=="21" || inp=="OOP" || inp=="oop")
        {
            system("cls");
            system("color 70");

    cout<<endl<<endl<<endl;
    cout<<"             * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *"<<endl;
    cout<<"             *                                                                                                                                                                               * "<<endl;
    cout<<"             *                                                                                                                                                                               *"<<endl;
    cout<<"             *                                                                                                                                                                               *"<<endl;
    cout<<"             *       -----------------------------------------------------------------------------------------------------------------------------------------------------------------       *"<<endl;
    cout<<"             *       ||||||||||||||||||||||||||||||||||||||||| <= => @https://www.teamasnn.com/cplusplus/cpp_basic_oop.htm. ||||||||||||||||||||||||||||||||||||||||||||||||||||||||||       *"<<endl;
    cout<<"             *       -----------------------------------------------------------------------------------------------------------------------------------------------------------------       *"<<endl;
    cout<<"             *       =================================================================================================================================================================       *"<<endl;
    cout<<"             *       ||           __________                        ||--------------------/\\                         /\\---------------------||                                      ||       *"<<endl;
    cout<<"             *       ||          [          ]                       ||-------------------/  \\                       /  \\--------------------||                                      ||       *"<<endl;
    cout<<"             *       ||          [ TeamASNN ]                       ||-------------------\\  /       TEAM ASNN       \\  /--------------------||                                      ||       *"<<endl;
    cout<<"             *       ||          [ LearnC++ ]                       ||--------------------\\/                         \\/---------------------||                                      ||       *"<<endl;
    cout<<"             *       ||          [__________]                       ||----------------------|||||||||||||||||||||||||-----------------------||                                      ||       *"<<endl;
    cout<<"             *       =================================================================================================================================================================       *"<<endl;
    cout<<"             *                                                                                                                                                                               *"<<endl;
    cout<<"             *                                                                                                                                                                               *"<<endl;
    cout<<"             *       =================================================================================================================================================================       *"<<endl;
    cout<<"             *       ||           ----------------------                              ***********************************                           ----------------------          ||       *"<<endl;
    cout<<"             *       ||           | << Previous page   |                              **                OOP            **                           |     Next page  >>  |          ||       *"<<endl;
    cout<<"             *       ||           ----------------------                              ***********************************                           ----------------------          ||       *"<<endl;
    cout<<"             *       =================================================================================================================================================================       *"<<endl;
    cout<<"             *       |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||       *"<<endl;
    cout<<"             *       =================================================================================================================================================================       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||  OOP stands for Object-Oriented Programming.                                                                                                                ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||  Procedural programming is about writing procedures or functions that perform operations on the data, while object-oriented programming is about creating   ||       *"<<endl;
    cout<<"             *       ||  objects that contain both data and functions.                                                                                                              ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||  Object-oriented programming has several advantages over procedural programming:                                                                            ||       *"<<endl;
    cout<<"             *       ||     -OOP is faster and easier to execute                                                                                                                    ||       *"<<endl;
    cout<<"             *       ||     -OOP provides a clear structure for the programs                                                                                                        ||       *"<<endl;
    cout<<"             *       ||     -OOP helps to keep the C++ code DRY Don't Repeat Yourself, and makes the code easier to maintain, modify and debug                                      ||       *"<<endl;
    cout<<"             *       ||     -OOP makes it possible to create full reusable applications with less code and shorter development time                                                 ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||                **Classes and Objects                                                                                                                        ||       *"<<endl;
    cout<<"             *       ||  Classes and objects are the two main aspects of object-oriented programming.                                                                               ||       *"<<endl;
    cout<<"             *       ||  Look at the following illustration to see the difference between class and objects :                                                                       ||       *"<<endl;
    cout<<"             *       ||           |--------------------------------|-------------------------------|                                                                                ||       *"<<endl;
    cout<<"             *       ||           |          class                 |               objects         |                                                                                ||       *"<<endl;
    cout<<"             *       ||           |                                |                Apple          |                                                                                ||       *"<<endl;
    cout<<"             *       ||           |          Fruit                 |                Banana         |                                                                                ||       *"<<endl;
    cout<<"             *       ||           |                                |                Mango          |                                                                                ||       *"<<endl;
    cout<<"             *       ||           |--------------------------------|-------------------------------|                                                                                ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||      Another example:                                                                                                                                       ||       *"<<endl;
    cout<<"             *       ||            |--------------------------------|-------------------------------|                                                                               ||       *"<<endl;
    cout<<"             *       ||            |          class                 |               objects         |                                                                               ||       *"<<endl;
    cout<<"             *       ||            |                                |                Volvo          |                                                                               ||       *"<<endl;
    cout<<"             *       ||            |           Car                  |                Audi           |                                                                               ||       *"<<endl;
    cout<<"             *       ||            |                                |                Toyota         |                                                                               ||       *"<<endl;
    cout<<"             *       ||            |--------------------------------|-------------------------------|                                                                               ||       *"<<endl;
    cout<<"             *       ||  So, a class is a template for objects, and an object is an instance of a class.                                                                            ||       *"<<endl;
    cout<<"             *       ||  When the individual objects are created, they inherit all the variables and functions from the class.                                                      ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       =================================================================================================================================================================       *"<<endl;
    cout<<"             *       |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||       *"<<endl;
    cout<<"             *       =================================================================================================================================================================       *"<<endl;
    cout<<"             *                                                                                                                                                                               * "<<endl;
    cout<<"             *                                                                                                                                                                               *"<<endl;
    cout<<"             *                                                                                                                                                                               *"<<endl;
    cout<<"             * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *"<<endl;
    cout<<endl<<endl<<endl;
    system("pause");

        }
                                              ///********OOP end******///







                                              ///********Classes/Objects Start******///

        else if (inp=="22" || inp=="Classes" || inp=="Classes/Objects")
        {
            system("cls");
            system("color 70");

    cout<<endl<<endl<<endl;
    cout<<"             * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *"<<endl;
    cout<<"             *                                                                                                                                                                               * "<<endl;
    cout<<"             *                                                                                                                                                                               *"<<endl;
    cout<<"             *                                                                                                                                                                               *"<<endl;
    cout<<"             *       -----------------------------------------------------------------------------------------------------------------------------------------------------------------       *"<<endl;
    cout<<"             *       |||||||||||||||||||||||||||||||||||||| <= => @https://www.teamasnn.com/cplusplus/cpp_basic_classes/objects.htm. |||||||||||||||||||||||||||||||||||||||||||||||||       *"<<endl;
    cout<<"             *       -----------------------------------------------------------------------------------------------------------------------------------------------------------------       *"<<endl;
    cout<<"             *       =================================================================================================================================================================       *"<<endl;
    cout<<"             *       ||           __________                        ||--------------------/\\                         /\\---------------------||                                      ||       *"<<endl;
    cout<<"             *       ||          [          ]                       ||-------------------/  \\                       /  \\--------------------||                                      ||       *"<<endl;
    cout<<"             *       ||          [ TeamASNN ]                       ||-------------------\\  /       TEAM ASNN       \\  /--------------------||                                      ||       *"<<endl;
    cout<<"             *       ||          [ LearnC++ ]                       ||--------------------\\/                         \\/---------------------||                                      ||       *"<<endl;
    cout<<"             *       ||          [__________]                       ||----------------------|||||||||||||||||||||||||-----------------------||                                      ||       *"<<endl;
    cout<<"             *       =================================================================================================================================================================       *"<<endl;
    cout<<"             *                                                                                                                                                                               *"<<endl;
    cout<<"             *                                                                                                                                                                               *"<<endl;
    cout<<"             *       =================================================================================================================================================================       *"<<endl;
    cout<<"             *       ||           ----------------------                              ***********************************                           ----------------------          ||       *"<<endl;
    cout<<"             *       ||           | << Previous page   |                              **      Classes and Objects      **                           |     Next page  >>  |          ||       *"<<endl;
    cout<<"             *       ||           ----------------------                              ***********************************                           ----------------------          ||       *"<<endl;
    cout<<"             *       =================================================================================================================================================================       *"<<endl;
    cout<<"             *       |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||       *"<<endl;
    cout<<"             *       =================================================================================================================================================================       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||  The main purpose of C++ programming is to add object orientation to the C programming language and classes are the central feature of C++ that supports    ||       *"<<endl;
    cout<<"             *       ||  object-oriented programming and are often called user-defined types.                                                                                       ||       *"<<endl;
    cout<<"             *       ||  A class is used to specify the form of an object and it combines data representation and methods for manipulating that data into one neat package. The data||       *"<<endl;
    cout<<"             *       ||  and functions within a class are called members of the class.                                                                                              ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||               **C++ Class Definitions                                                                                                                       ||       *"<<endl;
    cout<<"             *       ||  When you define a class, you define a blueprint for a data type. This doesn't actually define any data, but it does define what the class name means,that  ||       *"<<endl;
    cout<<"             *       ||  is, what an object of the class will consist of and what operations can be performed on such an object.                                                    ||       *"<<endl;
    cout<<"             *       ||  A class definition starts with the keyword class followed by the class name; and the class body, enclosed by a pair of curly braces. A class definition    ||       *"<<endl;
    cout<<"             *       ||  must be followed either by a semicolon or a list of declarations. For example, we defined the Box data type using the keyword class as follows -           ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||              |------------------------------------------------------|                                                                                       ||       *"<<endl;
    cout<<"             *       ||              |  class Box {                                         |                                                                                       ||       *"<<endl;
    cout<<"             *       ||              |     public:                                          |                                                                                       ||       *"<<endl;
    cout<<"             *       ||              |        double length;   // Length of a box           |                                                                                       ||       *"<<endl;
    cout<<"             *       ||              |        double breadth;  // Breadth of a box          |                                                                                       ||       *"<<endl;
    cout<<"             *       ||              |        double height;   // Height of a box           |                                                                                       ||       *"<<endl;
    cout<<"             *       ||              |  };                                                  |                                                                                       ||       *"<<endl;
    cout<<"             *       ||              |------------------------------------------------------|                                                                                       ||       *"<<endl;
    cout<<"             *       ||  The keyword public determines the access attributes of the members of the class that follows it. A public member can be accessed from outside the class    ||       *"<<endl;
    cout<<"             *       ||  anywhere within the scope of the class object. You can also specify the members of a class as private or protected which we will discuss in a sub-section. ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||                **Define C++ Objects                                                                                                                         ||       *"<<endl;
    cout<<"             *       ||  A class provides the blueprints for objects, so basically an object is created from a class. We declare objects of a class with exactly the same sort of   ||       *"<<endl;
    cout<<"             *       ||  declaration that we declare variables of basic types. Following statements declare two objects of class Box -                                              ||       *"<<endl;
    cout<<"             *       ||       Box Box1;   // Declare Box1 of type Box                                                                                                               ||       *"<<endl;
    cout<<"             *       ||       Box Box2;  // Declare Box2 of type Box                                                                                                                ||       *"<<endl;
    cout<<"             *       ||  Both of the objects Box1 and Box2 will have their own copy of data members.                                                                                ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||                **Accessing the Data Members                                                                                                                 ||       *"<<endl;
    cout<<"             *       ||  The public data members of objects of a class can be accessed using the direct member access operator (.). Let us try the following example to make the    ||       *"<<endl;
    cout<<"             *       ||  things clear -                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||               |---------------------------------------------------------------------|                                                                       ||       *"<<endl;
    cout<<"             *       ||               |  #include <iostream>                                                |                                                                       ||       *"<<endl;
    cout<<"             *       ||               |  using namespace std;                                               |                                                                       ||       *"<<endl;
    cout<<"             *       ||               |                                                                     |                                                                       ||       *"<<endl;
    cout<<"             *       ||               |  class Box {                                                        |                                                                       ||       *"<<endl;
    cout<<"             *       ||               |        public:                                                      |                                                                       ||       *"<<endl;
    cout<<"             *       ||               |           double length;   // Length of a box                       |                                                                       ||       *"<<endl;
    cout<<"             *       ||               |           double breadth;  // Breadth of a box                      |                                                                       ||       *"<<endl;
    cout<<"             *       ||               |           double height;   // Height of a box                       |                                                                       ||       *"<<endl;
    cout<<"             *       ||               |  };                                                                 |                                                                       ||       *"<<endl;
    cout<<"             *       ||               |  int main() {                                                       |                                                                       ||       *"<<endl;
    cout<<"             *       ||               |  Box Box1;        // Declare Box1 of type Box                       |                                                                       ||       *"<<endl;
    cout<<"             *       ||               |  Box Box2;        // Declare Box2 of type Box                       |                                                                       ||       *"<<endl;
    cout<<"             *       ||               |  double volume = 0.0;     // Store the volume of a box here         |                                                                       ||       *"<<endl;
    cout<<"             *       ||               |                                                                     |                                                                       ||       *"<<endl;
    cout<<"             *       ||               |  // box 1 specification                                             |                                                                       ||       *"<<endl;
    cout<<"             *       ||               |  Box1.height = 5.0;                                                 |                                                                       ||       *"<<endl;
    cout<<"             *       ||               |  Box1.height = 5.0;                                                 |                                                                       ||       *"<<endl;
    cout<<"             *       ||               |  Box1.breadth = 7.0;                                                |                                                                       ||       *"<<endl;
    cout<<"             *       ||               |                                                                     |                                                                       ||       *"<<endl;
    cout<<"             *       ||               |  // box 2 specification                                             |                                                                       ||       *"<<endl;
    cout<<"             *       ||               |  Box2.height = 10.0;                                                |                                                                       ||       *"<<endl;
    cout<<"             *       ||               |  Box2.length = 12.0;                                                |                                                                       ||       *"<<endl;
    cout<<"             *       ||               |  Box2.breadth = 13.0;                                               |                                                                       ||       *"<<endl;
    cout<<"             *       ||               |                                                                     |                                                                       ||       *"<<endl;
    cout<<"             *       ||               |  // volume of box 1                                                 |                                                                       ||       *"<<endl;
    cout<<"             *       ||               |  volume = Box1.height * Box1.length * Box1.breadth;                 |                                                                       ||       *"<<endl;
    cout<<"             *       ||               |  cout << Volume of Box1 :  << volume <<endl;                        |                                                                       ||       *"<<endl;
    cout<<"             *       ||               |                                                                     |                                                                       ||       *"<<endl;
    cout<<"             *       ||               |  // volume of box 2                                                 |                                                                       ||       *"<<endl;
    cout<<"             *       ||               |  volume = Box2.height * Box2.length * Box2.breadth;                 |                                                                       ||       *"<<endl;
    cout<<"             *       ||               |  cout << Volume of Box2 :  << volume <<endl;                        |                                                                       ||       *"<<endl;
    cout<<"             *       ||               |  return 0;                                                          |                                                                       ||       *"<<endl;
    cout<<"             *       ||               |  }                                                                  |                                                                       ||       *"<<endl;
    cout<<"             *       ||               |---------------------------------------------------------------------|                                                                       ||       *"<<endl;
    cout<<"             *       ||  When the above code is compiled and executed, it produces the following result -                                                                           ||       *"<<endl;
    cout<<"             *       ||       Volume of Box1 : 210                                                                                                                                  ||       *"<<endl;
    cout<<"             *       ||       Volume of Box2 : 1560                                                                                                                                 ||       *"<<endl;
    cout<<"             *       ||  It is important to note that private and protected members can not be accessed directly using direct member access operator (.). We will learn how private ||       *"<<endl;
    cout<<"             *       ||  and protected members can be accessed.                                                                                                                     ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||                **Classes and Objects in Detail                                                                                                              ||       *"<<endl;
    cout<<"             *       ||  So far, you have got very basic idea about C++ Classes and Objects. There are further interesting concepts related to C++ Classes and Objects which we will||       *"<<endl;
    cout<<"             *       ||  discuss in various sub-sections listed below -                                                                                                             ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||               |---------|------------------------------------------------------------------------------------------------------------------|                ||       *"<<endl;
    cout<<"             *       ||               |  Sr.No  |                                               Concept & Description                                              |                ||       *"<<endl;
    cout<<"             *       ||               |---------|------------------------------------------------------------------------------------------------------------------|                ||       *"<<endl;
    cout<<"             *       ||               |         |        -Class Member Functions                                                                                   |                ||       *"<<endl;
    cout<<"             *       ||               |    1    |  A member function of a class is a function that has its definition or its prototype within the class definition |                ||       *"<<endl;
    cout<<"             *       ||               |         |  like any other variable.                                                                                        |                ||       *"<<endl;
    cout<<"             *       ||               |---------|------------------------------------------------------------------------------------------------------------------|                ||       *"<<endl;
    cout<<"             *       ||               |         |        -CLass Access Modifiers                                                                                   |                ||       *"<<endl;
    cout<<"             *       ||               |    2    |  A class member can be defined as public, private or protected. By default members would be assumed as private.  |                ||       *"<<endl;
    cout<<"             *       ||               |---------|------------------------------------------------------------------------------------------------------------------|                ||       *"<<endl;
    cout<<"             *       ||               |         |        -Constructor & Destructor                                                                                 |                ||       *"<<endl;
    cout<<"             *       ||               |    3    |  A class constructor is a special function in a class that is called when a new object of the class is created.  |                ||       *"<<endl;
    cout<<"             *       ||               |         |  A destructor is also a special function which is called when created object is deleted.                         |                ||       *"<<endl;
    cout<<"             *       ||               |---------|------------------------------------------------------------------------------------------------------------------|                ||       *"<<endl;
    cout<<"             *       ||               |         |        -Copy Constructor                                                                                         |                ||       *"<<endl;
    cout<<"             *       ||               |   4     |  The copy constructor is a constructor which creates an object by initializing it with an object of the same     |                ||       *"<<endl;
    cout<<"             *       ||               |         |  class, which has been created previously.                                                                       |                ||       *"<<endl;
    cout<<"             *       ||               |---------|------------------------------------------------------------------------------------------------------------------|                ||       *"<<endl;
    cout<<"             *       ||               |         |        -Friend Function                                                                                          |                ||       *"<<endl;
    cout<<"             *       ||               |   5     |  A friend function is permitted full access to private and protected members of a class.                         |                ||       *"<<endl;
    cout<<"             *       ||               |---------|------------------------------------------------------------------------------------------------------------------|                ||       *"<<endl;
    cout<<"             *       ||               |         |        -Inline Functions                                                                                         |                ||       *"<<endl;
    cout<<"             *       ||               |    6    |  With an inline function, the compiler tries to expand the code in the body of the function in place of a call to|                ||       *"<<endl;
    cout<<"             *       ||               |         |  the function.                                                                                                   |                ||       *"<<endl;
    cout<<"             *       ||               |---------|------------------------------------------------------------------------------------------------------------------|                ||       *"<<endl;
    cout<<"             *       ||               |         |        -This Pointer                                                                                             |                ||       *"<<endl;
    cout<<"             *       ||               |    7    |  Every object has a special pointer this which points to the object itself.                                      |                ||       *"<<endl;
    cout<<"             *       ||               |---------|------------------------------------------------------------------------------------------------------------------|                ||       *"<<endl;
    cout<<"             *       ||               |         |        -Pointer to C++ Classes                                                                                   |                ||       *"<<endl;
    cout<<"             *       ||               |    8    |  A pointer to a class is done exactly the same way a pointer to a structure is. In fact a class is really just a |                ||       *"<<endl;
    cout<<"             *       ||               |         |  structure with functions in it.                                                                                 |                ||       *"<<endl;
    cout<<"             *       ||               |---------|------------------------------------------------------------------------------------------------------------------|                ||       *"<<endl;
    cout<<"             *       ||               |         |        -Static Members of a Class                                                                                |                ||       *"<<endl;
    cout<<"             *       ||               |    9    |  Both data members and function members of a class can be declared as static.                                    |                ||       *"<<endl;
    cout<<"             *       ||               |---------|------------------------------------------------------------------------------------------------------------------|                ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       =================================================================================================================================================================       *"<<endl;
    cout<<"             *       |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||       *"<<endl;
    cout<<"             *       =================================================================================================================================================================       *"<<endl;
    cout<<"             *                                                                                                                                                                               * "<<endl;
    cout<<"             *                                                                                                                                                                               *"<<endl;
    cout<<"             *                                                                                                                                                                               *"<<endl;
    cout<<"             * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *"<<endl;

    cout<<endl<<endl<<endl;
       system("pause");




        }
                                              ///********Classes/Objects end******///







                                              ///********Class Methods Start******///

        else if (inp=="23" || inp=="Class" || inp=="Class Methods")
        {
            system("cls");
            system("color 70");

    cout<<endl<<endl<<endl;
    cout<<"             * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *"<<endl;
    cout<<"             *                                                                                                                                                                               * "<<endl;
    cout<<"             *                                                                                                                                                                               *"<<endl;
    cout<<"             *                                                                                                                                                                               *"<<endl;
    cout<<"             *       -----------------------------------------------------------------------------------------------------------------------------------------------------------------       *"<<endl;
    cout<<"             *       ||||||||||||||||||||||||||||||||||||||||| <= => @https://www.teamasnn.com/cplusplus/cpp_class_methods.htm. ||||||||||||||||||||||||||||||||||||||||||||||||||||||       *"<<endl;
    cout<<"             *       -----------------------------------------------------------------------------------------------------------------------------------------------------------------       *"<<endl;
    cout<<"             *       =================================================================================================================================================================       *"<<endl;
    cout<<"             *       ||           __________                        ||--------------------/\\                         /\\---------------------||                                      ||       *"<<endl;
    cout<<"             *       ||          [          ]                       ||-------------------/  \\                       /  \\--------------------||                                      ||       *"<<endl;
    cout<<"             *       ||          [ TeamASNN ]                       ||-------------------\\  /       TEAM ASNN       \\  /--------------------||                                      ||       *"<<endl;
    cout<<"             *       ||          [ LearnC++ ]                       ||--------------------\\/                         \\/---------------------||                                      ||       *"<<endl;
    cout<<"             *       ||          [__________]                       ||----------------------|||||||||||||||||||||||||-----------------------||                                      ||       *"<<endl;
    cout<<"             *       =================================================================================================================================================================       *"<<endl;
    cout<<"             *                                                                                                                                                                               *"<<endl;
    cout<<"             *                                                                                                                                                                               *"<<endl;
    cout<<"             *       =================================================================================================================================================================       *"<<endl;
    cout<<"             *       ||           ----------------------                              ***********************************                           ----------------------          ||       *"<<endl;
    cout<<"             *       ||           | << Previous page   |                              **       Class Methods           **                           |     Next page  >>  |          ||       *"<<endl;
    cout<<"             *       ||           ----------------------                              ***********************************                           ----------------------          ||       *"<<endl;
    cout<<"             *       =================================================================================================================================================================       *"<<endl;
    cout<<"             *       |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||       *"<<endl;
    cout<<"             *       =================================================================================================================================================================       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||  Methods are functions that belongs to the class.                                                                                                           ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||  There are two ways to define functions that belongs to a class:                                                                                            ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||       *Inside class definition                                                                                                                              ||       *"<<endl;
    cout<<"             *       ||       *Outside class definition                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||  In the following example, we define a function inside the class, and we name it myMethod.                                                                  ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||  Note: You access methods just like you access attributes; by creating an object of the class and by using the dot                                          ||       *"<<endl;
    cout<<"             *       ||  syntax (.):                                                                                                                                                ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||  Inside Example                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||  --------------------------------------------------------------------------                                                                                 ||       *"<<endl;
    cout<<"             *       || |  class MyClass {        // The class                                     |                                                                                ||       *"<<endl;
    cout<<"             *       || |      public:              // Access specifier                            |                                                                                ||       *"<<endl;
    cout<<"             *       || |      void myMethod() {  // Method/function defined inside the class      |                                                                                ||       *"<<endl;
    cout<<"             *       || |        cout <<   Hello World!;                                           |                                                                                ||       *"<<endl;
    cout<<"             *       || |    }                                                                     |                                                                                ||       *"<<endl;
    cout<<"             *       || |  };                                                                      |                                                                                ||       *"<<endl;
    cout<<"             *       || |                                                                          |                                                                                ||       *"<<endl;
    cout<<"             *       || |  int main() {                                                            |                                                                                ||       *"<<endl;
    cout<<"             *       || |  MyClass myObj;     // Create an object of MyClass                       |                                                                                ||       *"<<endl;
    cout<<"             *       || |  myObj.myMethod();  // Call the method                                   |                                                                                ||       *"<<endl;
    cout<<"             *       || |  return 0;                                                               |                                                                                ||       *"<<endl;
    cout<<"             *       || |  }                                                                       |                                                                                ||       *"<<endl;
    cout<<"             *       || |                                                                          |                                                                                ||       *"<<endl;
    cout<<"             *       || | -------------------------------------------------------------------------|                                                                                ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       =================================================================================================================================================================       *"<<endl;
    cout<<"             *       |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||       *"<<endl;
    cout<<"             *       =================================================================================================================================================================       *"<<endl;
    cout<<"             *                                                                                                                                                                               * "<<endl;
    cout<<"             *                                                                                                                                                                               *"<<endl;
    cout<<"             *                                                                                                                                                                               *"<<endl;
    cout<<"             * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *"<<endl;

    cout<<endl<<endl<<endl;
       system("pause");



        }
                                              ///********Class Methods end******///







                                              ///********Constructors Start******///

        else if (inp=="24" || inp=="constructors" || inp=="Constructors")
        {
            system("cls");
            system("color 70");


    cout<<endl<<endl<<endl;
    cout<<"             * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *"<<endl;
    cout<<"             *                                                                                                                                                                               * "<<endl;
    cout<<"             *                                                                                                                                                                               *"<<endl;
    cout<<"             *                                                                                                                                                                               *"<<endl;
    cout<<"             *       -----------------------------------------------------------------------------------------------------------------------------------------------------------------       *"<<endl;
    cout<<"             *       ||||||||||||||||||||||||||||||||||||||||| <= => @https://www.teamasnn.com/cplusplus/cpp_class_constructor.htm. ||||||||||||||||||||||||||||||||||||||||||||||||||       *"<<endl;
    cout<<"             *       -----------------------------------------------------------------------------------------------------------------------------------------------------------------       *"<<endl;
    cout<<"             *       =================================================================================================================================================================       *"<<endl;
    cout<<"             *       ||           __________                        ||--------------------/\\                         /\\---------------------||                                      ||       *"<<endl;
    cout<<"             *       ||          [          ]                       ||-------------------/  \\                       /  \\--------------------||                                      ||       *"<<endl;
    cout<<"             *       ||          [ TeamASNN ]                       ||-------------------\\  /       TEAM ASNN       \\  /--------------------||                                      ||       *"<<endl;
    cout<<"             *       ||          [ LearnC++ ]                       ||--------------------\\/                         \\/---------------------||                                      ||       *"<<endl;
    cout<<"             *       ||          [__________]                       ||----------------------|||||||||||||||||||||||||-----------------------||                                      ||       *"<<endl;
    cout<<"             *       =================================================================================================================================================================       *"<<endl;
    cout<<"             *                                                                                                                                                                               *"<<endl;
    cout<<"             *                                                                                                                                                                               *"<<endl;
    cout<<"             *       =================================================================================================================================================================       *"<<endl;
    cout<<"             *       ||           ----------------------                              ***********************************                           ----------------------          ||       *"<<endl;
    cout<<"             *       ||           | << Previous page   |                              **       Class Constructor       **                           |     Next page  >>  |          ||       *"<<endl;
    cout<<"             *       ||           ----------------------                              ***********************************                           ----------------------          ||       *"<<endl;
    cout<<"             *       =================================================================================================================================================================       *"<<endl;
    cout<<"             *       |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||       *"<<endl;
    cout<<"             *       =================================================================================================================================================================       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||  A class constructor is a special member function of a class that is executed whenever we                                                                   ||       *"<<endl;
    cout<<"             *       ||  create new objects of that class                                                                                                                           ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||  A class constructor is a special member function of a class that is executed whenever we                                                                   ||       *"<<endl;
    cout<<"             *       ||  create new objects of that class.                                                                                                                          ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||  A constructor will have exact same name as the class and it does not have any return type                                                                  ||       *"<<endl;
    cout<<"             *       ||  at all, not even void. Constructors can be very useful for setting initial values for certain                                                              ||       *"<<endl;
    cout<<"             *       ||  member variables.                                                                                                                                          ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||  Following example explains the concept of constructor                                                                                                      ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||  [LIVE DEMO]                                                                                                                                                ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||    ----------------------------------------------------------------------------------                                                                       ||       *"<<endl;
    cout<<"             *       ||    |   #include <iostream>                                                          |                                                                       ||       *"<<endl;
    cout<<"             *       ||    |   using namespace std;                                                         |                                                                       ||       *"<<endl;
    cout<<"             *       ||    |                                                                                |                                                                       ||       *"<<endl;
    cout<<"             *       ||    |   class Line {                                                                 |                                                                       ||       *"<<endl;
    cout<<"             *       ||    |        public:                                                                 |                                                                       ||       *"<<endl;
    cout<<"             *       ||    |           void setLength( double len );                                        |                                                                       ||       *"<<endl;
    cout<<"             *       ||    |           double getLength( void );                                            |                                                                       ||       *"<<endl;
    cout<<"             *       ||    |           Line();  // This is the constructor                                  |                                                                       ||       *"<<endl;
    cout<<"             *       ||    |  private:                                                                      |                                                                       ||       *"<<endl;
    cout<<"             *       ||    |       double length;                                                           |                                                                       ||       *"<<endl;
    cout<<"             *       ||    |  };                                                                            |                                                                       ||       *"<<endl;
    cout<<"             *       ||    |                                                                                |                                                                       ||       *"<<endl;
    cout<<"             *       ||    |  // Member functions definitions including constructor                         |                                                                       ||       *"<<endl;
    cout<<"             *       ||    |                                                                                |                                                                       ||       *"<<endl;
    cout<<"             *       ||    |  Line::Line(void) {                                                            |                                                                       ||       *"<<endl;
    cout<<"             *       ||    |      cout <<   Object is being created << endl;                                |                                                                       ||       *"<<endl;
    cout<<"             *       ||    |                                                                                |                                                                       ||       *"<<endl;
    cout<<"             *       ||    |  }                                                                             |                                                                       ||       *"<<endl;
    cout<<"             *       ||    | void Line::setLength( double len ) {                                           |                                                                       ||       *"<<endl;
    cout<<"             *       ||    |        length = len;                                                           |                                                                       ||       *"<<endl;
    cout<<"             *       ||    |  }                                                                             |                                                                       ||       *"<<endl;
    cout<<"             *       ||    |  double Line::getLength( void ) {                                              |                                                                       ||       *"<<endl;
    cout<<"             *       ||    |     return length;                                                             |                                                                       ||       *"<<endl;
    cout<<"             *       ||    |  }                                                                             |                                                                       ||       *"<<endl;
    cout<<"             *       ||    |  // Main function for the program                                              |                                                                       ||       *"<<endl;
    cout<<"             *       ||    |  int main() {                                                                  |                                                                       ||       *"<<endl;
    cout<<"             *       ||    |  Line line;                                                                    |                                                                       ||       *"<<endl;
    cout<<"             *       ||    |  // set line length                                                            |                                                                       ||       *"<<endl;
    cout<<"             *       ||    |                                                                                |                                                                       ||       *"<<endl;
    cout<<"             *       ||    |  line.setLength(6.0);                                                          |                                                                       ||       *"<<endl;
    cout<<"             *       ||    | cout <<   Length of line :  << line.getLength() <<endl;                        |                                                                       ||       *"<<endl;
    cout<<"             *       ||    |                                                                                |                                                                       ||       *"<<endl;
    cout<<"             *       ||    |  return 0;                                                                     |                                                                       ||       *"<<endl;
    cout<<"             *       ||    |                                                                                |                                                                       ||       *"<<endl;
    cout<<"             *       ||    | }                                                                              |                                                                       ||       *"<<endl;
    cout<<"             *       ||    |                                                                                |                                                                       ||       *"<<endl;
    cout<<"             *       ||    | When the above code is compiled and executed, it produces the following result |                                                                       ||       *"<<endl;
    cout<<"             *       ||    | Object is being created                                                        |                                                                       ||       *"<<endl;
    cout<<"             *       ||    |  Length of line : 6                                                            |                                                                       ||       *"<<endl;
    cout<<"             *       ||    |                                                                                |                                                                       ||       *"<<endl;
    cout<<"             *       ||    -----------------------------------------------------------------------------------                                                                      ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       =================================================================================================================================================================       *"<<endl;
    cout<<"             *       |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||       *"<<endl;
    cout<<"             *       =================================================================================================================================================================       *"<<endl;
    cout<<"             *                                                                                                                                                                               * "<<endl;
    cout<<"             *                                                                                                                                                                               *"<<endl;
    cout<<"             *                                                                                                                                                                               *"<<endl;
    cout<<"             * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *"<<endl;
    cout<<endl<<endl<<endl;
    cout<<"             ================================================================================================================================================================================="<<endl;
    cout<<"             ||                                                                                                                                                                             ||"<<endl;
    cout<<"             ||      Do you want to see some problems related to this topic? (Press 'y/Y' for Yes || 'n/N' for No) :::    "; cin>>p;
    cout<<"             ||                                                                                                                                                                             ||";
    cout<<endl<<"             ================================================================================================================================================================================="<<endl<<endl;



    if(p= "y" || "Y" || "yes" || "YES" || "Yes" )
    {
        //body for the problem show casing
        system("cls");
        system("color 70");
        cout<<endl<<endl<<endl;

            cout<<"                 write a C++ program which Take Inputs from User and Store Them in constructor.\n\n\n\n\n"<<endl;
     cout<<"        #include<iostream>    \n";
     cout<<"        using namespace std;    \n";

     cout<<"        class MyClass    \n";
     cout<<"        {// The class    \n";

     cout<<"         public:           // Access specifier    \n";

     cout<<"         MyClass() {     // Constructor    \n";

     cout<<"             cout << Hello World!;    \n";
     cout<<"         }    \n";
     cout<<"         };    \n";

     cout<<"         int main() {    \n";
     cout<<"         MyClass myObj;    // Create an object of MyClass (this will call the constructor)    \n";
     cout<<"         return 0;    \n";

     system("pause");
    }
    else
    {
        continue;
    }
        }
                                              ///********Constructors end******///







                                              ///********Access Specifiers Start******///

        else if (inp=="25" || inp=="access" || inp=="Access Specifiers")
        {
            system("cls");
            system("color 70");


    cout<<endl<<endl<<endl;
    cout<<"             * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *"<<endl;
    cout<<"             *                                                                                                                                                                               * "<<endl;
    cout<<"             *                                                                                                                                                                               *"<<endl;
    cout<<"             *                                                                                                                                                                               *"<<endl;
    cout<<"             *       -----------------------------------------------------------------------------------------------------------------------------------------------------------------       *"<<endl;
    cout<<"             *       ||||||||||||||||||||||||||||||||||||||||| <= => @https://www.teamasnn.com/cplusplus/cpp_basic_access_specifiers.htm. ||||||||||||||||||||||||||||||||||||||||||||       *"<<endl;
    cout<<"             *       -----------------------------------------------------------------------------------------------------------------------------------------------------------------       *"<<endl;
    cout<<"             *       =================================================================================================================================================================       *"<<endl;
    cout<<"             *       ||           __________                        ||--------------------/\\                         /\\---------------------||                                      ||       *"<<endl;
    cout<<"             *       ||          [          ]                       ||-------------------/  \\                       /  \\--------------------||                                      ||       *"<<endl;
    cout<<"             *       ||          [ TeamASNN ]                       ||-------------------\\  /       TEAM ASNN       \\  /--------------------||                                      ||       *"<<endl;
    cout<<"             *       ||          [ LearnC++ ]                       ||--------------------\\/                         \\/---------------------||                                      ||       *"<<endl;
    cout<<"             *       ||          [__________]                       ||----------------------|||||||||||||||||||||||||-----------------------||                                      ||       *"<<endl;
    cout<<"             *       =================================================================================================================================================================       *"<<endl;
    cout<<"             *                                                                                                                                                                               *"<<endl;
    cout<<"             *                                                                                                                                                                               *"<<endl;
    cout<<"             *       =================================================================================================================================================================       *"<<endl;
    cout<<"             *       ||           ----------------------                              ***********************************                           ----------------------          ||       *"<<endl;
    cout<<"             *       ||           | << Previous page   |                              **      Access Specifiers        **                           |     Next page  >>  |          ||       *"<<endl;
    cout<<"             *       ||           ----------------------                              ***********************************                           ----------------------          ||       *"<<endl;
    cout<<"             *       =================================================================================================================================================================       *"<<endl;
    cout<<"             *       |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||       *"<<endl;
    cout<<"             *       =================================================================================================================================================================       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||  By now, you are quite familiar with the public keyword that appears in all of our class examples:                                                          ||       *"<<endl;
    cout<<"             *       ||     Example :                                                                                                                                               ||       *"<<endl;
    cout<<"             *       ||              |-----------------------------------------|                                                                                                    ||       *"<<endl;
    cout<<"             *       ||              |  class MyClass {  // The class          |                                                                                                    ||       *"<<endl;
    cout<<"             *       ||              |  public:        // Access specifier     |                                                                                                    ||       *"<<endl;
    cout<<"             *       ||              |     // class members goes here          |                                                                                                    ||       *"<<endl;
    cout<<"             *       ||              |  };                                     |                                                                                                    ||       *"<<endl;
    cout<<"             *       ||              |-----------------------------------------|                                                                                                    ||       *"<<endl;
    cout<<"             *       ||  The public keyword is an access specifier. Access specifiers define how the members (attributes and methods) of a class can be accessed. In the example    ||       *"<<endl;
    cout<<"             *       ||  above, the members are public - which means that they can be accessed and modified from outside the code.                                                  ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||  In C++, there are three access specifiers:                                                                                                                 ||       *"<<endl;
    cout<<"             *       ||        -public - members are accessible from outside the class                                                                                              ||       *"<<endl;
    cout<<"             *       ||        -private - members cannot be accessed (or viewed) from outside the class                                                                             ||       *"<<endl;
    cout<<"             *       ||        -protected - members cannot be accessed from outside the class, however, they can be accessed in inherited classes .                                 ||       *"<<endl;
    cout<<"             *       ||  In the following example, we demonstrate the differences between public and private members:                                                               ||       *"<<endl;
    cout<<"             *       ||      Example :                                                                                                                                              ||       *"<<endl;
    cout<<"             *       ||               |------------------------------------------------------|                                                                                      ||       *"<<endl;
    cout<<"             *       ||               |  class MyClass {                                     |                                                                                      ||       *"<<endl;
    cout<<"             *       ||               |   public:    // Public access specifier              |                                                                                      ||       *"<<endl;
    cout<<"             *       ||               |       int x;   // Public attribute                   |                                                                                      ||       *"<<endl;
    cout<<"             *       ||               |   private:   // Private access specifier             |                                                                                      ||       *"<<endl;
    cout<<"             *       ||               |       int y;   // Private attribute                  |                                                                                      ||       *"<<endl;
    cout<<"             *       ||               |  };                                                  |                                                                                      ||       *"<<endl;
    cout<<"             *       ||               |  int main() {                                        |                                                                                      ||       *"<<endl;
    cout<<"             *       ||               |    MyClass myObj;                                    |                                                                                      ||       *"<<endl;
    cout<<"             *       ||               |    myObj.x = 25;  // Allowed (public)                |                                                                                      ||       *"<<endl;
    cout<<"             *       ||               |    myObj.y = 50;  // Not allowed (private)           |                                                                                      ||       *"<<endl;
    cout<<"             *       ||               |    return 0;                                         |                                                                                      ||       *"<<endl;
    cout<<"             *       ||               |  }                                                   |                                                                                      ||       *"<<endl;
    cout<<"             *       ||               |------------------------------------------------------|                                                                                      ||       *"<<endl;
    cout<<"             *       ||  If you try to access a private member, an error occurs:                                                                                                    ||       *"<<endl;
    cout<<"             *       ||         error: y is private                                                                                                                                 ||       *"<<endl;
    cout<<"             *       ||  [Note: It is possible to access private members of a class using a public method inside the same class.]                                                   ||       *"<<endl;
    cout<<"             *       ||  By default, all members of a class are private if you don't specify an access specifier:                                                                   ||       *"<<endl;
    cout<<"             *       ||      Example :                                                                                                                                              ||       *"<<endl;
    cout<<"             *       ||               |--------------------------------------|                                                                                                      ||       *"<<endl;
    cout<<"             *       ||               |  class MyClass {                     |                                                                                                      ||       *"<<endl;
    cout<<"             *       ||               |  int x;   // Private attribute       |                                                                                                      ||       *"<<endl;
    cout<<"             *       ||               |  int y;   // Private attribute       |                                                                                                      ||       *"<<endl;
    cout<<"             *       ||               |  };                                  |                                                                                                      ||       *"<<endl;
    cout<<"             *       ||               |--------------------------------------|                                                                                                      ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;

    cout<<"             *       =================================================================================================================================================================       *"<<endl;
    cout<<"             *       |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||       *"<<endl;
    cout<<"             *       =================================================================================================================================================================       *"<<endl;
    cout<<"             *                                                                                                                                                                               * "<<endl;
    cout<<"             *                                                                                                                                                                               *"<<endl;
    cout<<"             *                                                                                                                                                                               *"<<endl;
    cout<<"             * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *"<<endl;

    cout<<endl<<endl<<endl;
    system("pause");



        }
                                              ///********Access Specifiers end******///







                                              ///********Encapsulation Start******///

        else if (inp=="26" || inp=="encapsulation" || inp=="Encapsulation")
        {
            system("cls");
            system("color 70");

    cout<<endl<<endl<<endl;
    cout<<"             * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *"<<endl;
    cout<<"             *                                                                                                                                                                               * "<<endl;
    cout<<"             *                                                                                                                                                                               *"<<endl;
    cout<<"             *                                                                                                                                                                               *"<<endl;
    cout<<"             *       -----------------------------------------------------------------------------------------------------------------------------------------------------------------       *"<<endl;
    cout<<"             *       ||||||||||||||||||||||||||||||||||||||||| <= => @https://www.teamasnn.com/cplusplus/cpp_basic_encapsulation.htm. ||||||||||||||||||||||||||||||||||||||||||||||||       *"<<endl;
    cout<<"             *       -----------------------------------------------------------------------------------------------------------------------------------------------------------------       *"<<endl;
    cout<<"             *       =================================================================================================================================================================       *"<<endl;
    cout<<"             *       ||           __________                        ||--------------------/\\                         /\\---------------------||                                      ||       *"<<endl;
    cout<<"             *       ||          [          ]                       ||-------------------/  \\                       /  \\--------------------||                                      ||       *"<<endl;
    cout<<"             *       ||          [ TeamASNN ]                       ||-------------------\\  /       TEAM ASNN       \\  /--------------------||                                      ||       *"<<endl;
    cout<<"             *       ||          [ LearnC++ ]                       ||--------------------\\/                         \\/---------------------||                                      ||       *"<<endl;
    cout<<"             *       ||          [__________]                       ||----------------------|||||||||||||||||||||||||-----------------------||                                      ||       *"<<endl;
    cout<<"             *       =================================================================================================================================================================       *"<<endl;
    cout<<"             *                                                                                                                                                                               *"<<endl;
    cout<<"             *                                                                                                                                                                               *"<<endl;
    cout<<"             *       =================================================================================================================================================================       *"<<endl;
    cout<<"             *       ||           ----------------------                              ***********************************                           ----------------------          ||       *"<<endl;
    cout<<"             *       ||           | << Previous page   |                              **         Encapsulation         **                           |     Next page  >>  |          ||       *"<<endl;
    cout<<"             *       ||           ----------------------                              ***********************************                           ----------------------          ||       *"<<endl;
    cout<<"             *       =================================================================================================================================================================       *"<<endl;
    cout<<"             *       |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||       *"<<endl;
    cout<<"             *       =================================================================================================================================================================       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||  All C++ programs are composed of the following two fundamental elements -                                                                                  ||       *"<<endl;
    cout<<"             *       ||       *Program statements (code)- This is the part of a program that performs actions and they are called functions.                                        ||       *"<<endl;
    cout<<"             *       ||       *Program data - The data is the information of the program which gets affected by the program functions.                                              ||       *"<<endl;
    cout<<"             *       ||  Encapsulation is an Object Oriented Programming concept that binds together the data and functions that manipulate the data, and that keeps both safe from ||       *"<<endl;
    cout<<"             *       ||  outside interference and misuse. Data encapsulation led to the important OOP concept of data hiding.                                                       ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||  Data encapsulation is a mechanism of bundling the data, and the functions that use them and data abstraction is a mechanism of exposing only the interfaces||       *"<<endl;
    cout<<"             *       ||  and hiding the implementation details from the user.                                                                                                       ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||  C++ supports the properties of encapsulation and data hiding through the creation of user-defined types, called classes. We already have studied that a    ||       *"<<endl;
    cout<<"             *       ||  class can contain private, protected and public members. By default, all items defined in a class are private. For example -                               ||       *"<<endl;
    cout<<"             *       ||              |-----------------------------------------------------------|                                                                                  ||       *"<<endl;
    cout<<"             *       ||              | class Box {                                               |                                                                                  ||       *"<<endl;
    cout<<"             *       ||              |    public:                                                |                                                                                  ||       *"<<endl;
    cout<<"             *       ||              |        double getVolume(void) {                           |                                                                                  ||       *"<<endl;
    cout<<"             *       ||              |            return length * breadth * height;              |                                                                                  ||       *"<<endl;
    cout<<"             *       ||              |        }                                                  |                                                                                  ||       *"<<endl;
    cout<<"             *       ||              |    private:                                               |                                                                                  ||       *"<<endl;
    cout<<"             *       ||              |        double length;      // Length of a box             |                                                                                  ||       *"<<endl;
    cout<<"             *       ||              |        double breadth;     // Breadth of a box            |                                                                                  ||       *"<<endl;
    cout<<"             *       ||              |        double height;      // Height of a box             |                                                                                  ||       *"<<endl;
    cout<<"             *       ||              | };                                                        |                                                                                  ||       *"<<endl;
    cout<<"             *       ||              |-----------------------------------------------------------|                                                                                  ||       *"<<endl;
    cout<<"             *       ||  The variables length, breadth, and height are private. This means that they can be accessed only by other members of the Box class,and not by any other    ||       *"<<endl;
    cout<<"             *       ||  part of your program. This is one way encapsulation is achieved.                                                                                           ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||  To make parts of a class public (i.e., accessible to other parts of your program), you must declare them after the public keyword. All variables or        ||       *"<<endl;
    cout<<"             *       ||  functions defined after the public specifier are accessible by all other functions in your program.                                                        ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||  Making one class a friend of another exposes the implementation details and reduces encapsulation. The ideal is to keep as many of the details of each     ||       *"<<endl;
    cout<<"             *       ||  class hidden from all other classes as possible.                                                                                                           ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||              **Data Encapsulation Example                                                                                                                   ||       *"<<endl;
    cout<<"             *       ||  Any C++ program where you implement a class with public and private members is an example of data encapsulation and data abstraction. Consider the         ||       *"<<endl;
    cout<<"             *       ||  following example -                                                                                                                                        ||       *"<<endl;
    cout<<"             *       ||              |----------------------------------------------------------------|                                                                             ||       *"<<endl;
    cout<<"             *       ||              | #include <iostream>                                            |                                                                             ||       *"<<endl;
    cout<<"             *       ||              | using namespace std;                                           |                                                                             ||       *"<<endl;
    cout<<"             *       ||              |                                                                |                                                                             ||       *"<<endl;
    cout<<"             *       ||              | class Adder {                                                  |                                                                             ||       *"<<endl;
    cout<<"             *       ||              |    public:                                                     |                                                                             ||       *"<<endl;
    cout<<"             *       ||              |      // constructor                                            |                                                                             ||       *"<<endl;
    cout<<"             *       ||              |      Adder(int i = 0) {                                        |                                                                             ||       *"<<endl;
    cout<<"             *       ||              |        total = i;                                              |                                                                             ||       *"<<endl;
    cout<<"             *       ||              |      }                                                         |                                                                             ||       *"<<endl;
    cout<<"             *       ||              |                                                                |                                                                             ||       *"<<endl;
    cout<<"             *       ||              |      // interface to outside world                             |                                                                             ||       *"<<endl;
    cout<<"             *       ||              |      void addNum(int number) {                                 |                                                                             ||       *"<<endl;
    cout<<"             *       ||              |          total += number;                                      |                                                                             ||       *"<<endl;
    cout<<"             *       ||              |      }                                                         |                                                                             ||       *"<<endl;
    cout<<"             *       ||              |      // interface to outside world                             |                                                                             ||       *"<<endl;
    cout<<"             *       ||              |         return total;                                          |                                                                             ||       *"<<endl;
    cout<<"             *       ||              |      };                                                        |                                                                             ||       *"<<endl;
    cout<<"             *       ||              |    private:                                                    |                                                                             ||       *"<<endl;
    cout<<"             *       ||              |        // hidden data from outside world                       |                                                                             ||       *"<<endl;
    cout<<"             *       ||              |        int total;                                              |                                                                             ||       *"<<endl;
    cout<<"             *       ||              |   };                                                           |                                                                             ||       *"<<endl;
    cout<<"             *       ||              |                                                                |                                                                             ||       *"<<endl;
    cout<<"             *       ||              | int main() {                                                   |                                                                             ||       *"<<endl;
    cout<<"             *       ||              |   Adder a;                                                     |                                                                             ||       *"<<endl;
    cout<<"             *       ||              |                                                                |                                                                             ||       *"<<endl;
    cout<<"             *       ||              |   a.addNum(10);                                                |                                                                             ||       *"<<endl;
    cout<<"             *       ||              |  a.addNum(20);                                                 |                                                                             ||       *"<<endl;
    cout<<"             *       ||              |  a.addNum(30);                                                 |                                                                             ||       *"<<endl;
    cout<<"             *       ||              |                                                                |                                                                             ||       *"<<endl;
    cout<<"             *       ||              |  cout << Total  << a.getTotal() <<endl;                        |                                                                             ||       *"<<endl;
    cout<<"             *       ||              |   return 0;                                                    |                                                                             ||       *"<<endl;
    cout<<"             *       ||              | }                                                              |                                                                             ||       *"<<endl;
    cout<<"             *       ||              |----------------------------------------------------------------|                                                                             ||       *"<<endl;
    cout<<"             *       ||      When the above code is compiled and executed, it produces the following result -                                                                       ||       *"<<endl;
    cout<<"             *       ||           Total 60                                                                                                                                          ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||  Above class adds numbers together, and returns the sum. The public members addNum and getTotal are the interfaces to the outside world and a user needs to ||       *"<<endl;
    cout<<"             *       ||  know them to use the class. The private member total is something that is hidden from the outside world, but is needed for the class to operate properly.  ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||               **Designing Strategy                                                                                                                          ||       *"<<endl;
    cout<<"             *       ||  Most of us have learnt to make class members private by default unless we really need to expose them. That's just good encapsulation.                      ||       *"<<endl;
    cout<<"             *       ||  This is applied most frequently to data members, but it applies equally to all members, including virtual functions.                                       ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       =================================================================================================================================================================       *"<<endl;
    cout<<"             *       |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||       *"<<endl;
    cout<<"             *       =================================================================================================================================================================       *"<<endl;
    cout<<"             *                                                                                                                                                                               * "<<endl;
    cout<<"             *                                                                                                                                                                               *"<<endl;
    cout<<"             *                                                                                                                                                                               *"<<endl;
    cout<<"             * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *"<<endl;
    cout<<endl<<endl<<endl;
    cout<<"             ================================================================================================================================================================================="<<endl;
    cout<<"             ||                                                                                                                                                                             ||"<<endl;
    cout<<"             ||      Do you want to see some problems related to this topic? (Press 'y/Y' for Yes || 'n/N' for No) :::    "; cin>>p;
    cout<<"             ||                                                                                                                                                                             ||";
    cout<<endl<<"             ================================================================================================================================================================================="<<endl<<endl;



    if(p= "y" || "Y" || "yes" || "YES" || "Yes" )
    {
        //body for the problem show casing
     system("cls");
    system("color 70");

    cout<<endl<<endl<<endl;

    cout<<"                 write a C++ program which Take Inputs from User and Store Them in Encapsulation.\n\n\n\n"<<endl;


    cout<<"       #include <iostream>  \n";
    cout<<"       using namespace std;  \n";

    cout<<"       class Employee {  \n";
    cout<<"       private:  \n";
    // Private attribute
    cout<<"       int salary;  \n";

    cout<<"       public:  \n";
    // Setter
    cout<<"       void setSalary(int s) {  \n";
    cout<<"       salary = s;  \n";
    cout<<"       }  \n";
    // Getter
    cout<<"         int getSalary() {  \n";
    cout<<"         return salary;  \n";
    cout<<"         }  \n";
    cout<<"       };  \n";

    cout<<"       int main() {  \n";
    cout<<"       Employee myObj;  \n";

    cout<<"       myObj.setSalary(50000);  \n";
    cout<<"       cout << myObj.getSalary();  \n";
    cout<<"       return 0;  \n";
    system("pause");
    }
    else
    {
        continue;
    }

        }
                                              ///********Encapsulation end******///







                                              ///********Inheritance Start******///

        else if (inp=="27" || inp=="inheritance" || inp=="Inheritance")
        {
            system("cls");
            system("color 70");


    cout<<endl<<endl<<endl;
    cout<<"             * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *"<<endl;
    cout<<"             *                                                                                                                                                                               * "<<endl;
    cout<<"             *                                                                                                                                                                               *"<<endl;
    cout<<"             *                                                                                                                                                                               *"<<endl;
    cout<<"             *       -----------------------------------------------------------------------------------------------------------------------------------------------------------------       *"<<endl;
    cout<<"             *       ||||||||||||||||||||||||||||||||||||||||| <= => @https://www.teamasnn.com/cplusplus/cpp_polymorphism.htm. |||||||||||||||||||||||||||||||||||||||||||||||||||||||       *"<<endl;
    cout<<"             *       -----------------------------------------------------------------------------------------------------------------------------------------------------------------       *"<<endl;
    cout<<"             *       =================================================================================================================================================================       *"<<endl;
    cout<<"             *       ||           __________                        ||--------------------/\\                         /\\---------------------||                                      ||       *"<<endl;
    cout<<"             *       ||          [          ]                       ||-------------------/  \\                       /  \\--------------------||                                      ||       *"<<endl;
    cout<<"             *       ||          [ TeamASNN ]                       ||-------------------\\  /       TEAM ASNN       \\  /--------------------||                                      ||       *"<<endl;
    cout<<"             *       ||          [ LearnC++ ]                       ||--------------------\\/                         \\/---------------------||                                      ||       *"<<endl;
    cout<<"             *       ||          [__________]                       ||----------------------|||||||||||||||||||||||||-----------------------||                                      ||       *"<<endl;
    cout<<"             *       =================================================================================================================================================================       *"<<endl;
    cout<<"             *                                                                                                                                                                               *"<<endl;
    cout<<"             *                                                                                                                                                                               *"<<endl;
    cout<<"             *       =================================================================================================================================================================       *"<<endl;
    cout<<"             *       ||           ----------------------                              ***********************************                           ----------------------          ||       *"<<endl;
    cout<<"             *       ||           | << Previous page   |                              **            Polymorphism       **                           |     Next page  >>  |          ||       *"<<endl;
    cout<<"             *       ||           ----------------------                              ***********************************                           ----------------------          ||       *"<<endl;
    cout<<"             *       =================================================================================================================================================================       *"<<endl;
    cout<<"             *       |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||       *"<<endl;
    cout<<"             *       =================================================================================================================================================================       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||  The word polymorphism means having many forms. Typically, polymorphism occurs when                                                                         ||       *"<<endl;
    cout<<"             *       ||  there is a hierarchy of classes and they are related by inheritance.                                                                                       ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||   C++ polymorphism means that a call to a member function will cause a different function to                                                                ||       *"<<endl;
    cout<<"             *       ||   be executed depending on the type of object that invokes the function.                                                                                    ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||   Consider the following example where a base class has been derived by other two classes                                                                   ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||   The reason for the incorrect output is that the call of the function area() is being set once by                                                          ||       *"<<endl;
    cout<<"             *       ||   the compiler as the version defined in the base class. This is called static resolution of the                                                            ||       *"<<endl;
    cout<<"             *       ||   function call, or static linkage   the function call is fixed before the program is executed.                                                             ||       *"<<endl;
    cout<<"             *       ||   This is also sometimes called early binding because the area() function is set during the                                                                 ||       *"<<endl;
    cout<<"             *       ||   compilation of the program.                                                                                                                               ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||   But now, let's make a slight modification in our program and precede the declaration of                                                                   ||       *"<<endl;
    cout<<"             *       ||   area() in the Shape class with the keyword virtual so that it looks like this                                                                             ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||      -----------------------------------------------------------------------------------------------------                                                  ||       *"<<endl;
    cout<<"             *       ||      |  class Shape {                                                                                     |                                                 ||       *"<<endl;
    cout<<"             *       ||      |  protected:                                                                                        |                                                 ||       *"<<endl;
    cout<<"             *       ||      |                                                                                                    |                                                 ||       *"<<endl;
    cout<<"             *       ||      |   public:                                                                                          |                                                 ||       *"<<endl;
    cout<<"             *       ||      |       Shape( int a = 0, int b = 0) {                                                               |                                                 ||       *"<<endl;
    cout<<"             *       ||      |             width = a;                                                                             |                                                 ||       *"<<endl;
    cout<<"             *       ||      |           height = b;                                                                              |                                                 ||       *"<<endl;
    cout<<"             *       ||      |  }                                                                                                 |                                                 ||       *"<<endl;
    cout<<"             *       ||      |        cout <<   Parent class area : <<endl;                                                       |                                                 ||       *"<<endl;
    cout<<"             *       ||      |        return 0;                                                                                   |                                                 ||       *"<<endl;
    cout<<"             *       ||      |                                                                                                    |                                                 ||       *"<<endl;
    cout<<"             *       ||      |  }                                                                                                 |                                                 ||       *"<<endl;
    cout<<"             *       ||      | }                                                                                                  |                                                 ||       *"<<endl;
    cout<<"             *       ||      |                                                                                                    |                                                 ||       *"<<endl;
    cout<<"             *       ||      |  After this slight modification, when the previous example code is compiled and executed, it       |                                                 ||       *"<<endl;
    cout<<"             *       ||      | produces the following result                                                                      |                                                 ||       *"<<endl;
    cout<<"             *       ||      | Rectangle class area                                                                               |                                                 ||       *"<<endl;
    cout<<"             *       ||      |                                                                                                    |                                                 ||       *"<<endl;
    cout<<"             *       ||      |                                                                                                    |                                                 ||       *"<<endl;
    cout<<"             *       ||      |                                                                                                    |                                                 ||       *"<<endl;
    cout<<"             *       ||      |                                                                                                    |                                                 ||       *"<<endl;
    cout<<"             *       ||       -----------------------------------------------------------------------------------------------------                                                 ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||    This time, the compiler looks at the contents of the pointer instead of it's type. Hence, since                                                          ||       *"<<endl;
    cout<<"             *       ||    addresses of objects of tri and rec classes are stored in *shape the respective area()                                                                   ||       *"<<endl;
    cout<<"             *       ||    function is called.                                                                                                                                      ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||    As you can see, each of the child classes has a separate implementation for the function                                                                 ||       *"<<endl;
    cout<<"             *       ||   area(). This is how polymorphism is generally used. You have different classes with a                                                                     ||       *"<<endl;
    cout<<"             *       ||   function of the same name, and even the same parameters, but with different                                                                               ||       *"<<endl;
    cout<<"             *       ||    implementations.                                                                                                                                         ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       =================================================================================================================================================================       *"<<endl;
    cout<<"             *       |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||       *"<<endl;
    cout<<"             *       =================================================================================================================================================================       *"<<endl;
    cout<<"             *                                                                                                                                                                               * "<<endl;
    cout<<"             *                                                                                                                                                                               *"<<endl;
    cout<<"             *                                                                                                                                                                               *"<<endl;
    cout<<"             * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *"<<endl;
    cout<<endl<<endl<<endl;
    cout<<"             ================================================================================================================================================================================="<<endl;
    cout<<"             ||                                                                                                                                                                             ||"<<endl;
    cout<<"             ||      Do you want to see some problems related to this topic? (Press 'y/Y' for Yes || 'n/N' for No) :::    "; cin>>p;
    cout<<"             ||                                                                                                                                                                             ||";
    cout<<endl<<"             ================================================================================================================================================================================="<<endl<<endl;




    if(p= "y" || "Y" || "yes" || "YES" || "Yes" )
    {

         system("cls");
       system("color 70");//body for the problem show casing

    cout<<endl<<endl<<endl;
    cout<<"        cout<<                 write a C++ program which Take Inputs from User and Store Them in C++ Polymorphism.   \n";


    cout<<"        #include <iostream> \n";
    cout<<"     #include <string>\n";
    cout<<"     using namespace std    \n";

// Base class
    cout<<"     class Animal   \n";
    cout<<"     {   \n";
    cout<<"     public:   \n";
    cout<<"     void animalSound()   \n";
    cout<<"     {   \n";

    cout<<"        cout <<  The animal makes a sound ;   \n   ";
    cout<<"     }   \n";
    cout<<"     }    ;    \n";

// Derived class
    cout<<"     class Pig : public Animal   \n";
    cout<<"     {   \n";
    cout<<"     public:   \n";
    cout<<"     void animalSound()   \n";
    cout<<"     {   \n";
    cout<<"        cout <<  The pig says: wee wee \n  ;   \n";
    cout<<"     }   \n";
    cout<<"     };   \n";

// Derived class
    cout<<"     class Dog : public Animal   \n";
    cout<<"     {   \n";
    cout<<"      public:   \n";
    cout<<"     void animalSound()   \n";
    cout<<"     {   \n";

    cout<<"        cout <<  The dog says: bow wow \n  ;   \n";
    cout<<"     }   \n";
    cout<<"     };   \n";

    cout<<"     int main()   \n";
    cout<<"     {   \n";
    cout<<"     Animal myAnimal;   \n";
    cout<<"     Pig myPig;   \n";
    cout<<"     Dog myDog;   \n";

    cout<<"     myAnimal.animalSound();   \n";
    cout<<"     myPig.animalSound();   \n";
    cout<<"     myDog.animalSound();   \n";
    cout<<"     return 0;   \n";
    cout<<"     }   \n";

    system("pause");

    }
    else
    {
        continue;
    }

        }
                                              ///********Inheritance end******///







                                              ///********Polymorphism Start******///

        else if (inp=="28" || inp=="polymorphism" || inp=="Polymorphism")
        {
            system("cls");
            system("color 70");


    cout<<endl<<endl<<endl;
    cout<<"             * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *"<<endl;
    cout<<"             *                                                                                                                                                                               * "<<endl;
    cout<<"             *                                                                                                                                                                               *"<<endl;
    cout<<"             *                                                                                                                                                                               *"<<endl;
    cout<<"             *       -----------------------------------------------------------------------------------------------------------------------------------------------------------------       *"<<endl;
    cout<<"             *       ||||||||||||||||||||||||||||||||||||||||| <= => @https://www.teamasnn.com/cplusplus/cpp_polymorphism.htm. |||||||||||||||||||||||||||||||||||||||||||||||||||||||       *"<<endl;
    cout<<"             *       -----------------------------------------------------------------------------------------------------------------------------------------------------------------       *"<<endl;
    cout<<"             *       =================================================================================================================================================================       *"<<endl;
    cout<<"             *       ||           __________                        ||--------------------/\\                         /\\---------------------||                                      ||       *"<<endl;
    cout<<"             *       ||          [          ]                       ||-------------------/  \\                       /  \\--------------------||                                      ||       *"<<endl;
    cout<<"             *       ||          [ TeamASNN ]                       ||-------------------\\  /       TEAM ASNN       \\  /--------------------||                                      ||       *"<<endl;
    cout<<"             *       ||          [ LearnC++ ]                       ||--------------------\\/                         \\/---------------------||                                      ||       *"<<endl;
    cout<<"             *       ||          [__________]                       ||----------------------|||||||||||||||||||||||||-----------------------||                                      ||       *"<<endl;
    cout<<"             *       =================================================================================================================================================================       *"<<endl;
    cout<<"             *                                                                                                                                                                               *"<<endl;
    cout<<"             *                                                                                                                                                                               *"<<endl;
    cout<<"             *       =================================================================================================================================================================       *"<<endl;
    cout<<"             *       ||           ----------------------                              ***********************************                           ----------------------          ||       *"<<endl;
    cout<<"             *       ||           | << Previous page   |                              **            Polymorphism       **                           |     Next page  >>  |          ||       *"<<endl;
    cout<<"             *       ||           ----------------------                              ***********************************                           ----------------------          ||       *"<<endl;
    cout<<"             *       =================================================================================================================================================================       *"<<endl;
    cout<<"             *       |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||       *"<<endl;
    cout<<"             *       =================================================================================================================================================================       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||  The word polymorphism means having many forms. Typically, polymorphism occurs when                                                                         ||       *"<<endl;
    cout<<"             *       ||  there is a hierarchy of classes and they are related by inheritance.                                                                                       ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||   C++ polymorphism means that a call to a member function will cause a different function to                                                                ||       *"<<endl;
    cout<<"             *       ||   be executed depending on the type of object that invokes the function.                                                                                    ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||   Consider the following example where a base class has been derived by other two classes                                                                   ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||   The reason for the incorrect output is that the call of the function area() is being set once by                                                          ||       *"<<endl;
    cout<<"             *       ||   the compiler as the version defined in the base class. This is called static resolution of the                                                            ||       *"<<endl;
    cout<<"             *       ||   function call, or static linkage   the function call is fixed before the program is executed.                                                             ||       *"<<endl;
    cout<<"             *       ||   This is also sometimes called early binding because the area() function is set during the                                                                 ||       *"<<endl;
    cout<<"             *       ||   compilation of the program.                                                                                                                               ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||   But now, let's make a slight modification in our program and precede the declaration of                                                                   ||       *"<<endl;
    cout<<"             *       ||   area() in the Shape class with the keyword virtual so that it looks like this                                                                             ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||      -----------------------------------------------------------------------------------------------------                                                  ||       *"<<endl;
    cout<<"             *       ||      |  class Shape {                                                                                     |                                                 ||       *"<<endl;
    cout<<"             *       ||      |  protected:                                                                                        |                                                 ||       *"<<endl;
    cout<<"             *       ||      |                                                                                                    |                                                 ||       *"<<endl;
    cout<<"             *       ||      |   public:                                                                                          |                                                 ||       *"<<endl;
    cout<<"             *       ||      |       Shape( int a = 0, int b = 0) {                                                               |                                                 ||       *"<<endl;
    cout<<"             *       ||      |             width = a;                                                                             |                                                 ||       *"<<endl;
    cout<<"             *       ||      |           height = b;                                                                              |                                                 ||       *"<<endl;
    cout<<"             *       ||      |  }                                                                                                 |                                                 ||       *"<<endl;
    cout<<"             *       ||      |        cout <<   Parent class area : <<endl;                                                       |                                                 ||       *"<<endl;
    cout<<"             *       ||      |        return 0;                                                                                   |                                                 ||       *"<<endl;
    cout<<"             *       ||      |                                                                                                    |                                                 ||       *"<<endl;
    cout<<"             *       ||      |  }                                                                                                 |                                                 ||       *"<<endl;
    cout<<"             *       ||      | }                                                                                                  |                                                 ||       *"<<endl;
    cout<<"             *       ||      |                                                                                                    |                                                 ||       *"<<endl;
    cout<<"             *       ||      |  After this slight modification, when the previous example code is compiled and executed, it       |                                                 ||       *"<<endl;
    cout<<"             *       ||      | produces the following result                                                                      |                                                 ||       *"<<endl;
    cout<<"             *       ||      | Rectangle class area                                                                               |                                                 ||       *"<<endl;
    cout<<"             *       ||      |                                                                                                    |                                                 ||       *"<<endl;
    cout<<"             *       ||      |                                                                                                    |                                                 ||       *"<<endl;
    cout<<"             *       ||      |                                                                                                    |                                                 ||       *"<<endl;
    cout<<"             *       ||      |                                                                                                    |                                                 ||       *"<<endl;
    cout<<"             *       ||       -----------------------------------------------------------------------------------------------------                                                 ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||    This time, the compiler looks at the contents of the pointer instead of it's type. Hence, since                                                          ||       *"<<endl;
    cout<<"             *       ||    addresses of objects of tri and rec classes are stored in *shape the respective area()                                                                   ||       *"<<endl;
    cout<<"             *       ||    function is called.                                                                                                                                      ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||    As you can see, each of the child classes has a separate implementation for the function                                                                 ||       *"<<endl;
    cout<<"             *       ||   area(). This is how polymorphism is generally used. You have different classes with a                                                                     ||       *"<<endl;
    cout<<"             *       ||   function of the same name, and even the same parameters, but with different                                                                               ||       *"<<endl;
    cout<<"             *       ||    implementations.                                                                                                                                         ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       =================================================================================================================================================================       *"<<endl;
    cout<<"             *       |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||       *"<<endl;
    cout<<"             *       =================================================================================================================================================================       *"<<endl;
    cout<<"             *                                                                                                                                                                               * "<<endl;
    cout<<"             *                                                                                                                                                                               *"<<endl;
    cout<<"             *                                                                                                                                                                               *"<<endl;
    cout<<"             * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *"<<endl;
   cout<<endl<<endl<<endl;
    cout<<"             ================================================================================================================================================================================="<<endl;
    cout<<"             ||                                                                                                                                                                             ||"<<endl;
    cout<<"             ||      Do you want to see some problems related to this topic? (Press 'y/Y' for Yes || 'n/N' for No) :::    "; cin>>p;
    cout<<"             ||                                                                                                                                                                             ||";
    cout<<endl<<"             ================================================================================================================================================================================="<<endl<<endl;




    if(p= "y" || "Y" || "yes" || "YES" || "Yes" )
    {
         system("cls");
       system("color 70");//body for the problem show casing

    cout<<endl<<endl<<endl;
    cout<<"        cout<<                 write a C++ program which Take Inputs from User and Store Them in C++ Polymorphism.   \n";


    cout<<"        #include <iostream> \n";
    cout<<"     #include <string>\n";
    cout<<"     using namespace std    \n";

// Base class
    cout<<"     class Animal   \n";
    cout<<"     {   \n";
    cout<<"     public:   \n";
    cout<<"     void animalSound()   \n";
    cout<<"     {   \n";

    cout<<"        cout <<  The animal makes a sound ;   \n   ";
    cout<<"     }   \n";
    cout<<"     }    ;    \n";

// Derived class
    cout<<"     class Pig : public Animal   \n";
    cout<<"     {   \n";
    cout<<"     public:   \n";
    cout<<"     void animalSound()   \n";
    cout<<"     {   \n";
    cout<<"        cout <<  The pig says: wee wee \n  ;   \n";
    cout<<"     }   \n";
    cout<<"     };   \n";

// Derived class
    cout<<"     class Dog : public Animal   \n";
    cout<<"     {   \n";
    cout<<"      public:   \n";
    cout<<"     void animalSound()   \n";
    cout<<"     {   \n";

    cout<<"        cout <<  The dog says: bow wow \n  ;   \n";
    cout<<"     }   \n";
    cout<<"     };   \n";

    cout<<"     int main()   \n";
    cout<<"     {   \n";
    cout<<"     Animal myAnimal;   \n";
    cout<<"     Pig myPig;   \n";
    cout<<"     Dog myDog;   \n";

    cout<<"     myAnimal.animalSound();   \n";
    cout<<"     myPig.animalSound();   \n";
    cout<<"     myDog.animalSound();   \n";
    cout<<"     return 0;   \n";
    cout<<"     }   \n";

    system("pause");

    }
    else
    {
        continue;
    }

        }
                                              ///********Polymorphism end******///







                                              ///********Files Start******///

        else if (inp=="29" || inp=="files" || inp=="Files")
        {
            system("cls");
            system("color 70");

            cout<<endl<<endl<<endl;
    cout<<"             * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *"<<endl;
    cout<<"             *                                                                                                                                                                               * "<<endl;
    cout<<"             *                                                                                                                                                                               *"<<endl;
    cout<<"             *                                                                                                                                                                               *"<<endl;
    cout<<"             *       -----------------------------------------------------------------------------------------------------------------------------------------------------------------       *"<<endl;
    cout<<"             *       ||||||||||||||||||||||||||||||||||||||||| <= => @https://www.teamasnn.com/cplusplus/cpp_basic_files.htm. |||||||||||||||||||||||||||||||||||||||||||||||||||||||       *"<<endl;
    cout<<"             *       -----------------------------------------------------------------------------------------------------------------------------------------------------------------       *"<<endl;
    cout<<"             *       =================================================================================================================================================================       *"<<endl;
    cout<<"             *       ||           __________                        ||--------------------/\\                         /\\---------------------||                                      ||       *"<<endl;
    cout<<"             *       ||          [          ]                       ||-------------------/  \\                       /  \\--------------------||                                      ||       *"<<endl;
    cout<<"             *       ||          [ TeamASNN ]                       ||-------------------\\  /       TEAM ASNN       \\  /--------------------||                                      ||       *"<<endl;
    cout<<"             *       ||          [ LearnC++ ]                       ||--------------------\\/                         \\/---------------------||                                      ||       *"<<endl;
    cout<<"             *       ||          [__________]                       ||----------------------|||||||||||||||||||||||||-----------------------||                                      ||       *"<<endl;
    cout<<"             *       =================================================================================================================================================================       *"<<endl;
    cout<<"             *                                                                                                                                                                               *"<<endl;
    cout<<"             *                                                                                                                                                                               *"<<endl;
    cout<<"             *       =================================================================================================================================================================       *"<<endl;
    cout<<"             *       ||           ----------------------                              ***********************************                           ----------------------          ||       *"<<endl;
    cout<<"             *       ||           | << Previous page   |                              **             Files             **                           |     Next page  >>  |          ||       *"<<endl;
    cout<<"             *       ||           ----------------------                              ***********************************                           ----------------------          ||       *"<<endl;
    cout<<"             *       =================================================================================================================================================================       *"<<endl;
    cout<<"             *       |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||       *"<<endl;
    cout<<"             *       =================================================================================================================================================================       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||      C++ Files                                                                                                                                              ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||      The fstream library allows us to work with files.                                                                                                      ||       *"<<endl;
    cout<<"             *       ||      To use the fstream library, include both the standard <iostream> AND the <fstream> header file:                                                        ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||      Example                                                                                                                                                ||       *"<<endl;
    cout<<"             *       ||      _________________________________________                                                                                                              ||       *"<<endl;
    cout<<"             *       ||     |                                         |                                                                                                             ||       *"<<endl;
    cout<<"             *       ||     |    #include <iostream>                  |                                                                                                             ||       *"<<endl;
    cout<<"             *       ||     |    #include <fstream>                   |                                                                                                             ||       *"<<endl;
    cout<<"             *       ||     |_________________________________________|                                                                                                             ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||     There are three classes included in the fstream library, which are used to create, write or read files:                                                 ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||      __________________________________________________________________________________________________                                                     ||       *"<<endl;
    cout<<"             *       ||     |                                                                                                  |                                                    ||       *"<<endl;
    cout<<"             *       ||     |    Class       	Description                                                                    |                                                    ||       *"<<endl;
    cout<<"             *       ||     |    ofstream    	Creates and writes to files                                                    |                                                    ||       *"<<endl;
    cout<<"             *       ||     |    ifstream    	Reads from files                                                               |                                                    ||       *"<<endl;
    cout<<"             *       ||     |    fstream     	A combination of ofstream and ifstream: creates, reads, and writes to files    |                                                    ||       *"<<endl;
    cout<<"             *       ||     |__________________________________________________________________________________________________|                                                    ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||     Create and Write To a File                                                                                                                              ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||     To create a file, use either the ofstream or fstream class, and specify the name of the file.                                                           ||       *"<<endl;
    cout<<"             *       ||     To write to the file, use the insertion operator (<<).                                                                                                  ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||     Example                                                                                                                                                 ||       *"<<endl;
    cout<<"             *       ||     _____________________________________________________________________________                                                                           ||       *"<<endl;
    cout<<"             *       ||    |                                                                             |                                                                          ||       *"<<endl;
    cout<<"             *       ||    |    #include <iostream>                                                      |                                                                          ||       *"<<endl;
    cout<<"             *       ||    |    #include <fstream>                                                       |                                                                          ||       *"<<endl;
    cout<<"             *       ||    |    using namespace std;                                                     |                                                                          ||       *"<<endl;
    cout<<"             *       ||    |                                                                             |                                                                          ||       *"<<endl;
    cout<<"             *       ||    |    int main() {                                                             |                                                                          ||       *"<<endl;
    cout<<"             *       ||    |    // Create and open a text file                                           |                                                                          ||       *"<<endl;
    cout<<"             *       ||    |    ofstream MyFile(''filename.txt'');                                       |                                                                          ||       *"<<endl;
    cout<<"             *       ||    |    // Write to the file                                                     |                                                                          ||       *"<<endl;
    cout<<"             *       ||    |    MyFile << ''Files can be tricky, but it is fun enough!'' ;               |                                                                          ||       *"<<endl;
    cout<<"             *       ||    |    // Close the file                                                        |                                                                          ||       *"<<endl;
    cout<<"             *       ||    |    MyFile.close();                                                          |                                                                          ||       *"<<endl;
    cout<<"             *       ||    |    }                                                                        |                                                                          ||       *"<<endl;
    cout<<"             *       ||    |_____________________________________________________________________________|                                                                          ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||     Read a File                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||     To read from a file, use either the ifstream or fstream class, and the name of the file.                                                                ||       *"<<endl;
    cout<<"             *       ||     Note that we also use a while loop together with the getline() function (which belongs to the ifstream class)                                           ||       *"<<endl;
    cout<<"             *       ||     to read the file line by line, and to print the content of the file.                                                                                    ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       =================================================================================================================================================================       *"<<endl;
    cout<<"             *       |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||       *"<<endl;
    cout<<"             *       =================================================================================================================================================================       *"<<endl;
    cout<<"             *                                                                                                                                                                               * "<<endl;
    cout<<"             *                                                                                                                                                                               *"<<endl;
    cout<<"             *                                                                                                                                                                               *"<<endl;
    cout<<"             * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *"<<endl;
    cout<<endl<<endl<<endl;
    system("pause");


        }
                                              ///********Files end******///







                                              ///********Exception Start******///

        else if (inp=="30" || inp=="exception" || inp=="Exception")
        {
            system("cls");
            system("color 70");


    cout<<endl<<endl<<endl;
    cout<<"             * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *"<<endl;
    cout<<"             *                                                                                                                                                                               * "<<endl;
    cout<<"             *                                                                                                                                                                               *"<<endl;
    cout<<"             *                                                                                                                                                                               *"<<endl;
    cout<<"             *       -----------------------------------------------------------------------------------------------------------------------------------------------------------------       *"<<endl;
    cout<<"             *       ||||||||||||||||||||||||||||||||||||||||| <= => @https://www.teamasnn.com/cplusplus/cpp_basic_exception.htm. ||||||||||||||||||||||||||||||||||||||||||||||||||||       *"<<endl;
    cout<<"             *       -----------------------------------------------------------------------------------------------------------------------------------------------------------------       *"<<endl;
    cout<<"             *       =================================================================================================================================================================       *"<<endl;
    cout<<"             *       ||           __________                        ||--------------------/\\                         /\\---------------------||                                      ||       *"<<endl;
    cout<<"             *       ||          [          ]                       ||-------------------/  \\                       /  \\--------------------||                                      ||       *"<<endl;
    cout<<"             *       ||          [ TeamASNN ]                       ||-------------------\\  /       TEAM ASNN       \\  /--------------------||                                      ||       *"<<endl;
    cout<<"             *       ||          [ LearnC++ ]                       ||--------------------\\/                         \\/---------------------||                                      ||       *"<<endl;
    cout<<"             *       ||          [__________]                       ||----------------------|||||||||||||||||||||||||-----------------------||                                      ||       *"<<endl;
    cout<<"             *       =================================================================================================================================================================       *"<<endl;
    cout<<"             *                                                                                                                                                                               *"<<endl;
    cout<<"             *                                                                                                                                                                               *"<<endl;
    cout<<"             *       =================================================================================================================================================================       *"<<endl;
    cout<<"             *       ||           ----------------------                              ***********************************                           ----------------------          ||       *"<<endl;
    cout<<"             *       ||           | << Previous page   |                              **          Exception            **                           |     Next page  >>  |          ||       *"<<endl;
    cout<<"             *       ||           ----------------------                              ***********************************                           ----------------------          ||       *"<<endl;
    cout<<"             *       =================================================================================================================================================================       *"<<endl;
    cout<<"             *       |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||       *"<<endl;
    cout<<"             *       =================================================================================================================================================================       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||  An exception is a problem that arises during the execution of a program. A C++ exception is a response to an exceptional circumstance that arises while a  ||       *"<<endl;
    cout<<"             *       ||  program is running, such as an attempt to divide by zero.                                                                                                  ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||  Exceptions provide a way to transfer control from one part of a program to another. C++ exception handling is built upon three keywords: try, catch, and   ||       *"<<endl;
    cout<<"             *       ||  throw.                                                                                                                                                     ||       *"<<endl;
    cout<<"             *       ||        *throw - A program throws an exception when a problem shows up. This is done using a throw keyword.                                                  ||       *"<<endl;
    cout<<"             *       ||        *catch - A program catches an exception with an exception handler at the place in a program where you want to handle the problem. The catch keyword  ||       *"<<endl;
    cout<<"             *       ||                 indicates the catching of an exception.                                                                                                     ||       *"<<endl;
    cout<<"             *       ||        *try - A try block identifies a block of code for which particular exceptions will be activated. It's followed by one or more catch blocks.          ||       *"<<endl;
    cout<<"             *       ||  Assuming a block will raise an exception, a method catches an exception using a combination of the try and catch keywords. A try/catch block is placed     ||       *"<<endl;
    cout<<"             *       ||  around the code that might generate an exception. Code within a try/catch block is referred to as protected code, and the syntax for using try/catch as    ||       *"<<endl;
    cout<<"             *       ||  follows -                                                                                                                                                  ||       *"<<endl;
    cout<<"             *       ||              |--------------------------------------------|                                                                                                 ||       *"<<endl;
    cout<<"             *       ||              | try {                                      |                                                                                                 ||       *"<<endl;
    cout<<"             *       ||              |     // protected code                      |                                                                                                 ||       *"<<endl;
    cout<<"             *       ||              | } catch( ExceptionName e1 ) {              |                                                                                                 ||       *"<<endl;
    cout<<"             *       ||              |    // catch block                          |                                                                                                 ||       *"<<endl;
    cout<<"             *       ||              | } catch( ExceptionName e2 ) {              |                                                                                                 ||       *"<<endl;
    cout<<"             *       ||              |   // catch block                           |                                                                                                 ||       *"<<endl;
    cout<<"             *       ||              | } catch( ExceptionName eN ) {              |                                                                                                 ||       *"<<endl;
    cout<<"             *       ||              |   // catch block                           |                                                                                                 ||       *"<<endl;
    cout<<"             *       ||              | }                                          |                                                                                                 ||       *"<<endl;
    cout<<"             *       ||              |--------------------------------------------|                                                                                                 ||       *"<<endl;
    cout<<"             *       ||  You can list down multiple catch statements to catch different type of exceptions in case your try block raises more than one exception in different       ||       *"<<endl;
    cout<<"             *       ||  situations.                                                                                                                                                ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||                **Throwing Exceptions                                                                                                                        ||       *"<<endl;
    cout<<"             *       ||  Exceptions can be thrown anywhere within a code block using throw statement. The operand of the throw statement determines a type for the exception and can||       *"<<endl;
    cout<<"             *       ||  be any expression and the type of the result of the expression determines the type of exception thrown.                                                    ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||  Following is an example of throwing an exception when dividing by zero condition occurs -                                                                  ||       *"<<endl;
    cout<<"             *       ||               |------------------------------------------|                                                                                                  ||       *"<<endl;
    cout<<"             *       ||               | double division(int a, int b) {          |                                                                                                  ||       *"<<endl;
    cout<<"             *       ||               |   if( b == 0 ) {                         |                                                                                                  ||       *"<<endl;
    cout<<"             *       ||               |      throw Division by zero condition!;  |                                                                                                  ||       *"<<endl;
    cout<<"             *       ||               |   }                                      |                                                                                                  ||       *"<<endl;
    cout<<"             *       ||               |   return (a/b);                          |                                                                                                  ||       *"<<endl;
    cout<<"             *       ||               | }                                        |                                                                                                  ||       *"<<endl;
    cout<<"             *       ||               |------------------------------------------|                                                                                                  ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||               **Catching Exceptions                                                                                                                         ||       *"<<endl;
    cout<<"             *       ||  The catch block following the try block catches any exception. You can specify what type of exception you want to catch and this is determined by the      ||       *"<<endl;
    cout<<"             *       ||  exception declaration that appears in parentheses following the keyword catch.                                                                             ||       *"<<endl;
    cout<<"             *       ||                |------------------------------------------------|                                                                                           ||       *"<<endl;
    cout<<"             *       ||                | try {                                          |                                                                                           ||       *"<<endl;
    cout<<"             *       ||                |   // protected code                            |                                                                                           ||       *"<<endl;
    cout<<"             *       ||                | } catch( ExceptionName e ) {                   |                                                                                           ||       *"<<endl;
    cout<<"             *       ||                |   // code to handle ExceptionName exception    |                                                                                           ||       *"<<endl;
    cout<<"             *       ||                | }                                              |                                                                                           ||       *"<<endl;
    cout<<"             *       ||                |------------------------------------------------|                                                                                           ||       *"<<endl;
    cout<<"             *       ||  Above code will catch an exception of ExceptionName type. If you want to specify that a catch block should handle any type of exception that is thrown in  ||       *"<<endl;
    cout<<"             *       ||  a try block, you must put an ellipsis, ..., between the parentheses enclosing the exception declaration as follows -                                       ||       *"<<endl;
    cout<<"             *       ||                |------------------------------------------------|                                                                                           ||       *"<<endl;
    cout<<"             *       ||                | try {                                          |                                                                                           ||       *"<<endl;
    cout<<"             *       ||                |    // protected code                           |                                                                                           ||       *"<<endl;
    cout<<"             *       ||                | } catch(...) {                                 |                                                                                           ||       *"<<endl;
    cout<<"             *       ||                |   // code to handle any exception              |                                                                                           ||       *"<<endl;
    cout<<"             *       ||                | }                                              |                                                                                           ||       *"<<endl;
    cout<<"             *       ||                |------------------------------------------------|                                                                                           ||       *"<<endl;
    cout<<"             *       ||  The following is an example, which throws a division by zero exception and we catch it in catch block.                                                     ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||                |---------------------------------------------------|                                                                                        ||       *"<<endl;
    cout<<"             *       ||                | #include <iostream>                               |                                                                                        ||       *"<<endl;
    cout<<"             *       ||                | using namespace std;                              |                                                                                        ||       *"<<endl;
    cout<<"             *       ||                |                                                   |                                                                                        ||       *"<<endl;
    cout<<"             *       ||                | double division(int a, int b) {                   |                                                                                        ||       *"<<endl;
    cout<<"             *       ||                |    if( b == 0 ) {                                 |                                                                                        ||       *"<<endl;
    cout<<"             *       ||                |       throw Division by zero condition!;          |                                                                                        ||       *"<<endl;
    cout<<"             *       ||                |    }                                              |                                                                                        ||       *"<<endl;
    cout<<"             *       ||                |    return (a/b);                                  |                                                                                        ||       *"<<endl;
    cout<<"             *       ||                | }                                                 |                                                                                        ||       *"<<endl;
    cout<<"             *       ||                |                                                   |                                                                                        ||       *"<<endl;
    cout<<"             *       ||                | int main () {                                     |                                                                                        ||       *"<<endl;
    cout<<"             *       ||                |   int x = 50;                                     |                                                                                        ||       *"<<endl;
    cout<<"             *       ||                |   int y = 0;                                      |                                                                                        ||       *"<<endl;
    cout<<"             *       ||                |   double z = 0;                                   |                                                                                        ||       *"<<endl;
    cout<<"             *       ||                |                                                   |                                                                                        ||       *"<<endl;
    cout<<"             *       ||                |   try {                                           |                                                                                        ||       *"<<endl;
    cout<<"             *       ||                |      z = division(x, y);                          |                                                                                        ||       *"<<endl;
    cout<<"             *       ||                |      cout << z << endl;                           |                                                                                        ||       *"<<endl;
    cout<<"             *       ||                |    } catch (const char* msg) {                    |                                                                                        ||       *"<<endl;
    cout<<"             *       ||                |     cerr << msg << endl;                          |                                                                                        ||       *"<<endl;
    cout<<"             *       ||                |    }                                              |                                                                                        ||       *"<<endl;
    cout<<"             *       ||                |    return 0;                                      |                                                                                        ||       *"<<endl;
    cout<<"             *       ||                | }                                                 |                                                                                        ||       *"<<endl;
    cout<<"             *       ||                |---------------------------------------------------|                                                                                        ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||  Because we are raising an exception of type const char*, so while catching this exception, we have to use const char* in catch block.If we compile and run ||       *"<<endl;
    cout<<"             *       ||  above code, this would produce the following result -                                                                                                      ||       *"<<endl;
    cout<<"             *       ||        Division by zero condition!                                                                                                                          ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||                **Define New Exceptions                                                                                                                      ||       *"<<endl;
    cout<<"             *       ||  You can define your own exceptions by inheriting and overriding exception class functionality. Following is the example, which shows how you can use       ||       *"<<endl;
    cout<<"             *       ||  std::exception class to implement your own exception in standard way -                                                                                     ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||                |---------------------------------------------------------------|                                                                            ||       *"<<endl;
    cout<<"             *       ||                |  #include <iostream>                                          |                                                                            ||       *"<<endl;
    cout<<"             *       ||                |  #include <exception>                                         |                                                                            ||       *"<<endl;
    cout<<"             *       ||                |  using namespace std;                                         |                                                                            ||       *"<<endl;
    cout<<"             *       ||                |                                                               |                                                                            ||       *"<<endl;
    cout<<"             *       ||                |  struct MyException : public exception {                      |                                                                            ||       *"<<endl;
    cout<<"             *       ||                |     const char * what () const throw () {                     |                                                                            ||       *"<<endl;
    cout<<"             *       ||                |       return C++ Exception;                                   |                                                                            ||       *"<<endl;
    cout<<"             *       ||                |     }                                                         |                                                                            ||       *"<<endl;
    cout<<"             *       ||                |  };                                                           |                                                                            ||       *"<<endl;
    cout<<"             *       ||                |                                                               |                                                                            ||       *"<<endl;
    cout<<"             *       ||                |  int main() {                                                 |                                                                            ||       *"<<endl;
    cout<<"             *       ||                |    try {                                                      |                                                                            ||       *"<<endl;
    cout<<"             *       ||                |      throw MyException();                                     |                                                                            ||       *"<<endl;
    cout<<"             *       ||                |     } catch(MyException& e) {                                 |                                                                            ||       *"<<endl;
    cout<<"             *       ||                |      std::cout << MyException caught << std::endl;            |                                                                            ||       *"<<endl;
    cout<<"             *       ||                |      std::cout << e.what() << std::endl;                      |                                                                            ||       *"<<endl;
    cout<<"             *       ||                |     } catch(std::exception& e) {                              |                                                                            ||       *"<<endl;
    cout<<"             *       ||                |       //Other errors                                          |                                                                            ||       *"<<endl;
    cout<<"             *       ||                |     }                                                         |                                                                            ||       *"<<endl;
    cout<<"             *       ||                |  }                                                            |                                                                            ||       *"<<endl;
    cout<<"             *       ||                |---------------------------------------------------------------|                                                                            ||       *"<<endl;
    cout<<"             *       ||  This would produce the following result -                                                                                                                  ||       *"<<endl;
    cout<<"             *       ||             |-------------------------|                                                                                                                     ||       *"<<endl;
    cout<<"             *       ||             | MyException caught      |                                                                                                                     ||       *"<<endl;
    cout<<"             *       ||             | C++ Exception           |                                                                                                                     ||       *"<<endl;
    cout<<"             *       ||             |-------------------------|                                                                                                                     ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||  Here, what() is a public method provided by exception class and it has been overridden by all the child exception classes. This returns the cause of an    ||       *"<<endl;
    cout<<"             *       ||  exception.                                                                                                                                                 ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       =================================================================================================================================================================       *"<<endl;
    cout<<"             *       |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||       *"<<endl;
    cout<<"             *       =================================================================================================================================================================       *"<<endl;
    cout<<"             *                                                                                                                                                                               * "<<endl;
    cout<<"             *                                                                                                                                                                               *"<<endl;
    cout<<"             *                                                                                                                                                                               *"<<endl;
    cout<<"             * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *"<<endl;
    cout<<endl<<endl<<endl;
    cout<<"             ================================================================================================================================================================================="<<endl;
    cout<<"             ||                                                                                                                                                                             ||"<<endl;
    cout<<"             ||      Do you want to see some problems related to this topic? (Press 'y/Y' for Yes || 'n/N' for No) :::    "; cin>>p;
    cout<<"             ||                                                                                                                                                                             ||";
    cout<<endl<<"             ================================================================================================================================================================================="<<endl<<endl;



    if(p= "y" || "Y" || "yes" || "YES" || "Yes" )
    {
        system("cls");
        system("color 70"); //body for the problem show casing

        cout<<endl<<endl<<endl;
    cout<<"                 write a C++ program which Take Inputs from User and Store Them in Exception.\n\n\n"<<endl;
    cout<<"    #include <iostream>\n";
    cout<<"    using namespace std;\n\n";

    cout<<"    int main() {\n\n";

    cout<<"    try {\n";
    cout<<"    int age = 15\n\n";
    cout<<"    if (age >= 18)\n";
    cout<<"    {\n\n";

    cout<<"      cout << ''Access granted - you are old enough.''\n";
    cout<<"      } else {\n";
    cout<<"      throw (age)\n";
    cout<<"      }\n";
    cout<<"      } \n";
    cout<<"      catch (int myNum) {\n";

    cout<<"    cout << Access denied - You must be at least 18 years old.\n\n";
    cout<<"    cout << Age is: << myNum\n";
    cout<<"    }\n";
    cout<<"    return 0;\n";
    cout<<"    } \n";

    system("pause");
    }
    else
    {
        continue;
    }


        }
                                              ///********Exception end******///



                                            ///******** Start******///

        else if (inp=="31" || inp=="QUIZ" || inp=="quiz")
        {
            system("cls");
            system("color 70");

    cout<<endl<<endl<<endl;
    cout<<"             * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *"<<endl;
    cout<<"             *                                                                                                                                                                               * "<<endl;
    cout<<"             *                                                                                                                                                                               *"<<endl;
    cout<<"             *                                                                                                                                                                               *"<<endl;
    cout<<"             *       -----------------------------------------------------------------------------------------------------------------------------------------------------------------       *"<<endl;
    cout<<"             *       ||||||||||||||||||||||||||||||||||||||||| <- -> @https://www.teamasnn.com/cplusplus/cpp_basic_quiz.htm. |||||||||||||||||||||||||||||||||||||||||||||||||||||||||       *"<<endl;
    cout<<"             *       -----------------------------------------------------------------------------------------------------------------------------------------------------------------       *"<<endl;
    cout<<"             *       =================================================================================================================================================================       *"<<endl;
    cout<<"             *       ||           __________                        ||--------------------/\\                         /\\---------------------||                                      ||       *"<<endl;
    cout<<"             *       ||          [          ]                       ||-------------------/  \\                       /  \\--------------------||                                      ||       *"<<endl;
    cout<<"             *       ||          [ TeamASNN ]                       ||-------------------\\  /       TEAM ASNN       \\  /--------------------||                                      ||       *"<<endl;
    cout<<"             *       ||          [ LearnC++ ]                       ||--------------------\\/                         \\/---------------------||                                      ||       *"<<endl;
    cout<<"             *       ||          [__________]                       ||----------------------|||||||||||||||||||||||||-----------------------||                                      ||       *"<<endl;
    cout<<"             *       =================================================================================================================================================================       *"<<endl;
    cout<<"             *                                                                                                                                                                               *"<<endl;
    cout<<"             *                                                                                                                                                                               *"<<endl;
    cout<<"             *       =================================================================================================================================================================       *"<<endl;
    cout<<"             *       ||           ----------------------                              ***********************************                           ----------------------          ||       *"<<endl;
    cout<<"             *       ||           | << Previous page   |                              **             QUIZ              **                           |     Next page  >>  |          ||       *"<<endl;
    cout<<"             *       ||           ----------------------                              ***********************************                           ----------------------          ||       *"<<endl;
    cout<<"             *       =================================================================================================================================================================       *"<<endl;
    cout<<"             *       |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||       *"<<endl;
    cout<<"             *       =================================================================================================================================================================       *"<<endl;



        while (1)
    {

    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||                                                               "<<"1. Login                                                                                      ||       *"<<endl;
    cout<<"             *       ||                                                               "<<"2. Register                                                                                   ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||                                                        "<<"Please Enter Your Option : ";
        cin>>command;

        if (command=="register" || command=="2" || command=="r")
        {

            ofstream g("registration.txt");
            if (!g.is_open())
            {
    cout<<"             *       ||                                                        "<<"could not open file                                                                                  ||       *"<<endl;
               // return 0;
            }
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||                                                          "<<"New Username : ";
            cin>>registerName;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||                                                          "<<"New Password : ";
            cin>>registerPassword;
            g<<registerName;
            g<<'\n';
            g<<registerPassword;
            g.close();
        }
        if (command=="login"||command=="1"||command=="l")
        {

            ifstream f("registration.txt");
            if (!f.is_open())
            {
                cout<<"could not open file\n";
               // return 0;
            }
            getline(f, name, '\n');
            getline(f, password, '\n');

            f.close();
           // while (1)
            {
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||                                                          "<<"Enter Username : ";
                cin>>inName;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||                                                          "<<"Enter Password : ";
                cin>>inPassword;

                if (inName==name && inPassword==password)
                {
     cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
     cout<<"             *       ||                                                          "<<"Login Successful  !!!                                                                              ||       *"<<endl;
     cout<<"             *       ||                                                          "<<"Welcome "<<inName<<endl;



    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||                                                                         ______                                                                              ||       *"<<endl;
    cout<<"             *       ||                                                                        |      |                                                                             ||       *"<<endl;
    cout<<"             *       ||                                                                        | QUIZ |                                                                             ||       *"<<endl;
    cout<<"             *       ||                                                                        |______|                                                                             ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||   01) Which of the followings is/are automatically added to every class, if we do not write our own.                                                        ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||           1. All of the above           2. Copy Constructor                                                                                                 ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||           3. Assignment Operator        4. A constructor without any parameter                                                                              ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||           Please Enter Your Option : "; cin>>val;  //cout<<"                                                                                                   ||       *";


                                    if (val== "1" || val== "a")
                                    {
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
                                      sum=1;
    cout<<"             *       ||                                       Congrats!!! Your ans is Correct.                                 Currect Ans : "<<sum<<"/10                                   ||       *"<<endl;
    cout<<"             *       ||                                                                                                        Wrong Ans   : "<<wrong<<"/10                                   ||       *"<<endl;

                                    }
                                    else  if (val== "2" || val== "b")
                                    {
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
                                      wrong=1;
    cout<<"             *       ||                                       Sorry !!! Your ans is Wrong.                                   Currect Ans : "<<sum<<"/10                                     ||       *"<<endl;
    cout<<"             *       ||                                       Correct ans is : Option 1.                                     Wrong Ans   : "<<wrong<<"/10                                     ||       *"<<endl;
                                    }
                                     else if (val== "3" || val== "c")
                                    {
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
                                      wrong=1;
    cout<<"             *       ||                                       Sorry !!! Your ans is Wrong.                                   Currect Ans : "<<sum<<"/10                                     ||       *"<<endl;
    cout<<"             *       ||                                       Correct ans is : Option 1.                                     Wrong Ans   : "<<wrong<<"/10                                     ||       *"<<endl;



                                    }
                                     else if (val== "4" || val== "d")
                                    {
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
                                      wrong=1;
    cout<<"             *       ||                                       Sorry !!! Your ans is Wrong.                                   Currect Ans : "<<sum<<"/10                                     ||       *"<<endl;
    cout<<"             *       ||                                       Correct ans is : Option 1.                                     Wrong Ans   : "<<wrong<<"/10                                     ||       *"<<endl;

                                    }

                                      else
                                  {
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
                                      wrong=1;
    cout<<"             *       ||                                       Sorry !!! Your ans is Wrong.                                   Currect Ans : "<<sum<<"/10                                     ||       *"<<endl;
    cout<<"             *       ||                                       Correct ans is : Option 1.                                     Wrong Ans   : "<<wrong<<"/10                                     ||       *"<<endl;

                                    }


    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||   02) Which of the following functions must use reference.                                                                                                  ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||           1. Copy Constructor                    2. Parameterized constructor                                                                               ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||           3. Assignment operator function        4. Destructor                                                                                              ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||           Please Enter Your Option : "; cin>>val;  //cout<<"                                                                                                   ||       *";


                                    if (val== "1" || val== "a")
                                    {
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
                                      sum=sum+1;
    cout<<"             *       ||                                       Congrats!!! Your ans is Correct.                                 Currect Ans : "<<sum<<"/10                                   ||       *"<<endl;
    cout<<"             *       ||                                                                                                        Wrong Ans   : "<<wrong<<"/10                                   ||       *"<<endl;

                                    }
                                    else  if (val== "2" || val== "b")
                                    {
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
                                      wrong=wrong+1;
    cout<<"             *       ||                                       Sorry !!! Your ans is Wrong.                                   Currect Ans : "<<sum<<"/10                                     ||       *"<<endl;
    cout<<"             *       ||                                       Correct ans is : Option 1.                                     Wrong Ans   : "<<wrong<<"/10                                     ||       *"<<endl;
                                    }
                                     else if (val== "3" || val== "c")
                                    {
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
                                      wrong=wrong+1;
    cout<<"             *       ||                                       Sorry !!! Your ans is Wrong.                                   Currect Ans : "<<sum<<"/10                                     ||       *"<<endl;
    cout<<"             *       ||                                       Correct ans is : Option 1.                                     Wrong Ans   : "<<wrong<<"/10                                     ||       *"<<endl;



                                    }
                                     else if (val== "4" || val== "d")
                                    {
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
                                      wrong=wrong+1;
    cout<<"             *       ||                                       Sorry !!! Your ans is Wrong.                                   Currect Ans : "<<sum<<"/10                                     ||       *"<<endl;
    cout<<"             *       ||                                       Correct ans is : Option 1.                                     Wrong Ans   : "<<wrong<<"/10                                     ||       *"<<endl;

                                    }

                                      else
                                  {
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
                                      wrong=wrong+1;
    cout<<"             *       ||                                       Sorry !!! Your ans is Wrong.                                   Currect Ans : "<<sum<<"/10                                     ||       *"<<endl;
    cout<<"             *       ||                                       Correct ans is : Option 1.                                     Wrong Ans   : "<<wrong<<"/10                                     ||       *"<<endl;

                                    }


    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||   03) Which of the following cannot be passed to a function in C++ ?                                                                                        ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||           1. Header file        2. Constant                                                                                                                 ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||           3. Array              4. Structure                                                                                                                ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||           Please Enter Your Option : "; cin>>val;  //cout<<"                                                                                                   ||       *";


                                    if (val== "1" || val== "a")
                                    {
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
                                      sum=sum+1;
    cout<<"             *       ||                                       Congrats!!! Your ans is Correct.                                 Currect Ans : "<<sum<<"/10                                   ||       *"<<endl;
    cout<<"             *       ||                                                                                                        Wrong Ans   : "<<wrong<<"/10                                   ||       *"<<endl;

                                    }
                                    else  if (val== "2" || val== "b")
                                    {
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
                                      wrong=wrong+1;
    cout<<"             *       ||                                       Sorry !!! Your ans is Wrong.                                   Currect Ans : "<<sum<<"/10                                     ||       *"<<endl;
    cout<<"             *       ||                                       Correct ans is : Option 1.                                     Wrong Ans   : "<<wrong<<"/10                                     ||       *"<<endl;
                                    }
                                     else if (val== "3" || val== "c")
                                    {
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
                                      wrong=wrong+1;
    cout<<"             *       ||                                       Sorry !!! Your ans is Wrong.                                   Currect Ans : "<<sum<<"/10                                     ||       *"<<endl;
    cout<<"             *       ||                                       Correct ans is : Option 1.                                     Wrong Ans   : "<<wrong<<"/10                                     ||       *"<<endl;



                                    }
                                     else if (val== "4" || val== "d")
                                    {
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
                                      wrong=wrong+1;
    cout<<"             *       ||                                       Sorry !!! Your ans is Wrong.                                   Currect Ans : "<<sum<<"/10                                     ||       *"<<endl;
    cout<<"             *       ||                                       Correct ans is : Option 1.                                     Wrong Ans   : "<<wrong<<"/10                                     ||       *"<<endl;

                                    }

                                      else
                                  {
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
                                      wrong=wrong+1;
    cout<<"             *       ||                                       Sorry !!! Your ans is Wrong.                                   Currect Ans : "<<sum<<"/10                                     ||       *"<<endl;
    cout<<"             *       ||                                       Correct ans is : Option 1.                                     Wrong Ans   : "<<wrong<<"/10                                     ||       *"<<endl;

                                    }



    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||   04) Can destuctors be private in C++?                                                                                                                     ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||           1. Yes                                                                                                                                            ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||           2. No                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||           Please Enter Your Option : "; cin>>val;  //cout<<"                                                                                                   ||       *";


                                    if (val== "1" || val== "a")
                                    {
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
                                      sum=sum+1;
    cout<<"             *       ||                                       Congrats!!! Your ans is Correct.                                 Currect Ans : "<<sum<<"/10                                   ||       *"<<endl;
    cout<<"             *       ||                                                                                                        Wrong Ans   : "<<wrong<<"/10                                   ||       *"<<endl;

                                    }
                                    else  if (val== "2" || val== "b")
                                    {
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
                                      wrong=wrong+1;
    cout<<"             *       ||                                       Sorry !!! Your ans is Wrong.                                   Currect Ans : "<<sum<<"/10                                     ||       *"<<endl;
    cout<<"             *       ||                                       Correct ans is : Option 1.                                     Wrong Ans   : "<<wrong<<"/10                                     ||       *"<<endl;
                                    }
                                     else if (val== "3" || val== "c")
                                    {
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
                                      wrong=wrong+1;
    cout<<"             *       ||                                       Sorry !!! Your ans is Wrong.                                   Currect Ans : "<<sum<<"/10                                     ||       *"<<endl;
    cout<<"             *       ||                                       Correct ans is : Option 1.                                     Wrong Ans   : "<<wrong<<"/10                                     ||       *"<<endl;



                                    }
                                     else if (val== "4" || val== "d")
                                    {
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
                                      wrong=wrong+1;
    cout<<"             *       ||                                       Sorry !!! Your ans is Wrong.                                   Currect Ans : "<<sum<<"/10                                     ||       *"<<endl;
    cout<<"             *       ||                                       Correct ans is : Option 1.                                     Wrong Ans   : "<<wrong<<"/10                                     ||       *"<<endl;

                                    }

                                      else
                                  {
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
                                      wrong=wrong+1;
    cout<<"             *       ||                                       Sorry !!! Your ans is Wrong.                                   Currect Ans : "<<sum<<"/10                                     ||       *"<<endl;
    cout<<"             *       ||                                       Correct ans is : Option 1.                                     Wrong Ans   : "<<wrong<<"/10                                     ||       *"<<endl;

                                    }



    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||   05) Which of the following in Object Oriented Programming is supported by Function overloading and default arguments features of C++.                     ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||           1. Polymorphism        2. Encapsulation                                                                                                           ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||           3. Inheritance         4. None of the above                                                                                                       ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||           Please Enter Your Option : "; cin>>val;  //cout<<"                                                                                                   ||       *";


                                    if (val== "1" || val== "a")
                                    {
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
                                      sum=sum+1;
    cout<<"             *       ||                                       Congrats!!! Your ans is Correct.                                 Currect Ans : "<<sum<<"/10                                   ||       *"<<endl;
    cout<<"             *       ||                                                                                                        Wrong Ans   : "<<wrong<<"/10                                   ||       *"<<endl;

                                    }
                                    else  if (val== "2" || val== "b")
                                    {
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
                                      wrong=wrong+1;
    cout<<"             *       ||                                       Sorry !!! Your ans is Wrong.                                   Currect Ans : "<<sum<<"/10                                     ||       *"<<endl;
    cout<<"             *       ||                                       Correct ans is : Option 1.                                     Wrong Ans   : "<<wrong<<"/10                                     ||       *"<<endl;
                                    }
                                     else if (val== "3" || val== "c")
                                    {
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
                                      wrong=wrong+1;
    cout<<"             *       ||                                       Sorry !!! Your ans is Wrong.                                   Currect Ans : "<<sum<<"/10                                     ||       *"<<endl;
    cout<<"             *       ||                                       Correct ans is : Option 1.                                     Wrong Ans   : "<<wrong<<"/10                                     ||       *"<<endl;



                                    }
                                     else if (val== "4" || val== "d")
                                    {
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
                                      wrong=wrong+1;
    cout<<"             *       ||                                       Sorry !!! Your ans is Wrong.                                   Currect Ans : "<<sum<<"/10                                     ||       *"<<endl;
    cout<<"             *       ||                                       Correct ans is : Option 1.                                     Wrong Ans   : "<<wrong<<"/10                                     ||       *"<<endl;

                                    }

                                      else
                                    {
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
                                      wrong=wrong+1;
    cout<<"             *       ||                                       Sorry !!! Your ans is Wrong.                                   Currect Ans : "<<sum<<"/10                                     ||       *"<<endl;
    cout<<"             *       ||                                       Correct ans is : Option 1.                                     Wrong Ans   : "<<wrong<<"/10                                     ||       *"<<endl;

                                    }



    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||   06) What is the index number of the last element of an array with 29 elements?                                                                            ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||           1. 28        2. 29                                                                                                                                ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||           3. 0         4. Programmer-defined                                                                                                                ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||           Please Enter Your Option : "; cin>>val;  //cout<<"                                                                                                   ||       *";


                                    if (val== "1" || val== "a")
                                    {
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
                                      sum=sum+1;
    cout<<"             *       ||                                       Congrats!!! Your ans is Correct.                                 Currect Ans : "<<sum<<"/10                                   ||       *"<<endl;
    cout<<"             *       ||                                                                                                        Wrong Ans   : "<<wrong<<"/10                                   ||       *"<<endl;

                                    }
                                    else  if (val== "2" || val== "b")
                                    {
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
                                      wrong=wrong+1;
    cout<<"             *       ||                                       Sorry !!! Your ans is Wrong.                                   Currect Ans : "<<sum<<"/10                                     ||       *"<<endl;
    cout<<"             *       ||                                       Correct ans is : Option 1.                                     Wrong Ans   : "<<wrong<<"/10                                     ||       *"<<endl;
                                    }
                                     else if (val== "3" || val== "c")
                                    {
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
                                      wrong=wrong+1;
    cout<<"             *       ||                                       Sorry !!! Your ans is Wrong.                                   Currect Ans : "<<sum<<"/10                                     ||       *"<<endl;
    cout<<"             *       ||                                       Correct ans is : Option 1.                                     Wrong Ans   : "<<wrong<<"/10                                     ||       *"<<endl;



                                    }
                                     else if (val== "4" || val== "d")
                                    {
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
                                      wrong=wrong+1;
    cout<<"             *       ||                                       Sorry !!! Your ans is Wrong.                                   Currect Ans : "<<sum<<"/10                                     ||       *"<<endl;
    cout<<"             *       ||                                       Correct ans is : Option 1.                                     Wrong Ans   : "<<wrong<<"/10                                     ||       *"<<endl;

                                    }

                                      else
                                  {
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
                                      wrong=wrong+1;
    cout<<"             *       ||                                       Sorry !!! Your ans is Wrong.                                   Currect Ans : "<<sum<<"/10                                     ||       *"<<endl;
    cout<<"             *       ||                                       Correct ans is : Option 1.                                     Wrong Ans   : "<<wrong<<"/10                                     ||       *"<<endl;

                                    }



    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||   07) Which of the following is the proper declaration of a pointer?                                                                                        ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||           1. int *x;        2. int &x;                                                                                                                      ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||           3. ptr x;         4. int x;                                                                                                                       ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||           Please Enter Your Option : "; cin>>val;  //cout<<"                                                                                                   ||       *";


                                    if (val== "1" || val== "a")
                                    {
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
                                      sum=sum+1;
    cout<<"             *       ||                                       Congrats!!! Your ans is Correct.                                 Currect Ans : "<<sum<<"/10                                   ||       *"<<endl;
    cout<<"             *       ||                                                                                                        Wrong Ans   : "<<wrong<<"/10                                   ||       *"<<endl;

                                    }
                                    else  if (val== "2" || val== "b")
                                    {
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
                                      wrong=wrong+1;
    cout<<"             *       ||                                       Sorry !!! Your ans is Wrong.                                   Currect Ans : "<<sum<<"/10                                     ||       *"<<endl;
    cout<<"             *       ||                                       Correct ans is : Option 1.                                     Wrong Ans   : "<<wrong<<"/10                                     ||       *"<<endl;
                                    }
                                     else if (val== "3" || val== "c")
                                    {
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
                                      wrong=wrong+1;
    cout<<"             *       ||                                       Sorry !!! Your ans is Wrong.                                   Currect Ans : "<<sum<<"/10                                     ||       *"<<endl;
    cout<<"             *       ||                                       Correct ans is : Option 1.                                     Wrong Ans   : "<<wrong<<"/10                                     ||       *"<<endl;



                                    }
                                     else if (val== "4" || val== "d")
                                    {
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
                                      wrong=wrong+1;
    cout<<"             *       ||                                       Sorry !!! Your ans is Wrong.                                   Currect Ans : "<<sum<<"/10                                     ||       *"<<endl;
    cout<<"             *       ||                                       Correct ans is : Option 1.                                     Wrong Ans   : "<<wrong<<"/10                                     ||       *"<<endl;

                                    }

                                      else
                                  {
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
                                      wrong=wrong+1;
    cout<<"             *       ||                                       Sorry !!! Your ans is Wrong.                                   Currect Ans : "<<sum<<"/10                                     ||       *"<<endl;
    cout<<"             *       ||                                       Correct ans is : Option 1.                                     Wrong Ans   : "<<wrong<<"/10                                     ||       *"<<endl;

                                    }



    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||   08) Which of the following adds one string to the end of another?                                                                                         ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||           1. append();           2. strcat();                                                                                                               ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||           3. stringadd();        4. stradd();                                                                                                               ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||           Please Enter Your Option : "; cin>>val;  //cout<<"                                                                                                   ||       *";


                                    if (val== "1" || val== "a")
                                    {
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
                                      sum=sum+1;
    cout<<"             *       ||                                       Congrats!!! Your ans is Correct.                                 Currect Ans : "<<sum<<"/10                                   ||       *"<<endl;
    cout<<"             *       ||                                                                                                        Wrong Ans   : "<<wrong<<"/10                                   ||       *"<<endl;

                                    }
                                    else  if (val== "2" || val== "b")
                                    {
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
                                      wrong=wrong+1;
    cout<<"             *       ||                                       Sorry !!! Your ans is Wrong.                                   Currect Ans : "<<sum<<"/10                                     ||       *"<<endl;
    cout<<"             *       ||                                       Correct ans is : Option 1.                                     Wrong Ans   : "<<wrong<<"/10                                     ||       *"<<endl;
                                    }
                                     else if (val== "3" || val== "c")
                                    {
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
                                      wrong=wrong+1;
    cout<<"             *       ||                                       Sorry !!! Your ans is Wrong.                                   Currect Ans : "<<sum<<"/10                                     ||       *"<<endl;
    cout<<"             *       ||                                       Correct ans is : Option 1.                                     Wrong Ans   : "<<wrong<<"/10                                     ||       *"<<endl;



                                    }
                                     else if (val== "4" || val== "d")
                                    {
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
                                      wrong=wrong+1;
    cout<<"             *       ||                                       Sorry !!! Your ans is Wrong.                                   Currect Ans : "<<sum<<"/10                                     ||       *"<<endl;
    cout<<"             *       ||                                       Correct ans is : Option 1.                                     Wrong Ans   : "<<wrong<<"/10                                     ||       *"<<endl;

                                    }

                                      else
                                  {
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
                                      wrong=wrong+1;
    cout<<"             *       ||                                       Sorry !!! Your ans is Wrong.                                   Currect Ans : "<<sum<<"/10                                     ||       *"<<endl;
    cout<<"             *       ||                                       Correct ans is : Option 1.                                     Wrong Ans   : "<<wrong<<"/10                                     ||       *"<<endl;

                                    }



    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||   09)  What is the final value of x when the code int x; for(x=0; x<10; x++) {} is run?                                                                     ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||           1. 9        2. 10                                                                                                                                 ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||           3. 1        4. 0                                                                                                                                  ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||           Please Enter Your Option : "; cin>>val;  //cout<<"                                                                                                   ||       *";


                                    if (val== "1" || val== "a")
                                    {
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
                                      sum=sum+1;
    cout<<"             *       ||                                       Congrats!!! Your ans is Correct.                                 Currect Ans : "<<sum<<"/10                                   ||       *"<<endl;
    cout<<"             *       ||                                                                                                        Wrong Ans   : "<<wrong<<"/10                                   ||       *"<<endl;

                                    }
                                    else  if (val== "2" || val== "b")
                                    {
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
                                      wrong=wrong+1;
    cout<<"             *       ||                                       Sorry !!! Your ans is Wrong.                                   Currect Ans : "<<sum<<"/10                                     ||       *"<<endl;
    cout<<"             *       ||                                       Correct ans is : Option 1.                                     Wrong Ans   : "<<wrong<<"/10                                     ||       *"<<endl;
                                    }
                                     else if (val== "3" || val== "c")
                                    {
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
                                      wrong=wrong+1;
    cout<<"             *       ||                                       Sorry !!! Your ans is Wrong.                                   Currect Ans : "<<sum<<"/10                                     ||       *"<<endl;
    cout<<"             *       ||                                       Correct ans is : Option 1.                                     Wrong Ans   : "<<wrong<<"/10                                     ||       *"<<endl;



                                    }
                                     else if (val== "4" || val== "d")
                                    {
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
                                      wrong=wrong+1;
    cout<<"             *       ||                                       Sorry !!! Your ans is Wrong.                                   Currect Ans : "<<sum<<"/10                                     ||       *"<<endl;
    cout<<"             *       ||                                       Correct ans is : Option 1.                                     Wrong Ans   : "<<wrong<<"/10                                     ||       *"<<endl;

                                    }

                                      else
                                  {
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
                                      wrong=wrong+1;
    cout<<"             *       ||                                       Sorry !!! Your ans is Wrong.                                   Currect Ans : "<<sum<<"/10                                     ||       *"<<endl;
    cout<<"             *       ||                                       Correct ans is : Option 1.                                     Wrong Ans   : "<<wrong<<"/10                                     ||       *"<<endl;

                                    }



    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||   10) Which is not a protection level provided by classes in C++?                                                                                           ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||           1. public         2. hidden                                                                                                                       ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||           3. private        4. protected                                                                                                                    ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||           Please Enter Your Option : "; cin>>val;  //cout<<"                                                                                                   ||       *";


                                    if (val== "1" || val== "a")
                                    {
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
                                      sum=sum+1;
    cout<<"             *       ||                                       Congrats!!! Your ans is Correct.                                 Currect Ans : "<<sum<<"/10                                   ||       *"<<endl;
    cout<<"             *       ||                                                                                                        Wrong Ans   : "<<wrong<<"/10                                   ||       *"<<endl;

                                    }
                                    else  if (val== "2" || val== "b")
                                    {
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
                                      wrong=wrong+1;
    cout<<"             *       ||                                       Sorry !!! Your ans is Wrong.                                   Currect Ans : "<<sum<<"/10                                     ||       *"<<endl;
    cout<<"             *       ||                                       Correct ans is : Option 1.                                     Wrong Ans   : "<<wrong<<"/10                                     ||       *"<<endl;
                                    }
                                     else if (val== "3" || val== "c")
                                    {
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
                                      wrong=wrong+1;
    cout<<"             *       ||                                       Sorry !!! Your ans is Wrong.                                   Currect Ans : "<<sum<<"/10                                     ||       *"<<endl;
    cout<<"             *       ||                                       Correct ans is : Option 1.                                     Wrong Ans   : "<<wrong<<"/10                                     ||       *"<<endl;



                                    }
                                     else if (val== "4" || val== "d")
                                    {
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
                                      wrong=wrong+1;
    cout<<"             *       ||                                       Sorry !!! Your ans is Wrong.                                   Currect Ans : "<<sum<<"/10                                     ||       *"<<endl;
    cout<<"             *       ||                                       Correct ans is : Option 1.                                     Wrong Ans   : "<<wrong<<"/10                                     ||       *"<<endl;

                                    }

                                      else
                                  {
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
                                      wrong=wrong+1;
    cout<<"             *       ||                                       Sorry !!! Your ans is Wrong.                                   Currect Ans : "<<sum<<"/10                                     ||       *"<<endl;
    cout<<"             *       ||                                       Correct ans is : Option 1.                                     Wrong Ans   : "<<wrong<<"/10                                     ||       *"<<endl;


                                }


    string grade;
    if(sum>=9)
    {
     grade=" A";
    }
    else if(sum>=8)
    {
        grade=" B";
    }
    else if(sum>=7)
    {
       grade=" C";
    }
    else if(sum>=6)
    {
        grade=" D";
    }
    else if(sum>=4)
    {
        grade=" E";
    }
    else if(sum<4)
    {
        grade=" F";
    }

    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       =================================================================================================================================================================       *"<<endl;
    cout<<"             *       |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||       *"<<endl;
    cout<<"             *       =================================================================================================================================================================       *"<<endl;
    cout<<"             *                                                                                                                                                                               * "<<endl;
    cout<<"             *                                                                                                                                                                               *"<<endl;
    cout<<"             *                                                                                                                                                                               *"<<endl;
    cout<<"             * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *"<<endl;



    system("cls ");
    system("color 0a");

    cout<<endl<<endl<<endl;
    cout<<"             * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *"<<endl;
    cout<<"             *                                                                                                                                                                               * "<<endl;
    cout<<"             *                                                                                                                                                                               *"<<endl;
    cout<<"             *                                                                                                                                                                               *"<<endl;
    cout<<"             *       -----------------------------------------------------------------------------------------------------------------------------------------------------------------       *"<<endl;
    cout<<"             *       ||||||||||||||||||||||||||||||||||||||||| <- -> @https://www.teamasnn.com/cplusplus/cpp_basic_certificate .htm. |||||||||||||||||||||||||||||||||||||||||||||||||       *"<<endl;
    cout<<"             *       -----------------------------------------------------------------------------------------------------------------------------------------------------------------       *"<<endl;
    cout<<"             *       =================================================================================================================================================================       *"<<endl;
    cout<<"             *       ||           __________                        ||--------------------/\\                         /\\---------------------||                                      ||       *"<<endl;
    cout<<"             *       ||          [          ]                       ||-------------------/  \\                       /  \\--------------------||                                      ||       *"<<endl;
    cout<<"             *       ||          [ TeamASNN ]                       ||-------------------\\  /       TEAM ASNN       \\  /--------------------||                                      ||       *"<<endl;
    cout<<"             *       ||          [ LearnC++ ]                       ||--------------------\\/                         \\/---------------------||                                      ||       *"<<endl;
    cout<<"             *       ||          [__________]                       ||----------------------|||||||||||||||||||||||||-----------------------||                                      ||       *"<<endl;
    cout<<"             *       =================================================================================================================================================================       *"<<endl;
    cout<<"             *                                                                                                                                                                               *"<<endl;
    cout<<"             *                                                                                                                                                                               *"<<endl;
    cout<<"             *       =================================================================================================================================================================       *"<<endl;
    cout<<"             *       ||           ----------------------                              ***********************************                           ----------------------          ||       *"<<endl;
    cout<<"             *       ||           | << Previous page   |                              **         Certificate           **                           |     Next page  >>  |          ||       *"<<endl;
    cout<<"             *       ||           ----------------------                              ***********************************                           ----------------------          ||       *"<<endl;
    cout<<"             *       =================================================================================================================================================================       *"<<endl;
    cout<<"             *       |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||       *"<<endl;
    cout<<"             *       =================================================================================================================================================================       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||                                                                     Your Quiz is completed                                                                  ||       *"<<endl;
    cout<<"             *       ||                                                                     __________________________                                                              ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||                                                                     Your correct Ans  : "<<sum<<" /10                                                               ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||                                                                     Your Wrong Ans    :  "<<wrong<<" /10                                                              ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||                                                                     Your Grade Is     : "<<grade<<"                                                                  ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||                                                              -->> To See Your Certificate Then Press Any Key                                                ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       =================================================================================================================================================================       *"<<endl;
    cout<<"             *       |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||       *"<<endl;
    cout<<"             *       =================================================================================================================================================================       *"<<endl;
    cout<<"             *                                                                                                                                                                               * "<<endl;
    cout<<"             *                                                                                                                                                                               *"<<endl;
    cout<<"             *                                                                                                                                                                               *"<<endl;
    cout<<"             * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *"<<endl;



    system("pause ");
    system("cls ");

    system("color 0a");

    cout<<endl<<endl<<endl;
    cout<<"             * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *"<<endl;
    cout<<"             *                                                                                                                                                                               * "<<endl;
    cout<<"             *                                                                                                                                                                               *"<<endl;
    cout<<"             *                                                                                                                                                                               *"<<endl;
    cout<<"             *       -----------------------------------------------------------------------------------------------------------------------------------------------------------------       *"<<endl;
    cout<<"             *       ||||||||||||||||||||||||||||||||||||||||| <- -> @https://www.teamasnn.com/cplusplus/cpp_basic_certificate.htm. ||||||||||||||||||||||||||||||||||||||||||||||||||       *"<<endl;
    cout<<"             *       -----------------------------------------------------------------------------------------------------------------------------------------------------------------       *"<<endl;
    cout<<"             *       =================================================================================================================================================================       *"<<endl;
    cout<<"             *       ||           __________                        ||--------------------/\\                         /\\---------------------||                                      ||       *"<<endl;
    cout<<"             *       ||          [          ]                       ||-------------------/  \\                       /  \\--------------------||                                      ||       *"<<endl;
    cout<<"             *       ||          [ TeamASNN ]                       ||-------------------\\  /       TEAM ASNN       \\  /--------------------||                                      ||       *"<<endl;
    cout<<"             *       ||          [ LearnC++ ]                       ||--------------------\\/                         \\/---------------------||                                      ||       *"<<endl;
    cout<<"             *       ||          [__________]                       ||----------------------|||||||||||||||||||||||||-----------------------||                                      ||       *"<<endl;
    cout<<"             *       =================================================================================================================================================================       *"<<endl;
    cout<<"             *                                                                                                                                                                               *"<<endl;
    cout<<"             *                                                                                                                                                                               *"<<endl;
    cout<<"             *       =================================================================================================================================================================       *"<<endl;
    cout<<"             *       ||           ----------------------                              ***********************************                           ----------------------          ||       *"<<endl;
    cout<<"             *       ||           | << Previous page   |                              **          Certificate          **                           |     Next page  >>  |          ||       *"<<endl;
    cout<<"             *       ||           ----------------------                              ***********************************                           ----------------------          ||       *"<<endl;
    cout<<"             *       =================================================================================================================================================================       *"<<endl;
    cout<<"             *       |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||       *"<<endl;
    cout<<"             *       =================================================================================================================================================================       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||                                                   __________________________________________________________________                                        ||       *"<<endl;
    cout<<"             *       ||                                                  |                                                                  |                                       ||       *"<<endl;
    cout<<"             *       ||                                                  |                                                                  |                                       ||       *"<<endl;
    cout<<"             *       ||                                                  |                      Certificate of Completion                   |                                       ||       *"<<endl;
    cout<<"             *       ||                                                  |                                                                  |                                       ||       *"<<endl;
    cout<<"             *       ||                                                  |                                                                  |                                       ||       *"<<endl;
    cout<<"             *       ||                                                  |      This is to certify that You have successfully completed     |                                       ||       *"<<endl;
    cout<<"             *       ||                                                  |      the crash course on C++ and Object oriented Programming     |                                       ||       *"<<endl;
    cout<<"             *       ||                                                  |      during 27/11/2020 to 30/12/2020   .                         |                                       ||       *"<<endl;
    cout<<"             *       ||                                                  |                                                                  |                                       ||       *"<<endl;
    cout<<"             *       ||                                                  |                                                                  |                                       ||       *"<<endl;
    cout<<"             *       ||                                                  |      Presented on : 30/12/2020                                   |                                       ||       *"<<endl;
    cout<<"             *       ||                                                  |                                                                  |                                       ||       *"<<endl;
    cout<<"             *       ||                                                  |                                                                  |                                       ||       *"<<endl;
    cout<<"             *       ||                                                  |        ASNN                                                      |                                       ||       *"<<endl;
    cout<<"             *       ||                                                  |      ----------                                                  |                                       ||       *"<<endl;
    cout<<"             *       ||                                                  |      Team ASNN                                                   |                                       ||       *"<<endl;
    cout<<"             *       ||                                                  |                                                                  |                                       ||       *"<<endl;
    cout<<"             *       ||                                                  |__________________________________________________________________|                                       ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       =================================================================================================================================================================       *"<<endl;
    cout<<"             *       |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||       *"<<endl;
    cout<<"             *       =================================================================================================================================================================       *"<<endl;
    cout<<"             *                                                                                                                                                                               * "<<endl;
    cout<<"             *                                                                                                                                                                               *"<<endl;
    cout<<"             *                                                                                                                                                                               *"<<endl;
    cout<<"             * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *\n\n\n\n"<<endl;
    break;


 }


            }

        }
    }







}                                              ///******** end******///




                                              ///******** Start******///

        else if (inp=="32" || inp=="About us" || inp=="about us")
        {
            system("cls");
           system("color 70");

    cout<<endl<<endl<<endl;
    cout<<"             * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *"<<endl;
    cout<<"             *                                                                                                                                                                               * "<<endl;
    cout<<"             *                                                                                                                                                                               *"<<endl;
    cout<<"             *                                                                                                                                                                               *"<<endl;
    cout<<"             *       =================================================================================================================================================================       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||                                         ||=====>>> A very few details about Team ASNN :                                                                     ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||                                          _____________________________________________________________________________________                              ||       *"<<endl;
    cout<<"             *       ||                                         |         |                         |              |                                  |                             ||       *"<<endl;
    cout<<"             *       ||                                         |   ROLL  |           NAME          |      ID      |               EMAIL              |                             ||       *"<<endl;
    cout<<"             *       ||                                         |_________|_________________________|______________|__________________________________|                             ||       *"<<endl;
    cout<<"             *       ||                                         |         |                         |              |                                  |                             ||       *"<<endl;
    cout<<"             *       ||                                         |    06   |  NESAR UDDIN            |  19-41759-3  | nasar.uddin.56723@gmail.com      |                             ||       *"<<endl;
    cout<<"             *       ||                                         |_________|_________________________|______________|__________________________________|                             ||       *"<<endl;
    cout<<"             *       ||                                         |         |                         |              |                                  |                             ||       *"<<endl;
    cout<<"             *       ||                                         |    05   |  NAHIDA AKTHER ASHA     |  19-41190-2  | nahidaasha1@gmail.com            |                             ||       *"<<endl;
    cout<<"             *       ||                                         |_________|_________________________|______________|__________________________________|                             ||       *"<<endl;
    cout<<"             *       ||                                         |         |                         |              |                                  |                             ||       *"<<endl;
    cout<<"             *       ||                                         |    22   |  SADIA KHANAM           |  20-44005-2  | khanamsadia206@gmail.com         |                             ||       *"<<endl;
    cout<<"             *       ||                                         |_________|_________________________|______________|__________________________________|                             ||       *"<<endl;
    cout<<"             *       ||                                         |         |                         |              |                                  |                             ||       *"<<endl;
    cout<<"             *       ||                                         |    21   |  MD.ASGOR HOSSAIN REAJ  |  20-43999-2  | Asgorreaj@gmail.com              |                             ||       *"<<endl;
    cout<<"             *       ||                                         |_________|_________________________|______________|__________________________________|                             ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       ||                                                                                                                                                             ||       *"<<endl;
    cout<<"             *       =================================================================================================================================================================       *"<<endl;
    cout<<"             *                                                                                                                                                                               * "<<endl;
    cout<<"             *                                                                                                                                                                               *"<<endl;
    cout<<"             *                                                                                                                                                                               *"<<endl;
    cout<<"             * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *"<<endl;
    cout<<endl<<endl<<endl;

    system("pause ");
        }
                                              ///******** end******///





        else
        {
            system("cls");
            system("color 70");
            cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t<<<<<======||   ATTENTION!! Wrong Input, Please try again   ||======>>>>>\n\n\n\n\n";
            cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
            system("pause ");
        }
                                              ///******** end******///









    }//Thid bracket used for loop ending.

                                            ///********Index Choose end*************
                                            ///********Websitte acces end*************}
}


public:                                      ////*******compile time polymorphism******


    void show(double)
    {
        indexpage();
    }




     void show(int )
   {
       motopage();
   }


};







int main()
{
    index obj;
    obj.showintro();
    obj.show(5);
    obj.show(5.9);
}

