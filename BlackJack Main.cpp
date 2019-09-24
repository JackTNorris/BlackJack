#include <iostream>
#include <cstdlib>
#include <time.h>
#include <string>
#include <windows.h>
#include <conio.h>

using namespace std;
int money = 500;
int wager;
string userLabel = "  YOUR CARDS:\n***************\n";
string dealerLabel =   "DEALER CARDS:\n*****************\n";
string topHand = "________  ";
string firstMidHand = "|      |  ";
string secondMidHand = "|      |  ";
string thirdMidHand =  "|      |  ";
string lastMidHand  = "|      |  ";
string bottomHand = "********  ";

string topHandUser = "________  ";
string firstMidHandUser = "|      |  ";
string secondMidHandUser = "|      |  ";
string thirdMidHandUser =  "|      |  ";
string lastMidHandUser  = "|      |  ";
string bottomHandUser = "********  ";

string topHandDealer = "________  ";
string firstMidHandDealer = "|      |  ";
string secondMidHandDealer = "|      |  ";
string thirdMidHandDealer =  "|      |  ";
string lastMidHandDealer  = "|      |  ";
string bottomHandDealer = "********  ";

string storedCards;
string dealerStoredCards;
string dealerCard1;
string dealerHand;
int userAceCount = 0;
int dealerAceCount = 0;
int finalUserScore;
int finalDealerScore;


class Player
{
public:
    int score;
    string hand;
    int aceCount;
    int money;
};
class PokerCard
{
    public:
        string face;
        string suit;
        int value;
};
class Dealer
{
    public:
        Player user;
        Player cardDealer;              //make class objects available to public
        PokerCard card[53];
        int shuffleDeck()
        {


            for( i = 1; i < 52; i++)
            {
                deck[i] = i + 1;        //generate array
            }
            for (i = 0; i < 52; i++)
            {
                j = 1 + rand() % 52;
                temp = deck[i];
                deck[i] = deck[j];      //randomize array
                deck[j] = temp;
            }
            return deck[52];


        }




