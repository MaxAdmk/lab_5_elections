#include <iostream>
#include <string>
#include "class.h"

using namespace std;

int main() 
{
    
    Candidate First;
    First.SetCandidate();

    Candidate Second;
    Second.SetCandidate();

    Candidate Third;
    Third.SetCandidate();

    Candidate Fourth;
    Fourth.SetCandidate();

    Candidate Fifth;
    Fifth.SetCandidate();
    
    Elections Rayon;
    Rayon.AddCandidate(First);
    Rayon.AddCandidate(Second);
    Rayon.AddCandidate(Third);
    Rayon.AddCandidate(Fourth);
    Rayon.AddCandidate(Fifth);
    Rayon.VotesSumm();
    Rayon.VotesPercent();
    Rayon.Print();

    Rayon.GetWinner();
    
    return 0;
}