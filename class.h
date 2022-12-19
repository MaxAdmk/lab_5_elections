#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

class Candidate 
{
public:
    string name;
    string surname;
    int num_of_votes;
    int percent_of_votes;

    void SetCandidate() 
    {
        cout << "Name of the candidate: ";
        cin >> name;
        cout << "Surname of the candidate: ";
        cin >> surname;
        cout << "Number of votes of the candidate: ";
        cin >> num_of_votes;
        cout << endl;
    }

    void Print() 
    {
        cout << name << " " << surname << " has " << percent_of_votes << "% of votes" << endl;
    }

};

bool Comp(Candidate &a, Candidate &b) 
{ 
 return (a.num_of_votes < b.num_of_votes); 
}

class Elections
{
private:
    vector<Candidate> candidates;
    int summ;
    
public: 
    
    void AddCandidate (Candidate &c) 
    {
        candidates.push_back(c);
    }
    
    void VotesSumm ()
    {
        summ = 0;
        for (auto i : candidates) {
            summ += i.num_of_votes;
        }
    } 
    
    void VotesPercent ()
    {
        for (auto &i : candidates) {
            i.percent_of_votes = (i.num_of_votes*100)/summ;
        }
    } 


    void Print() 
    {
        for (auto i : candidates) {
            i.Print();
        }
    }


    void GetWinner() 
    {
        cout << endl;
        cout << "The winner is " << max_element(candidates.begin(), candidates.end(), Comp)->name << " " << max_element(candidates.begin(), candidates.end(), Comp)->surname;
    }

};   