        void deal()
        {

            cardDealer.aceCount = 0;
            user.aceCount = 0;
            user.score = 0;                 //initialize variables involving quantities to 0
            cardDealer.score = 0;

            //declaring class PokerCard objects values

            //ACES
            card[1].face = "A";
            card[1].value = 11;
            card[1].suit = "D";

            card[2].face = "A";
            card[2].value = 11;
            card[2].suit = "H";

            card[3].face = "A";
            card[3].value = 11;
            card[3].suit = "S";

            card[4].face = "A";
            card[4].value = 11;
            card[4].suit = "C";
            //TWOS
            card[5].face = "2";
            card[5].value = 2;
            card[5].suit = "D";

            card[6].face = "2";
            card[6].value = 2;
            card[6].suit = "H";

            card[7].face = "2";
            card[7].value = 2;
            card[7].suit = "S";

            card[8].face = "2";
            card[8].value = 2;
            card[8].suit = "C";
            //THREES
            card[9].face = "3";
            card[9].value = 3;
            card[9].suit = "D";

            card[10].face = "3";
            card[10].value = 3;
            card[10].suit = "H";

            card[11].face = "3";
            card[11].value = 3;
            card[11].suit = "S";

            card[12].face = "3";
            card[12].value = 3;
            card[12].suit = "C";
            //FOURS
            card[13].face = "4";
            card[13].value = 4;
            card[13].suit = "D";

            card[14].face = "4";
            card[14].value = 4;
            card[14].suit = "H";

            card[15].face = "4";
            card[15].value = 4;
            card[15].suit = "S";

            card[16].face = "4";
            card[16].value = 4;
            card[16].suit = "C";
            //FIVES
            card[17].face = "5";
            card[17].value = 5;
            card[17].suit = "D";

            card[18].face = "5";
            card[18].value = 5;
            card[18].suit = "H";

            card[19].face = "5";
            card[19].value = 5;
            card[19].suit = "S";

            card[20].face = "5";
            card[20].value = 5;
            card[20].suit = "C";
            //SIXES
            card[21].face = "6";
            card[21].value = 6;
            card[21].suit = "D";

            card[22].face = "6";
            card[22].value = 6;
            card[22].suit = "H";

            card[23].face = "6";
            card[23].value = 6;
            card[23].suit = "S";

            card[24].face = "6";
            card[24].value = 6;
            card[24].suit = "C";
            //SEVENS
            card[25].face = "7";
            card[25].value = 7;
            card[25].suit = "D";

            card[26].face = "7";
            card[26].value = 7;
            card[26].suit = "H";

            card[27].face = "7";
            card[27].value = 7;
            card[27].suit = "S";

            card[28].face = "7";
            card[28].value = 7;
            card[28].suit = "C";
            //EIGHTS
            card[29].face = "8";
            card[29].value = 8;
            card[29].suit = "D";

            card[30].face = "8";
            card[30].value = 8;
            card[30].suit = "H";

            card[31].face = "8";
            card[31].value = 8;
            card[31].suit = "S";

            card[32].face = "8";
            card[32].value = 8;
            card[32].suit = "C";
            //NINES
            card[33].face = "9";
            card[33].value = 9;
            card[33].suit = "D";

            card[34].face = "9";
            card[34].value = 9;
            card[34].suit = "H";

            card[35].face = "9";
            card[35].value = 9;
            card[35].suit = "S";

            card[36].face = "9";
            card[36].value = 9;
            card[36].suit = "C";
            //TENS
            card[37].face = "10";
            card[37].value = 10;
            card[37].suit = "D";

            card[38].face = "10";
            card[38].value = 10;
            card[38].suit = "H";

            card[39].face = "10";
            card[39].value = 10;
            card[39].suit = "S";

            card[40].face = "10";
            card[40].value = 10;
            card[40].suit = "C";
            //JACKS
            card[41].face = "J";
            card[41].value = 10;
            card[41].suit = "D";

            card[42].face = "J";
            card[42].value = 10;
            card[42].suit = "H";

            card[43].face = "J";
            card[43].value = 10;
            card[43].suit = "S";

            card[44].face = "J";
            card[44].value = 10;
            card[44].suit = "C";
            //QUEENS
            card[45].face = "Q";
            card[45].value = 10;
            card[45].suit = "D";

            card[46].face = "Q";
            card[46].value = 10;
            card[46].suit = "H";

            card[47].face = "Q";
            card[47].value = 10;
            card[47].suit = "S";

            card[48].face = "Q";
            card[48].value = 10;
            card[48].suit = "C";
            //KINGS
            card[49].face = "K";
            card[49].value = 10;
            card[49].suit = "D";

            card[50].face = "K";
            card[50].value = 10;
            card[50].suit = "H";

            card[51].face = "K";
            card[51].value = 10;
            card[51].suit = "S";

            card[52].face = "K";
            card[52].value = 10;
            card[52].suit = "C";

            //2 copies of card shape

            topHandUser = topHand + topHand;
            firstMidHandUser=firstMidHand + firstMidHand;
            secondMidHandUser=secondMidHand+secondMidHand;
            thirdMidHandUser=thirdMidHand+thirdMidHand;
            lastMidHandUser=lastMidHand + lastMidHand;
            bottomHandUser=bottomHand + bottomHand;
            topHandDealer = topHand + topHand;
            firstMidHandDealer=firstMidHand + firstMidHand;
            secondMidHandDealer=secondMidHand+secondMidHand;
            thirdMidHandDealer=thirdMidHand+thirdMidHand;
            lastMidHandDealer=lastMidHand+lastMidHand;
            bottomHandDealer=bottomHand + bottomHand;
            //deal player cards

            for (i = 0; i < 2; i++)
            {
                user.hand += ("|  " + card[deck[i]].face);
                if (card[deck[i]].face != "10")
                {
                    user.hand += (card[deck[i]].suit + "  |  ");
                }
                if (card[deck[i]].face == "10")
                {
                    user.hand += (card[deck[i]].suit + " |  ");

                }
                user.score += card[deck[i]].value;

                if (card[deck[i]].value == 11)
                {
                    user.aceCount += 1;
                }
            }

            cout << userLabel << topHandUser << endl << firstMidHandUser << endl << secondMidHandUser << endl
                 << user.hand << endl
                 <<thirdMidHandUser<<endl<< lastMidHandUser << endl << bottomHandUser << endl;
            storedCards = userLabel + topHandUser + "\n" + firstMidHandUser +"\n"+secondMidHandUser+"\n"+user.hand + "\n" +thirdMidHandUser+"\n"+ lastMidHandUser + "\n" + bottomHandUser + "\n" + "\n" + "\n" + dealerLabel;
            finalUserScore = user.score;
            //deal dealer cards

            for (i = 2; i < 4; i++)
            {
                cardDealer.hand += ("|  " + card[deck[i]].face);
                if (card[deck[i]].face != "10")
                {
                    cardDealer.hand += (card[deck[i]].suit + "  |  ");
                }
                if (card[deck[i]].face == "10")
                {
                    cardDealer.hand += (card[deck[i]].suit + " |  ");

                }
                if (i == 2)
                {
                    dealerCard1 = cardDealer.hand;
                }
                if (i == 3)
                {
                    dealerHand = cardDealer.hand;
                }

                cardDealer.score += card[deck[i]].value;

                if (card[deck[i]].value == 11)
                {
                    cardDealer.aceCount += 1;
                }


            }
            cout << endl << endl << dealerLabel << topHandDealer << endl << firstMidHandDealer << endl
            <<secondMidHandDealer<<endl<<dealerCard1<< "|  ?   |" <<endl<<thirdMidHandDealer<<endl<< lastMidHandDealer << endl << bottomHandDealer;
            finalDealerScore = cardDealer.score;
        }
        void hitPlayer()
        {

            topHandUser += topHand;
            firstMidHandUser += firstMidHand;
            secondMidHandUser+=secondMidHand;
            thirdMidHandUser+=thirdMidHand;       // add copy of card outline to playerCards
            lastMidHandUser += lastMidHand;
            bottomHandUser += bottomHand;

            user.score += card[deck[x]].value;
            user.hand += ("|  " + card[deck[x]].face);
            if (card[deck[x]].face != "10")
            {
             user.hand += (card[deck[x]].suit + "  |  ");
            }
            if (card[deck[x]].face == "10")
            {user.score += card[deck[x]].value;
             user.hand += (card[deck[x]].suit + " |  ");
            }
            if (card[deck[x]].value == 11)
            {
                user.aceCount += 1;
            }
            system("CLS");
            storedCards = userLabel + topHandUser + "\n" + firstMidHandUser +"\n"+ secondMidHandUser + "\n"+user.hand + "\n" +thirdMidHandUser+"\n"+ lastMidHandUser + "\n" + bottomHandUser + "\n" + "\n" + "\n" + dealerLabel;
            finalUserScore = user.score;
            x++;
        }
        void hitDealer()
        {
            topHandDealer += topHand;
            firstMidHandDealer += firstMidHand;
            secondMidHandDealer+=secondMidHand;
            thirdMidHandDealer+=thirdMidHand;
            lastMidHandDealer += lastMidHand;
            bottomHandDealer += bottomHand;

            cardDealer.score += card[deck[y]].value;
            cardDealer.hand += ("|  " + card[deck[y]].face);
            if (card[deck[y]].face != "10")
            {
             cardDealer.hand += (card[deck[y]].suit + "  |  ");
            }
            if (card[deck[y]].face == "10")
            {cardDealer.score += card[deck[y]].value;
             cardDealer.hand += (card[deck[y]].suit + " |  ");
            }
            if (card[deck[y]].value == 11)
            {
                cardDealer.aceCount += 1;
            }
            dealerHand = cardDealer.hand;
            dealerStoredCards =  topHandDealer + "\n" + firstMidHandDealer + "\n" +secondMidHandDealer+"\n"+ dealerHand + "\n" +thirdMidHandDealer+"\n"+ lastMidHandDealer + "\n" + bottomHandDealer;
            finalDealerScore = cardDealer.score;
            y++;

        }

