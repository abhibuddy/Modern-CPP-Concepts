/**
* SOLID PRINCIPLES
* D : Dependency Inversion Principle 
*  SRP: One class, one responsibility.
*  OCP: Open for extension, closed for modification.
*  LSP: Subtypes must be substitutable for their base types.
*  ISP: Many client-specific interfaces are better than one general-purpose interface.
*  DIP: Depend on abstractions, not on concretions.
*/

class inputDevice
{
    public:
    virtual void input() = 0;
};

class keyboard:public inputDevice
{
    public:
    void input() override
    {
        // input device
    }
};

class outputDevice
{
    public:
    virtual void output() = 0;
};

class monitor:public outputDevice
{
    public:
    void output() override
    {
        // output device
    }
};

class computer:public inputDevice,public outputDevice
{
    inputDevice* idevice;
    outputDevice* odevice;
    public:
    computer(inputDevice* in, outputDevice* out):idevice(in),odevice(out){}
    void operate()
    {
        idevice->input();
        odevice->output();
    }
};

int main()
{
    return 0;
}
