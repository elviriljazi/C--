#include <iostream>
#include <string>
using namespace std;
class Date
{
private:
    int date;
    int month;
    int year;

public:
    Date()
    {
        Date(1, 1, 1970);
    }
    Date(int date, int month, int year)
    {
        date = date;
        month = month;
        year = year;
    }
    string getDate()
    {
        string s = to_string(date) + "/" + to_string(month) + "/" + to_string(year);
        return s;
    }
};
class Contact
{
private:
    int id;
    string emri;
    string mbiemri;
    string numri;
    Date date;

public:
    Contact()
    {
        Contact(0, "", "", "", Date());
    }
    Contact(int id, string emri, string mbiemri, string numri, Date date)
    {
        id = id;
        numri = numri;
        mbiemri = mbiemri;
        numri = numri;
        date = date;
    }
    void add(int id, string emri, string mbiemri, string numri, Date date)
    {
        Contact(id, emri, mbiemri, numri, date);
    }
    void getDetails()
    {
        cout << "ID: " << id << "\nEmri: " << emri << "\nMbiemri: " << mbiemri << "\nNumri: " << numri << "\nDate: " << date.getDate() << endl;
    }
    void changePhoneNumber(string numri)
    {
        numri = numri;
    }
    void deleteContact()
    {
        Contact();
    }
    void changeName(string emri)
    {
        emri = emri;
    }
};
int main()
{

    Contact contacts[10];
    contacts[0].add(1, "Emri", "Mbiemri", "+389 71 123 123", Date(10, 06, 2021));
    contacts[0].getDetails();
    contacts[0].changePhoneNumber("+389 79 654 461");
    contacts[0].deleteContact();
    contacts[0].getDetails();
    contacts[1].add(2,"Emri","Mbimemri","+389 71 123 123",Date date(10,08,2021));
    contacts[1].changeName("Emri2");
    contacts[2].getDetails();
}
