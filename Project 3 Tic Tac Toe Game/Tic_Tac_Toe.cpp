// // ✅ What is C++ Programming? 
// // C++ is an enhanced and extended version of C programming language, developed by Bjarne Stroustrup in 1979 
// // as part of his Ph.D. project. Bjarne developed what he called ‘C with Classes’ (later renamed C++) 
// // because he felt limited by the existing programming languages that were not ideal for large scale projects. 
// // He used C to build what he wanted because C was already a general-purpose language that was efficient and 
// // fast in its operations. 

// // Tic Tac Toe is a popular game that everybody plays. Building this game using C++ programming will give 
// // you the experience to tackle real problems. C++ is a widely used programming language for creating really 
// // interesting games and Tic Tac Toe is a good project to start with if you are a beginner.



// // // convert this integer grid into its ascii values and print '0'-> 48, '1'-> 49 is a ascii value of character '1'.  
// // // int grid[3][3]={{'1','2','3'},{'4','5','6'},{'7','8','9'}};
  



//     #include<iostream>
//     using namespace std;

//     // Declare global variables: 
//     // we make 2D arrays -: 
//     char grid[3][3]={{'1','2','3'},{'4','5','6'},{'7','8','9'}};
//     int row;
//     int col;
//     char token='x'; 
//     string n1=" ";
//     string n2=" ";
//     bool tie=false; 

//     // Function to display the board -: 
//     void function1(){
//         cout<<"   |    |  "<<endl;
//         cout<<" "<<grid[0][0]<<" | "<<grid[0][1]<<"  | "<<grid[0][2]<<endl;
//         cout<<"___|____|____"<<endl;
//         cout<<"   |    |  "<<endl;
//         cout<<" "<<grid[1][0]<<" | "<<grid[1][1]<<"  | "<<grid[1][2]<<endl;
//         cout<<"___|____|____"<<endl;
//         cout<<"   |    |  "<<endl;
//         cout<<" "<<grid[2][0]<<" | "<<grid[2][1]<<"  | "<<grid[2][2]<<endl;
//         cout<<"___|____|____"<<endl;
//         cout<<"   |    |  "<<endl;
//     }


//     void function2(){
//         int digit;
//         if(token=='x'){
//             cout<<n1<<" Please Enter ";
//             cin>>digit;
//         }else if(token=='0'){
//             cout<<n2<<" Please Enter ";
//             cin>>digit;
//         }

//        // Determine the row and column based on the chosen digit
//         switch(digit) {
//             case 1: row = 0; col = 0; break; // case 1: means digit==1 than 0th row and 0th col. 
//             case 2: row = 0; col = 1; break;
//             case 3: row = 0; col = 2; break;
//             case 4: row = 1; col = 0; break;
//             case 5: row = 1; col = 1; break;
//             case 6: row = 1; col = 2; break;
//             case 7: row = 2; col = 0; break;
//             case 8: row = 2; col = 1; break;
//             case 9: row = 2; col = 2; break;
//             default: 
//                 cout<<"Invalid input! Please enter a number between 1 and 9." << endl;
//                 function2();  // Retry input
//                 return;
//             }

//         // Check if the selected spot is available
//         if(token=='x' && grid[row][col]!='x' && grid[row][col]!='0'){
//             grid[row][col]='x';
//             token='0';
//         }
//         else if(token=='0' && grid[row][col]!='x' && grid[row][col]!='0'){
//             grid[row][col]='0';
//             token='x';
//         }
//         else{
//             cout<<"There is no empty space !"<<endl;
//             function2(); 
//         }
//     }


//     bool function3(){
//         for(int i=0; i<3; i++){ 
//             // Check rows and columns
//             if((grid[i][0]==grid[i][1] && grid[i][1]==grid[i][2]) || (grid[0][i]==grid[1][i] && grid[1][i]==grid[2][i])){
//                 return true; 
//             }
//             // Check diagonals
//             if((grid[0][0]==grid[1][1] && grid[1][1]==grid[2][2]) || (grid[0][2]==grid[1][1] && grid[1][1]==grid[2][0])){
//                 return true; 
//             }
//         }

