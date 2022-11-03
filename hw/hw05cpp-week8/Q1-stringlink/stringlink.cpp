////stringlink.cpp
#include <iostream>
#include "stringlink.h"

Link::Node::Node()//class resolution operator ::
{
    next=NULL;//类的内部访问
    prvs=NULL;
}
Link::Link()
{
    head=NULL;
}
Link::~Link()
{
    release();//内部调用
}
void Link::clear()
{
    release();
}
void Link::push(Node* p)
{
    if(head!=NULL)
    {
        p->next=head;
        head->prvs=p;
    }
    head=p;
}

Link::Node* Link::pop()
{
    if(head!=NULL)
    {
        Node* p=head;
        head=head->next;
        head->prvs=NULL;
        return p;
    }
    else
        return NULL;
}
void Link::release()
{
    Node* p;
    while(head!=NULL)
    {
        p=head;
        head=head->next;
        delete p;
    }
}
void Link::print()
{
    Node* p=head;
    while(p!=NULL)
    {
        p->print();//post binding
        cout<<",";
        p=p->next;
    }
    cout<<endl;
}
void Link::sort()
{
    if(head!=NULL)
    {
        Node* pLast=head;
        Node* p;
        while(pLast->next!=NULL)
            pLast=pLast->next;
        for(;pLast!=head;pLast=pLast->prvs)
        {
            for(p=head;p!=pLast;p=p->next)
            {
                if(p->compare(p->next)>0)
                    p->swap(p->next);
            }
        }
    }
}


SLink::SNode::SNode(string data)
{
    this->data=data;
}
int SLink::SNode::compare(Node* p)
{
    SNode* ps = static_cast<SNode*>(p);
    return data.compare(ps->data);
}
void SLink::SNode::swap(Node* p)
{
    SNode* ps=static_cast<SNode*>(p);
    string temp=data;
    data=ps->data;
    ps->data=temp;
}
void SLink::SNode::print()
{
    cout<<data;
}
void SLink::push(string data)
{
    SNode* ps=new SNode(data);
    Link::push(ps);//父类型指针兼容子类型指针，指针兼容规则
}
string SLink::pop()
{
    SNode* ps=static_cast<SNode*>(Link::pop());
    if(ps!=NULL)
    {
        string s=ps->data;
        delete ps;
        return s;
    }
    else
        return "";
}



ILink::INode::INode(int data)
{
    this->data=data;
}
int ILink::INode::compare(Node* p)
{
    INode* ps = static_cast<INode*>(p);
    return data - ps->data;
    // return data.compare(ps->data);
}
void ILink::INode::swap(Node* p)
{
    INode* ps = static_cast<INode*>(p);
    int temp = data;
    data = ps->data;
    ps->data = temp;
}
void ILink::INode::print()
{
    cout<<data;
}
void ILink::push(int data)
{
    INode* ps=new INode(data);
    Link::push(ps);//父类型指针兼容子类型指针，指针兼容规则
}
int ILink::pop()
{
    INode* ps=static_cast<INode*>(Link::pop());
    if(ps != NULL)
    {
        int s= ps->data;
        delete ps;
        return s;
    }
    else
        return 0;
}