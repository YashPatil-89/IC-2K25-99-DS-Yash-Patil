
#include<iostream>
using namespace std;
#define MAX 20

int main()
{
    int a[MAX][MAX];
    int r,c,ch;
    int i,j,sum;

    cout<<"Enter rows and columns: ";
    cin>>r>>c;

    if(r<=0 || r>MAX || c<=0 || c>MAX)
    {
        cout<<"Invalid size!";
        return 0;
    }

    cout<<"Enter matrix elements:"<<endl;

    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            cout<<"Enter element: ";
            cin>>a[i][j];
        }
    }

    do
    {
        cout<<"\nMATRIX OPERATIONS-->"<<endl;
        cout<<"1. Display Matrix"<<endl;
        cout<<"2. Find Transpose"<<endl;
        cout<<"3. Row Sum"<<endl;
        cout<<"4. Column Sum"<<endl;
        cout<<"0. Exit"<<endl;

        cout<<"\nEnter your choice: ";
        cin>>ch;

        switch(ch)
        {
            case 1:
                cout<<"\nMatrix is:\n";

                for(i=0;i<r;i++)
                {
                    for(j=0;j<c;j++)
                    {
                        cout<<a[i][j]<<"\t";
                    }
                    cout<<"\n";
                }
                break;

            case 2:
                cout<<"\nTranspose Matrix:"<<endl;

                for(j=0;j<c;j++)
                {
                    for(i=0;i<r;i++)
                    {
                        cout<<a[i][j]<<"\t";
                    }
                    cout<<endl;
                }
                break;

            case 3:
                for(i=0;i<r;i++)
                {
                    sum=0;

                    for(j=0;j<c;j++)
                    {
                        sum=sum+a[i][j];
                    }

                    cout<<"\nRow "<<i+1<<" sum = "<<sum;
                }
                break;

            case 4:
                for(j=0;j<c;j++)
                {
                    sum=0;

                    for(i=0;i<r;i++)
                    {
                        sum=sum+a[i][j];
                    }

                    cout<<"\nColumn "<<j+1<<" sum = "<<sum;
                }
                break;

            case 0:
                cout<<"\nProgram ended.";
                break;

            default:
                cout<<"\nWrong choice!";
        }

    }while(ch!=0);
    return 0;
}
