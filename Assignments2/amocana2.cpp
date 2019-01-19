#include <iostream>
#include <iomanip>
using namespace std;

class basearea
  {
    private:
      char form; //mxolod erti simbolo unda shemoitanot
      float erteulis_fasi;
      int simaRle_radiusi; //am cvladshi chaicereba an simaRle an radiusi
      float get_circle_area()
        {
          return 3.14*(simaRle_radiusi*simaRle_radiusi);
        }
      float get_triangle_area(float fuZe)
        {
          return 0.5*simaRle_radiusi*fuZe;
        }
      float get_rectangle_area(float sigane)
        {
          return simaRle_radiusi*sigane;
        }
      float get_trapezoid_area(float mcire_fuZe, float didi_fuZe)
        {
          return 0.5*(mcire_fuZe+didi_fuZe)*simaRle_radiusi;
        }
      public:
        void setform(char figuris_forma)
          {
            form = figuris_forma;
          }
        void seterteulisfasi(float erteuli_fartobis_sheRebvis_fasi)
          {
            erteulis_fasi = erteuli_fartobis_sheRebvis_fasi;
          }
        void setsimaRleRadiusi(float figuris_simaRle_an_radiusi)
          {
            simaRle_radiusi = figuris_simaRle_an_radiusi;
          }
        float get_cris_fasi()
            {
              float cris_fartobi = get_circle_area();
              return cris_fartobi*erteulis_fasi;
            }
        float get_samkutxedis_an_martkutxedis_fasi(float fuze)
          {
            float fartobi;
            switch(form)
              {
                case 's': //samkutxedi fartobi
                  fartobi = get_triangle_area(fuze);
                  break;
                case 'm': //martkutxedis fartobi
                  fartobi = get_rectangle_area(fuze);
                  break;
                default:
                  fartobi = 0;
                  cout<<"aseti forma ar arsebobs";
                  break;
              }
            return fartobi * erteulis_fasi;
          }
        float get_trapeciis_fartobi(float patara_fuZe, float didi_fuZe)
          {
            float fartobi, fasi;
            fartobi = get_trapezoid_area(patara_fuZe, didi_fuZe);
            return fartobi*erteulis_fasi;
          }
  };

  int main()
    {
      basearea figura;
      figura.setform('s');
      figura.setsimaRleRadiusi(3);
      figura.seterteulisfasi(2.0);
      cout<<"cris sheRebvis safasuria "<<figura.get_cris_fasi()<<endl;
      return 0;
    }
