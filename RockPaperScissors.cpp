#include<iostream>
#include<ctime>

char getUserChoice();
char getComputerChoice();
void showChoice(char choice);
void chooseWinner(char player, char computer);

int main(){

    char player;
    char computer;

    player = getUserChoice();
    std::cout<<"Your choice: ";
    showChoice(player);

    computer = getComputerChoice();
    std::cout<<"Computer's choice: ";
    showChoice(computer);

    chooseWinner(player, computer);

    return 0;
}

char getUserChoice(){
    char player;

    do{
    std::cout<<"Rock Paper Scissors Game\n";
    std::cout<<"************************\n";
    std::cout<<"Enter your choice: \n";
    std::cout<<"'r' for rock\n";
    std::cout<<"'p' for rock\n";
    std::cout<<"'s' for rock\n";
    std::cin>>player;
    }while(player!='r' && player!='p' && player!='s' );

    return player;

}

char getComputerChoice(){

    srand(time(NULL));

    int num = (rand() % 3) +1;

    switch(num){
        case 1:
             return 'r';
             break;
        case 2:
             return 'p';
             break;
        case 3:
             return 's';
             break;
    }
    return 0;
}

void showChoice(char choice){

    switch(choice){
        case 'r':
            std::cout<<"Rock\n";
            break;
        case 'p':
            std::cout<<"Paper\n";
            break;
        case 's':
            std::cout<<"Scissors\n";
            break;
    }
}

void chooseWinner(char player, char computer){

    switch(player){
        case 'r':
                if (computer == 'r'){
                    std::cout<<"It's a tie!";
                }
                else if (computer == 'p'){
                    std::cout<<"Computer wins!";
                }
                else{
                    std::cout<<"You win!";
                }
                break;
        case 'p':
                if (computer == 'r'){
                    std::cout<<"Computer wins!";
                }
                else if (computer == 'p'){
                    std::cout<<"It's a tie!";
                }
                else{
                    std::cout<<"You win!";
                }
                break;
        case 's':
                if (computer == 'r'){
                    std::cout<<"Computer wins!";
                }
                else if (computer == 'p'){
                    std::cout<<"You win!";
                }
                else{
                    std::cout<<"It's a tie!";
                }
                break;
    }
}
