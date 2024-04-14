#include <iostream>
#include <stack>
bool isOpening(char c)
{
    return (c=='{'|| c=='[' || c=='(');
}
bool isClosing(char c)
{
    return (c=='}'|| c==']' || c==')');
}
bool arePair(char a,char b)
{
    return ((a == '(' && b == ')') ||
            (a == '[' && b == ']') ||
            (a == '{' && b == '}'));
}
//function to check balanced paranthesis
bool isBalanced(std::string expression)
{
    
    std::stack<char> paranthasis_stack;
    for(char c:expression)
    {
        if(isOpening(c))
        {
            paranthasis_stack.push(c);
        }
        else if(isClosing(c))
        {
            if(paranthasis_stack.empty() || !arePair(paranthasis_stack.top(),c))
            {
                return false;
            }
            paranthasis_stack.pop();
        }
    }
    return paranthasis_stack.empty();
}

int main()
{
    std::string expression1 = "{[()]}";
    std::string expression2 = "{[()]";
    std::cout<<"Is balanced ? : "<<std::boolalpha<<isBalanced(expression1)<<std::endl;
    std::cout<<"Is balanced ? : "<<std::boolalpha<<isBalanced(expression2)<<std::endl;
    return 0;
}