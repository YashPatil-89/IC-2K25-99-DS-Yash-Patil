#include<iostream>
using namespace std;

int main()
{
    int a[100],n,i,ch,pos,ele,found;
  
    cout<<"Enter size of array: ";
    cin>>n;

    cout<<"Enter array elements: ";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }

    do
    {
      cout<<"Display Array" << endl;
      cout<<"Insert Element" << endl;
      cout<<"Delete Element" << endl;
      cout<<"Search Element" << endl;
      cout<<"Exit";

      cout<<"Enter your choice: ";
      cin>>ch;

      switch(ch)
      {
        case 1:
            cout<<"Array elements are: ";
            for(i=0;i<n;i++)
            {
                cout<<a[i]<<" ";
            }
            break;

        case 2:
            cout<<"Enter position to insert: ";
            cin>>pos;

            cout<<"Enter element: ";
            cin>>ele;

            if(n>=100)
            {
                cout<<"Array is full";
            }
            else if(pos<1 || pos>n+1)
            {
                cout<<"Invalid position";
            }
            else
            {
                for(i=n;i>=pos;i--)
                {
                    a[i]=a[i-1];
                }

                a[pos-1]=ele;
                n++;

                cout<<"Element inserted successfully";
            }
            break;

        case 3:
            cout<<"Enter position to delete: ";
            cin>>pos;

            if(pos<1 || pos>n)
            {
                cout<<"Invalid position";
            }
            else
            {
                for(i=pos-1;i<n-1;i++)
                {
                    a[i]=a[i+1];
                }

                n--;

                cout<<"Element deleted successfully";
            }
            break;

        case 4:
            cout<<"Enter element to search: ";
            cin>>ele;

            found=0;

            for(i=0;i<n;i++)
            {
                if(a[i]==ele)
                {
                    cout<<"Element found at position "<<i+1;
                    found=1;
                    break;
                }
            }

            if(found==0)
            {
                cout<<"Element not found";
            }
            break;

        case 5:
            cout<<"Exiting program...";
            break;

        default:
            cout<<"Invalid choice";
      }

    }while(ch!=5);
    return 0;
}
