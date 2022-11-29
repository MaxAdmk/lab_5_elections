#include <iostream>
#include <string>
#include "class.h"

using namespace std;

int main() 
{
    
    Candidate First;
    First.setCandidate();

    Candidate Second;
    Second.setCandidate();

    Candidate Third;
    Third.setCandidate();

    Candidate Fourth;
    Fourth.setCandidate();

    Candidate Fifth;
    Fifth.setCandidate();
    
    Elections Rayon;
    Rayon.addCandidate(First);
    Rayon.addCandidate(Second);
    Rayon.addCandidate(Third);
    Rayon.addCandidate(Fourth);
    Rayon.addCandidate(Fifth);
    Rayon.VotesSumm();
    Rayon.VotesPercent();
    Rayon.print();

    Rayon.getWinner();
    
    return 0;
}