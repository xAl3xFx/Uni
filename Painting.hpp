#ifndef PAINTING.H
#define PAINTING.H
#include<cstring>
class Painting{
  private:
    double price;
    int id;
    char name[101];
    char author[101];
  public:
    Painting();
    Painting(const int, const double, const char*, const char*);
    double getPrice() const;
    int getId() const;
    const char* getName() const;
    const char* getAuthor() const;
};
  Painting::Painting(){
      id=0;
      price=0;
      name[0] = '\0';
      author[0] = '\0';
  }
  Painting::Painting(const int id_, const double price_, const char* name_, const char* author_){
    id=id_;
    price=price_;
    strcpy(name,name_);
    strcpy(author,author_);
  }

  double Painting::getPrice() const{
    return price;
  }

  int Painting::getId() const{
    return id;
  }

  const char* Painting::getName() const{
    return name;
  }

  const char* Painting::getAuthor() const{
    return author;
  }
#endif // PAINTING
