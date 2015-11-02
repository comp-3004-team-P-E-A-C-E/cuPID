#ifndef ADMIN_H
#define ADMIN_H
#include "User.h"

class Admin : public User {
  public:
  Admin(std::string);
  std::string getName();
};
#endif
