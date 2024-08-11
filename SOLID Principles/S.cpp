/**
 * SOLID PRINCIPLES
 * S: Single Responsibility Principle 
 * SRP: One class, one responsibility.
*  OCP: Open for extension, closed for modification.
*  LSP: Subtypes must be substitutable for their base types.
*  ISP: Many client-specific interfaces are better than one general-purpose interface.
*  DIP: Depend on abstractions, not on concretions.
*/

#include<iostream>
class User
{
    
    std::string u_name;
    std::string u_email;
    public:
    std::string getname()
    {
        return u_name;
    }
    std::string getemail()
    {
        return u_email;
    }
    User(std::string name,std::string email):u_name(name),u_email(email){};
};
/**
 * this class don't follow the single responsibility principle
*/
// class UserRegister
// {
//     public:
//     void registeruser(User& user)
//     {
//         if(user.getname().empty() || user.getemail().empty())
//         {
//             throw std::invalid_argument("user values are invalid");
//         }
//     }
//     //storing data
//     void storedata(User& user){
//         std::cout<<"storign the name "<<user.getname()<<std::endl;    
//     }
//     // storing email
//     void sendemail(User& user){
//         std::cout<<"sending email to user: "<<user.getname()<<std::endl;
//     }
// };
class uservalidator
{
    public:
    void validate(const User& user)
    {
        //validating user
    }
};
class userreposatory
{
    public:
    void save(const User& user)
    {
        //saving data
    }
};
class emailuser
{
    public:
    void sendemail(const User& user)
    {
        // sending mail
    }

};
class userRegister
{
    uservalidator v;
    userreposatory s;
    emailuser e;
    
    public:
    void save(User& usr)
    {
        v.validate(usr);
        s.save(usr);
        e.sendemail(usr);
    }

};
int main()
{

    return 0;
}