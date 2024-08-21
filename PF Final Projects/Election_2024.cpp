#include<iostream>
using namespace std;

int pti = 0, pmln = 0, ppp = 0, ji = 0, tlp = 0, mqm = 0;

void electionResult()
{
    int WonByVote;
    if (pti > pmln && pti > ppp && pti > ji && pti > tlp && pti > mqm)
    {
        cout << "\n**************************************";
        cout << "\n        PTI  Won the Election         \n"
             << endl;
        cout << "          Total Vote of PTI is  :   " << pti << endl
             << endl;  

        WonByVote = pti - pmln;
        cout << "PTI Won by " << WonByVote << " Votes to PMLN" << endl;
        WonByVote = pti - ppp;
        cout << "PTI Won by " << WonByVote << " Votes to PPP" << endl;
        WonByVote = pti - ji;
        cout << "PTI Won by " << WonByVote << " Votes to JI" << endl;
        WonByVote = pti - tlp;
        cout << "PTI Won by " << WonByVote << " Votes to TLP" << endl;
        WonByVote = pti - mqm;
        cout << "PTI Won by " << WonByVote << " Votes to MQM" << endl;
        cout << "******************************************";
    }
    else if (pmln > ppp && pmln > ji && pmln > tlp && pmln > mqm)
    {
        cout << "\n**************************************";
        cout << "\n        PMLN  Won the Election         \n"
             << endl;
        cout << "          Total Vote of PMLN is  :        " << pmln << endl;
        WonByVote = pmln - pti;
        cout << "PMLN Won by " << WonByVote << " Votes to PTI" << endl;
        WonByVote = pmln - ppp;
        cout << "PMLN Won by " << WonByVote << " Votes to PPP" << endl;
        WonByVote = pmln - ji;
        cout << "PMLN Won by " << WonByVote << " Votes to JI" << endl;
        WonByVote = pmln - tlp;
        cout << "PMLN Won by " << WonByVote << " Votes to TLP" << endl;
        WonByVote = pmln - mqm;
        cout << "PMLN Won by " << WonByVote << " Votes to MQM" << endl;
        cout << "*****************************************";
    }
    else if (ppp > ji && ppp > tlp && ppp > mqm)
    {
        cout << "\n**************************************";
        cout << "\n        PPP  Won the Election         \n"
             << endl;
        cout << "          Total Vote of PPP is  :        " << ppp << endl;
        WonByVote = ppp - pti;
        cout << "PPP Won by " << WonByVote << " Votes to PTI" << endl;
        WonByVote = ppp - pmln;
        cout << "PPP Won by " << WonByVote << " Votes to PMLN" << endl;
        WonByVote = ppp - ji;
        cout << "PPP Won by " << WonByVote << " Votes to JI" << endl;
        WonByVote = ppp - tlp;
        cout << "PPP Won by " << WonByVote << " Votes to TLP" << endl;
        WonByVote = ppp - mqm;
        cout << "PPP Won by " << WonByVote << " Votes to MQM" << endl;
        cout << "*****************************************";
    }
    else if (ji > tlp && ji > mqm)
    {
        cout << "\n**************************************";
        cout << "\n        JI  Won the Election         \n"
             << endl;
        cout << "          Total Vote of JI is  :        " << ji << endl;
        WonByVote = ji - pti;
        cout << "JI Won by " << WonByVote << " Votes to PTI" << endl;
        WonByVote = ji - pmln;
        cout << "JI Won by " << WonByVote << " Votes to PMLN" << endl;
        WonByVote = ji - ppp;
        cout << "JI Won by " << WonByVote << " Votes to PPP" << endl;
        WonByVote = ji - tlp;
        cout << "JI Won by " << WonByVote << " Votes to TLP" << endl;
        WonByVote = ji - mqm;
        cout << "JI Won by " << WonByVote << " Votes to MQM" << endl;
        cout << "*****************************************";
    }
    else if (tlp > mqm)
    {
        cout << "\n**************************************";
        cout << "\n        TLP  Won the Election         \n"
             << endl;
        cout << "          Total Vote of TLP is  :        " << tlp << endl;
        WonByVote = tlp - pti;
        cout << "TLP Won by " << WonByVote << " Votes to PTI" << endl;
        WonByVote = tlp - pmln;
        cout << "TLP Won by " << WonByVote << " Votes to PMLN" << endl;
        WonByVote = tlp - ppp;
        cout << "TLP Won by " << WonByVote << " Votes to PPP" << endl;
        WonByVote = tlp - ji;
        cout << "TLP Won by " << WonByVote << " Votes to JI" << endl;
        WonByVote = tlp - mqm;
        cout << "TLP Won by " << WonByVote << " Votes to MQM" << endl;
        cout << "*****************************************";
    }
     else if (pti == pmln && pmln == ppp && ppp == ji && ji == tlp && tlp == mqm)
    {
        cout << "\n*********************************\n";
        cout << "Election Tied:)\nVotes are equal.";
        cout << "\n*********************************\n";
    }
    else 
    {
        cout << "\n**************************************";
        cout << "\n        MQM  Won the Election         \n"
             << endl;
        cout << "          Total Vote of MQM is  :        " << mqm << endl;
        WonByVote = mqm - pti;
        cout << "MQM Won by " << WonByVote << " Votes to PTI" << endl;
        WonByVote = mqm - pmln;
        cout << "MQM Won by " << WonByVote << " Votes to PMLN" << endl;
        WonByVote = mqm - ppp;
        cout << "MQM Won by " << WonByVote << " Votes to PPP" << endl;
        WonByVote = mqm - ji;
        cout << "MQM Won by " << WonByVote << " Votes to JI" << endl;
        WonByVote = mqm - tlp;
        cout << "MQM Won by " << WonByVote << " Votes to TLP" << endl;
        cout << "*****************************************";
    }
   
}

void calculateVote(int vote)
{
    switch (vote)
    {
    case 1:
        pti = pti + 1;
        break;

    case 2:
        pmln = pmln + 1;
        break;
    case 3:
        ppp = ppp + 1;
        break;
    case 4:
        ji = ji + 1;
        break;
    case 5:
        tlp = tlp + 1;
        break;
    case 6:
        mqm = mqm + 1;
        break;
    }
}
int main()
{
    int choose;

    cout << "\n      WELCOME TO SIMPLE E-VOTING PROJECT     \n\n";
    cout << "                   MP ELECTION                 \n\n";
    cout << "******************************************************\n";
    cout << "|        1.PTI             |           2.PMLN        |\n";
    cout << "|        3.PPP             |           4.JI          |\n";
    cout << "|        5.TLP             |           6.MQM         |\n";
    cout << "******************************************************\n";
    cout << "Press 1 to vote PTI\t\tPress 2 to vote PMLN\n";
    cout << "Press 3 to vote PPP\t\tPress 4 to Vote JI\n";
    cout << "Press 5 to vote TLP\t\tPress 6 to vote MQM\n";
    cout << "\nPress 7 to show the election Result\n\n";

    do
    {
        again:
        cout << "  Vote for Change: ";
        
        cin >> choose;
        if (choose == 7)
        {
            electionResult();
        }
        else if (choose >= 1 && choose < 7)
        {
            calculateVote(choose);
        }
        else
        {
            cout << "\n Invalid Key Pressed try again " << endl;
            goto again;
        }
    } while (choose != 7);
    cout << endl;
    return 0;
}