//         // Check if there are any empty spaces left
//         for(int i=0; i<3; i++){
//             for(int j=0; j<3; j++){
//                 if(grid[i][j]!='x' && grid[i][j]!='0'){
//                     return false;
//                 }
//             }
//         }

//         tie = true;  // If no empty spaces and no winner, it's a tie
//         return false;
//     }


//     int main(){
//         cout<<"Enter the name of the first player : "<<endl;
//         getline(cin,n1);
//         cout<<"Enter the name of the second player : "<<endl;
//         getline(cin,n2);

//         cout<<n1<<" is player1 so he/she will play first -:  "<<endl;
//         cout<<n2<<" is player2 so he/she will play second -:  "<<endl;

//         while(true){
//             function1();
//             function2();

//             // Check if the game is over
//             if(function3()){
//                 function1(); // Show final state of the board

//             if(tie==true){
//                 cout<<"It's a dwaw! "<<endl;
//             }else{ 
//                 if(token=='x'){ // If token is 'x', player 'O' has won
//                     cout<<n2<<" WINS "<<endl;
//                 }
//                 else{ // token=='0' // If token is '0', player 'X' has won
//                     cout<<n1<<" WINS "<<endl;
//                 }
//             }
//             break; // End the game loop
//         }
//     }
//     return 0; 
// }


    


#include<iostream>
using namespace std;

// Declare global variables
char grid[3][3]={{'1','2','3'},{'4','5','6'},{'7','8','9'}};
int row, col;
char token='x'; 
string n1, n2;
bool tie = false; 

// Function to display the board
void function1(){
    cout<<"   |    |  "<<endl;
    cout<<" "<<grid[0][0]<<" | "<<grid[0][1]<<"  | "<<grid[0][2]<<endl;
    cout<<"___|____|____"<<endl;
    cout<<"   |    |  "<<endl;
    cout<<" "<<grid[1][0]<<" | "<<grid[1][1]<<"  | "<<grid[1][2]<<endl;
    cout<<"___|____|____"<<endl;
    cout<<"   |    |  "<<endl;
    cout<<" "<<grid[2][0]<<" | "<<grid[2][1]<<"  | "<<grid[2][2]<<endl;
    cout<<"___|____|____"<<endl;
    cout<<"   |    |  "<<endl;
}

// Function to take input from players and mark the board
void function2(){
    int digit;
    if(token=='x'){
        cout<<n1<<" Please Enter a valid number (1-9): ";
        cin>>digit;
    } else if(token=='0'){
        cout<<n2<<" Please Enter a valid number (1-9): ";
        cin>>digit;
    }

    // Determine the row and column based on the chosen digit
    switch(digit) {
        case 1: row = 0; col = 0; break;
        case 2: row = 0; col = 1; break;
        case 3: row = 0; col = 2; break;
        case 4: row = 1; col = 0; break;
        case 5: row = 1; col = 1; break;
        case 6: row = 1; col = 2; break;
        case 7: row = 2; col = 0; break;
        case 8: row = 2; col = 1; break;
        case 9: row = 2; col = 2; break;
        default: 
            cout<<"Invalid input! Please enter a number between 1 and 9."<<endl;
            function2();  // Retry input
            return;
    }

    // Check if the selected spot is available
    if(token=='x' && grid[row][col]!='x' && grid[row][col]!='0'){
        grid[row][col]='x';
        token='0';
    } else if(token=='0' && grid[row][col]!='x' && grid[row][col]!='0'){
        grid[row][col]='0';
        token='x';
    } else {
        cout<<"This space is already occupied. Choose a different spot."<<endl;
        function2(); 
    }
}

