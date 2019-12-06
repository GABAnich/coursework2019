#pragma once

#include <iostream>

using namespace std;

class Item
{
protected:
  string name;
  string description;
  string imageURL;
public:
  virtual string getName()
  {
    return name;
  }
  
  virtual void setName(string _name)
  {
    name = _name;
  }
  
  virtual string getDescription()
  {
    return description;
  }
  
  virtual void setDesctiption(string _description)
  {
    description = _description;
  }
  
  virtual string getImageURL()
  {
    return imageURL;
  }
  
  virtual void setImageURL(string _imageURL)
  {
    imageURL = _imageURL;
  }
};
