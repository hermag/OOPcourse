#include <iostream>
using namespace std;

//შევქმნათ კლასი სახელით ფორმა, რომელსაც ექნება კონსტრუქტორი
//ამ კონსტრუქტორის გადატვირთვის საშუალებით, უნდა შეგვეძლოს
//სამკუთხედის, მართკუთხედის, ტრაპეციის და წრის ფართობის დათვლა
//სამკუთხედის შემთხვევაში, უნდა გადავამოწმოთ ცალკე ფუნქციით, შეიძლება
//თუ არა მოცემული გვერდბით სამკუთხედის აგება

class shape
{
        float a, b, c, d, s; //ფიგურის გვერდების და ფართობის ცვლადები
    public:
        shape(float x)
        {
            a = x;
            s = 3.14 * a * a;
        }
        shape (float x, float y)
        {
            a = x;
            b = y;
            s = a * b;
        }
        shape (float x, float y, float z)
        {
            a = x;
            b = y;
            c = z;
        }
        shape(float x, float y, float z, float k)
        {
            a = x;
            b = y;
            c = z;
            d = k;
        }
        float get_area() //კლასის მეთოდი რომლის საშუალებითაც ვკითხულობთ დახურული ტიპის ცვლადის მნიშვნელობას
        {
            return s;
        }
        void set_area(float area) //კლასის მეთოდი რომლის საშუალებითაც კლასის დახურულ ცვლადს ვანიჭებთ მნიშვენლობას
        {
            s=area;
        }
        float get_a()
        {
            return a;
        }
        float get_b()
        {
            return b;
        }
        float get_c()
        {
            return c;
        }
        float get_d()
        {
            return d;
        }
};

void samkuTxedis_an_trapeciis_fartobi(shape figura, int gverdebis_raodenoba)
{
    if (gverdebis_raodenoba==3)
    {
        //ვამოწმებთ იგება თუ არა სამკუთხედი
        //ვითვლით სამკუთხედის ფართობს
        //ვანიჭებთ და ობიექტის დახურულ ცვლადს, s-ს ფართობის მნიშვნლობას
        cout<<"სამკუთხედი იგება"<<endl;
        figura.set_area(4.5);
        cout<<"სამკუთხედის ფართობია "<<figura.get_area()<<endl;
    }
    else if(gverdebis_raodenoba==4)
    {
        //ვამოწმებთ იგება თუ არა ტრაპეცია
        //ვითვლით ტრაპეციის ფართობს
        //ვანიჭებთ და ობიექტის დახურულ ცვლადს, s-ს ფართობის მნიშვნლობას
        cout<<"ტრაპეცია იგება"<<endl;
        figura.set_area(12.3);
        cout<<"ტრაპეციის ფართობია "<<figura.get_area()<<endl;
    }
    else
        cout<<"არც ტრაპეციაა გადაცემული და არც სამკუთხედი"<<endl;
}

int main()
{
    shape cre(3);   //ამ შემთხვევაში გამოვიყენეთ კლასის კონსტრუქტორი მ
                    //ხოლოდ ერთი ცლადით, ანუ შევქმენით ობიექტი რომელიც შეესაბამება წრეს
    cout<<"წრის ფართობია "<<cre.get_area()<<endl;
    shape martkutxedi(2,4);
    cout<<"მართკუთხედის ფართობია "<<martkutxedi.get_area()<<endl;
    shape samkutxedi(3,4,5);
    samkuTxedis_an_trapeciis_fartobi(samkutxedi,3);
    cout<<"სამკუთხედის ფართობია "<<samkutxedi.get_area()<<endl;
    shape trapecia(3,2,5,6);
    samkuTxedis_an_trapeciis_fartobi(trapecia,4);
    cout<<"ტრაპეციის ფართობია"<<trapecia.get_area()<<endl;
    return 0;
}
