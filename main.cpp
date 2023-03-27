   
    #include <iostream>
    #include <stdio.h>
    #include <stdlib.h>

    using namespace std;
    int main() {
        int choice;
        int times=0;
        int guessNum=0;
        int guessAlph=0;
        int alpScore,score;
        bool exitMenu = false;
        cout << "MENU" << endl << "----" << endl;
        cout << "1. Guess the Number. \n2. Guess the Alphabet. \n3. High Score. \n4. Credit.\n5. Exit.\n" << endl;
        cout << "Enter your choice:";
        cin >>choice;
        do{ //tamam
            
            switch(choice)
            { //tamam
                    
                    int levelChoice;
                case 1: //guess num
                {   srand(time(0));
                    int secretNum;
                    int guess;
                    int score;
                    int max;
                    bool exitMenu = false;
                    cout << "\nGuess The Number" << endl;
                    do //tamam
                    {
                        cout << "\nStart Menu\n----------" << endl;
                        cout << "Select a difficulty level" << endl;
                        cout << "1.Easy" << endl;
                        cout << "2.Medium" << endl;
                        cout << "3.Hard" << endl;
                        cout << "4.Back to Main Menu" << endl;
                        cout << "===> ";
                        cin>> levelChoice;
                        switch(levelChoice) //tamam
                        {
                            case 1://easy
                                max=15;
                                secretNum=rand() % max +1;
                                times=5;
                                score=0;
                                cout << "Guess the Number\n\n----------------" << endl;
                                cout << "Instructions:" << endl;
                                cout << " 1. Guess the number based on given range." << endl;
                                cout << " 2. You are allowed to make one guess at a time." << endl;
                                cout << " 3. Each game has 5 chance yo guess the correct number." << endl;
                                cout << " 4. Once you have used up all your chances, you lost the game." << endl;
                                cout << "\nGood Luck!" << endl;
                                cout << "Easy:" << endl;
                                cout << "Enter guess number from 1 to 15. "<< times << " changes left." << endl;
                                do //tamam
                                {
                                    cout << "Guess the number: ";
                                    cin >> guess;
                                    if(secretNum==guess){
                                        cout << "You won the game" << endl;
                                        cout <<"You've won the game with just " <<5-times << " times.";
                                        score+= 5;
                                        break;
                                    }
                                    else if(secretNum>guess){
                                        cout << "Wrong! your guess was to low" << endl << endl;
                                        times--;
                                    }
                                    else if(secretNum<guess){
                                        cout << "Wrong! Your guess was to high" << endl;
                                        times--;
                                    }
                                    if (times == 0) {
                                        cout << "\nYou lost the game! " << endl;
                                    }
                                }
                                while (times != 0 && secretNum != guess);
                                break;
                            case 2://medium
                                max=20;
                                secretNum=rand() % max +1;
                                times=4;
                                score=0;
                                cout << "Guess the Number\n\n----------------" << endl;
                                cout << "Instructions:" << endl;
                                cout << " 1. Guess the number based on given range." << endl;
                                cout << " 2. You are allowed to make one guess at a time." << endl;
                                cout << " 3. Each game has 5 chance yo guess the correct number." << endl;
                                cout << " 4. Once you have used up all your chances, you lost the game." << endl;
                                cout << "\nGood Luck!" << endl;
                                cout << "Enter guess number from 1 to 20. "<< times << " changes left." << endl;
                                cout << "Medium:" << endl;
                                do //tamam
                                {
                                    cout << "Guess the number: ";
                                    cin >> guess;
                                    if(secretNum==guess){
                                        cout << "You won the game" << endl;
                                        cout <<"You've won the game with just " <<4-times << " times.";
                                        score+= 10;
                                        break;
                                    }
                                    else if(secretNum>guess){
                                        cout << "Wrong!" << endl << endl;
                                        times--;
                                    }
                                    else if(secretNum<guess){
                                        cout << "Wrong!" << endl;
                                        times--;
                                    }
                                    if (times == 0) {
                                        cout << "\nYou lost the game! " << endl;
                                    }
                                }
                                while (times != 0 && secretNum != guess);
                                break;
                            case 3://hard
                                max=40;
                                secretNum=rand() % max +1;
                                times=3;
                                score=0;
                                cout << "Guess the Number\n\n----------------" << endl;
                                cout << "Instructions:" << endl;
                                cout << " 1. Guess the number based on given range." << endl;
                                cout << " 2. You are allowed to make one guess at a time." << endl;
                                cout << " 3. Each game has 5 chance yo guess the correct number." << endl;
                                cout << " 4. Once you have used up all your chances, you lost the game." << endl;
                                cout << "\nGood Luck!" << endl;
                                cout << "Enter guess number from 1 to 40. "<< times << " changes left." << endl;
                                cout << "Medium:" << endl;
                                do //tamam
                                {
                                    cout << "Guess the number: ";
                                    cin >> guess;
                                    if(secretNum==guess){
                                        cout << "You won the game" << endl;
                                        cout <<"You've won the game with just " <<3-times << " times.";
                                        score+= 15;
                                        break;
                                    }
                                    else if(secretNum>guess){
                                        cout << "Wrong!" << endl << endl;
                                        times--;
                                    }
                                    else if(secretNum<guess){
                                        cout << "Wrong!" << endl;
                                        times--;
                                    }
                                    if (times == 0) {
                                        cout << "\nYou lost the game! " << endl;
                                    }
                                }
                                while (times != 0 && secretNum != guess);
                                break;
                            case 4: //menu
                                main();
                                
                            default:
                                cout << "Invalid input.Please try again" << endl;
                                break;
                                
                        }//switch2
                    }//do2
                    while (!exitMenu);//Guess the number exit
                    cout << "Thanks for playing!" << endl;
            }  //case 1'in num guess
                    break;
            
                case 2: //guess the alphabet
                {   char secretAlp;
                    char guessAlp;
                    int maxAlp;
                    int alpScore=0;
                    char vowels [5] = {'a','e','i','o','u'};
                    char consonants [21] = {'b','c','d','f','g','h','j','k','l','m','n','p','q','r','s','t','v','w','x','y','z'};
                    char alphabet [26]= {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
                    do //tamam
                    {
                        cout << "\nGuess The Alphabet" << endl;
                        cout << endl << "Start Menu" << endl << "----------" << endl;
                        cout << "Select a difficulty level" << endl;
                        cout << "1. Easy" << endl << "2. Medium" << endl << "3. Hard" << endl << "4. Return to main menu" << endl << "===> ";
                        cin>> levelChoice;
                        switch(levelChoice) //tamam
                        {
                            case 1://easy
                                maxAlp=vowels[4];
                                secretAlp =rand() % maxAlp;
                                alpScore = 0;
                                times= 2;
                                cout << "Guess the Alphabet\n\n----------------" << endl;
                                cout << "Instructions:" << endl;
                                cout << " 1. Guess the vowel alphabet." << endl;
                                cout << " 2. You are allowed to make one guess at a time." << endl;
                                cout << " 3. Each game has 2 chances to guess the correct vowel." << endl;
                                cout << " 4. Once you have used up all your chances, you lost the game." << endl;
                                cout << "\nGood Luck!" << endl;
                                cout << "Easy:" << endl;
                                do //tamam
                                {
                                    cout << "Enter a word: " << times << " changes left. What is the alphabet?" << endl;
                                    cin >> guessAlp;
                                    if(guessAlp>secretAlp) {
                                        cout << "Wrong! Your guess was to high" << endl << endl;
                                        times--;
                                    }
                                    else if (guessAlp<secretAlp) {
                                        cout << "Wrong! Your guess was to low" << endl;
                                        times--;
                                    }
                                    if(guessAlp==secretAlp) {
                                        cout << "You won the game" << endl;
                                        cout <<"You've won the game with just " <<2-times << " times."<<endl;
                                        alpScore+=5;
                                        break;
                                    }
                                    if (times== 0) {
                                        cout << "\nYou lost the game! " << endl;
                                    }
                                }
                                while(times!=0 && secretAlp!=guessAlp);
                                break;
                            case 2://medium
                                cout << "Guess the Alphabet" << endl << endl;
                                cout << "------------------" << endl;
                                cout << "Instructions:" << endl;
                                cout << "1. Guess the consonant alphabet." << endl;
                                cout << "2. You are allowed to make one guess at a time." << endl;
                                cout << "3. Each game has 4 chances to guess the correct vowel." << endl;
                                cout << "4. Once you have used up all your chances, you lose the game." << endl << endl;
                                cout << "Good Luck!" << endl << "Medium: " << endl;
                                maxAlp=consonants[20];
                                secretAlp =rand() % maxAlp;
                                times= 4;
                                do //tamam
                                {
                                    cout << "Enter a word: " << times << " changes left. What is the alphabet?" << endl << "Player input:";
                                    cin >> guessAlp;
                                    if(guessAlp==secretAlp) {
                                        cout << "You won the game" << endl;
                                        cout <<"You've won the game with just " <<4-times << " times.";
                                        alpScore+=10;
                                        break;
                                    }
                                    if(guessAlp>secretAlp) {
                                        cout << "Wrong!" << endl << endl;
                                        times--;
                                    }
                                    else if (guessAlp<secretAlp) {
                                        cout << "Wrong!" << endl;
                                        times--;
                                    }
                                    if(times==0){
                                        cout << "\nYou lost the game! " << endl;
                                    }
                                }
                                while(times!=0 && secretAlp!=guessAlp);
                                break;
                            case 3: //hard
                                cout << "Guess the Alphabet" << endl << endl;
                                cout << "------------------" << endl;
                                cout << "Instructions:" << endl;
                                cout << "1. Guess the alphabet." << endl;
                                cout << "2. You are allowed to make one guess at a time." << endl;
                                cout << "3. Each game has 5 chances to guess the correct vowel." << endl;
                                cout << "4. Once you have used up all your chances, you lose the game." << endl << endl;
                                cout << "Good Luck!" << endl << "Hard: " << endl;
                                maxAlp=alphabet[25];
                                secretAlp =rand() % maxAlp;
                                times=5;
                                do //tamam
                                {
                                    cout << "Enter an alphabet: " << times << " changes left. What is the alphabet?" << endl << "Player input:";
                                    cin>> guessAlp;
                                    if(guessAlp==secretAlp) {
                                        cout << "You won the game" << endl;
                                        cout <<"You've won the game with just " <<5-times << " times.";
                                        alpScore+=15;
                                        break;
                                    }
                                    else if(guessAlp>secretAlp) {
                                        cout << "Wrong!" << endl << endl;
                                        times--;
                                    }
                                    else if (guessAlp<secretAlp) {
                                        cout << "Wrong!" << endl;
                                        times--;
                                    }
                                    if(times==0){
                                        cout << "\nYou lost the game! " << endl;
                                    }
                                }
                                while(times!=0 && guessAlp!=secretAlp);
                                break;
                            case 4: //menu
                                main();
                            default:
                                cout << "Invalid input.Please try again" << endl;
                                break;
                        }
                    }
                    while(exitMenu);//Guess the number exit
                    cout << "Thanks for playing!" << endl;
                }  //case 2'nin guess alphabet
                                break;
                        
                    case 3: //total score number-alphabet
                {  cout<< "Alphabet Score: "<< alpScore<< " Number Game Score:"<< score<< endl;
                    cout << "Total Score: " << alpScore +score << endl;
                    main();
                    break;
                }
                    case 4:
                { cout << "---------------------------------------------" << endl;
                    cout << "       Guessing Game Credits" << endl;
                    cout << "---------------------------------------------" << endl;
                    cout << " 1. Ayça Nur Menteş - 200209060" << endl;
                    cout << " 2. Zeynep Albayrak - 200209039" << endl;
                    cout << " 3. Cemre Çiçek - 200209005 " << endl;
                    cout << " 4. Gökay Yener - 200209051 " << endl;
                    cout << " 5. Eren Geçer - 210209051" << endl;
                    cout << " 6. Okan Toga - 210209034" << endl;
                    cout << " 7. Yener Can Taş - 200209047" << endl;
                    cout << "---------------------------------------------" << endl;
                    main();
                    break;
                }
                 
                    case 5://Exit
                { cout << "You are leaving..." << endl;
                    exit(EXIT_SUCCESS);
                    
                    break;
                }
                    default:
                        cout << "Invalid input.Please try again!" << endl;
                    main();
                        break;
                        
                    }//switch1
                    
            } //do1
        while (choice != 5);{
            cout<<endl;
        }
            return 0;
            
        }//main

