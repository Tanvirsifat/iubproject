#include <iostream>
#include <string.h>

using namespace std;


bool check_length(string s)
{
     int n = s.size();
      if ( n%2==0)
         {
           return false;
         }
      return true;
}

bool digit_cjeck (char a[], int n)
{
     int flag=0;
    for (int i=0; i<n;i++)
    {
       if (a[i]!='0'&& a[i]!='1')
       {
            flag=1;
       }

    }
      if (flag==1)
        {

             return false;
        }
       return  true;
}


bool transition_function ( char a[], int n)
{

    int curr='a';


    for (int i=0,j=0;i<n;i++)
    {


      if (curr=='a')
      {
           if (a[j]=='1')
                {
                    if (j==n)
                        break;
                    else
                    {curr='b'; j++;}
                }
          else
                {
                    if (j==n)
                        break;
                    else

                    {curr='c'; j++;}
                }
      }



   if (curr=='b')
      {
           if (a[j]=='1')
                {
                    if (j==n)
                        break;
                    else
                    {curr='a'; j++;}
                }
          else
                {
                    if (j==n)
                        break;
                    else

                    {curr='d'; j++;}
                }
      }



   if (curr=='c')
      {
           if (a[j]=='1')
                {
                    if (j==n)
                        break;
                    else
                    {curr='d'; j++;}
                }
          else
                {
                    if (j==n)
                        break;
                    else

                    {curr='a'; j++;}
                }
      }

      if (curr=='d')
      {
           if (a[j]=='1')
                {
                    if (j==n)
                        break;
                    else
                    {curr='c'; j++;}
                }
          else
                {
                    if (j==n)
                        break;
                    else

                    {curr='b'; j++;}
                }
      }


    }
          if (curr =='b' || curr =='c')
            cout<<"\nYes.\n";
            else
                cout<<"\nNo.\n";

}

int main()
{
    string s;
    char cha;
     do{
    cout<<"Enter a Binary string:";
    cin>>s;
    int p = s.size();
    char a[p];
    strcpy(a, s.c_str());
   int l= length_check(s);
   int d= digit_cjecking(a,p);

   if (l==1)
   {
       if (d==1)
       {
           transition_function(a,p);
       }
       else
        cout<<"\nThe string is invalid. \nIt contains other digits than 0's and 1's\n";
   }
   else
        cout<<"\nNo.\n";



    cout<<"Do you want to continue (y/n):";
    cin>>cha;
     }while (cha=='y' || cha=='Y');

    return 0;
}
