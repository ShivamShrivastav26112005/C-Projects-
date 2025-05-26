// We have to make registration fun, then login fun and then forgot password fun. It is
// helpful to recover your password if you forget your password 

#include<bits/stdc++.h>
using namespace std;

void registration();
void login();
void forgot();

int main(){
    int choice;
    do{
        cout<<"___________ Welcome to Registration Page : ___________"<<endl; 
        cout<<"                     Menu                ";

        cout<<endl;
        cout<<"Press 1 for registration : "<<endl;
        cout<<"Press 2 for login :           "<<endl;
        cout<<"Press 3 for forgot password : "<<endl;
        cout<<"Press 4 for Exit :            "<<endl;
        cout<<endl;


        cout<<"Please Enter your choice : ";
        cin>>choice; 

        cout<<endl;

        switch(choice){
            case 1: // if user will press 1 then registration fun is called 
                registration();
                break;

            case 2 :
                login();
                break;

            case 3 :
                forgot();
                break;

            case 4 : 
                cout<<"Thankyou ! "<<endl;
                break;

            default: 
                cout<<"Please select the option from the given menu : "<<endl;
                break;
            }
        }

        while(choice!=4);
        return 0;
    }


// make a registration page -: 

void registration(){
    string rusername; 
    string rpassword;
    cin.ignore(); 
    cout<<"Enter the User Name : ";
    getline(cin,rusername);
    cout<<"Enter the user password : ";
    getline(cin,rpassword);

    cout<<endl<<endl;

    // after taking user name ans password write this data to the file 
    // to write this data to a file i am using "ofstream" fun. make a object for that fun. and use. 
    ofstream f1("record.txt", ios::app); // syntax 
    // display records -:
    f1<<rusername<<endl;
    f1<<rpassword<<endl;
    cout<<"Registratin Done Successfully ! "<<endl<<endl;
}


// after registration, login to a file -: 
// login page -: 

void login(){
    int count=0;
    string username, password;
    string id, pass; // registered id and pass 
    cout<<"Please Enter the username and password : "<<endl;
    cout<<"Username : ";
    cin>>username;
    cout<<"Password : ";
    cin>>password;
    cout<<endl<<endl<<endl;

    // after entering username ans password read the data from the file and check this user is registered or not.
    // to read the data from the file i am using "ifstream" fun make a object for that fun and use it 
    ifstream input("record.txt"); // search username and passworrd from the file records.txt using ifstream fun. 

    while(input>>id>>pass){ // i am taking inout from the file 
        if(id==username && pass==password){
            count=1;
            break; 
        }
    }
    input.close(); // close the file 

    // now check -: 
    if(count==1){ // user already registered 
           cout<<username<<","<<endl<<"Your Login is successful ! Thankyou ! "<<endl;
    }else{ // not registered
        cout<<"Login error ! Please check your username or password ! "<<endl;
        cout<<endl;
    }

}


// after you forget your password this fun recover your password -:
// forgot page -: 

void forgot(){
    int option;
    cout<<"Press 1 to search your id by username : "<<endl;
    cout<<"Press 2 to go back to the main menu :   "<<endl;
    cout<<"Enter your choice :                     "<<endl;
    cin>>option;

    switch(option){
        case 1 : {
            int count=0;
            string suser_name, sid, spass;
            cout<<"Enter the username which you remembered : ";
            cin>>suser_name;

            // reads the data from the file 
            ifstream f2("record.txt");
            while(f2>>sid>>spass){
                if(sid==suser_name){
                    count=1;
                    break;
                }
            }
            f2.close();

            if(count==1){
                cout<<"Your Account is found ! "<<endl;
                cout<<"Your Password is ! "<<spass<<endl;
                cout<<endl;
            }else{
                cout<<"Sorry ! Your account is not found ! "<<endl;
            }
            break;
        }

        case 2 : {
            return; 
        }

        default: 
        cout<<"Wrong choice ! Please Try Again ! "<<endl;
        forgot(); 
    }
}

// // OUTPUT -: 

// ___________ Welcome to Registration Page : ___________
//                      Menu
// Press 1 for registration : 
// Press 2 for login :
// Press 3 for forgot password : 
// Press 4 for Exit :

// Please Enter your choice : 1

// Enter the User Name : shivam
// Enter the user password : 123


// Registratin Done Successfully !

// ___________ Welcome to Registration Page : ___________
//                      Menu
// Press 1 for registration :
// Press 2 for login :
// Press 3 for forgot password :
// Press 4 for Exit :

// Please Enter your choice : 2

// Please Enter the username and password :
// Username : shivam
// Password : 123



// shivam,
// Your Login is successful ! Thankyou !
// ___________ Welcome to Registration Page : ___________
//                      Menu
// Press 1 for registration : 
// Press 2 for login :
// Press 3 for forgot password :
// Press 4 for Exit :

// Please Enter your choice : 3

// Press 1 to search your id by username :
// Press 2 to go back to the main menu :
// Enter your choice :
// 2
// ___________ Welcome to Registration Page : ___________
//                      Menu
// Press 1 for registration :
// Press 2 for login :
// Press 3 for forgot password :
// Press 4 for Exit :

// Please Enter your choice : 3

// Press 1 to search your id by username :
// Press 2 to go back to the main menu :
// Enter your choice :
// 1
// Enter the username which you remembered : shivam
// Your Account is found !
// Your Password is ! 123

// ___________ Welcome to Registration Page : ___________
//                      Menu
// Press 1 for registration :
// Press 2 for login :
// Press 3 for forgot password :
// Press 4 for Exit :

// Please Enter your choice : 4

// Thankyou !