        int determinePlayerStatus()
        {
            if (user.score > 21)
            {
                if (user.aceCount > 0)
                {
                    user.aceCount -= 1;
                    user.score-=10;
                    return 2;       //player can get another hit
                }
                else
                {
                    return 1;       //player busted
                }

            }
            if (user.score < 21)
            {
                return 2;
            }
        }

        int determineDealerStatus()
        {
            if (cardDealer.score >= 17 && cardDealer.score <= 21 && cardDealer.aceCount == 0)
            {
                return 3; // dealer is ready to compare his score to player
            }
            //convert an ace back to a 1 if score exceeds 21
            if (cardDealer.score >= 17 && cardDealer.score <= 21 && cardDealer.aceCount > 0 && user.score > cardDealer.score)
            {
                cardDealer.aceCount -= 1;
                cardDealer.score -= 10;
                return 2; // dealer needs another hit
            }
            if (cardDealer.score > 21)
            {
                if (cardDealer.aceCount > 0)
                {
                    cardDealer.aceCount -= 1;
                    cardDealer.score-=10;
                    return 2; // dealer needs another hit
                }
                else
                {
                    return 1;
                }

            }
            if (cardDealer.score < 17)
            {
                return 2;
            }
        }
        void getPlayerWager()
        {
            system("CLS");
            cout<< "You currently have: "<<money<<"$"<<endl;
            cout<<"How much would you like to wager? ($50 minimum) : ";
            cin>>wager;
            while (wager > money || wager <= 0 || wager < 50) {
                system("CLS");
                cout<< "Please enter a valid amount: ";
                cin>>wager;
            }

            system("CLS");
        }



    private:
        int i;
        int j;
        int temp;
        int deck[53];
        int x = 4;
        int y = x + 1;
};

