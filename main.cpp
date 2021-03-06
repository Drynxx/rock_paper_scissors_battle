// In this program the user will be selected to choose between Rock , Paper and Scissors.
// The Computer will select randomly one of them.
// In final the values will be compared and a score will be set

#include<iostream>
#include<stdlib.h>
#include <time.h>
#include<conio.h>

int main()
{


    srand(time(NULL));

    int computer = std::rand() % 3 + 1;
    int user=0;

    std::cout << "====================\n\n";
    std::cout << "Rock Paper Scissors Battle!\n\n";
    std::cout << "====================\n\n";

    int round;

    std::cout << "====================\n\n";


    std::cout << "Choose how many rounds do you want!\n";
    std::cout << " 1) 1 round\n";
    std::cout << " 2) 2 rounds\n";
    std::cout << " 3) 3 rounds\n";
    std::cout << " 4) 4 rounds\n\n";

    std::cout << "====================\n\n";

    std::cin>>round;
    std::cout<<"\n";
    std::cout << "====================\n\n";
    std::cout << "1) ✊ (rock)\n";
    std::cout << "2) ✋ (paper)\n";
    std::cout << "3) ✌️ (scissors)\n\n";
    std::cout << "====================\n\n";

    std::cout<<" Choose one fast :\n";
    std::cin>>user;

    if (user == 1)
        std::cout <<"YOU choose: ✊ (rock)\n";
    else if (user == 2)
        std::cout <<"YOU choose: ✋ (paper)\n";
    else
        std::cout <<"YOU choose: ✌️ (scissors)\n";

    if (computer == 1)
        std::cout << "COMPUTER choose: ✊ (rock)\n";
    else if (computer == 2)
        std::cout << "COMPUTER choose: ✋ (paper)\n";
    else
        std::cout << "COMPUTER choose: ✌️ (scissors)\n";

    int user_s=0,computer_s=0;
    if(round == 1)
    {
        if(user == computer )
            std::cout<<" You just nailed his move!Try again\n";
        else if( user == 2 && computer == 3)
        {
            std::cout<<" You just got beated by a Machine !\n";
            computer_s++;
        }
        else if( user == 3 && computer == 2)
        {
            std::cout<<" You just won! You're fire !\n";
            user_s++;
        }
        else if( user == 1 && computer == 3)
        {
            std::cout<<" You just won! Awesome !\n";
            user_s++;
        }
        else if( user == 3 && computer == 1)
        {
            std::cout<<" You just got beated by a Machine !\n";
            computer_s++;
        }
        else if( user == 1 && computer == 2)
        {
            std::cout<<" You just got beated by a Machine !\n";
            computer_s++;
        }
        else if( user == 2 && computer == 1)
        {
            std::cout<<" You just won! Awesome !\n";
            user_s++;
        }
    }

    for(int i=2; i<=round; ++i)
    {
        std::cout<<" Choose one fast :\n";
        std::cin>>user;

        if (user == 1)
            std::cout <<"YOU choose: ✊ (rock)\n";
        else if (user == 2)
            std::cout <<"YOU choose: ✋ (paper)\n";
        else
            std::cout <<"YOU choose: ✌️ (scissors)\n";

        if (computer == 1)
            std::cout << "COMPUTER choose: ✊ (rock)\n";
        else if (computer == 2)
            std::cout << "COMPUTER choose: ✋ (paper)\n";
        else
            std::cout << "COMPUTER choose: ✌️ (scissors)\n";

        if( user == 2 && computer == 3)
        {
            std::cout<<" +1 point for the Machine !\n";
            computer_s++;
        }
        else if( user == 3 && computer == 2)
        {
            std::cout<<" +1 point for you !\n";
            user_s++;
        }
        else if( user == 1 && computer == 3)
        {
            std::cout<<" +1 point for you !\n";
            user_s++;
        }
        else if( user == 3 && computer == 1)
        {
            std::cout<<" +1 point for the Machine !\n";
            computer_s++;
        }
        else if( user == 1 && computer == 2)
        {
            std::cout<<" +1 point for the Machine !\n";
            computer_s++;
        }
        else if( user == 2 && computer == 1)
        {
            std::cout<<" +1 point for you !\n";
            user_s++;
        }
        else if(user == computer )
            std::cout<<" You just nailed his move!No points\n";

    }
    system("pause");
    system("cls");
    std::cout << "====================\n\n";

    std::cout<<" Now we generate the score \n";
    std::cout<<" You: "<<user_s<<"  "<<" Computer: "<<computer_s<<"\n";

    if(user_s> computer_s )
        std::cout<<" You just won the biggest Rock Paper Scissors Game! Congrats !\n\n";
    else
        std::cout<<" The Computer just beated you! \n\n";
    std::cout << "====================\n\n";


}
