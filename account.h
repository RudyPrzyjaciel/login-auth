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
    void find_acc(std::string, std::string);
    void create_acc();
    void delete_acc();
    bool is_active();

    
private:
    bool active;
    char perm;
    std::string username;
    std::string password;
    std::string account_info;
    std::string path;
};

void permission_denied();
void hello();
void get_account_info(std::string&, std::string&);