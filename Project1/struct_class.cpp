// #include<iostream>
// #include<stdio.h>
// using namespace std;

// int main()
// {
//     struct Book     //标签 数据 声明变量至少出现两部分
//     {
//         /* data */
//         char title[50];
//         char author[50];
//         char subject[100];
//         int book_id;
//     }book={"CL","bysouffle","code",123};
// //********************************************************
//     //创建新类型
//     typedef struct 
//     {
//         /* data */
//         int a;
//         char b;
//         double c;
//     }Simple2;
//     //用Simple2作为类型声明新的结构体变量
//     Simple2 u1,u2[20],*u3;
    
// //********************************************************
//     //声明包含其他的结构体
//     struct COMPLEX
//     {
//         char string[100];
//         struct Book book_id;
//     };

//     //声明包含指向自己类型的指针
//     struct NODE
//     {
//         /* data */
//         char string[100];
//         struct NODE *next_node;        
//     };
// //************************************************
//     //两个结构体相互包含，则需要对其中一个结构体进行不完整声明
//     struct B;
//     struct A
//     {
//         /* data */
//         struct B  *partner;
//     };
//     //结构体B中包含指向结构体A的指针，在A声明完后声明B
//     struct B
//     {
//         /* data */
//         struct A *partner;
//     };
    
// //************************************************

//  cout<<book.author<<book.book_id<<" "<<book.subject;
//  cout<<endl<<book.title;

// }
#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    vector<string> msg {"Hello", "C++", "World", "from", "VS Code", "and the C++ extension!"};

    for (const string& word : msg)
    {
        cout << word << " ";
    }
    cout << endl;
}