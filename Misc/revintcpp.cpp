# include<iostream>
using namespace std;
int revint(int);
int main()
{
    int n;
    co <<"Enter a no"<<endl;
    cin>>n;
    cout<<"The no printed in reverse is "<<revint(n)<<endl;
    system("pause");
    return 0;
}
int revint(int a)
{
    static int r=0;
    if(a==0)
    return r;
    else
    {
        int d=a%10;
        r=r*10+d;
        return 0+revint(a/10);
    }
}
    
    
