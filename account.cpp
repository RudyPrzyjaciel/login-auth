#include "account.h"

session::session()
{
    perm = 'u';
    username = "guest";
    password = "";
    account_info = "guest account info";
    path = "users.txt";
    active = false;
}

void session::create_acc()
{
    // if(perm!='a') permission_denied(); return;

    std::ofstream file;
    std::string line;
    std::vector <std::string> lines;


    file.open(path, std::ios::in);
    
    std::filebuf* inbuf = file.rdbuf();

    char c = inbuf->sbumpc();
    while(c != EOF)
    {
        while (c != '\n')
        {
            line += c;
            c = inbuf->sbumpc();
        }
        lines.push_back(line);
        line = "";
        c = inbuf->sbumpc();
    }
    file.close();

    for (const std::string& l : lines)
    {
        // std::cout << l << std::endl;
        if(l.find(username) == std::string::npos)
        {
            continue;
        }
        else
        {
            std::cout << "user already exist" << std::endl;
            return;
        }
    }
    
    file.open(path, std::ios::out | std::ios::app);
    file << "user:" + username + ",,pass:" + password + ",,perm:" + perm + ";\n";
    file.close();
    std::cout << "user created" << std::endl;   
   
}

void session::delete_acc()
{

}

void session::init()
{
    
}

void session::login()
{
    std::string name;
    std::string pass;
    if(this->is_active())
    {
        std::cout << "Account logged in, to change account log out first";
        return;
    }
    get_account_info(name, pass);


}

void session::logout()
{
    perm = 'u';
    username = "guest";
    password = "";
    account_info = "guest account info";
    active = false;
    
}

void session::find_acc(std::string name, std::string pass)
{

}

bool session::is_active()
{
    return active;
}


void permission_denied()
{
    std::cout << "Permission denied, no further actions" << std::endl;
}

void get_account_info(std::string& username, std::string& password)
{
    std::cout << "Enter username: ";
    std::cin >> username;
    std::cout << "Enter password: ";
    std::cin >> password;

}
