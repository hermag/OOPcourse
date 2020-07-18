#include <iostream>
using namespace std;

int main()
{
    int i=1,j;
    int *p;
    p=&i;
    cout<<"p="<<p<<endl;
    j = *p; //* გამოიყენება როგორც მიმთითებლის აღსაწერად ასევე მიმთითებლიდან მნიშვნელობის მისაღებად.
    cout<<"j="<<j<<endl;
    i=45;
    cout<<"j="<<j<<endl;
    return 0;
}

/*პროგრამის შესრულების შედეგი
p=0x7fffaee97b7c                                                                                                                   
j=1                                                                                                                                
j=1
*/
