#include <iostream>

using namespace std;

int main()
{

       int ship_num, row,column,turn=0;
       cout<<"Enter the number of ships : ";
       cin>>ship_num;
       cout<<"Enter row number : ";
       cin>>row;
       cout<<"Enter column number : ";
       cin>>column;
    bool ship[ship_num][row][column];
    int insects=0
    ;
    cout<<"Enter bool value (0 represent clean and 1 represent insect inside the ship) \n";
    cout<<"Enter ship element \n";

       for(int i=0;i<ship_num;i++)
       {

           for(int j=0;j<row;j++)
           {
               for(int k=0;k<column;k++)
               {
                   jump:
                   cout<<"Element of ship "<<i+1<<" row "<<j+1<<"\ncolumn "<<k+1<<": ";
                   int num;
                   cin>>num;
                   if(num<=1&&num>=0)
                   {
                       ship[i][j][k]= num;
                       if(num==1)
                       {
                           insects=insects+1;
                       }
                   }
                   else
                   {
                       cout<<"wrong values!\nTry again\n";
                       goto jump;
                   }
               }
           }
       }
       cout<<"Ship values according to you \n";
       for(int i=0;i<ship_num;i++)
       {

           for(int j=0;j<row;j++)
           {
               for(int k=0;k<column;k++)
               {
                   cout<<ship[i][j][k]<<" ";
               }
               cout<<"\n";
           }
           cout<<"\n\n";
       }
       system("cls");
       cout<<"Total bugs in ship(s) "<<ship_num<<": "<<insects<<"\n";

    for(int i=0;i<ship_num;i++)
       {

           for(int j=0;j<row;j++)
           {
               for(int k=0;k<column;k++)
               {
                   cout<<"*"<<" ";
               }
               cout<<"\n";
           }
           cout<<"\n\n";
       }
       cout<<"Gathering Quadinates";
       int hit_insects=0;
       int miss_insects=0;
       bool u2ship[ship_num][row][column];

        for(int i=0;i<ship_num;i++)
       {

           for(int j=0;j<row;j++)
           {
               for(int k=0;k<column;k++)
               {
                   jump2:
                   cout<<"Enter element of ship "<<i+1<<" row "<<j+1<<"\ncolumn "<<k+1<<": ";
                   cin>>u2ship[i][j][k];

               if(u2ship[i][j][k]<=1&&u2ship[i][j][k]>=0)
               {



                   if(u2ship[i][j][k])
                   {
                       cout<<"hit!\n";
                       hit_insects++;
                       turn=turn+1;
                   }
                   else
                    {
                        cout<<"miss!\n";
                        miss_insects++;
                        turn=turn+1;
                    }
               }
               else{
                cout<<"you enter wrong number";
                goto jump2;
               }

                }
           }
       }
cout<<"You took "<<turn<<" turns\n";
cout<<"You kill "<<hit_insects<<" insects\n"<<" \n";
cout<<"You miss "<<miss_insects<<" insects\n"<<" \n";

    return 0;
}
