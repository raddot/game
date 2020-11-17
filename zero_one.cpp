#include<iostream>
using namespace std;

class CrossZeroGame
{
    private:
        int a[3][3];
        int i;
        int j;
    public:
        void EnterData();
        void DisplayData();
        void PlayGame();
};

void CrossZeroGame::EnterData()
{
    cout<<"Enter 1(for cross) and 0 (for zero)"<<endl;
    for(i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>a[i][j];
        }
    }
}

void CrossZeroGame::DisplayData()
{
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<" "<<a[i][j];
        }
        cout<<"\n";
    }
}

void CrossZeroGame::PlayGame()
{
    int winner=0;
    if((a[0][0]==a[1][1]&&a[1][1]==a[2][2])||(a[0][2]==a[1][1]&&a[1][1]==a[2][0]))
    {
        cout<<"Winner is :"<<a[1][1];
        return;
    }
    for(i=0;i<3;i++)
    {
        if(a[i][0]==a[i][1]&&a[i][0]==a[i][2])
        {
            cout<<"Winner is :"<<a[i][0];
            return;
        }
        else if(a[0][i]==a[1][i]&&a[1][i]==a[2][i])
        {
            cout<<"Winner is :"<<a[0][i];
            return;
        }
        else
        {
            winner=-1;
        }
    }
    if(winner==-1)
    {
        cout<<"Match is Draw";
    }
}
    
    int main()
    {
        CrossZeroGame obj;
        obj.EnterData();
        cout<<"\n The Board is \n";
        obj.DisplayData();
        obj.PlayGame();
        return 0;
    }
