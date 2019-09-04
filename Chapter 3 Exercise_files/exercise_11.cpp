//Chapter 3 Solving Exercise Problem 11
//exercise_11.cpp
//Create the three functon calculator for old style english currency

#include<iostream>
using namespace std;

int main()
{
    float p1,p2,s1,s2,pe1,pe2,i;
    char ch;
    if(pe2>=12)
    {
        pe2-=12;
        s2++;
    }
    if(s2>=20)
    {
        s2-=20;
        p2++;
    }
    cout<< "Enter first amount  ";
    cout<<"\npound:";
    cin >> p1;cout<<"\nshilling:";cin>>s1;cout<<"\npence:";cin>>pe1;
    cout << "   Choose an option "
         << "\n + for addition of two amounts "
         << "\n - for subtraction of amounts "
         << "\n * for multiplication with a floating point"<<endl;
    cin >> ch ;

    switch(ch)
    {
    case '+':
        cout<< "Enter second amount :";
        cout<<"\npound:";
        cin >> p2;cout<<"\nshilling:";cin>>s2;cout<<"\npence:";cin>>pe2;
        p2+=p1;
        s2+=s1;
        pe2+=pe1;
        if(pe2>=12)
          {
            pe2-=12;
            s2++;
          }
       if(s2>=20)
         {
           s2-=20;
           p2++;
         }

        cout<<"Total";
        cout<<"\npound:"
         << p2<<"\nshilling:"<<s2<<"\npence:"<<pe2;
        break;

    case '-':
        cout<< "Enter second amount :";
        cout<<"\npound:";
        cin >> p2;cout<<"\nshilling:";cin>>s2;cout<<"\npence:";cin>>pe2;
        p2-=p1;
        s2-=s1;
        pe2-=pe1;
        cout<<"Total";
        cout<<"\npound:"
         << p2<<"\nshilling:"<<s2<<"\npence:"<<pe2;
        break;

    case '*':
        cout<<"Enter floating point : " ; cin >> i ;
        p2= p1 * i;
        s2= s1 * i;
        pe2= pe2 * i;
         if(pe2>=12)
           {
            pe2-=12;
            s2++;
           }
         if(s2>=20)
           {
           s2-=20;
           p2++;
           }

        cout<<"Total";
        cout<<"\npound:"
         << p2<<"\nshilling:"<<s2<<"\npence:"<<pe2;
        break;
        
    default ;
    cout << "Invalid option !";
    }
    return 0;

}
