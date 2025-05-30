out<<n1<<" is player1 so he/she will play first -: "<<endl;
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
