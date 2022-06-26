#include <iostream>
#include <string>
using namespace std;

struct medical_card
{
    int id_card;
    string FIO;
    int poll;
    int telephone;
    string adress;
    string work_place;
    string profession;
};
enum pol
{
    m,
    zh,
    bi
};


int main()
{
    medical_card PopovVA;
    PopovVA.id_card = 1;
    PopovVA.FIO= "Popov Victor Vasilevich";
    PopovVA.telephone = 8937483232;
    PopovVA.adress = "Kalatushkina d 12";
    PopovVA.work_place = "Kazan MALL";
    PopovVA.profession = "Developer";
    PopovVA.poll = pol::bi;

    cout << PopovVA.id_card << endl;
    cout << PopovVA.FIO << endl;
    cout << PopovVA.telephone << endl;
    cout << PopovVA.adress << endl;
    cout << PopovVA.work_place << endl;
    cout << PopovVA.profession << endl;
    cout << PopovVA.poll<< endl;


}
