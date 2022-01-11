#include <iostream>

using namespace std;


bool fuggveny(int n)
{
    int d,e;
    while (n / 100)
    {
        d = n % 10;
        n /= 10;
        n = n-(d * 3);
         cout<< n <<endl ;
    }
    e=n;
    cout<< n <<endl ;

    return (n % 31 == 0) ;

}

int main()
{
    int n;
    cin >> n;
    if (fuggveny(n))
        cout<<"oszthato"<<endl ;
    else
        cout<<"nem osthato"<<endl ;

    return 0;
}
