#pragma once

#include <iostream>
#include <string>
#include <vector>
#include <fstream>

class session 
{
public:
    session();

    void init();
    void login();
    void logout();
    void create_acc();
    void delete_acc();

    
private:
    char perm;
    std::string username;
    std::string password;
    std::string account_info;

    std::string path;
};

void permission_denied();
void hello();