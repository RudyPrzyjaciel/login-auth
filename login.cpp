#include "login.h"
#include "account.h"

int main()
{
    session sesja;
    sesja.create_acc();

    auto test = [](session& sesja){
        if(sesja.is_active())
        {
            std::cout << "session is active (account logged in)" << std::endl;
        }
        else 
        {
            std::cout << "session is inactive (no account logged)" << std::endl;
        }
    };

    test(sesja);
    sesja.login();
    test(sesja);
    sesja.logout();
    test(sesja);
    return 0;
}