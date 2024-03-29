/*
 *შექმენით კლასი, რომელშიც იქნება ორი მთელი ტიპის დახურული ცვლადი.
 *შექმენით კონსტრუქტორი, რომელსაც თუ არ გადასცემთ არგუმენტს,
 *მან უნდა გამოიძახოს, დახურული მეთოდი, რომელსაც გადასცემს ერთ მცურავ
 *წერტილიან რიცხვს (float) და ეს მეთოდი დააბრუნებს ამ რიცხვის კვადრატს,
 *გამრავლებულს 3.14-ზე. თუ კონსტრუქტორს გადავცემთ ერთ მთელ რიცხვს,
 *მაშინ კონსტრუქტორმა ორივე დახურულ ცვლადს უნდა მიანიჭოს ერთი და იგივე მნიშვნელობა
 *(ჩვენს მიერ გადაცემული) და გამოიძახოს, კლასის გარე ფუნქცია,
 *რომელიც დააბრუნებს ამ რიცხვების ნამრავლს. კონსტრუქტორი უნდა გადაიტვირთოს ასევე ორი ცვლადით,
 *და ამ ცვლადების მნიშვნელობები უნდა მიენიჭოს დახურული ტიპის ცვლადებს,
 *ასევე უნდა მოხდეს კლასგარეშე ფუნქციის გამოძახება, რომელიც დააბრუნებს ამ რიცხვების ნამრავლს.
 *შექმენით ამ კლასის ობიექტები და გადატვირთეთ კონსტრუქტორი ყველა შესაძლო შემთხვევით.
 */

#include <iostream>
#include <vector>
#include <string>
using namespace std;

void print_product(int a, int b)
{
	cout<<a*b<<endl;
}

class the_class
{
	private:
		int a;
		int b;
		float the_method(float num)
		{
			return num*3.14;
		}
	public:
		the_class()
		{
			the_method(5.7);
		}
		the_class(const int& new_a)
		{
			a = new_a;
			b = new_a;
			print_product(a,b);

		}
		the_class(const int& new_a, const int& new_b)
		{
			a = new_a;
			b = new_b;
			print_product(a,b);
		}
};

int main()
{
	the_class c1, c2(3), c3(3,4);
	return 0;
}

