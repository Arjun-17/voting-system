#include <iostream>

using namespace std;

const int ev = 5; //max. # of votes
int votesA = 0, votesB = 0, votesC = 0, spoiltvotes = 0; //total votes already initialized globally
int vote; //input variable

int main()
{
    //loop over the voting stations
    int i;
    for(i = 0; i <= ev; i++)
   
   {
    //loop over the votes
    cout << "Enter your vote: \t";
    cin >> vote;
    while(vote <= 5)
    {

        switch(vote)
        {
            case 1: votesA++;
            break;

            case 2: votesB++;
            break;

            case 3: votesC++;
            break;

            default: spoiltvotes++;
        }

    }
   } 
    //display results neatly
    cout << "# of votes for candidate A: \t" << votesA;
    cout << "\n # of votes for candidate B: \t" << votesB;
    cout << "\n # of votes for candidate C: \t" << votesC;
    cout << "\n # of spoilt votes: \t" << spoiltvotes;

    return 0;
}
