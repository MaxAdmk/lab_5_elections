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
    int percent;

    void setCandidate() 
    {
        cout << "Name of the candidate: ";
        cin >> name;
        cout << "Surname of the candidate: ";
        cin >> surname;
        cout << "Number of votes of the candidate: ";
        cin >> num_of_votes;
        cout << endl;
    }

    void print() 
    {
        cout << name << " " << surname << " has " << percent << "% of votes" << endl;
    }

};

bool comp(Candidate &a, Candidate &b) 
{ 
 return (a.num_of_votes < b.num_of_votes); 
}

class Elections
{
private:
    vector<Candidate> candidates;
    int summ;
    
public: 
    
    void addCandidate (Candidate &c) 
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
            i.percent = (i.num_of_votes*100)/summ;
        }
    } 


    void print() 
    {
        for (auto i : candidates) {
            i.print();
        }
    }


    void getWinner() 
    {
        cout << endl;
        cout << "The winner is " << max_element(candidates.begin(), candidates.end(), comp)->name << " " << max_element(candidates.begin(), candidates.end(), comp)->surname;
    }

};   