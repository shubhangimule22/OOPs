#include<iostream>
#include<cstring>
#include<iomanip>
using namespace std;
class book
{
  public:
  string title;
  string author;
  string pub;
  int price,stock;
  void accept()
  {
     cout<<"\nEnter book Title:";
     cin>>title;
     cout<<"\nEnter book Author:";
     cin>>author;
     cout<<"\nEnter book Publisher:";
     cin>>pub;
     cout<<"\nEnter book Price:";
     cin>>price;
     cout<<"\nEnter book stock:";
     cin>>stock;
  }
  void display()
  {
     cout<<setw(15)<<left<<"Title:"<<title
          <<setw(15)<<left<<"Author"<<author
           <<setw(15)<<left<<"Publisher"<<pub
           <<setw(10)<<right<<"Price"<<price
           <<setw(10)<<right<<"stock"<<stock;
  }
};
int main()
{
book b;
b.accept();
b.display();
return 0;
}
