#include<iomanip>
#include<iostream>
using namespace std;
class A
{
    private:
      int gizliSayi;
    public:
      A():gizliSayi(711){} 
    friend class B;
};
class B
{
    public:
    void gizliSayiGoster(A a)
    {
        cout<<"A sınıfının gizli sayısı:"<<a.gizliSayi;
    }
};
int main()
{
    A a;
    B b;
    b.gizliSayiGoster(a);
    return 0;
 }
        
