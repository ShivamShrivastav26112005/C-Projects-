// Learn different - 2 modes like ifstream, ofstream etc. 
// Learn file handling 

// Registration And Login Form -: 
// concepts used -: file handling and switch statements . 


#include<bits/stdc++.h>
using namespace std;

// we make 3 functions -: 
// function declarations -: 
void login();
void registration();
void forgot();

// this is my main function -: 
int main(){
    int choice;

    do{ // \t means forword 4 characters 
        cout<<"\t\t\t_________________________________________\n\n\n";
        cout<<"\t\t\t_______ Welcome to the Login Page _______\n\n\n";
        cout<<"\t\t\t_____________ MENU _____________\n\n";
        cout<<"                                       \n\n";

        cout<<"\t| Press 1 to Login                        |"<<endl;
        cout<<"\t| Press 2 to Register                     |"<<endl;
        cout<<"\t| Press 3 to If you forgot your Password  |"<<endl;
        cout<<"\t| Press 4 to Exit                         |"<<endl;
        cout<<"\n\t\t\t Please enter your choice : ";
        
        cin>>choice;
        cout<<endl;

        switch(choice){
            case 1:
                login(); // call to login() fun. 
                break;

            case 2:
                registration(); // calling 
                break;

            case 3: 
                forgot(); // calling 
                break;

            case 4:
                cout<<"\t\t\t Thankyou! \n\n";
                break;

            default:
                cout<<"\t\t\t Please select from the options given above \n"<<endl;
                break;
            }
        }

        while(choice!=4);
        return 0;

    }


// login() function -: 
void login(){
    int count=0;
    string userName, password, id, pass; // user have these things -: 
    cout<<"\t\t\t Please enter the username and password : "<<endl;
    cout<<"\t\t\t UserName ";
    cin>>userName;
    cout<<"\t\t\t Password ";
    cin>>password;

    // used file handling operations -: "ifstream" is used to read the data, records.txt is a file name.  
    ifstream input("records.txt"); // checks that our username and password is already exists or not 

    while(input>>id>>pass){
        if(id==userName && pass==password){
            count=1;
            break;
        }
    }
    input.close(); // file closed 

    if(count==1){
        cout<<userName<<"\n Your Login is successful \n Thanks for logging in ! \n";
    }else{
        cout<<"Login Error \n Please check your username or password\n";
    }
}


// Registration() function -: 
void registration(){
    string ruserId, rpassword; // new user 1st comes and register them 
    cin.ignore(); // Clear the input buffer before getline
    cout<<"\t\t\t Enter the username : ";
    getline(cin,ruserId); // getline() function is used to take input string or sentence. 
    cout<<"\t\t\t Enter the password : ";
    getline(cin,rpassword);

    // "ofstream" is used to write data inside the file. ios::app -> this is app mode means open the file and append the data  
    ofstream f1("records.txt", ios::app); // ios -> input output stream, f1 is a object 
    f1<<ruserId<<' '<<rpassword<<endl; // print ruserId and rpassword means register userId and register password 
    cout<<"\n\t\t\t Registration is successfully! \n";
}


// forgot() function -: if you forget your password -: these function gives your password 
void forgot(){
    int option; 
    cout<<"\t\t\t You forgot the password? No Worries \n";
    cout<<"Press 1 to search your id by username "<<endl;
    cout<<"Press 2 to go back to the main menu "<<endl;
    cout<<"\t\t\t Enter your choice : ";
    cin>>option;

    switch(option){
        
        case 1 : {
            int count=0;
            string suserId, sId, spass;
            cout<<"\n\t\t Enter the username which you remembered : ";
            cin>>suserId;

            ifstream f2("records.txt"); // ifstream -> reads the data 
            while(f2>>sId>>spass){ // check till sId and spass is not meet 
                if(sId==suserId){
                    count=1;
                    break;
                }
            }
            f2.close();

            // if statements -: 
            if(count==1){
                cout<<"\n\n Your account is found! \n";
                cout<<"\n\n Your password is : "<<spass;
            }
            else{
                cout<<"\n\t Sorry ! Your account is not found! \n";
            }
            break;
        }

        case 2 :
            return; 

        default:
            cout<<"\t\t\t Wrong choice! Please try again "<<endl;
            forgot(); // and call again to forgot() function for checking your password. 
    }
}


// // OUTPUT -: 

//                         _________________________________________


//                         _______ Welcome to the Login Page _______


//                         _____________ MENU _____________



//         | Press 1 to Login                        |
//         | Press 2 to Register                     |
//         | Press 3 to If you forgot your Password  |
//         | Press 4 to Exit                         |

//                          Please enter your choice : 2

//                          Enter the username : shivam
//                          Enter the password : 1212

//                          Registration is successfully!
//                         _________________________________________


//                         _______ Welcome to the Login Page _______


//                         _____________ MENU _____________



//         | Press 1 to Login                        |
//         | Press 2 to Register                     |
//         | Press 3 to If you forgot your Password  |
//         | Press 4 to Exit                         |

//                          Please enter your choice : 1

//                          Please enter the username and password :
//                          UserName shivam
//                          Password 1212
// shivam
//  Your Login is successful
//  Thanks for logging in !
//                         _________________________________________


//                         _______ Welcome to the Login Page _______


//                         _____________ MENU _____________



//         | Press 1 to Login                        |
//         | Press 2 to Register                     |
//         | Press 3 to If you forgot your Password  |
//         | Press 4 to Exit                         |

//                          Please enter your choice : 3

//                          You forgot the password? No Worries
// Press 1 to search your id by username
// Press 2 to go back to the main menu
//                          Enter your choice : 2
//                         _________________________________________


//                         _______ Welcome to the Login Page _______


//                         _____________ MENU _____________



//         | Press 1 to Login                        |
//         | Press 2 to Register                     |
//         | Press 3 to If you forgot your Password  |
//         | Press 4 to Exit                         |

//                          Please enter your choice : 3

//                          You forgot the password? No Worries
// Press 1 to search your id by username
// Press 2 to go back to the main menu
//                          Enter your choice : 1

//                  Enter the username which you remembered : shivam


//  Your account is found!


//  Your password is : 1212                        _________________________________________


//                         _______ Welcome to the Login Page _______


//                         _____________ MENU _____________



//         | Press 1 to Login                        |
//         | Press 2 to Register                     |
//         | Press 3 to If you forgot your Password  |
//         | Press 4 to Exit                         |

//                          Please enter your choice : 4

//                          Thankyou!