int main()
{
    string spaces = "   ";
    system("color 20");
    Sleep(3000);

    for (int i = 0; i <= 16; i++){

    system("CLS");
    cout << endl << endl << endl << endl << endl << endl
          <<spaces <<"######   #        #     ####  #    #      #     #     ####  #    #"
    <<endl<<spaces <<"#     #  #       # #    #     #    #      #    # #    #     #    #"
    <<endl<< spaces<<"#     #  #      #   #   #     #   #       #   #   #   #     #   #"
    <<endl<< spaces<<"#    #   #     #     #  #     #  #        #  #     #  #     #  #"
    <<endl<< spaces<<"######   #     #######  #     # #         #  #######  #     # #"
    <<endl<< spaces<<"#    #   #     #     #  #     #  #        #  #     #  #     #  #"
    <<endl<< spaces<<"#     #  #     #     #  #     #   #   #   #  #     #  #     #   #"
    <<endl<< spaces<<"#     #  #     #     #  #     #    #  #   #  #     #  #     #    #"
    <<endl<< spaces<<"######   ##### #     #  ####  #    #  #####  #     #  ####  #    #";
    spaces += "   ";
    Sleep(0);
}
cout<<endl<<endl<< "                                                                       PRESS ANY KEY TO CONTINUE"
<<endl<< "                                                                                    ";
char start;
start = getche();
mainBeginning:
    system("CLS");
    PokerCard card[53];
    srand(time(0));
    Dealer blackJackDealer;
    blackJackDealer.getPlayerWager();
    blackJackDealer.shuffleDeck();
    blackJackDealer.deal();
    char response;
    response = 'h';
    while ( blackJackDealer.determinePlayerStatus() != 1 && (response == 'h'||response =='H') )
    {
        cout << endl;
        cout << "h/s: ";
        response = getche();
        while (response != 's' && response != 'S' && response != 'h' && response != 'H')
        {
            system("CLS");
            cout << storedCards;
            cout << topHandDealer << "\n" << firstMidHandDealer << "\n"<<secondMidHandDealer<<"\n" << dealerCard1;
            cout << "|  ?   |";
            cout <<  endl << thirdMidHandDealer<<endl<< lastMidHandDealer << endl << bottomHandDealer;
            cout << endl << "h/s: ";
            response = getche();
        }
        if (response == 'h' || response == 'H')
        {
            blackJackDealer.hitPlayer();
            cout << storedCards;
            cout << topHandDealer << "\n" << firstMidHandDealer << "\n" <<secondMidHandDealer<<endl<< dealerCard1;
            cout << "|  ?   |";
            cout <<  endl <<thirdMidHandDealer<<endl<< lastMidHandDealer << endl << bottomHandDealer;

        }

        if (blackJackDealer.determinePlayerStatus() == 1)
        {
            system("CLS");
            cout << storedCards;
            cout << topHandDealer << "\n" << firstMidHandDealer << endl<<secondMidHandDealer<< "\n";
            cout << dealerHand;
            cout <<  endl <<thirdMidHandDealer<<endl<< lastMidHandDealer << endl << bottomHandDealer;
            cout << endl << endl << "YOU BUSTED!";
            money-=wager;
        }

        if (response == 's')
        {
            while (blackJackDealer.determineDealerStatus() != 1 && blackJackDealer.determineDealerStatus() != 3)
            {

                blackJackDealer.hitDealer();
                system("CLS");
                cout << storedCards;
                cout << dealerStoredCards;
                Sleep(1000);
            }
                system("CLS");
                cout << storedCards;
                cout << dealerStoredCards;



            if (blackJackDealer.determineDealerStatus() == 1)
            {
                cout << endl << endl << "THE DEALER BUSTED! YOU WIN!";
                money+=wager;
            }
            if (blackJackDealer.determineDealerStatus() == 3)
            {
                if (finalUserScore > finalDealerScore)
                {
                    cout << endl << endl << "YOU WIN!";
                    money+=wager;
                }
                if (finalUserScore < finalDealerScore)
                {
                    cout << endl << endl << "YOU LOSE!";
                    money-=wager;
                }
                if (finalUserScore == finalDealerScore && finalDealerScore <= 21)
                {
                    cout << endl << endl << "DRAW!";
                }

            }
        }


    }
    if (money > 0)
    {
        cout << "\n\n\nWOULD YOU LIKE TO PLAY AGAIN? (Y/N): ";
        char restart;
        restart = getche();
        if (restart == 'y' || restart == 'Y')
        {
            goto mainBeginning;
        }
            else;
    }
    else;
     {
         Sleep(2000);
         system("CLS");
         cout<< "You ran out of money!!!\n";
     }








    return 0;
}
