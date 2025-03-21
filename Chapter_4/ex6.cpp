//포함(containment)
#include <stdio.h>
#include <string.h>

class Product{
    public: 
        char name[64];
        char company[64];
        int price;
        class Date{
            protected: int year, month, day;
            public:
                Date(int y, int m, int d): year(y), month(m), day(d){}
                void OutDate() const{
                    printf("%d-%d-%d\n", year, month, day);
                }
            };
            Date validto;
    public:
        Product(const char* n, const char* c, int y, int m, int d, int p)
            :validto(y, m, d){
            strcpy(name, n);
            strcpy(company, c);
            price = p;
        }
        void OutProduct() const{
            printf("%s, %s, ", name, company);
            validto.OutDate();
            printf("%d\n", price);
        }
};

int main(){
    Product p("Apple", "Apple Inc.", 2020, 10, 10, 1000);
    p.OutProduct();
    Product::Date d(2020, 12, 31);
    d.OutDate();
}
