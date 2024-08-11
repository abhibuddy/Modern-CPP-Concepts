#include <iostream>
#include <memory>
class Document;

class state
{
    public:
    virtual ~state()=default;
    virtual void render(Document& document)=0;
    virtual void publish(Document& document)=0;

};

class Document
{
    public:
    private:
};
int main()
{
    Document document;
    document.render();
    document.publish();

    document.render();
    document.publish();

    document.render();
    document.publish();
    return 0l
}