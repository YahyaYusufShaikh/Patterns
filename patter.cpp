/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <algorithm>
using namespace std;

void print5_1(int n)
    {
        for(int i = 0; i<n; i++)
        {
            for(int j = 0; j<i; j++)
            {
                cout <<" ";
            }
            for(int j = 0; j<2*n-2*i-1; j++)
            {
                cout<<"*";
            }
            for(int j = 0; j<n-1; j++)
            {
                cout<<" ";
            }
            cout << endl;
        }
    }  
void print5(int n)
{
     for(int i = 5; i>=0; i--)
    {
        for(int j = 0; j<n-i; j++)
        {
            cout <<" ";
        }
        for(int j = 0; j<2*i-1; j++)
        {
            cout<<"*";
        }
        for(int j = 0; j<n-1; j++)
        {
            cout<<" ";
        }
        cout << endl;
    }

}
void print6(int n=5)
{
    for(int i = 0; i<n; i++)
    {
        for(int j =0; j<n-i-1; j++)
        {
            cout<<" ";
        }
        for(int j = 0; j<2*i+1; j++)
        {
            cout<<"*";
        }
        for(int j = 0; j<n-i-1; j++)
        {
            cout<<" ";
        }
        cout << endl;
    }
    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<i; j++)
        {
            cout <<" ";
        }
        for(int j = 0; j<2*n-2*i-1; j++)
        {
            cout<<"*";
        }
        for(int j = 0; j<n-1; j++)
        {
            cout<<" ";
        }
        cout << endl;
    }
}
void print7(int n =5)
{
    for(int i = 0; i<=2*n-1; i++)
    {
        int stars = i;
        if(i>n) stars = 2*n-i;
        for(int j = 0; j<stars; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}
void print8(int n = 5)
{   int star = 1;
    for(int i = 0; i<=n; i++)
    {
        if(i % 2 == 0) star = 1;
        else star = 0;
        for(int j = 0; j<=i; j++)
        {
            cout<<star;
            star = 1 - star;
        }
        cout<<endl;
    }
}
void print9_me(int n =5)
{
    for(int i = 0; i<n; i++)
    {
        for(int j = 1; j<=i; j++)
        {
            cout<<j;
        }
        for(int j = 0; j<=n+2-2*i; j++)
        {
            cout<<" ";
        }
        {
            for(int j = i; j>=1; j--)
            {
                cout<<j;   
            }
        }
        cout<<endl;
    }
}
void print9_2_striver(int n =5)
{
    int space = 2*(n-1);
    for(int i = 0; i<n; i++)
    {
        //numbers
        for(int j = 1; j<=i; j++)
        {
            cout<<j;
        }
        //spaces
        for(int j = 0; j<space; j++)
        {
            cout<<" ";
        }
        //numbers
        for(int j = i; j>=1; j--)
        {
            cout<<j;
        }
        cout<<endl;
        space -= 2;
    }
}
void print10(int n = 5)
{
    int i ;
    int j ;
    int l = 1;
    for( i = 1 ; i<=n; i++)
    {
        // int l = i;
        for( j = 1; j<=i; j++)
        {
            
            cout<<l<<" ";
            l++;
        }
        cout<<endl;
    }
}
void print11(int n = 5)
{
    for(int i = 0; i<n; i++)
    {
        for(char ch = 'A'; ch <='A'+i; ch++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}
void print12_me(int n = 4){
    for(int i = n; i>=0; i--){
        for(char ch = 'A'; ch <= 'A'+i; ch++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}
void print12_striver(int n = 5){
    for(int i = 0; i<n; i++){
        for(char ch = 'A'; ch <= 'A' + (n-i); ch++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}
void print13(int n = 5){
    for(int i =0; i<n; i++){
        for(int j = 0; j <= i; j++){
            char d = 'A' + i;
            cout<<d<<" ";
        }
        cout<<endl;
    }
}
void print14(int n = 5){
    for(int i = 0; i<n; i++){
        // spaces
        for(int j = 0; j<n-i-1; j++){
            cout<<" ";
        }
        // character
        char c = 'A';
        int breakpoint = (2*i+1)/2;
        for(char j = 1; j<=2*i+1; j++){
            cout<<c;
            if(j <= breakpoint) c++;
            else c--;
        }
        // spaces
        for(int j = 0; j<n-i-1; j++){
            cout<<" ";
        }
        cout<<endl;
    }
}
void print15(int n = 5){
      for(int i =0; i<n; i++){
        for(char ch = 'E' - i; ch <= 'E'; ch++ ){
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}
void print16(int n = 5){
    int spaces = 0;
    for(int i = 0; i<n; i++){
        for(int j = 1; j<=n-i; j++){
            cout<<"*";
        }
        for(int j = 0; j< spaces; j++){
            cout<<" ";
        }
        for(int j = 1; j<=n-i; j++){
            cout<<"*";
        }
        spaces += 2;
        cout<<endl;
    }
    int space = (2*n)-2;
    for(int i = 0; i<n; i++){
        for(int j = 0; j<=i; j++){
            cout<<"*";
        }
        for(int j = 0; j<space; j++){
            cout<<" ";
        }
        for(int j = i; j>=0; j--){
            cout<<"*";
        }
        cout<<endl;
        space -= 2;
    }
}
void print16_1(int n = 5){
    //symmety
        int spaces = (2*n)-2;
    for( int i = 0; i<n; i++){
        for(int j = 1; j<=i; j++){
            cout<<"*";
        }
        for(int j = 0; j<spaces; j++){
            cout<<" ";
        }
        for(int j = i; j>=1; j--){
            cout<<"*";
        }
        cout<<endl;
        spaces -= 2;
    }
}
void print17(int n = 5){
    int space = 2*n - 2;
    for(int i = 1; i<=2*n-1; i++){
        int stars = i;
        if(i > n) stars = 2*n - i;
        //stars
        for(int j = 1; j<=stars; j++){
            cout<<"*";
        }
        //spaces
        for(int j = 1; j<=space; j++){
            cout<<" ";
        }
        for(int j = 1; j<=stars; j++){
            cout<<"*";
        }
        cout<<endl;
        if(i < n) space -= 2;
        else space += 2;


    }

}
void print18(int n = 4){
    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=n; j++){
            if(i == 1 || i == n || j == 1 || j == n) {
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}
void print19(int n = 4){
    for(int i = 0; i<2*n-1; i++){
        for(int j = 0; j<2*n-1; j++){
            int top = i;
            int left = j;
            int right = (2*n-2)-j;
            int bottom = (2*n-2)-i;
            cout<<(n-min(min(top, bottom), min(left, right)));

        }
        cout<<endl;
    }
}
int main()
{
    print5(5);
    print5_1(5);
    cout << "print6" << endl <<"\n";
    print6();
    cout << "print7" << endl <<"\n";
    print7();
    cout << "print8" << endl <<"\n";
    print8();
    print9_me();
    print9_2_striver();
    cout << "print10" << endl <<"\n";
    print10();
    cout << "print11" << endl <<"\n";
    print11();
    cout << "print12" << endl <<"\n";
    print12_me();
    print12_striver();
    cout << "print13" << endl <<"\n";
    print13();
    cout << "print14" << endl <<"\n";   
    print14();
    cout << "print15" << endl <<"\n";
    print15();
    cout << "print16" << endl <<"\n";
    print16();
    print16_1();
    cout << "print17" << endl <<"\n";
    print17();
    cout << "print18" << endl <<"\n";
    print18();
    cout << "print19" << endl <<"\n";
    print19();

    return 0;
}