// Function to check if there is a winner or a tie
bool function3(){
    // Check for win conditions
    for(int i=0; i<3; i++){
        if((grid[i][0]==grid[i][1] && grid[i][1]==grid[i][2]) || (grid[0][i]==grid[1][i] && grid[1][i]==grid[2][i])){
            return true; 
        }
    }

    // Check diagonals for win
    if((grid[0][0]==grid[1][1] && grid[1][1]==grid[2][2]) || (grid[0][2]==grid[1][1] && grid[1][1]==grid[2][0])){
        return true; 
    }

    // Check for tie (if all spaces are filled and no winner)
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            if(grid[i][j]!='x' && grid[i][j]!='0'){
                return false;  // If any space is still available, it's not a tie yet
            }
        }
    }

    // If we reach here, all spaces are filled and there is no winner, hence it's a tie
    tie = true;
    return false;
}

int main(){
    cout<<"Enter the name of the first player: "<<endl;
    getline(cin,n1);
    cout<<"Enter the name of the second player: "<<endl;
    getline(cin,n2);

    cout<<n1<<" is player1 so he/she will play first -: "<<endl;
    cout<<n2<<" is player2 so he/she will play second -: "<<endl;

    while(true){
        function1();
        function2();

        // Check if the game is over
        if(function3()){
            function1(); // Show final state of the board

            if(tie == true){
                cout<<"It's a tie!"<<endl;
            } else { 
                if(token=='x'){ // If token is 'x', player 'O' has won
                    cout<<n2<<" WINS!"<<endl;
                } else { // token=='0' // If token is '0', player 'X' has won
                    cout<<n1<<" WINS!"<<endl;
                }
            }
            break; // End the game loop
        }
    }

    return 0;
}



// Enter the name of the first player: 
// shivam 
// Enter the name of the second player: 
// shivani 
// shivam  is player1 so he/she will play first -: 
// shivani  is player2 so he/she will play second -: 
//    |    |  
//  1 | 2  | 3
// ___|____|____
//    |    |  
//  4 | 5  | 6
// ___|____|____
//    |    |  
//  7 | 8  | 9
// ___|____|____
//    |    |  
// shivam  Please Enter a valid number (1-9): 1
//    |    |
//  x | 2  | 3
// ___|____|____
//    |    |
//  4 | 5  | 6
// ___|____|____
//    |    |
//  7 | 8  | 9
// ___|____|____
//    |    |
// shivani  Please Enter a valid number (1-9): 5
//    |    |
//  x | 2  | 3
// ___|____|____
//    |    |
//  4 | 0  | 6
// ___|____|____
//    |    |
//  7 | 8  | 9
// ___|____|____
//    |    |
// shivam  Please Enter a valid number (1-9): 9
//    |    |
//  x | 2  | 3
// ___|____|____
//    |    |
//  4 | 0  | 6
// ___|____|____
//    |    |  
//  7 | 8  | x
// ___|____|____
//    |    |
// shivani  Please Enter a valid number (1-9): 8
//    |    |
//  x | 2  | 3
// ___|____|____
//    |    |
//  4 | 0  | 6
// ___|____|____
//    |    |
//  7 | 0  | x
// ___|____|____
//    |    |
// shivam  Please Enter a valid number (1-9): 2
//    |    |
//  x | x  | 3
// ___|____|____
//    |    |  
//  4 | 0  | 6
// ___|____|____
//    |    |
//  7 | 0  | x
// ___|____|____
//    |    |
// shivani  Please Enter a valid number (1-9): 3
//    |    |
//  x | x  | 0
// ___|____|____
//    |    |
//  4 | 0  | 6
// ___|____|____
//    |    |
//  7 | 0  | x
// ___|____|____
//    |    |
// shivam  Please Enter a valid number (1-9): 7
//    |    |
//  x | x  | 0
// ___|____|____
//    |    |
//  4 | 0  | 6
// ___|____|____
//    |    |
//  x | 0  | x
// ___|____|____
//    |    |
// shivani  Please Enter a valid number (1-9): 6
//    |    |
//  x | x  | 0
// ___|____|____
//    |    |
//  4 | 0  | 0
// ___|____|____
//    |    |
//  x | 0  | x
// ___|____|____
//    |    |
// shivam  Please Enter a valid number (1-9): 4
//    |    |
//  x | x  | 0
// ___|____|____
//    |    |
//  x | 0  | 0
// ___|____|____
//    |    |
//  x | 0  | x
// ___|____|____
//    |    |
// shivam  WINS!