#include <iostream>
#include <iomanip>
#include <string>

class paint
  {
  private:
    string form; //ფორმა
    float unit_price, area_parameter;
    //unit_price ერთეული ფართობის შეღებვის ფასი
    //area_parameter ფართობის გამოსათვლელად საჭირო ერთ-ერთი პარამეტრი,
    //სამკუთხედის, მართკუთხედის და ტრაპეციის შემთხვევაში სიმაღლე
    //წრის შემთხვევაში რადიუსი
    float circle()
      {
        return 3.14*area_parameter*area_parameter;
      }
    float traingle(float base)
      {
        return 0.5*base*area_parameter;
      }
    float rectangle(float width)
      {
        return area_parameter*width;
      }
    float trapezoid(float baseone, float basetwo)
      {
        return 0.5*(baseone+basetwo)*area_parameter;
      }
  public:

  };
