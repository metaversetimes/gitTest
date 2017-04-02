#include<iostream>
using namespace std;
class CParent  
{  
public:  
    CParent()  
    {  
        cout<<"Parent constructor"<<endl;  
        m_Parent=new char[10];  
  
    }  
    virtual ~CParent()  
    {  
        cout<<"Parent DEconstructor"<<endl;  
        delete m_Parent;  
    }  
private:
    char *m_Parent;  

};  
class CHild:public CParent  
{  
public:  
    CHild()  
    {  
        cout<<"CHild constructor"<<endl;  
        m_CHild=new char[10];  
          
    }  
    ~CHild()  
    {  
        cout<<"CHild DEconstructor"<<endl;  
        delete m_CHild;  
    }  
private:
    char *m_CHild;  
  
};  
  
int main()  
{  
    CParent *c = new CHild;  
    delete c;  
  
  
    return 0;  
}  


