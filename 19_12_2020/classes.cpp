/*
 * classes.cpp
 *
 *  Created on: Dec 19, 2020
 *      Author: ereklemagradze
 */
#include <iostream>
#include <vector>
#include <string>

using namespace std;

class specialization
{
	private:
		float weekly_rate;
    public:
		specialization()
    	{
			subject = "სატესტო საგანი";
    	}
        string subject;
        string instructor;
        int duration;
        int max_number_of_students;
        string pre_requisite;
        void set_hourly_rate(float wr)
        		{
        			weekly_rate = wr;
        		}
        float course_salary()
        		{
        			return weekly_rate * duration;
        		}
};

void PrintSubject(const specialization& s)
{
    cout<<"საგანს "<<s.subject<<" ასწავლის "<<s.instructor<<". საგნის ხანგრძლივობაა "<<s.duration<<". საგანზე დაიშვება არაუმეტეს "<<s.max_number_of_students<<" სტუდენტისა."<<" კურსის წინაპირობა "<<s.pre_requisite<<endl;
}

void PrintSpecialization(const vector<specialization>& sp)
{
    for(auto s : sp)
        PrintSubject(s);
}

int main()
{
    //vector<specialization> sp1 = {{"შესავალი დაპროგრამებაში","სალომე ონიანი",24,25,"არ აქვს"},
    //                               {"ოოპ","ერეკლე მაღრაძე",23,25,"შესავალი დაპროგრამებაში"},
    //                               {"ალგორითმები","გიორგი ფარცხალაძე",23,30,"ოოპ"},
    //                               {"მონაცემთა ბაზები","ნანა დიხამინჯია",24,30,"ალგორითმები"}};
    //sp1[0].set_hourly_rate(20.50);
    //PrintSpecialization(sp1);
	specialization sp1[4];
	for (int i =0; i<4; i++)
	{
		cin>>sp1[i].subject>>sp1[i].instructor>>sp1[i].duration>>sp1[i].max_number_of_students>>sp1[i].pre_requisite;
		sp1[i].set_hourly_rate(20.20);
		cout<<"ანაზღაურება "<<sp1[i].course_salary()<<endl;
	}
    return 0;
}





