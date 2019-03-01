#include<iostream>
using namespace std;
int main()
{
    int *a[3];char *b[3];
    for(int i=0;i<3;i++)
    {
        cout<<&a[i]<<"  ";
    }
cout<<endl;
    for(int i=0;i<3;i++)
    {
        cout<<&b[i]<<"  ";
    }
    return 0;
}
// 0x28feec 0x28fef0 0x28fef4 la dia chi cua 3 phan tu lien tiep mang a;
// 0x28fee0 0x28fee4 0x28fee8 la dia chi cua 3 phan tu lien tiep mang b;



